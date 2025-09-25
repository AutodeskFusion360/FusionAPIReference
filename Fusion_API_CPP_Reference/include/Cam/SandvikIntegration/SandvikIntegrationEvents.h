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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_SANDVIKINTEGRATIONEVENTS_CPP__
# define SANDVIKINTEGRATIONEVENTS_API XI_EXPORT
# else
# define SANDVIKINTEGRATIONEVENTS_API
# endif
#else
# define SANDVIKINTEGRATIONEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class OperationBase;
    class SandvikIntegrationEventArgs;
    class SandvikIntegrationEventHandler;
    class SandvikPreIntegrationEventArgs;
    class SandvikPreIntegrationEventHandler;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// 
class SandvikPreIntegrationEvent : public core::Event {
public:

    /// Add a handler to be notified when the SandvikPreIntegrationEvent occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(SandvikPreIntegrationEventHandler* handler);

    /// Removes a handler from the SandvikPreIntegrationEvent.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(SandvikPreIntegrationEventHandler* handler);

    SANDVIKINTEGRATIONEVENTS_API static const char* classType();
    SANDVIKINTEGRATIONEVENTS_API const char* objectType() const override;
    SANDVIKINTEGRATIONEVENTS_API void* queryInterface(const char* id) const override;
    SANDVIKINTEGRATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SandvikPreIntegrationEventHandler* handler) = 0;
    virtual bool remove_raw(SandvikPreIntegrationEventHandler* handler) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This EventArgs object will be sent with the SandvikPreIntegrationEvent.
class SandvikPreIntegrationEventArgs : public core::EventArgs {
public:

    /// Provides access to the object that is being edited or created.
    core::Ptr<OperationBase> contextObject() const;

    /// Initially false, this should be set to true to enable the display of the "Set Material"
    /// action on the Setup create/edit dialog.
    bool showSetMaterial() const;
    bool showSetMaterial(bool value);

    /// Initially false, this should be set to true to enable the display of the "Select Tool Assembly"
    /// action on the Operation create/edit dialog.
    bool showSelectToolAssembly() const;
    bool showSelectToolAssembly(bool value);

    /// Initially false, this should be set to true to enable the display of the edit tool assembly
    /// element on the Operation create/edit dialog.
    bool showEditToolAssembly() const;
    bool showEditToolAssembly(bool value);

    /// Initially false, this should be set to true to enable the display of the "Get Tool Recommendation"
    /// action on the Operation create/edit dialog.
    bool showGetToolRecommendation() const;
    bool showGetToolRecommendation(bool value);

    /// Initially false, this should be set to true to enable the display of the "Get Cutting Data"
    /// action on the Operation create/edit dialog.
    bool showGetCuttingData() const;
    bool showGetCuttingData(bool value);

    SANDVIKINTEGRATIONEVENTS_API static const char* classType();
    SANDVIKINTEGRATIONEVENTS_API const char* objectType() const override;
    SANDVIKINTEGRATIONEVENTS_API void* queryInterface(const char* id) const override;
    SANDVIKINTEGRATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationBase* contextObject_raw() const = 0;
    virtual bool showSetMaterial_raw() const = 0;
    virtual bool showSetMaterial_raw(bool value) = 0;
    virtual bool showSelectToolAssembly_raw() const = 0;
    virtual bool showSelectToolAssembly_raw(bool value) = 0;
    virtual bool showEditToolAssembly_raw() const = 0;
    virtual bool showEditToolAssembly_raw(bool value) = 0;
    virtual bool showGetToolRecommendation_raw() const = 0;
    virtual bool showGetToolRecommendation_raw(bool value) = 0;
    virtual bool showGetCuttingData_raw() const = 0;
    virtual bool showGetCuttingData_raw(bool value) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event handler for the SandvikPreIntegrationEvent event.
class SandvikPreIntegrationEventHandler : public core::EventHandler {
public:

    /// The function called by CAM when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    SANDVIKINTEGRATIONEVENTS_API virtual void notify(const core::Ptr<SandvikPreIntegrationEventArgs>& eventArgs) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// 
class SandvikIntegrationEvent : public core::Event {
public:

    /// Add a handler to be notified when the SandvikIntegrationEvent occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(SandvikIntegrationEventHandler* handler);

    /// Removes a handler from the SandvikIntegrationEvent.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(SandvikIntegrationEventHandler* handler);

    SANDVIKINTEGRATIONEVENTS_API static const char* classType();
    SANDVIKINTEGRATIONEVENTS_API const char* objectType() const override;
    SANDVIKINTEGRATIONEVENTS_API void* queryInterface(const char* id) const override;
    SANDVIKINTEGRATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SandvikIntegrationEventHandler* handler) = 0;
    virtual bool remove_raw(SandvikIntegrationEventHandler* handler) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This EventArgs object will be sent with the SandvikIntegrationEvent.
class SandvikIntegrationEventArgs : public core::EventArgs {
public:

    /// The action to be performed -- by convention with Sandvik.
    /// Actions include:
    ///   "selectAssembly"
    ///   "getToolRecommendation"
    ///   "getCuttingData"
    ///   "setMaterial"
    std::string action() const;

    /// Provides access to the object that is being edited or created.
    core::Ptr<OperationBase> contextObject() const;

    SANDVIKINTEGRATIONEVENTS_API static const char* classType();
    SANDVIKINTEGRATIONEVENTS_API const char* objectType() const override;
    SANDVIKINTEGRATIONEVENTS_API void* queryInterface(const char* id) const override;
    SANDVIKINTEGRATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* action_raw() const = 0;
    virtual OperationBase* contextObject_raw() const = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event handler for the SandvikIntegrationEvent event.
class SandvikIntegrationEventHandler : public core::EventHandler {
public:

    /// The function called by CAM when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    SANDVIKINTEGRATIONEVENTS_API virtual void notify(const core::Ptr<SandvikIntegrationEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool SandvikPreIntegrationEvent::add(SandvikPreIntegrationEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SandvikPreIntegrationEvent::remove(SandvikPreIntegrationEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline core::Ptr<OperationBase> SandvikPreIntegrationEventArgs::contextObject() const
{
    core::Ptr<OperationBase> res = contextObject_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showSetMaterial() const
{
    bool res = showSetMaterial_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showSetMaterial(bool value)
{
    return showSetMaterial_raw(value);
}

inline bool SandvikPreIntegrationEventArgs::showSelectToolAssembly() const
{
    bool res = showSelectToolAssembly_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showSelectToolAssembly(bool value)
{
    return showSelectToolAssembly_raw(value);
}

inline bool SandvikPreIntegrationEventArgs::showEditToolAssembly() const
{
    bool res = showEditToolAssembly_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showEditToolAssembly(bool value)
{
    return showEditToolAssembly_raw(value);
}

inline bool SandvikPreIntegrationEventArgs::showGetToolRecommendation() const
{
    bool res = showGetToolRecommendation_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showGetToolRecommendation(bool value)
{
    return showGetToolRecommendation_raw(value);
}

inline bool SandvikPreIntegrationEventArgs::showGetCuttingData() const
{
    bool res = showGetCuttingData_raw();
    return res;
}

inline bool SandvikPreIntegrationEventArgs::showGetCuttingData(bool value)
{
    return showGetCuttingData_raw(value);
}

inline bool SandvikIntegrationEvent::add(SandvikIntegrationEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SandvikIntegrationEvent::remove(SandvikIntegrationEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::string SandvikIntegrationEventArgs::action() const
{
    std::string res;

    char* p= action_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<OperationBase> SandvikIntegrationEventArgs::contextObject() const
{
    core::Ptr<OperationBase> res = contextObject_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef SANDVIKINTEGRATIONEVENTS_API