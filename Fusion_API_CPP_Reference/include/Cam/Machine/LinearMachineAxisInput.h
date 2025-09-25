//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "MachineAxisInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_LINEARMACHINEAXISINPUT_CPP__
# define ADSK_CAM_LINEARMACHINEAXISINPUT_API XI_EXPORT
# else
# define ADSK_CAM_LINEARMACHINEAXISINPUT_API
# endif
#else
# define ADSK_CAM_LINEARMACHINEAXISINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Object that defines the properties required to create a new linear machine axis object.
class LinearMachineAxisInput : public MachineAxisInput {
public:

    /// The unit vector that represents the direction along which the linear axis will move.
    /// This vector is in the machine's coordinate system (e.g. the X axis is always (1,0,0)).
    core::Ptr<core::Vector3D> direction() const;
    bool direction(const core::Ptr<core::Vector3D>& value);

    ADSK_CAM_LINEARMACHINEAXISINPUT_API static const char* classType();
    ADSK_CAM_LINEARMACHINEAXISINPUT_API const char* objectType() const override;
    ADSK_CAM_LINEARMACHINEAXISINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_LINEARMACHINEAXISINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Vector3D* direction_raw() const = 0;
    virtual bool direction_raw(core::Vector3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Vector3D> LinearMachineAxisInput::direction() const
{
    core::Ptr<core::Vector3D> res = direction_raw();
    return res;
}

inline bool LinearMachineAxisInput::direction(const core::Ptr<core::Vector3D>& value)
{
    return direction_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_LINEARMACHINEAXISINPUT_API