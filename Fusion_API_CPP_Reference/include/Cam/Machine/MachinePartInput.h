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
# ifdef __COMPILING_ADSK_CAM_MACHINEPARTINPUT_CPP__
# define ADSK_CAM_MACHINEPARTINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEPARTINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEPARTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxisInput;
    class MachineSpindleInput;
    class MachineToolStationInput;
}}

namespace adsk { namespace cam {

/// Object representing the set of inputs required to create a new MachinePart.
/// Set an MachineAxisInput object on this object's axisInput parameter to create
/// a new MachineAxis with this part.
class MachinePartInput : public core::Base {
public:

    /// Gets or sets the internal ID of the part, used to reference this part for other
    /// operations. This ID can be any string.
    /// This must be unique with respect to other MachineParts in the Machine.
    std::string id() const;
    bool id(const std::string& value);

    /// Get the type of part this input will create.
    MachinePartTypes partType() const;

    /// Creates a new MachineAxisInput object to be used to create a new MachineAxis.
    /// Set this object on to an axis type MachinePartInput to create a new MachineAxis
    /// with that part.
    /// axisType : The type of MachineAxisInput to create.
    /// Returns a LinearMachineAxisInput or RotaryMachineAxisInput, or null if the creation failed.
    core::Ptr<MachineAxisInput> createAxisInput(MachineAxisTypes axisType);

    /// Gets or sets an axis input object to create a new MachineAxis with this part.
    /// Only valid when partType is Axis.
    core::Ptr<MachineAxisInput> axisInput() const;
    bool axisInput(const core::Ptr<MachineAxisInput>& value);

    /// Gets or sets an spindle input object to create a new MachineSpindle with this part.
    /// Only valid when partType is not Axis.
    core::Ptr<MachineSpindleInput> spindleInput() const;
    bool spindleInput(const core::Ptr<MachineSpindleInput>& value);

    /// Creates a new MachineSpindleInput object to be used to create a new MachineSpindle.
    /// Returns new MachineSpindleInput object.
    core::Ptr<MachineSpindleInput> createSpindleInput();

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets or sets an tool station input object to create a new MachineToolStation with this part.
    /// Only valid when partType is not Axis.
    core::Ptr<MachineToolStationInput> toolStationInput() const;
    bool toolStationInput(const core::Ptr<MachineToolStationInput>& value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new MachineToolStationInput object to be used to create a new MachineToolStation.
    /// Returns new MachineToolStationInput object.
    core::Ptr<MachineToolStationInput> createToolStationInput();

    ADSK_CAM_MACHINEPARTINPUT_API static const char* classType();
    ADSK_CAM_MACHINEPARTINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEPARTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEPARTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual bool id_raw(const char* value) = 0;
    virtual MachinePartTypes partType_raw() const = 0;
    virtual MachineAxisInput* createAxisInput_raw(MachineAxisTypes axisType) = 0;
    virtual MachineAxisInput* axisInput_raw() const = 0;
    virtual bool axisInput_raw(MachineAxisInput* value) = 0;
    virtual MachineSpindleInput* spindleInput_raw() const = 0;
    virtual bool spindleInput_raw(MachineSpindleInput* value) = 0;
    virtual MachineSpindleInput* createSpindleInput_raw() = 0;
    virtual MachineToolStationInput* toolStationInput_raw() const = 0;
    virtual bool toolStationInput_raw(MachineToolStationInput* value) = 0;
    virtual MachineToolStationInput* createToolStationInput_raw() = 0;
};

// Inline wrappers

inline std::string MachinePartInput::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachinePartInput::id(const std::string& value)
{
    return id_raw(value.c_str());
}

inline MachinePartTypes MachinePartInput::partType() const
{
    MachinePartTypes res = partType_raw();
    return res;
}

inline core::Ptr<MachineAxisInput> MachinePartInput::createAxisInput(MachineAxisTypes axisType)
{
    core::Ptr<MachineAxisInput> res = createAxisInput_raw(axisType);
    return res;
}

inline core::Ptr<MachineAxisInput> MachinePartInput::axisInput() const
{
    core::Ptr<MachineAxisInput> res = axisInput_raw();
    return res;
}

inline bool MachinePartInput::axisInput(const core::Ptr<MachineAxisInput>& value)
{
    return axisInput_raw(value.get());
}

inline core::Ptr<MachineSpindleInput> MachinePartInput::spindleInput() const
{
    core::Ptr<MachineSpindleInput> res = spindleInput_raw();
    return res;
}

inline bool MachinePartInput::spindleInput(const core::Ptr<MachineSpindleInput>& value)
{
    return spindleInput_raw(value.get());
}

inline core::Ptr<MachineSpindleInput> MachinePartInput::createSpindleInput()
{
    core::Ptr<MachineSpindleInput> res = createSpindleInput_raw();
    return res;
}

inline core::Ptr<MachineToolStationInput> MachinePartInput::toolStationInput() const
{
    core::Ptr<MachineToolStationInput> res = toolStationInput_raw();
    return res;
}

inline bool MachinePartInput::toolStationInput(const core::Ptr<MachineToolStationInput>& value)
{
    return toolStationInput_raw(value.get());
}

inline core::Ptr<MachineToolStationInput> MachinePartInput::createToolStationInput()
{
    core::Ptr<MachineToolStationInput> res = createToolStationInput_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEPARTINPUT_API