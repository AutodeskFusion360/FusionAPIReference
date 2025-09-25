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
# ifdef __COMPILING_ADSK_CAM_MACHINEAXISINPUT_CPP__
# define ADSK_CAM_MACHINEAXISINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAXISINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEAXISINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxisRange;
}}

namespace adsk { namespace cam {

/// Object that defines the properties required to create a machine axis object.
class MachineAxisInput : public core::Base {
public:

    /// The type of axis.
    /// This axis type determines which parameters of this object are valid to be accessed
    /// or modified.
    MachineAxisTypes axisType() const;

    /// The user facing name of this axis.
    std::string name() const;
    bool name(const std::string& value);

    /// Specifies the value that this axis returns to when the machine is homed.
    /// Units are cm for linear axes or radians for rotary axes.
    double homePosition() const;
    bool homePosition(double value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// The minimum possible value for this axis (in cm/rad).
    /// Set the value of this and physicalMax to 0 to create an
    /// unlimited axis.
    double physicalMin() const;
    bool physicalMin(double value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// The maximum possible value for this axis (in cm/rad).
    /// Set the value of this and physicalMin to 0 to create an
    /// unlimited axis.
    double physicalMax() const;
    bool physicalMax(double value);

    /// Range of possible values for this axis.
    /// Units are cm for linear axes or radians for rotary axes.
    core::Ptr<MachineAxisRange> physicalRange() const;
    bool physicalRange(const core::Ptr<MachineAxisRange>& value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Specifies the value that this axis returns to, prior to a tool change.
    /// Units are cm for linear axes or radians for rotary axes.
    double toolChangePosition() const;
    bool toolChangePosition(double value);

    ADSK_CAM_MACHINEAXISINPUT_API static const char* classType();
    ADSK_CAM_MACHINEAXISINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEAXISINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAXISINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineAxisTypes axisType_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual double homePosition_raw() const = 0;
    virtual bool homePosition_raw(double value) = 0;
    virtual double physicalMin_raw() const = 0;
    virtual bool physicalMin_raw(double value) = 0;
    virtual double physicalMax_raw() const = 0;
    virtual bool physicalMax_raw(double value) = 0;
    virtual MachineAxisRange* physicalRange_raw() const = 0;
    virtual bool physicalRange_raw(MachineAxisRange* value) = 0;
    virtual double toolChangePosition_raw() const = 0;
    virtual bool toolChangePosition_raw(double value) = 0;
    virtual void placeholderMachineAxisInput0() {}
    virtual void placeholderMachineAxisInput1() {}
    virtual void placeholderMachineAxisInput2() {}
    virtual void placeholderMachineAxisInput3() {}
    virtual void placeholderMachineAxisInput4() {}
    virtual void placeholderMachineAxisInput5() {}
    virtual void placeholderMachineAxisInput6() {}
    virtual void placeholderMachineAxisInput7() {}
    virtual void placeholderMachineAxisInput8() {}
    virtual void placeholderMachineAxisInput9() {}
    virtual void placeholderMachineAxisInput10() {}
    virtual void placeholderMachineAxisInput11() {}
    virtual void placeholderMachineAxisInput12() {}
    virtual void placeholderMachineAxisInput13() {}
    virtual void placeholderMachineAxisInput14() {}
    virtual void placeholderMachineAxisInput15() {}
    virtual void placeholderMachineAxisInput16() {}
    virtual void placeholderMachineAxisInput17() {}
    virtual void placeholderMachineAxisInput18() {}
};

// Inline wrappers

inline MachineAxisTypes MachineAxisInput::axisType() const
{
    MachineAxisTypes res = axisType_raw();
    return res;
}

inline std::string MachineAxisInput::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineAxisInput::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline double MachineAxisInput::homePosition() const
{
    double res = homePosition_raw();
    return res;
}

inline bool MachineAxisInput::homePosition(double value)
{
    return homePosition_raw(value);
}

inline double MachineAxisInput::physicalMin() const
{
    double res = physicalMin_raw();
    return res;
}

inline bool MachineAxisInput::physicalMin(double value)
{
    return physicalMin_raw(value);
}

inline double MachineAxisInput::physicalMax() const
{
    double res = physicalMax_raw();
    return res;
}

inline bool MachineAxisInput::physicalMax(double value)
{
    return physicalMax_raw(value);
}

inline core::Ptr<MachineAxisRange> MachineAxisInput::physicalRange() const
{
    core::Ptr<MachineAxisRange> res = physicalRange_raw();
    return res;
}

inline bool MachineAxisInput::physicalRange(const core::Ptr<MachineAxisRange>& value)
{
    return physicalRange_raw(value.get());
}

inline double MachineAxisInput::toolChangePosition() const
{
    double res = toolChangePosition_raw();
    return res;
}

inline bool MachineAxisInput::toolChangePosition(double value)
{
    return toolChangePosition_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAXISINPUT_API