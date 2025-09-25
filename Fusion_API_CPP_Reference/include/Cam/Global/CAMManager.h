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
# ifdef __COMPILING_ADSK_CAM_CAMMANAGER_CPP__
# define ADSK_CAM_CAMMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMMANAGER_API
# endif
#else
# define ADSK_CAM_CAMMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMCustomStrategyManager;
    class CAMEventManager;
    class CAMLibraryManager;
    class NetworkMachineIntegrationManager;
}}

namespace adsk { namespace cam {

/// This singleton object provides access to application-level events and properties
/// that relate to the CAM (Manufacture) workspace in Fusion.
class CAMManager : public core::Base {
public:

    /// Access to the root CAMManager object.
    /// Return the root CAMManager object or null if it failed.
    static core::Ptr<CAMManager> get();

    /// CAMLibraryManager provides access to properties related to various libraries in the
    /// Fusion Manufacture workspace, such as the post library and machine library.
    /// Return a CAMLibraryManager object or null if it failed.
    core::Ptr<CAMLibraryManager> libraryManager() const;

    /// Gets the absolute path to the post engine (post.exe) installed with Fusion.
    std::string postEnginePath() const;

    /// Gets the NetworkMachineIntegrationManager needed to integrate add-ins into the 'Find network machines' dialog.
    /// Return a NetworkMachineIntegrationManager object or null if it failed.
    core::Ptr<NetworkMachineIntegrationManager> networkMachineIntegrationManager() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the Import Manager which provides access to the functionality
    /// to import in various formats.
    core::Ptr<CAMCustomStrategyManager> customStrategyManager() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the CAMEventHandler which provides operation events to be used in scripts and add-ins.
    /// Return the CAMEventHandler.
    core::Ptr<CAMEventManager> camEventManager() const;

    ADSK_CAM_CAMMANAGER_API static const char* classType();
    ADSK_CAM_CAMMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_CAMMANAGER_API static CAMManager* get_raw();
    virtual CAMLibraryManager* libraryManager_raw() const = 0;
    virtual char* postEnginePath_raw() const = 0;
    virtual NetworkMachineIntegrationManager* networkMachineIntegrationManager_raw() const = 0;
    virtual CAMCustomStrategyManager* customStrategyManager_raw() const = 0;
    virtual CAMEventManager* camEventManager_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CAMManager> CAMManager::get()
{
    core::Ptr<CAMManager> res = get_raw();
    return res;
}

inline core::Ptr<CAMLibraryManager> CAMManager::libraryManager() const
{
    core::Ptr<CAMLibraryManager> res = libraryManager_raw();
    return res;
}

inline std::string CAMManager::postEnginePath() const
{
    std::string res;

    char* p= postEnginePath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<NetworkMachineIntegrationManager> CAMManager::networkMachineIntegrationManager() const
{
    core::Ptr<NetworkMachineIntegrationManager> res = networkMachineIntegrationManager_raw();
    return res;
}

inline core::Ptr<CAMCustomStrategyManager> CAMManager::customStrategyManager() const
{
    core::Ptr<CAMCustomStrategyManager> res = customStrategyManager_raw();
    return res;
}

inline core::Ptr<CAMEventManager> CAMManager::camEventManager() const
{
    core::Ptr<CAMEventManager> res = camEventManager_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMMANAGER_API