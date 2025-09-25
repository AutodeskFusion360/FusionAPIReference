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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEFROMFILEINPUT_CPP__
# define ADSK_CAM_MACHINEFROMFILEINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEFROMFILEINPUT_API
# endif
#else
# define ADSK_CAM_MACHINEFROMFILEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object used as input to create a machine from a local file.
/// It is used by the Machine.create method.
/// The object holds the data needed to create a machine from a local machine file.
class MachineFromFileInput : public MachineInput {
public:

    /// Creates a MachineFromFileInput object to be used as
    /// input for Machine.create method.
    /// filePath : The path to a machine file to be processed.
    /// The filePath is expected to be an absolute path to the machine file on disk.
    /// The newly created "MachineFromFileInput" object in a valid state.
    static core::Ptr<MachineFromFileInput> create(const std::string& filePath);

    /// The path to a file to act as a base for creating a machine from.
    /// The filePath is expected to be an absolute path to the local machine file.
    std::string filePath() const;

    /// Whether or not to ignore the simulation model
    /// when creating/loading the machine.
    bool ignoreSimulationModel() const;
    bool ignoreSimulationModel(bool value);

    ADSK_CAM_MACHINEFROMFILEINPUT_API static const char* classType();
    ADSK_CAM_MACHINEFROMFILEINPUT_API const char* objectType() const override;
    ADSK_CAM_MACHINEFROMFILEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEFROMFILEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MACHINEFROMFILEINPUT_API static MachineFromFileInput* create_raw(const char* filePath);
    virtual char* filePath_raw() const = 0;
    virtual bool ignoreSimulationModel_raw() const = 0;
    virtual bool ignoreSimulationModel_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<MachineFromFileInput> MachineFromFileInput::create(const std::string& filePath)
{
    core::Ptr<MachineFromFileInput> res = create_raw(filePath.c_str());
    return res;
}

inline std::string MachineFromFileInput::filePath() const
{
    std::string res;

    char* p= filePath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MachineFromFileInput::ignoreSimulationModel() const
{
    bool res = ignoreSimulationModel_raw();
    return res;
}

inline bool MachineFromFileInput::ignoreSimulationModel(bool value)
{
    return ignoreSimulationModel_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEFROMFILEINPUT_API