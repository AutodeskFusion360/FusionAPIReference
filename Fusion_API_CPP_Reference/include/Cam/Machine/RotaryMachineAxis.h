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
# ifdef __COMPILING_ADSK_CAM_ROTARYMACHINEAXIS_CPP__
# define ADSK_CAM_ROTARYMACHINEAXIS_API XI_EXPORT
# else
# define ADSK_CAM_ROTARYMACHINEAXIS_API
# endif
#else
# define ADSK_CAM_ROTARYMACHINEAXIS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class InfiniteLine3D;
}}

namespace adsk { namespace cam {

/// Object that represents an axis with rotary motion (e.g. A, B, and C).
class RotaryMachineAxis : public MachineAxis {
public:

    /// The infinite line that defines the direction and location of the axis of rotation.
    core::Ptr<core::InfiniteLine3D> rotationAxis() const;
    bool rotationAxis(const core::Ptr<core::InfiniteLine3D>& value);

    ADSK_CAM_ROTARYMACHINEAXIS_API static const char* classType();
    ADSK_CAM_ROTARYMACHINEAXIS_API const char* objectType() const override;
    ADSK_CAM_ROTARYMACHINEAXIS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ROTARYMACHINEAXIS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::InfiniteLine3D* rotationAxis_raw() const = 0;
    virtual bool rotationAxis_raw(core::InfiniteLine3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::InfiniteLine3D> RotaryMachineAxis::rotationAxis() const
{
    core::Ptr<core::InfiniteLine3D> res = rotationAxis_raw();
    return res;
}

inline bool RotaryMachineAxis::rotationAxis(const core::Ptr<core::InfiniteLine3D>& value)
{
    return rotationAxis_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ROTARYMACHINEAXIS_API