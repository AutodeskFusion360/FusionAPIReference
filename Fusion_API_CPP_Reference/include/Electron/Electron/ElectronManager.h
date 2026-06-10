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
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ELECTRONMANAGER_CPP__
# define ADSK_ELECTRON_ELECTRONMANAGER_API XI_EXPORT
# else
# define ADSK_ELECTRON_ELECTRONMANAGER_API
# endif
#else
# define ADSK_ELECTRON_ELECTRONMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The main Electronics singleton.
class ElectronManager : public core::Base {
public:

    /// Sets the object ID mode for queries.
    /// mode : The ID mode to use.
    void setObjectIdMode(ObjectIdMode mode);

    /// Gets the current object ID mode for queries.
    /// The current ID mode.
    ObjectIdMode getObjectIdMode() const;

    /// Access to the ElectronManager object.
    /// Return the ElectronManager object or null if it failed.
    static core::Ptr<ElectronManager> get();

    ADSK_ELECTRON_ELECTRONMANAGER_API static const char* classType();
    ADSK_ELECTRON_ELECTRONMANAGER_API const char* objectType() const override;
    ADSK_ELECTRON_ELECTRONMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ELECTRONMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void setObjectIdMode_raw(ObjectIdMode mode) = 0;
    virtual ObjectIdMode getObjectIdMode_raw() const = 0;
    ADSK_ELECTRON_ELECTRONMANAGER_API static ElectronManager* get_raw();
};

// Inline wrappers

inline void ElectronManager::setObjectIdMode(ObjectIdMode mode)
{
    setObjectIdMode_raw(mode);
}

inline ObjectIdMode ElectronManager::getObjectIdMode() const
{
    ObjectIdMode res = getObjectIdMode_raw();
    return res;
}

inline core::Ptr<ElectronManager> ElectronManager::get()
{
    core::Ptr<ElectronManager> res = get_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ELECTRONMANAGER_API