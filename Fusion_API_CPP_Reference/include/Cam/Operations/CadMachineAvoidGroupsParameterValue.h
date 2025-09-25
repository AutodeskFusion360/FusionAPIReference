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
#include "ParameterValue.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_CPP__
# define ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAvoidGroups;
}}

namespace adsk { namespace cam {

/// A parameter value that is a CadMachineAvoidGroupsParameterValue.
class CadMachineAvoidGroupsParameterValue : public ParameterValue {
public:

    /// Get the values of the parameter as a collection of objects of type MachineAvoidSelectionGroup
    core::Ptr<MachineAvoidGroups> getMachineAvoidGroups();

    /// Set the values of the parameter as a collection of MachineAvoidSelectionGroup.
    /// This can throw an exception when the combination of group type and machining mode is not allowed
    /// by the current toolpath strategy.
    void applyMachineAvoidGroups(const core::Ptr<MachineAvoidGroups>& machineAvoidSelectionGroups);

    ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineAvoidGroups* getMachineAvoidGroups_raw() = 0;
    virtual void applyMachineAvoidGroups_raw(MachineAvoidGroups* machineAvoidSelectionGroups) = 0;
};

// Inline wrappers

inline core::Ptr<MachineAvoidGroups> CadMachineAvoidGroupsParameterValue::getMachineAvoidGroups()
{
    core::Ptr<MachineAvoidGroups> res = getMachineAvoidGroups_raw();
    return res;
}

inline void CadMachineAvoidGroupsParameterValue::applyMachineAvoidGroups(const core::Ptr<MachineAvoidGroups>& machineAvoidSelectionGroups)
{
    applyMachineAvoidGroups_raw(machineAvoidSelectionGroups.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CADMACHINEAVOIDGROUPSPARAMETERVALUE_API