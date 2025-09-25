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
# ifdef __COMPILING_ADSK_CAM_MACHINEAXISCONFIGURATIONS_CPP__
# define ADSK_CAM_MACHINEAXISCONFIGURATIONS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAXISCONFIGURATIONS_API
# endif
#else
# define ADSK_CAM_MACHINEAXISCONFIGURATIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class LinearMachineAxisConfiguration;
    class MachineAxisConfiguration;
    class RotaryMachineAxisConfiguration;
}}

namespace adsk { namespace cam {

/// Collection of axis configuration objects.
class MachineAxisConfigurations : public core::Base {
public:

    /// Add a new linear axis configuration for a kinematics part.
    /// partId : ID used to label this axis configuration and link to a part in the kinematics tree.
    /// partID must match a part of type AxisMachinePartType in the kinematics tree and the part must be a linear axis.
    /// Returns the newly created LinearMachineAxisConfiguration or null if creation failed.
    core::Ptr<LinearMachineAxisConfiguration> addLinear(const std::string& partId);

    /// Add a new rotary axis configuration for a kinematics part.
    /// partId : ID used to label this axis configuration and link to a part in the kinematics tree.
    /// partID must match a part of type AxisMachinePartType in the kinematics tree and the part must be a rotary axis.
    /// Returns the newly created RotaryMachineAxisConfiguration or null if creation failed.
    core::Ptr<RotaryMachineAxisConfiguration> addRotary(const std::string& partId);

    /// Get the configuration at index in this collection
    /// index : Index of configuration.
    /// Returns the MachineAxisConfiguration at index.
    core::Ptr<MachineAxisConfiguration> item(int index) const;

    /// Get the configuration with the given ID
    /// id : The ID for the configuration to get.
    /// Return the MachineAxisConfiguration with the given ID, or null if the given ID does not
    /// match any configuration in the collection.
    core::Ptr<MachineAxisConfiguration> itemById(const std::string& id) const;

    /// Get the number of configurations in the collection.
    size_t count() const;

    typedef MachineAxisConfiguration iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_MACHINEAXISCONFIGURATIONS_API static const char* classType();
    ADSK_CAM_MACHINEAXISCONFIGURATIONS_API const char* objectType() const override;
    ADSK_CAM_MACHINEAXISCONFIGURATIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAXISCONFIGURATIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LinearMachineAxisConfiguration* addLinear_raw(const char* partId) = 0;
    virtual RotaryMachineAxisConfiguration* addRotary_raw(const char* partId) = 0;
    virtual MachineAxisConfiguration* item_raw(int index) const = 0;
    virtual MachineAxisConfiguration* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<LinearMachineAxisConfiguration> MachineAxisConfigurations::addLinear(const std::string& partId)
{
    core::Ptr<LinearMachineAxisConfiguration> res = addLinear_raw(partId.c_str());
    return res;
}

inline core::Ptr<RotaryMachineAxisConfiguration> MachineAxisConfigurations::addRotary(const std::string& partId)
{
    core::Ptr<RotaryMachineAxisConfiguration> res = addRotary_raw(partId.c_str());
    return res;
}

inline core::Ptr<MachineAxisConfiguration> MachineAxisConfigurations::item(int index) const
{
    core::Ptr<MachineAxisConfiguration> res = item_raw(index);
    return res;
}

inline core::Ptr<MachineAxisConfiguration> MachineAxisConfigurations::itemById(const std::string& id) const
{
    core::Ptr<MachineAxisConfiguration> res = itemById_raw(id.c_str());
    return res;
}

inline size_t MachineAxisConfigurations::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void MachineAxisConfigurations::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAXISCONFIGURATIONS_API