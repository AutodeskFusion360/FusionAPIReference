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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_CUSTOMFEATUREEVENTS_CPP__
# define CUSTOMFEATUREEVENTS_API XI_EXPORT
# else
# define CUSTOMFEATUREEVENTS_API
# endif
#else
# define CUSTOMFEATUREEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Status;
}}
namespace adsk { namespace fusion {
    class CustomFeature;
    class CustomFeatureEventArgs;
    class CustomFeatureEventHandler;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A CustomFeature event is an event associated with handling changes to a custom feature.
class CustomFeatureEvent : public core::Event {
public:

    /// Add a handler to be notified when the file event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(CustomFeatureEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(CustomFeatureEventHandler* handler);

    CUSTOMFEATUREEVENTS_API static const char* classType();
    CUSTOMFEATUREEVENTS_API const char* objectType() const override;
    CUSTOMFEATUREEVENTS_API void* queryInterface(const char* id) const override;
    CUSTOMFEATUREEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(CustomFeatureEventHandler* handler) = 0;
    virtual bool remove_raw(CustomFeatureEventHandler* handler) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The CustomFeatureEventArgs provides information associated with a custom feature event.
class CustomFeatureEventArgs : public core::EventArgs {
public:

    /// Provides access to the custom feature that is being recomputed.
    core::Ptr<CustomFeature> customFeature() const;

    /// Provides access to the Status object associated with this compute. If the compute is successful
    /// you shouldn't do anything with this property. If the compute is not fully successful, you can
    /// use this returned Status object to define any errors or warnings that occurred during the compute.
    /// These warnings and errors will be shown to the user in the Alerts dialog.
    core::Ptr<core::Status> computeStatus() const;

    CUSTOMFEATUREEVENTS_API static const char* classType();
    CUSTOMFEATUREEVENTS_API const char* objectType() const override;
    CUSTOMFEATUREEVENTS_API void* queryInterface(const char* id) const override;
    CUSTOMFEATUREEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomFeature* customFeature_raw() const = 0;
    virtual core::Status* computeStatus_raw() const = 0;
};

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The CustomFeatureEventHandler is a client implemented class that can be added as
/// a handler to a CustomFeatureEvent.
class CustomFeatureEventHandler : public core::EventHandler {
public:

    /// The function called by Fusion when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    CUSTOMFEATUREEVENTS_API virtual void notify(const core::Ptr<CustomFeatureEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool CustomFeatureEvent::add(CustomFeatureEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool CustomFeatureEvent::remove(CustomFeatureEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline core::Ptr<CustomFeature> CustomFeatureEventArgs::customFeature() const
{
    core::Ptr<CustomFeature> res = customFeature_raw();
    return res;
}

inline core::Ptr<core::Status> CustomFeatureEventArgs::computeStatus() const
{
    core::Ptr<core::Status> res = computeStatus_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef CUSTOMFEATUREEVENTS_API