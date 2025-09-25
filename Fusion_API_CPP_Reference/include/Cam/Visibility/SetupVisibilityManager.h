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
# ifdef __COMPILING_ADSK_CAM_SETUPVISIBILITYMANAGER_CPP__
# define ADSK_CAM_SETUPVISIBILITYMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_SETUPVISIBILITYMANAGER_API
# endif
#else
# define ADSK_CAM_SETUPVISIBILITYMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Class to manage the visibility of various elements of the setup.
class SetupVisibilityManager : public core::Base {
public:

    /// Controls the visibility of the setup's machine.
    bool machineVisible() const;
    bool machineVisible(bool value);

    /// Controls the visibility of the setup's machine base where it exists.
    /// This is always disabled for additive setups.
    bool machineBaseVisible() const;
    bool machineBaseVisible(bool value);

    ADSK_CAM_SETUPVISIBILITYMANAGER_API static const char* classType();
    ADSK_CAM_SETUPVISIBILITYMANAGER_API const char* objectType() const override;
    ADSK_CAM_SETUPVISIBILITYMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPVISIBILITYMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool machineVisible_raw() const = 0;
    virtual bool machineVisible_raw(bool value) = 0;
    virtual bool machineBaseVisible_raw() const = 0;
    virtual bool machineBaseVisible_raw(bool value) = 0;
};

// Inline wrappers

inline bool SetupVisibilityManager::machineVisible() const
{
    bool res = machineVisible_raw();
    return res;
}

inline bool SetupVisibilityManager::machineVisible(bool value)
{
    return machineVisible_raw(value);
}

inline bool SetupVisibilityManager::machineBaseVisible() const
{
    bool res = machineBaseVisible_raw();
    return res;
}

inline bool SetupVisibilityManager::machineBaseVisible(bool value)
{
    return machineBaseVisible_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPVISIBILITYMANAGER_API