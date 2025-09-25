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
#include "../../Core/Application/Events.h"
#include "../../Core/Application/EventHandler.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_NETWORKMACHINEEVENTS_CPP__
# define NETWORKMACHINEEVENTS_API XI_EXPORT
# else
# define NETWORKMACHINEEVENTS_API
# endif
#else
# define NETWORKMACHINEEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CreateMachineConfigurationsEventArgs;
    class CreateMachineConfigurationsEventHandler;
    class Machine;
    class MachineDescription;
    class SearchNetworkMachinesEventArgs;
    class SearchNetworkMachinesEventHandler;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This event is fired from the 'Find network machines' dialog when the corresponding
/// add-in is selected from the vendor drop-down, or when 'search all vendors' is
/// selected. This event will allow the add-in to initiate an enumeration of machines on
/// the network. MachineDescription objects should be created for each machine found, and
/// an list of those MachineDescription objects should be set on the 'machineDescriptions'
/// property of the SearchNetworkMachinesEventArgs. Nothing should be set to signify no
/// machines found. See SearchNetworkMachinesEventArgs and MachineDescription for details.
/// Note that this event is raised on a background thread.
class SearchNetworkMachinesEvent : public core::Event {
public:

    /// Add a handler to be notified when the SearchNetworkMachinesEvent occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(SearchNetworkMachinesEventHandler* handler);

    /// Removes a handler from the SearchNetworkMachinesEvent.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(SearchNetworkMachinesEventHandler* handler);

    NETWORKMACHINEEVENTS_API static const char* classType();
    NETWORKMACHINEEVENTS_API const char* objectType() const override;
    NETWORKMACHINEEVENTS_API void* queryInterface(const char* id) const override;
    NETWORKMACHINEEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SearchNetworkMachinesEventHandler* handler) = 0;
    virtual bool remove_raw(SearchNetworkMachinesEventHandler* handler) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This EventArgs object will be sent with the SearchNetworkMachinesEvent.
class SearchNetworkMachinesEventArgs : public core::EventArgs {
public:

    /// Gets and sets a list of MachineDescription objects representing machines found on the
    /// network. Do not set anything to signify no machine found.
    std::vector<core::Ptr<MachineDescription>> machineDescriptions() const;
    bool machineDescriptions(const std::vector<core::Ptr<MachineDescription>>& value);

    NETWORKMACHINEEVENTS_API static const char* classType();
    NETWORKMACHINEEVENTS_API const char* objectType() const override;
    NETWORKMACHINEEVENTS_API void* queryInterface(const char* id) const override;
    NETWORKMACHINEEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineDescription** machineDescriptions_raw(size_t& return_size) const = 0;
    virtual bool machineDescriptions_raw(MachineDescription** value, size_t value_size) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event handler for the SearchNetworkMachinesEvent event.
class SearchNetworkMachinesEventHandler : public core::EventHandler {
public:

    /// The function called by Fusion when the associated event is fired.
    /// eventArgs : An object that provides access to additional information associated with the event.
    NETWORKMACHINEEVENTS_API virtual void notify(const core::Ptr<SearchNetworkMachinesEventArgs>& eventArgs) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This event is fired from the 'Find network machines' dialog when MachineDescription(s)
/// previously provided during the handling of the SearchNetworkMachines event are selected
/// to add to the user's Machine Library. This event will allow the add-ins to create
/// machine configurations corresponding to the selected MachineDescription objects.
/// Handlers of this event should create machine configurations corresponding to each
/// MachineDescription present in the 'machineDescriptions' property in the
/// CreateMachineConfigurationsEventArgs and set them on the 'machines' property of the
/// event args. See CreateMachineConfigurationsEventArgs for details. Note that this event is
/// raised on a background thread.
class CreateMachineConfigurationsEvent : public core::Event {
public:

    /// Add a handler to be notified when the CreateMachineConfigurationsEvent occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(CreateMachineConfigurationsEventHandler* handler);

    /// Removes a handler from the CreateMachineConfigurationsEvent.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(CreateMachineConfigurationsEventHandler* handler);

    NETWORKMACHINEEVENTS_API static const char* classType();
    NETWORKMACHINEEVENTS_API const char* objectType() const override;
    NETWORKMACHINEEVENTS_API void* queryInterface(const char* id) const override;
    NETWORKMACHINEEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(CreateMachineConfigurationsEventHandler* handler) = 0;
    virtual bool remove_raw(CreateMachineConfigurationsEventHandler* handler) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This EventArgs object will be sent with the CreateMachineConfigurationsEvent.
class CreateMachineConfigurationsEventArgs : public core::EventArgs {
public:

    /// Gets the collection of MachineDescription objects for which machine configurations
    /// must be created. These MachineDescription(s) will be a subset of those previously
    /// provided by the add-in's SearchNetworkMachinesEventHandler.
    /// Returns a list of MachineDescription objects which is a subset of the list that was
    /// previously set by this add-in on the 'machineDescriptions' property of the
    /// SearchNetworkMachinesEventArgs.
    std::vector<core::Ptr<MachineDescription>> machineDescriptions() const;

    /// Gets and sets the list of Machine objects. Machines should be created corresponding to
    /// each of the MachineDescription objects provided in the machineDescriptions property.
    /// Machines can be created using adsk.cam.Machine.createFromTemplate or
    /// adsk.cam.Machine.createFromFile.
    std::vector<core::Ptr<Machine>> machines() const;
    bool machines(const std::vector<core::Ptr<Machine>>& value);

    NETWORKMACHINEEVENTS_API static const char* classType();
    NETWORKMACHINEEVENTS_API const char* objectType() const override;
    NETWORKMACHINEEVENTS_API void* queryInterface(const char* id) const override;
    NETWORKMACHINEEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineDescription** machineDescriptions_raw(size_t& return_size) const = 0;
    virtual Machine** machines_raw(size_t& return_size) const = 0;
    virtual bool machines_raw(Machine** value, size_t value_size) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event handler for the CreateMachineConfigurationsEvent.
class CreateMachineConfigurationsEventHandler : public core::EventHandler {
public:

    /// The function called by Fusion when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    NETWORKMACHINEEVENTS_API virtual void notify(const core::Ptr<CreateMachineConfigurationsEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool SearchNetworkMachinesEvent::add(SearchNetworkMachinesEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SearchNetworkMachinesEvent::remove(SearchNetworkMachinesEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::vector<core::Ptr<MachineDescription>> SearchNetworkMachinesEventArgs::machineDescriptions() const
{
    std::vector<core::Ptr<MachineDescription>> res;
    size_t s;

    MachineDescription** p= machineDescriptions_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SearchNetworkMachinesEventArgs::machineDescriptions(const std::vector<core::Ptr<MachineDescription>>& value)
{
    MachineDescription** value_ = new MachineDescription*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = machineDescriptions_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool CreateMachineConfigurationsEvent::add(CreateMachineConfigurationsEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool CreateMachineConfigurationsEvent::remove(CreateMachineConfigurationsEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::vector<core::Ptr<MachineDescription>> CreateMachineConfigurationsEventArgs::machineDescriptions() const
{
    std::vector<core::Ptr<MachineDescription>> res;
    size_t s;

    MachineDescription** p= machineDescriptions_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<Machine>> CreateMachineConfigurationsEventArgs::machines() const
{
    std::vector<core::Ptr<Machine>> res;
    size_t s;

    Machine** p= machines_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CreateMachineConfigurationsEventArgs::machines(const std::vector<core::Ptr<Machine>>& value)
{
    Machine** value_ = new Machine*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = machines_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef NETWORKMACHINEEVENTS_API