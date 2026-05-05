//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "MachineElement.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_CPP__
# define ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxisConfigurations;
}}

namespace adsk { namespace cam {

/// Machine element representing controller settings for kinematics.
class ControllerConfigurationMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Gets the collection of axis configuration objects.
    core::Ptr<MachineAxisConfigurations> axisConfigurations() const;

    /// Global maximum non-rapid linear motion speed.
    /// Units are cm/s.
    double maxNormalSpeed() const;
    bool maxNormalSpeed(double value);

    /// Maximum block processing rate for the controller.
    size_t maxBlockProcessingSpeed() const;
    bool maxBlockProcessingSpeed(size_t value);

    /// Specifies how the CNC machine axes behave during rapid moves when TCP (Tool Center Point) is inactive, as defined in the machine's controller.
    /// Independent Axes moves the axes independently at maximum speed, potentially resulting in different completion times for each axis.
    /// Synchronized Axes moves the axes together, completing the motion simultaneously, although the tool's tip may deviate from the direct line between the start and finish points.
    MachineNonTCPInterpolationMode nonTcpRapidInterpolationMode() const;
    bool nonTcpRapidInterpolationMode(MachineNonTCPInterpolationMode value);

    /// Specifies how the CNC machine axes behave during rapid moves when TCP (Tool Center Point) is active, as defined in the machine's controller.
    /// Independent Axes moves the axes independently at maximum speed, potentially resulting in different completion times for each axis.
    /// Synchronized Axes moves the axes together, completing the motion simultaneously, although the tool's tip may deviate from the direct line between the start and finish points.
    /// Tool Tip adjusts the linear axes to keep the tool's tip positioned along the direct line between the start and finish points.
    MachineTCPInterpolationMode tcpRapidInterpolationMode() const;
    bool tcpRapidInterpolationMode(MachineTCPInterpolationMode value);

    ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual MachineAxisConfigurations* axisConfigurations_raw() const = 0;
    virtual double maxNormalSpeed_raw() const = 0;
    virtual bool maxNormalSpeed_raw(double value) = 0;
    virtual size_t maxBlockProcessingSpeed_raw() const = 0;
    virtual bool maxBlockProcessingSpeed_raw(size_t value) = 0;
    virtual MachineNonTCPInterpolationMode nonTcpRapidInterpolationMode_raw() const = 0;
    virtual bool nonTcpRapidInterpolationMode_raw(MachineNonTCPInterpolationMode value) = 0;
    virtual MachineTCPInterpolationMode tcpRapidInterpolationMode_raw() const = 0;
    virtual bool tcpRapidInterpolationMode_raw(MachineTCPInterpolationMode value) = 0;
};

// Inline wrappers

inline std::string ControllerConfigurationMachineElement::staticTypeId()
{
    std::string res;

    char* p= staticTypeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MachineAxisConfigurations> ControllerConfigurationMachineElement::axisConfigurations() const
{
    core::Ptr<MachineAxisConfigurations> res = axisConfigurations_raw();
    return res;
}

inline double ControllerConfigurationMachineElement::maxNormalSpeed() const
{
    double res = maxNormalSpeed_raw();
    return res;
}

inline bool ControllerConfigurationMachineElement::maxNormalSpeed(double value)
{
    return maxNormalSpeed_raw(value);
}

inline size_t ControllerConfigurationMachineElement::maxBlockProcessingSpeed() const
{
    size_t res = maxBlockProcessingSpeed_raw();
    return res;
}

inline bool ControllerConfigurationMachineElement::maxBlockProcessingSpeed(size_t value)
{
    return maxBlockProcessingSpeed_raw(value);
}

inline MachineNonTCPInterpolationMode ControllerConfigurationMachineElement::nonTcpRapidInterpolationMode() const
{
    MachineNonTCPInterpolationMode res = nonTcpRapidInterpolationMode_raw();
    return res;
}

inline bool ControllerConfigurationMachineElement::nonTcpRapidInterpolationMode(MachineNonTCPInterpolationMode value)
{
    return nonTcpRapidInterpolationMode_raw(value);
}

inline MachineTCPInterpolationMode ControllerConfigurationMachineElement::tcpRapidInterpolationMode() const
{
    MachineTCPInterpolationMode res = tcpRapidInterpolationMode_raw();
    return res;
}

inline bool ControllerConfigurationMachineElement::tcpRapidInterpolationMode(MachineTCPInterpolationMode value)
{
    return tcpRapidInterpolationMode_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CONTROLLERCONFIGURATIONMACHINEELEMENT_API