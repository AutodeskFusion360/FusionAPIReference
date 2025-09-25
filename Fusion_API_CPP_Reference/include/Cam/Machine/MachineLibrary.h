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
#include "../Global/CAMLibrary.h"
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINELIBRARY_CPP__
# define ADSK_CAM_MACHINELIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_MACHINELIBRARY_API
# endif
#else
# define ADSK_CAM_MACHINELIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Machine;
    class MachineQuery;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The MachineLibrary provides access to machines. Using this object you can import machines
/// and get existing machines using either URL or query to find specific Machines.
class MachineLibrary : public CAMLibrary {
public:

    /// Creates a new MachineQuery that is used to query the library for machines matching
    /// the query.
    /// location : The location specifies the LibraryLocations where to search for in the machine library.
    /// vendor : The vendor specifies the vendor of the machine. The default empty vendor applies to all machines.
    /// model : The model specifies the model of the machine. The default empty model applies to all machines.
    /// Returns a new MachineQuery. The query is predefined by given parameter.
    core::Ptr<MachineQuery> createQuery(LibraryLocations location, const std::string& vendor = "", const std::string& model = "") const;

    /// Import a given machine at a specific location. The machine will be stored in the library. Throws an error, if the given URL is read-only.
    /// machine : The machine that should be imported.
    /// destinationUrl : The URL to the folder where to save the machine.
    /// machineName : The name of the machine that should be created due to the import. The name can be extended if the asset already exists at given location to ensure a unique name.
    /// Returns the URL of the newly imported machine, or null if the import failed.
    core::Ptr<core::URL> importMachine(const core::Ptr<Machine>& machine, const core::Ptr<core::URL>& destinationUrl, const std::string& machineName);

    /// Update a machine in the library. The library overrides the URL by given machine. Throws an error if the URL does not already point to an existing machine.
    /// url : The URL to the existing asset in the library that should be updated.
    /// machine : The machine that should be persisted.
    /// Returns true if asset was updated successfully, false otherwise.
    bool updateMachine(const core::Ptr<core::URL>& url, const core::Ptr<Machine>& machine);

    /// Get a specific machine by the given URL. Returns null, if the URL does not exist.
    /// url : The URL to the machine to be loaded.
    /// Returns the machine for a valid URL, returns null otherwise.
    core::Ptr<Machine> machineAtURL(const core::Ptr<core::URL>& url);

    /// Get all machines by the given parent folder URL. Returns null, if the URL does not exist.
    /// url : The URL of the folder to get machines from.
    /// Returns the machine for a valid URL, returns null otherwise.
    std::vector<core::Ptr<Machine>> childMachines(const core::Ptr<core::URL>& url);

    ADSK_CAM_MACHINELIBRARY_API static const char* classType();
    ADSK_CAM_MACHINELIBRARY_API const char* objectType() const override;
    ADSK_CAM_MACHINELIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINELIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineQuery* createQuery_raw(LibraryLocations location, const char* vendor, const char* model) const = 0;
    virtual core::URL* importMachine_raw(Machine* machine, core::URL* destinationUrl, const char* machineName) = 0;
    virtual bool updateMachine_raw(core::URL* url, Machine* machine) = 0;
    virtual Machine* machineAtURL_raw(core::URL* url) = 0;
    virtual Machine** childMachines_raw(core::URL* url, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<MachineQuery> MachineLibrary::createQuery(LibraryLocations location, const std::string& vendor, const std::string& model) const
{
    core::Ptr<MachineQuery> res = createQuery_raw(location, vendor.c_str(), model.c_str());
    return res;
}

inline core::Ptr<core::URL> MachineLibrary::importMachine(const core::Ptr<Machine>& machine, const core::Ptr<core::URL>& destinationUrl, const std::string& machineName)
{
    core::Ptr<core::URL> res = importMachine_raw(machine.get(), destinationUrl.get(), machineName.c_str());
    return res;
}

inline bool MachineLibrary::updateMachine(const core::Ptr<core::URL>& url, const core::Ptr<Machine>& machine)
{
    bool res = updateMachine_raw(url.get(), machine.get());
    return res;
}

inline core::Ptr<Machine> MachineLibrary::machineAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<Machine> res = machineAtURL_raw(url.get());
    return res;
}

inline std::vector<core::Ptr<Machine>> MachineLibrary::childMachines(const core::Ptr<core::URL>& url)
{
    std::vector<core::Ptr<Machine>> res;
    size_t s;

    Machine** p= childMachines_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINELIBRARY_API