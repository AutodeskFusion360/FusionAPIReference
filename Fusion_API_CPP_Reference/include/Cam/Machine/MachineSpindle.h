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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINESPINDLE_CPP__
# define ADSK_CAM_MACHINESPINDLE_API XI_EXPORT
# else
# define ADSK_CAM_MACHINESPINDLE_API
# endif
#else
# define ADSK_CAM_MACHINESPINDLE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object representing a spindle on the machine
class MachineSpindle : public core::Base {
public:

    /// The description of this spindle.
    std::string description() const;
    bool description(const std::string& value);

    /// Specifies the maximum speed (rpm) for this spindle.
    double maxSpeed() const;
    bool maxSpeed(double value);

    /// Specifies the minimum speed (rpm) for this spindle.
    double minSpeed() const;
    bool minSpeed(double value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the power (kW) for this spindle.
    double power() const;
    bool power(double value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the peak torque (Nm) for this spindle.
    double peakTorque() const;
    bool peakTorque(double value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the speed (rpm) at which this spindle reaches peak torque (Nm).
    double peakTorqueSpeed() const;
    bool peakTorqueSpeed(double value);

    ADSK_CAM_MACHINESPINDLE_API static const char* classType();
    ADSK_CAM_MACHINESPINDLE_API const char* objectType() const override;
    ADSK_CAM_MACHINESPINDLE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINESPINDLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual double maxSpeed_raw() const = 0;
    virtual bool maxSpeed_raw(double value) = 0;
    virtual double minSpeed_raw() const = 0;
    virtual bool minSpeed_raw(double value) = 0;
    virtual double power_raw() const = 0;
    virtual bool power_raw(double value) = 0;
    virtual double peakTorque_raw() const = 0;
    virtual bool peakTorque_raw(double value) = 0;
    virtual double peakTorqueSpeed_raw() const = 0;
    virtual bool peakTorqueSpeed_raw(double value) = 0;
};

// Inline wrappers

inline std::string MachineSpindle::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineSpindle::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline double MachineSpindle::maxSpeed() const
{
    double res = maxSpeed_raw();
    return res;
}

inline bool MachineSpindle::maxSpeed(double value)
{
    return maxSpeed_raw(value);
}

inline double MachineSpindle::minSpeed() const
{
    double res = minSpeed_raw();
    return res;
}

inline bool MachineSpindle::minSpeed(double value)
{
    return minSpeed_raw(value);
}

inline double MachineSpindle::power() const
{
    double res = power_raw();
    return res;
}

inline bool MachineSpindle::power(double value)
{
    return power_raw(value);
}

inline double MachineSpindle::peakTorque() const
{
    double res = peakTorque_raw();
    return res;
}

inline bool MachineSpindle::peakTorque(double value)
{
    return peakTorque_raw(value);
}

inline double MachineSpindle::peakTorqueSpeed() const
{
    double res = peakTorqueSpeed_raw();
    return res;
}

inline bool MachineSpindle::peakTorqueSpeed(double value)
{
    return peakTorqueSpeed_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINESPINDLE_API