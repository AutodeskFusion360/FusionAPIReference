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
# ifdef __COMPILING_ADSK_CAM_MACHINESPINDLEINPUT_CPP__
# define ADSK_CAM_MACHINESPINDLEINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINESPINDLEINPUT_API
# endif
#else
# define ADSK_CAM_MACHINESPINDLEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object representing the set of inputs required to create a new MachineSpindle.
class MachineSpindleInput : public core::Base {
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
    /// Specifies the power for this spindle.
    double power() const;
    bool power(double value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the peak torque for this spindle.
    double peakTorque() const;
    bool peakTorque(double value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the peak torque speed for this spindle.
    double peakTorqueSpeed() const;
    bool peakTorqueSpeed(double value);

    ADSK_CAM_MACHINESPINDLEINPUT_API static const char* classType();
    ADSK_CAM_MACHINESPINDLEINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINESPINDLEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINESPINDLEINPUT_API static const char* interfaceId() { return classType(); }

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
    virtual void placeholderMachineSpindleInput0() {}
    virtual void placeholderMachineSpindleInput1() {}
    virtual void placeholderMachineSpindleInput2() {}
    virtual void placeholderMachineSpindleInput3() {}
    virtual void placeholderMachineSpindleInput4() {}
    virtual void placeholderMachineSpindleInput5() {}
    virtual void placeholderMachineSpindleInput6() {}
    virtual void placeholderMachineSpindleInput7() {}
    virtual void placeholderMachineSpindleInput8() {}
    virtual void placeholderMachineSpindleInput9() {}
    virtual void placeholderMachineSpindleInput10() {}
    virtual void placeholderMachineSpindleInput11() {}
    virtual void placeholderMachineSpindleInput12() {}
    virtual void placeholderMachineSpindleInput13() {}
    virtual void placeholderMachineSpindleInput14() {}
    virtual void placeholderMachineSpindleInput15() {}
    virtual void placeholderMachineSpindleInput16() {}
    virtual void placeholderMachineSpindleInput17() {}
    virtual void placeholderMachineSpindleInput18() {}
    virtual void placeholderMachineSpindleInput19() {}
};

// Inline wrappers

inline std::string MachineSpindleInput::description() const
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

inline bool MachineSpindleInput::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline double MachineSpindleInput::maxSpeed() const
{
    double res = maxSpeed_raw();
    return res;
}

inline bool MachineSpindleInput::maxSpeed(double value)
{
    return maxSpeed_raw(value);
}

inline double MachineSpindleInput::minSpeed() const
{
    double res = minSpeed_raw();
    return res;
}

inline bool MachineSpindleInput::minSpeed(double value)
{
    return minSpeed_raw(value);
}

inline double MachineSpindleInput::power() const
{
    double res = power_raw();
    return res;
}

inline bool MachineSpindleInput::power(double value)
{
    return power_raw(value);
}

inline double MachineSpindleInput::peakTorque() const
{
    double res = peakTorque_raw();
    return res;
}

inline bool MachineSpindleInput::peakTorque(double value)
{
    return peakTorque_raw(value);
}

inline double MachineSpindleInput::peakTorqueSpeed() const
{
    double res = peakTorqueSpeed_raw();
    return res;
}

inline bool MachineSpindleInput::peakTorqueSpeed(double value)
{
    return peakTorqueSpeed_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINESPINDLEINPUT_API