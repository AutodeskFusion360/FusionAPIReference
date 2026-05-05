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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINE_CPP__
# define ADSK_CAM_MACHINE_API XI_EXPORT
# else
# define ADSK_CAM_MACHINE_API
# endif
#else
# define ADSK_CAM_MACHINE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineCapabilities;
    class MachineElements;
    class MachineInput;
    class MachineKinematics;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// Object that represents a machine.
class Machine : public core::Base {
public:

    /// Gets and sets the vendor name of the machine.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// Gets and sets the model name of the machine.
    std::string model() const;
    bool model(const std::string& value);

    /// Gets and sets the description of the machine.
    std::string description() const;
    bool description(const std::string& value);

    /// Gets the unique identifier of the machine.
    /// Can be used for comparing machines within the document.
    std::string id() const;

    /// Gets the capabilities of the machine.
    core::Ptr<MachineCapabilities> capabilities() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the kinematics tree of the machine.
    core::Ptr<MachineKinematics> kinematics() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a Machine from a template.
    /// machineTemplate : The template to act as a base for creating a machine from.
    /// Returns the newly created machine with a valid kinematics tree.
    static core::Ptr<Machine> createFromTemplate(MachineTemplate machineTemplate);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a Machine from a file.
    /// location : The location in the machine library.
    /// filePath : The path to a file to act as a base for creating a machine from.
    /// The path is relative to the library location given, unless library location is External,
    /// then the filePath is expected to be an absolute path.
    /// Returns the newly created machine with a valid kinematics tree.
    static core::Ptr<Machine> createFromFile(LibraryLocations location, const std::string& filePath);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Saves the Machine to a file.
    /// Any subsequent edits will need to be saved again.
    /// location : The location in the machine library to save the machine to.
    /// filePath : The path of the file to save the machine as.
    /// The path is relative to the library location given, unless library location is External,
    /// then the filePath is expected to be an absolute path.
    /// .machine will be appended if no extension is given.
    /// Returns true if the machine was saved successfully, false otherwise.
    bool save(LibraryLocations location, const std::string& filePath) const;

    /// Checks if the machine has a post.
    /// Returns a boolean telling if the Machine has a post assigned.
    bool hasPost() const;

    /// Gets or sets the URL of the post assigned to the machine.
    /// Returns a string with the URL of the post assigned to the machine.
    core::Ptr<core::URL> postURL() const;
    bool postURL(const core::Ptr<core::URL>& value);

    /// Checks if the machine is equivalent to this one.
    /// machine : The machine to compare this one to
    /// True if the machines are equivalent
    bool equivalentTo(const core::Ptr<Machine>& machine) const;

    /// Creates a machine from a "MachineInput" input object
    /// machineInput : Input object that is used to hold the details needed for creating a machine.
    /// Returns the newly created machine in a valid state.
    static core::Ptr<Machine> create(const core::Ptr<MachineInput>& machineInput);

    /// Gets the list of elements that make up this machine.
    core::Ptr<MachineElements> elements() const;

    /// Returns true if the machine has a simulation model attached.
    bool hasSimulationModel() const;

    /// Clears the simulation model from the machine.
    void clearSimulationModel();

    ADSK_CAM_MACHINE_API static const char* classType();
    ADSK_CAM_MACHINE_API const char* objectType() const override;
    ADSK_CAM_MACHINE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual char* model_raw() const = 0;
    virtual bool model_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual char* id_raw() const = 0;
    virtual MachineCapabilities* capabilities_raw() const = 0;
    virtual MachineKinematics* kinematics_raw() const = 0;
    ADSK_CAM_MACHINE_API static Machine* createFromTemplate_raw(MachineTemplate machineTemplate);
    ADSK_CAM_MACHINE_API static Machine* createFromFile_raw(LibraryLocations location, const char* filePath);
    virtual bool save_raw(LibraryLocations location, const char* filePath) const = 0;
    virtual bool hasPost_raw() const = 0;
    virtual core::URL* postURL_raw() const = 0;
    virtual bool postURL_raw(core::URL* value) = 0;
    virtual bool equivalentTo_raw(Machine* machine) const = 0;
    ADSK_CAM_MACHINE_API static Machine* create_raw(MachineInput* machineInput);
    virtual MachineElements* elements_raw() const = 0;
    virtual bool hasSimulationModel_raw() const = 0;
    virtual void clearSimulationModel_raw() = 0;
};

// Inline wrappers

inline std::string Machine::vendor() const
{
    std::string res;

    char* p= vendor_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Machine::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline std::string Machine::model() const
{
    std::string res;

    char* p= model_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Machine::model(const std::string& value)
{
    return model_raw(value.c_str());
}

inline std::string Machine::description() const
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

inline bool Machine::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline std::string Machine::id() const
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

inline core::Ptr<MachineCapabilities> Machine::capabilities() const
{
    core::Ptr<MachineCapabilities> res = capabilities_raw();
    return res;
}

inline core::Ptr<MachineKinematics> Machine::kinematics() const
{
    core::Ptr<MachineKinematics> res = kinematics_raw();
    return res;
}

inline core::Ptr<Machine> Machine::createFromTemplate(MachineTemplate machineTemplate)
{
    core::Ptr<Machine> res = createFromTemplate_raw(machineTemplate);
    return res;
}

inline core::Ptr<Machine> Machine::createFromFile(LibraryLocations location, const std::string& filePath)
{
    core::Ptr<Machine> res = createFromFile_raw(location, filePath.c_str());
    return res;
}

inline bool Machine::save(LibraryLocations location, const std::string& filePath) const
{
    bool res = save_raw(location, filePath.c_str());
    return res;
}

inline bool Machine::hasPost() const
{
    bool res = hasPost_raw();
    return res;
}

inline core::Ptr<core::URL> Machine::postURL() const
{
    core::Ptr<core::URL> res = postURL_raw();
    return res;
}

inline bool Machine::postURL(const core::Ptr<core::URL>& value)
{
    return postURL_raw(value.get());
}

inline bool Machine::equivalentTo(const core::Ptr<Machine>& machine) const
{
    bool res = equivalentTo_raw(machine.get());
    return res;
}

inline core::Ptr<Machine> Machine::create(const core::Ptr<MachineInput>& machineInput)
{
    core::Ptr<Machine> res = create_raw(machineInput.get());
    return res;
}

inline core::Ptr<MachineElements> Machine::elements() const
{
    core::Ptr<MachineElements> res = elements_raw();
    return res;
}

inline bool Machine::hasSimulationModel() const
{
    bool res = hasSimulationModel_raw();
    return res;
}

inline void Machine::clearSimulationModel()
{
    clearSimulationModel_raw();
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINE_API