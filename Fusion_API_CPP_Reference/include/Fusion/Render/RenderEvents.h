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
# ifdef __COMPILING_RENDEREVENTS_CPP__
# define RENDEREVENTS_API XI_EXPORT
# else
# define RENDEREVENTS_API
# endif
#else
# define RENDEREVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Viewport;
}}
namespace adsk { namespace fusion {
    class RenderEventArgs;
    class RenderEventHandler;
}}

namespace adsk { namespace fusion {

/// A RenderEvent represents an event that occurs in reaction to the
/// rendering process in the Render workspace.
class RenderEvent : public core::Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(RenderEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(RenderEventHandler* handler);

    RENDEREVENTS_API static const char* classType();
    RENDEREVENTS_API const char* objectType() const override;
    RENDEREVENTS_API void* queryInterface(const char* id) const override;
    RENDEREVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(RenderEventHandler* handler) = 0;
    virtual bool remove_raw(RenderEventHandler* handler) = 0;
};

/// The RenderEventHandler is a client implemented class that can be added as a handler to a
/// RenderEvent.
class RenderEventHandler : public core::EventHandler {
public:

    /// The function called by Fusion when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    RENDEREVENTS_API virtual void notify(const core::Ptr<RenderEventArgs>& eventArgs) = 0;
};

/// The RenderEventArgs provides information associated with the render process.
/// Render events happen when there's a change in state of the rendering process.
/// The most typical is when the rendering process has reached a predefined quality.
class RenderEventArgs : public core::EventArgs {
public:

    /// Returns the viewport that the rendering was performed in when the render is an in-canvas rendering.
    core::Ptr<core::Viewport> viewport() const;

    RENDEREVENTS_API static const char* classType();
    RENDEREVENTS_API const char* objectType() const override;
    RENDEREVENTS_API void* queryInterface(const char* id) const override;
    RENDEREVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Viewport* viewport_raw() const = 0;
};

// Inline wrappers

inline bool RenderEvent::add(RenderEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool RenderEvent::remove(RenderEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline core::Ptr<core::Viewport> RenderEventArgs::viewport() const
{
    core::Ptr<core::Viewport> res = viewport_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef RENDEREVENTS_API