#include <stdio.h>
#include <stdint.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/uart.h"
#include "driver/gpio.h"

#define LIDAR_UART      UART_NUM_2
#define LIDAR_TX_PIN    GPIO_NUM_17
#define LIDAR_RX_PIN    GPIO_NUM_16
#define MOTOR__PIN      GPIO_NUM_
#define MOTOR__PIN      GPIO_NUM_
#define MOTOR__PIN      GPIO_NUM_
#define MOTOR__PIN      GPIO_NUM_
#define LIDAR_BAUD      460800

void app_main(void)
{
    // Configure UART2
    uart_config_t uart_config = {
        .baud_rate = LIDAR_BAUD,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT
    };

    uart_driver_install(LIDAR_UART, 2048, 0, 0, NULL, 0);
    uart_param_config(LIDAR_UART, &uart_config);

    uart_set_pin(
        LIDAR_UART,
        LIDAR_TX_PIN,
        LIDAR_RX_PIN,
        UART_PIN_NO_CHANGE,
        UART_PIN_NO_CHANGE
    );

    printf("TSD20 UART initialized\n");

    // Start ranging command
    const uint8_t start_command[] = {
        0x5A, 0x0A, 0x02, 0x02, 0x00, 0xF1
    };

    uart_write_bytes(
        LIDAR_UART,
        (const char *)start_command,
        sizeof(start_command)
    );

    printf("Sent start ranging command\n");

    // Receive measurement frames
    uint8_t frame[4];
    uint8_t byte;
    int frame_index = 0;

    while (1)
    {
        int len = uart_read_bytes(
            LIDAR_UART,
            &byte,
            1,
            pdMS_TO_TICKS(100)
        );

        if (len != 1)
            continue;

        // Wait for frame header
        if (frame_index == 0)
        {
            if (byte == 0x5C)
            {
                frame[frame_index++] = byte;
            }
            continue;
        }

        frame[frame_index++] = byte;

        // Complete frame received
        if (frame_index == 4)
        {
            frame_index = 0;

            uint8_t expected_checksum =
                (uint8_t)~(frame[1] + frame[2]);

            if (frame[3] != expected_checksum)
            {
                printf("Invalid checksum\n");
                continue;
            }

            // Little-endian distance
            uint16_t distance_mm =
                ((uint16_t)frame[2] << 8) | frame[1];

            if (distance_mm == 50000)
            {
                printf("Out of range\n");
            }
            else
            {
                printf("DIST:%u\n", (unsigned)distance_mm);
            }
        }
    }
}
