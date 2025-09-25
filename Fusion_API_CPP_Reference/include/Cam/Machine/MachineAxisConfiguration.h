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
# ifdef __COMPILING_ADSK_CAM_MACHINEAXISCONFIGURATION_CPP__
# define ADSK_CAM_MACHINEAXISCONFIGURATION_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAXISCONFIGURATION_API
# endif
#else
# define ADSK_CAM_MACHINEAXISCONFIGURATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// MachineAxisConfiguration holds controller settings that differ for each axis.
class MachineAxisConfiguration : public core::Base {
public:

    /// Delete this axis configuration from the controller configuration.
    void deleteMe();

    /// ID of the part in the KinematicsMachineElement that this axis configuration modifies.
    std::string partId() const;

    /// The type of this axis configuration. Use this to inform a cast to the derived types.
    MachineAxisTypes type() const;

    /// Does the axis move in the opposite direction to usual. For rotary axes this would mean it
    /// uses the left hand rule, and for linear axes is moves in the opposite direction.
    bool isReversed() const;
    bool isReversed(bool value);

    /// Specifies the maximum normal speed for this axis.
    /// This would be called feedrate for a linear axis or rotary speed for a rotary axis.
    /// Units are cm/s for linear axes or rad/s for rotary axes.
    double maxNormalSpeed() const;
    bool maxNormalSpeed(double value);

    /// Specifies the maximum rapid speed for this axis.
    /// This would be called feedrate for a linear axis or rotary speed for a rotary axis.
    /// Units are cm/s for linear axes or rad/s for rotary axes.
    double maxRapidSpeed() const;
    bool maxRapidSpeed(double value);

    /// Coordinate to use for post processing.
    MachineAxisCoordinates coordinate() const;
    bool coordinate(MachineAxisCoordinates value);

    ADSK_CAM_MACHINEAXISCONFIGURATION_API static const char* classType();
    ADSK_CAM_MACHINEAXISCONFIGURATION_API const char* objectType() const override;
    ADSK_CAM_MACHINEAXISCONFIGURATION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAXISCONFIGURATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void deleteMe_raw() = 0;
    virtual char* partId_raw() const = 0;
    virtual MachineAxisTypes type_raw() const = 0;
    virtual bool isReversed_raw() const = 0;
    virtual bool isReversed_raw(bool value) = 0;
    virtual double maxNormalSpeed_raw() const = 0;
    virtual bool maxNormalSpeed_raw(double value) = 0;
    virtual double maxRapidSpeed_raw() const = 0;
    virtual bool maxRapidSpeed_raw(double value) = 0;
    virtual MachineAxisCoordinates coordinate_raw() const = 0;
    virtual bool coordinate_raw(MachineAxisCoordinates value) = 0;
    virtual void placeholderMachineAxisConfiguration0() {}
    virtual void placeholderMachineAxisConfiguration1() {}
    virtual void placeholderMachineAxisConfiguration2() {}
    virtual void placeholderMachineAxisConfiguration3() {}
    virtual void placeholderMachineAxisConfiguration4() {}
    virtual void placeholderMachineAxisConfiguration5() {}
    virtual void placeholderMachineAxisConfiguration6() {}
    virtual void placeholderMachineAxisConfiguration7() {}
    virtual void placeholderMachineAxisConfiguration8() {}
    virtual void placeholderMachineAxisConfiguration9() {}
    virtual void placeholderMachineAxisConfiguration10() {}
    virtual void placeholderMachineAxisConfiguration11() {}
    virtual void placeholderMachineAxisConfiguration12() {}
    virtual void placeholderMachineAxisConfiguration13() {}
    virtual void placeholderMachineAxisConfiguration14() {}
    virtual void placeholderMachineAxisConfiguration15() {}
    virtual void placeholderMachineAxisConfiguration16() {}
    virtual void placeholderMachineAxisConfiguration17() {}
    virtual void placeholderMachineAxisConfiguration18() {}
    virtual void placeholderMachineAxisConfiguration19() {}
    virtual void placeholderMachineAxisConfiguration20() {}
};

// Inline wrappers

inline void MachineAxisConfiguration::deleteMe()
{
    deleteMe_raw();
}

inline std::string MachineAxisConfiguration::partId() const
{
    std::string res;

    char* p= partId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline MachineAxisTypes MachineAxisConfiguration::type() const
{
    MachineAxisTypes res = type_raw();
    return res;
}

inline bool MachineAxisConfiguration::isReversed() const
{
    bool res = isReversed_raw();
    return res;
}

inline bool MachineAxisConfiguration::isReversed(bool value)
{
    return isReversed_raw(value);
}

inline double MachineAxisConfiguration::maxNormalSpeed() const
{
    double res = maxNormalSpeed_raw();
    return res;
}

inline bool MachineAxisConfiguration::maxNormalSpeed(double value)
{
    return maxNormalSpeed_raw(value);
}

inline double MachineAxisConfiguration::maxRapidSpeed() const
{
    double res = maxRapidSpeed_raw();
    return res;
}

inline bool MachineAxisConfiguration::maxRapidSpeed(double value)
{
    return maxRapidSpeed_raw(value);
}

inline MachineAxisCoordinates MachineAxisConfiguration::coordinate() const
{
    MachineAxisCoordinates res = coordinate_raw();
    return res;
}

inline bool MachineAxisConfiguration::coordinate(MachineAxisCoordinates value)
{
    return coordinate_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAXISCONFIGURATION_API