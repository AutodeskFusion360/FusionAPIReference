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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_CPP__
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API
# endif
#else
# define ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CreateMachineConfigurationsEvent;
    class NetworkMachineIntegrationInput;
    class SearchNetworkMachinesEvent;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// NetworkMachineManager provides access to properties and events needed to integrate
/// add-ins into the 'Find network machines' dialog. This enables users to add machine
/// configurations representing machines on the network to their machine library.
class NetworkMachineIntegrationManager : public core::Base {
public:

    /// Registers an add-in for use in the 'Find network machines' dialog. This dialog will fire
    /// the SearchNetworkMachinesEvent and CreateMachineConfigurationsEvent, which the add-in
    /// must handle. See SearchNetworkMachinesEvent and CreateMachineConfigurationsEvent for
    /// details.
    /// networkMachineIntegrationInput : An object defining properties of an add-in, also allowing an add-in to customize its
    /// appearance in the 'Find network machines' dialog.
    bool registerNetworkMachineIntegration(const core::Ptr<NetworkMachineIntegrationInput>& networkMachineIntegrationInput);

    /// This event is fired from the 'Find network machines' dialog when the corresponding
    /// add-in is selected from the vendor drop-down, or when 'search all vendors' is
    /// selected. This event will allow the add-in to initiate an enumeration of machines on
    /// the network, and populate the 'Find network machines' dialog with descriptions of each
    /// machine found. See SearchNetworkMachinesEvent for details.
    core::Ptr<SearchNetworkMachinesEvent> searchNetworkMachinesEvent() const;

    /// This event is fired from the 'Find network machines' dialog when MachineDescription(s)
    /// previously provided during the handling of the SearchNetworkMachines event are selected
    /// to add to the user's Machine Library. This event will allow the add-ins to create
    /// machine configurations corresponding to the selected MachineDescription objects.
    /// See CreateMachineConfigurationsEvent for details.
    core::Ptr<CreateMachineConfigurationsEvent> createMachineConfigurationsEvent() const;

    ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API static const char* classType();
    ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API const char* objectType() const override;
    ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool registerNetworkMachineIntegration_raw(NetworkMachineIntegrationInput* networkMachineIntegrationInput) = 0;
    virtual SearchNetworkMachinesEvent* searchNetworkMachinesEvent_raw() const = 0;
    virtual CreateMachineConfigurationsEvent* createMachineConfigurationsEvent_raw() const = 0;
};

// Inline wrappers

inline bool NetworkMachineIntegrationManager::registerNetworkMachineIntegration(const core::Ptr<NetworkMachineIntegrationInput>& networkMachineIntegrationInput)
{
    bool res = registerNetworkMachineIntegration_raw(networkMachineIntegrationInput.get());
    return res;
}

inline core::Ptr<SearchNetworkMachinesEvent> NetworkMachineIntegrationManager::searchNetworkMachinesEvent() const
{
    core::Ptr<SearchNetworkMachinesEvent> res = searchNetworkMachinesEvent_raw();
    return res;
}

inline core::Ptr<CreateMachineConfigurationsEvent> NetworkMachineIntegrationManager::createMachineConfigurationsEvent() const
{
    core::Ptr<CreateMachineConfigurationsEvent> res = createMachineConfigurationsEvent_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NETWORKMACHINEINTEGRATIONMANAGER_API