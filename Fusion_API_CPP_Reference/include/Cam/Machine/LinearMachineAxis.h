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
#include "MachineAxis.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_LINEARMACHINEAXIS_CPP__
# define ADSK_CAM_LINEARMACHINEAXIS_API XI_EXPORT
# else
# define ADSK_CAM_LINEARMACHINEAXIS_API
# endif
#else
# define ADSK_CAM_LINEARMACHINEAXIS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Object that represents an axis with linear motion (e.g. X, Y, and Z).
class LinearMachineAxis : public MachineAxis {
public:

    /// The unit vector that represents the direction along which the axis will move.
    core::Ptr<core::Vector3D> direction() const;
    bool direction(const core::Ptr<core::Vector3D>& value);

    ADSK_CAM_LINEARMACHINEAXIS_API static const char* classType();
    ADSK_CAM_LINEARMACHINEAXIS_API const char* objectType() const override;
    ADSK_CAM_LINEARMACHINEAXIS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_LINEARMACHINEAXIS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Vector3D* direction_raw() const = 0;
    virtual bool direction_raw(core::Vector3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Vector3D> LinearMachineAxis::direction() const
{
    core::Ptr<core::Vector3D> res = direction_raw();
    return res;
}

inline bool LinearMachineAxis::direction(const core::Ptr<core::Vector3D>& value)
{
    return direction_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_LINEARMACHINEAXIS_API