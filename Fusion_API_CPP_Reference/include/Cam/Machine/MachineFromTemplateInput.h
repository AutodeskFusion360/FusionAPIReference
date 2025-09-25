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
#include "MachineInput.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEFROMTEMPLATEINPUT_CPP__
# define ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object used as input to create a machine from a given template.
/// Used by "Machine.create(MachineInput)" method.
/// The object holds the data needed to create a machine based on the specified template.
class MachineFromTemplateInput : public MachineInput {
public:

    /// Create a "MachineFromTemplateInput" object to be used as
    /// input for "Machine.create(MachineInput)" method.
    /// machineTemplate : The template to act as a base for creating a machine from.
    /// The newly created "MachineFromTemplateInput" object in a valid state.
    static core::Ptr<MachineFromTemplateInput> create(MachineTemplate machineTemplate);

    /// Machine template identifier used to generate a certain type of machine.
    MachineTemplate machineTemplate() const;

    ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API static const char* classType();
    ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API static MachineFromTemplateInput* create_raw(MachineTemplate machineTemplate);
    virtual MachineTemplate machineTemplate_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<MachineFromTemplateInput> MachineFromTemplateInput::create(MachineTemplate machineTemplate)
{
    core::Ptr<MachineFromTemplateInput> res = create_raw(machineTemplate);
    return res;
}

inline MachineTemplate MachineFromTemplateInput::machineTemplate() const
{
    MachineTemplate res = machineTemplate_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEFROMTEMPLATEINPUT_API