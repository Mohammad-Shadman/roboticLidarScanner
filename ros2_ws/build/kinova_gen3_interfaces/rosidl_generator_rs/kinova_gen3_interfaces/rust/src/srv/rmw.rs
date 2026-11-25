#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__Status_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__Status_Request__init(msg: *mut Status_Request) -> bool;
    fn kinova_gen3_interfaces__srv__Status_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Status_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__Status_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Status_Request>);
    fn kinova_gen3_interfaces__srv__Status_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Status_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Status_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__Status_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Status_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Status_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__Status_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__Status_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Status_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Status_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Status_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/Status_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__Status_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__Status_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__Status_Response__init(msg: *mut Status_Response) -> bool;
    fn kinova_gen3_interfaces__srv__Status_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Status_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__Status_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Status_Response>);
    fn kinova_gen3_interfaces__srv__Status_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Status_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Status_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__Status_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Status_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for Status_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__Status_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__Status_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Status_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__Status_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Status_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Status_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/Status_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__Status_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetGripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetGripper_Request__init(msg: *mut SetGripper_Request) -> bool;
    fn kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>);
    fn kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetGripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for SetGripper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetGripper_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetGripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetGripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetGripper_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetGripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetGripper_Response__init(msg: *mut SetGripper_Response) -> bool;
    fn kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>);
    fn kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetGripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetGripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetGripper_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetGripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetGripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetGripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetGripper_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetGripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetGripper_Request__init(msg: *mut GetGripper_Request) -> bool;
    fn kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Request>);
    fn kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetGripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetGripper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetGripper_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetGripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetGripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetGripper_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetGripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetGripper_Response__init(msg: *mut GetGripper_Response) -> bool;
    fn kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Response>);
    fn kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripper_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetGripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for GetGripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetGripper_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetGripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetGripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetGripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetGripper_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetJoints_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetJoints_Request__init(msg: *mut SetJoints_Request) -> bool;
    fn kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Request>);
    fn kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJoints_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetJoints_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SetJoints_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetJoints_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetJoints_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJoints_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJoints_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJoints_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetJoints_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetJoints_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetJoints_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetJoints_Response__init(msg: *mut SetJoints_Response) -> bool;
    fn kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Response>);
    fn kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJoints_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJoints_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetJoints_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetJoints_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetJoints_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetJoints_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJoints_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetJoints_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJoints_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJoints_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetJoints_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetJoints_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetJoints_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetJoints_Request__init(msg: *mut GetJoints_Request) -> bool;
    fn kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Request>);
    fn kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJoints_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetJoints_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetJoints_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetJoints_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetJoints_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJoints_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJoints_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJoints_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetJoints_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetJoints_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetJoints_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetJoints_Response__init(msg: *mut GetJoints_Response) -> bool;
    fn kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Response>);
    fn kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJoints_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJoints_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetJoints_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for GetJoints_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetJoints_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetJoints_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJoints_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetJoints_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJoints_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJoints_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetJoints_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetJoints_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetTool_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetTool_Request__init(msg: *mut GetTool_Request) -> bool;
    fn kinova_gen3_interfaces__srv__GetTool_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTool_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetTool_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTool_Request>);
    fn kinova_gen3_interfaces__srv__GetTool_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTool_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTool_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetTool_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTool_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTool_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetTool_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetTool_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTool_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTool_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTool_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetTool_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetTool_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetTool_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__GetTool_Response__init(msg: *mut GetTool_Response) -> bool;
    fn kinova_gen3_interfaces__srv__GetTool_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTool_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__GetTool_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTool_Response>);
    fn kinova_gen3_interfaces__srv__GetTool_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTool_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTool_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__GetTool_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTool_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_z: f32,

}



impl Default for GetTool_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__GetTool_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__GetTool_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTool_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__GetTool_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTool_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTool_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/GetTool_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__GetTool_Response() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetTool_Request() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetTool_Request__init(msg: *mut SetTool_Request) -> bool;
    fn kinova_gen3_interfaces__srv__SetTool_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTool_Request>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetTool_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTool_Request>);
    fn kinova_gen3_interfaces__srv__SetTool_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTool_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTool_Request>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetTool_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTool_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_z: f32,

}



impl Default for SetTool_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetTool_Request__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetTool_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTool_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTool_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTool_Request where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetTool_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetTool_Request() }
  }
}


#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetTool_Response() -> *const std::ffi::c_void;
}

#[link(name = "kinova_gen3_interfaces__rosidl_generator_c")]
extern "C" {
    fn kinova_gen3_interfaces__srv__SetTool_Response__init(msg: *mut SetTool_Response) -> bool;
    fn kinova_gen3_interfaces__srv__SetTool_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTool_Response>, size: usize) -> bool;
    fn kinova_gen3_interfaces__srv__SetTool_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTool_Response>);
    fn kinova_gen3_interfaces__srv__SetTool_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTool_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTool_Response>) -> bool;
}

// Corresponds to kinova_gen3_interfaces__srv__SetTool_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTool_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetTool_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !kinova_gen3_interfaces__srv__SetTool_Response__init(&mut msg as *mut _) {
        panic!("Call to kinova_gen3_interfaces__srv__SetTool_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTool_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { kinova_gen3_interfaces__srv__SetTool_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTool_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTool_Response where Self: Sized {
  const TYPE_NAME: &'static str = "kinova_gen3_interfaces/srv/SetTool_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__kinova_gen3_interfaces__srv__SetTool_Response() }
  }
}






#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__Status() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__Status
#[allow(missing_docs, non_camel_case_types)]
pub struct Status;

impl rosidl_runtime_rs::Service for Status {
    type Request = Status_Request;
    type Response = Status_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__Status() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetGripper() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__SetGripper
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGripper;

impl rosidl_runtime_rs::Service for SetGripper {
    type Request = SetGripper_Request;
    type Response = SetGripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetGripper() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetGripper() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__GetGripper
#[allow(missing_docs, non_camel_case_types)]
pub struct GetGripper;

impl rosidl_runtime_rs::Service for GetGripper {
    type Request = GetGripper_Request;
    type Response = GetGripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetGripper() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetJoints() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__SetJoints
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJoints;

impl rosidl_runtime_rs::Service for SetJoints {
    type Request = SetJoints_Request;
    type Response = SetJoints_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetJoints() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetJoints() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__GetJoints
#[allow(missing_docs, non_camel_case_types)]
pub struct GetJoints;

impl rosidl_runtime_rs::Service for GetJoints {
    type Request = GetJoints_Request;
    type Response = GetJoints_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetJoints() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetTool() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__GetTool
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTool;

impl rosidl_runtime_rs::Service for GetTool {
    type Request = GetTool_Request;
    type Response = GetTool_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__GetTool() }
    }
}




#[link(name = "kinova_gen3_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetTool() -> *const std::ffi::c_void;
}

// Corresponds to kinova_gen3_interfaces__srv__SetTool
#[allow(missing_docs, non_camel_case_types)]
pub struct SetTool;

impl rosidl_runtime_rs::Service for SetTool {
    type Request = SetTool_Request;
    type Response = SetTool_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__kinova_gen3_interfaces__srv__SetTool() }
    }
}


