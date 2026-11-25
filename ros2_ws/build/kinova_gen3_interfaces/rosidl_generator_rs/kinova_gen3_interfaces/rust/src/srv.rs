#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to kinova_gen3_interfaces__srv__Status_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Status_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Status_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Status_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Status_Request {
  type RmwMsg = super::srv::rmw::Status_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__Status_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Status_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for Status_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Status_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Status_Response {
  type RmwMsg = super::srv::rmw::Status_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetGripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for SetGripper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Request {
  type RmwMsg = super::srv::rmw::SetGripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetGripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetGripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Response {
  type RmwMsg = super::srv::rmw::SetGripper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetGripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetGripper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripper_Request {
  type RmwMsg = super::srv::rmw::GetGripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetGripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for GetGripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripper_Response {
  type RmwMsg = super::srv::rmw::GetGripper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetJoints_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<f32>,

}



impl Default for SetJoints_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJoints_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetJoints_Request {
  type RmwMsg = super::srv::rmw::SetJoints_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints: msg.joints.into(),
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetJoints_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetJoints_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJoints_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetJoints_Response {
  type RmwMsg = super::srv::rmw::SetJoints_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetJoints_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetJoints_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJoints_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetJoints_Request {
  type RmwMsg = super::srv::rmw::GetJoints_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetJoints_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<f32>,

}



impl Default for GetJoints_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJoints_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetJoints_Response {
  type RmwMsg = super::srv::rmw::GetJoints_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joints: msg.joints.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joints: msg.joints.into(),
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetTool_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTool_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTool_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTool_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTool_Request {
  type RmwMsg = super::srv::rmw::GetTool_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__GetTool_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTool_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTool_Response {
  type RmwMsg = super::srv::rmw::GetTool_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
        theta_x: msg.theta_x,
        theta_y: msg.theta_y,
        theta_z: msg.theta_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      theta_x: msg.theta_x,
      theta_y: msg.theta_y,
      theta_z: msg.theta_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      theta_x: msg.theta_x,
      theta_y: msg.theta_y,
      theta_z: msg.theta_z,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetTool_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTool_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetTool_Request {
  type RmwMsg = super::srv::rmw::SetTool_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
        theta_x: msg.theta_x,
        theta_y: msg.theta_y,
        theta_z: msg.theta_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      theta_x: msg.theta_x,
      theta_y: msg.theta_y,
      theta_z: msg.theta_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      theta_x: msg.theta_x,
      theta_y: msg.theta_y,
      theta_z: msg.theta_z,
    }
  }
}


// Corresponds to kinova_gen3_interfaces__srv__SetTool_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTool_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for SetTool_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTool_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetTool_Response {
  type RmwMsg = super::srv::rmw::SetTool_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
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


