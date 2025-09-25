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
# ifdef __COMPILING_ADSK_CAM_MACHINEAXIS_CPP__
# define ADSK_CAM_MACHINEAXIS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAXIS_API
# endif
#else
# define ADSK_CAM_MACHINEAXIS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxisRange;
}}

namespace adsk { namespace cam {

/// Abstract base class representing a single machine axis.
class MachineAxis : public core::Base {
public:

    /// The name of this axis.
    std::string name() const;
    bool name(const std::string& value);

    /// The type of axis.
    MachineAxisTypes axisType() const;

    /// Does this axis have a limited range of motion.
    bool hasLimits() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// The minimum possible value for this axis (in cm/rad).
    /// Must be less than physicalMax.
    /// Set the value of this and physicalMax to 0 to remove
    /// axis limits.
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
    /// Must be less than physicalMin.
    /// Set the value of this and physicalMin to 0 to remove
    /// axis limits.
    double physicalMax() const;
    bool physicalMax(double value);

    /// Specifies the value that this axis returns to when the machine is homed.
    /// Units are cm for linear axes or radians for rotary axes.
    /// Will return NaN if home position isn't set.
    double homePosition() const;
    bool homePosition(double value);

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
    /// Will return NaN if tool change position isn't set.
    double toolChangePosition() const;
    bool toolChangePosition(double value);

    ADSK_CAM_MACHINEAXIS_API static const char* classType();
    ADSK_CAM_MACHINEAXIS_API const char* objectType() const override;
    ADSK_CAM_MACHINEAXIS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAXIS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual MachineAxisTypes axisType_raw() const = 0;
    virtual bool hasLimits_raw() const = 0;
    virtual double physicalMin_raw() const = 0;
    virtual bool physicalMin_raw(double value) = 0;
    virtual double physicalMax_raw() const = 0;
    virtual bool physicalMax_raw(double value) = 0;
    virtual double homePosition_raw() const = 0;
    virtual bool homePosition_raw(double value) = 0;
    virtual MachineAxisRange* physicalRange_raw() const = 0;
    virtual bool physicalRange_raw(MachineAxisRange* value) = 0;
    virtual double toolChangePosition_raw() const = 0;
    virtual bool toolChangePosition_raw(double value) = 0;
    virtual void placeholderMachineAxis0() {}
    virtual void placeholderMachineAxis1() {}
    virtual void placeholderMachineAxis2() {}
    virtual void placeholderMachineAxis3() {}
    virtual void placeholderMachineAxis4() {}
    virtual void placeholderMachineAxis5() {}
    virtual void placeholderMachineAxis6() {}
    virtual void placeholderMachineAxis7() {}
    virtual void placeholderMachineAxis8() {}
    virtual void placeholderMachineAxis9() {}
    virtual void placeholderMachineAxis10() {}
    virtual void placeholderMachineAxis11() {}
    virtual void placeholderMachineAxis12() {}
    virtual void placeholderMachineAxis13() {}
    virtual void placeholderMachineAxis14() {}
    virtual void placeholderMachineAxis15() {}
    virtual void placeholderMachineAxis16() {}
    virtual void placeholderMachineAxis17() {}
};

// Inline wrappers

inline std::string MachineAxis::name() const
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

inline bool MachineAxis::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline MachineAxisTypes MachineAxis::axisType() const
{
    MachineAxisTypes res = axisType_raw();
    return res;
}

inline bool MachineAxis::hasLimits() const
{
    bool res = hasLimits_raw();
    return res;
}

inline double MachineAxis::physicalMin() const
{
    double res = physicalMin_raw();
    return res;
}

inline bool MachineAxis::physicalMin(double value)
{
    return physicalMin_raw(value);
}

inline double MachineAxis::physicalMax() const
{
    double res = physicalMax_raw();
    return res;
}

inline bool MachineAxis::physicalMax(double value)
{
    return physicalMax_raw(value);
}

inline double MachineAxis::homePosition() const
{
    double res = homePosition_raw();
    return res;
}

inline bool MachineAxis::homePosition(double value)
{
    return homePosition_raw(value);
}

inline core::Ptr<MachineAxisRange> MachineAxis::physicalRange() const
{
    core::Ptr<MachineAxisRange> res = physicalRange_raw();
    return res;
}

inline bool MachineAxis::physicalRange(const core::Ptr<MachineAxisRange>& value)
{
    return physicalRange_raw(value.get());
}

inline double MachineAxis::toolChangePosition() const
{
    double res = toolChangePosition_raw();
    return res;
}

inline bool MachineAxis::toolChangePosition(double value)
{
    return toolChangePosition_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAXIS_API