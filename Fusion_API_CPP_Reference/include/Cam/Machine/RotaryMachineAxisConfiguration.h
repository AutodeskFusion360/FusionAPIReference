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
#include "MachineAxisConfiguration.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_CPP__
# define ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API XI_EXPORT
# else
# define ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API
# endif
#else
# define ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxisRange;
}}

namespace adsk { namespace cam {

/// A MachineAxisConfiguration holding settings specific to rotary axes.
class RotaryMachineAxisConfiguration : public MachineAxisConfiguration {
public:

    /// Specify the range that the axis value wraps around for unlimited axes.
    /// If there are no wrap around limits then wrapAroundAtRange is infinite.
    /// Units are radians.
    core::Ptr<MachineAxisRange> wrapAroundAtRange() const;
    bool wrapAroundAtRange(const core::Ptr<MachineAxisRange>& value);

    /// Specify when to reset the initial axis position.
    MachineResetOptions reset() const;
    bool reset(MachineResetOptions value);

    /// Specify if the axis supports Tool Center Point Control (TCP).
    bool useToolCenterPointControl() const;
    bool useToolCenterPointControl(bool value);

    /// Specify the preferred angle direction at the beginning of an operation.
    MachineAnglePreferences rotaryPreference() const;
    bool rotaryPreference(MachineAnglePreferences value);

    ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API static const char* classType();
    ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API const char* objectType() const override;
    ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineAxisRange* wrapAroundAtRange_raw() const = 0;
    virtual bool wrapAroundAtRange_raw(MachineAxisRange* value) = 0;
    virtual MachineResetOptions reset_raw() const = 0;
    virtual bool reset_raw(MachineResetOptions value) = 0;
    virtual bool useToolCenterPointControl_raw() const = 0;
    virtual bool useToolCenterPointControl_raw(bool value) = 0;
    virtual MachineAnglePreferences rotaryPreference_raw() const = 0;
    virtual bool rotaryPreference_raw(MachineAnglePreferences value) = 0;
};

// Inline wrappers

inline core::Ptr<MachineAxisRange> RotaryMachineAxisConfiguration::wrapAroundAtRange() const
{
    core::Ptr<MachineAxisRange> res = wrapAroundAtRange_raw();
    return res;
}

inline bool RotaryMachineAxisConfiguration::wrapAroundAtRange(const core::Ptr<MachineAxisRange>& value)
{
    return wrapAroundAtRange_raw(value.get());
}

inline MachineResetOptions RotaryMachineAxisConfiguration::reset() const
{
    MachineResetOptions res = reset_raw();
    return res;
}

inline bool RotaryMachineAxisConfiguration::reset(MachineResetOptions value)
{
    return reset_raw(value);
}

inline bool RotaryMachineAxisConfiguration::useToolCenterPointControl() const
{
    bool res = useToolCenterPointControl_raw();
    return res;
}

inline bool RotaryMachineAxisConfiguration::useToolCenterPointControl(bool value)
{
    return useToolCenterPointControl_raw(value);
}

inline MachineAnglePreferences RotaryMachineAxisConfiguration::rotaryPreference() const
{
    MachineAnglePreferences res = rotaryPreference_raw();
    return res;
}

inline bool RotaryMachineAxisConfiguration::rotaryPreference(MachineAnglePreferences value)
{
    return rotaryPreference_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ROTARYMACHINEAXISCONFIGURATION_API