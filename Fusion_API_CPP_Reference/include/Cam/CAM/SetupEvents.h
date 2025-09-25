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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_SETUPEVENTS_CPP__
# define SETUPEVENTS_API XI_EXPORT
# else
# define SETUPEVENTS_API
# endif
#else
# define SETUPEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Setup;
    class SetupChangeEventArgs;
    class SetupChangeEventHandler;
    class SetupEventArgs;
    class SetupEventHandler;
}}

namespace adsk { namespace cam {

/// A SetupEvent represents a setup related event.  For example, SetupCreated or SetupDestroying.
class SetupEvent : public core::Event {
public:

    /// Add a handler to be notified when the file event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(SetupEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(SetupEventHandler* handler);

    SETUPEVENTS_API static const char* classType();
    SETUPEVENTS_API const char* objectType() const override;
    SETUPEVENTS_API void* queryInterface(const char* id) const override;
    SETUPEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SetupEventHandler* handler) = 0;
    virtual bool remove_raw(SetupEventHandler* handler) = 0;
};

/// A SetupChangeEvent represents a setup related change event.  It is used for SetupChanged notifications.
class SetupChangeEvent : public core::Event {
public:

    /// Add a handler to be notified when the file event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(SetupChangeEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(SetupChangeEventHandler* handler);

    SETUPEVENTS_API static const char* classType();
    SETUPEVENTS_API const char* objectType() const override;
    SETUPEVENTS_API void* queryInterface(const char* id) const override;
    SETUPEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SetupChangeEventHandler* handler) = 0;
    virtual bool remove_raw(SetupChangeEventHandler* handler) = 0;
};

/// The SetupEventArgs provides information associated with a setup event.
class SetupEventArgs : public core::EventArgs {
public:

    /// Provides access to the setup. Can be null in the case
    /// where the event is fired before the setup has been created or after it has been deleted.
    core::Ptr<Setup> setup() const;

    SETUPEVENTS_API static const char* classType();
    SETUPEVENTS_API const char* objectType() const override;
    SETUPEVENTS_API void* queryInterface(const char* id) const override;
    SETUPEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Setup* setup_raw() const = 0;
};

/// The SetupChangeEventArgs provides information associated with a change event of a setup.
class SetupChangeEventArgs : public core::EventArgs {
public:

    /// Provides access to the setup. Can be null in the case
    /// where the event is fired before the setup has been created or after it has been deleted.
    core::Ptr<Setup> setup() const;

    /// Provides access to an information string.
    /// The optional string may contain additional information about the change.
    std::string info() const;

    /// The type specifies the actual change.
    SetupChangeEventType type() const;

    SETUPEVENTS_API static const char* classType();
    SETUPEVENTS_API const char* objectType() const override;
    SETUPEVENTS_API void* queryInterface(const char* id) const override;
    SETUPEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Setup* setup_raw() const = 0;
    virtual char* info_raw() const = 0;
    virtual SetupChangeEventType type_raw() const = 0;
};

/// The SetupEventHandler is a client implemented class that can be added as a handler to a
/// SetupEvent.
class SetupEventHandler : public core::EventHandler {
public:

    /// The function called by CAM when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    SETUPEVENTS_API virtual void notify(const core::Ptr<SetupEventArgs>& eventArgs) = 0;
};

/// The SetupChangeEventHandler is a client implemented class that can be added as a handler to a
/// SetupChangeEvent.
class SetupChangeEventHandler : public core::EventHandler {
public:

    /// The function called by CAM when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    SETUPEVENTS_API virtual void notify(const core::Ptr<SetupChangeEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool SetupEvent::add(SetupEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SetupEvent::remove(SetupEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline bool SetupChangeEvent::add(SetupChangeEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SetupChangeEvent::remove(SetupChangeEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline core::Ptr<Setup> SetupEventArgs::setup() const
{
    core::Ptr<Setup> res = setup_raw();
    return res;
}

inline core::Ptr<Setup> SetupChangeEventArgs::setup() const
{
    core::Ptr<Setup> res = setup_raw();
    return res;
}

inline std::string SetupChangeEventArgs::info() const
{
    std::string res;

    char* p= info_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline SetupChangeEventType SetupChangeEventArgs::type() const
{
    SetupChangeEventType res = type_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef SETUPEVENTS_API