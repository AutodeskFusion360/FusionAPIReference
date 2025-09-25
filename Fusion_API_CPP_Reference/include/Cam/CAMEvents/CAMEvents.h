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
#include "../../Core/Application/Events.h"
#include "../../Core/Application/EventHandler.h"
#include "CAMEvents.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_CAMEVENTS_CPP__
# define CAMEVENTS_API XI_EXPORT
# else
# define CAMEVENTS_API
# endif
#else
# define CAMEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class OperationBase;
    class OperationBaseEventArgs;
    class OperationBaseEventHandler;
}}
namespace adsk { namespace core {
    class Document;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The OperationEventArgs provides information associated with an operation event.
class CAMEventArgs : public core::Base {
public:

    /// Provides access to an information string.
    /// The optional string may contain additional information about the change.
    std::string info() const;

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* info_raw() const = 0;
    virtual void placeholderCAMEventArgs0() {}
    virtual void placeholderCAMEventArgs1() {}
    virtual void placeholderCAMEventArgs2() {}
    virtual void placeholderCAMEventArgs3() {}
    virtual void placeholderCAMEventArgs4() {}
    virtual void placeholderCAMEventArgs5() {}
    virtual void placeholderCAMEventArgs6() {}
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// An OperationEvent represents an operation related event. For example, OperationBaseCreated or OperationBaseDestroying.
class OperationBaseEvent : public core::Event {
public:

    /// Add a handler to be notified when the file event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(OperationBaseEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(OperationBaseEventHandler* handler);

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(OperationBaseEventHandler* handler) = 0;
    virtual bool remove_raw(OperationBaseEventHandler* handler) = 0;
    virtual void placeholderOperationBaseEvent0() {}
    virtual void placeholderOperationBaseEvent1() {}
    virtual void placeholderOperationBaseEvent2() {}
    virtual void placeholderOperationBaseEvent3() {}
    virtual void placeholderOperationBaseEvent4() {}
    virtual void placeholderOperationBaseEvent5() {}
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The OperationEventArgs provides information associated with an operation event.
class OperationBaseEventArgs : public core::EventArgs {
public:

    /// Provides access to the operation id, even if the operationbase is not assigned any more.
    /// Always returns the first element in operationids.
    /// Used as an utility function for events which are fired for one operation only.
    int operationid() const;

    /// Provides access to the operation. Can be null in the case
    /// where the event is fired before the operation has been created or after it has been deleted.
    /// Always returns the first element in operationbases.
    /// Used as an utility function for events which are fired for one operation only.
    core::Ptr<OperationBase> operationbase() const;

    /// Provides access to the documentation name, even if the document is not assigned any more.
    std::string documentName() const;

    /// Provides access to the document the above operation resides in. May be null in the case
    /// where the event is fired after the document has been deleted.
    core::Ptr<core::Document> document() const;

    /// Provides the error code set by the event. The default is CAMEventErrorCodeEventSuccessful
    CAMEventState eventState() const;

    /// Provides access to the error code set by the event. The default is no error
    std::string stateMessage() const;

    /// Additional event args specific to a certain event or operation.
    /// May be null if an event does not supply more info than the document and the operation base.
    core::Ptr<CAMEventArgs> camEventArgs() const;

    /// Operation event type, to be used if one handler is registered with multiple events to distinguish the incoming event better.
    OperationBaseEventTypes eventType() const;

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int operationid_raw() const = 0;
    virtual OperationBase* operationbase_raw() const = 0;
    virtual char* documentName_raw() const = 0;
    virtual core::Document* document_raw() const = 0;
    virtual CAMEventState eventState_raw() const = 0;
    virtual char* stateMessage_raw() const = 0;
    virtual CAMEventArgs* camEventArgs_raw() const = 0;
    virtual OperationBaseEventTypes eventType_raw() const = 0;
    virtual void placeholderOperationBaseEventArgs0() {}
    virtual void placeholderOperationBaseEventArgs1() {}
    virtual void placeholderOperationBaseEventArgs2() {}
    virtual void placeholderOperationBaseEventArgs3() {}
    virtual void placeholderOperationBaseEventArgs4() {}
    virtual void placeholderOperationBaseEventArgs5() {}
    virtual void placeholderOperationBaseEventArgs6() {}
    virtual void placeholderOperationBaseEventArgs7() {}
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The OperationEventHandler is a client implemented class that can be added as a handler to a
/// OperationEvent.
class OperationBaseEventHandler : public core::EventHandler {
public:

    /// The function called by CAM when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    CAMEVENTS_API virtual void notify(const core::Ptr<OperationBaseEventArgs>& eventArgs) = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event arguments specific to an OperationChanged event.
class OperationChangedEventArgs : public CAMEventArgs {
public:

    /// Provides the type of change on the OperationBase
    CAMEventChangeType changeType() const;

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMEventChangeType changeType_raw() const = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event arguments specific to an operationBaseCommandStarted event.
class OperationBaseCommandStartedEventArgs : public CAMEventArgs {
public:

    /// Flag indicating if the command starting up contains a new operation or is editing an existing one.
    /// If set to true, the operation given by the event is a copy created for editing, whose values can be discarted if the user cancels the command.
    /// If set to false, a temporary operation has been created for editing, thus an OperationCreated event has not been fired.
    /// If the user accepts the command, then the operation will be added permanently, otherwise it will be deleted again.
    bool isEdit() const;

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isEdit_raw() const = 0;
};

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Event arguments specific to an operationBaseCommandButtonPressed event.
class OperationBaseCommandButtonPressedEventArgs : public CAMEventArgs {
public:

    /// The parameter name of the button that has been pressed
    std::string buttonName() const;

    CAMEVENTS_API static const char* classType();
    CAMEVENTS_API const char* objectType() const override;
    CAMEVENTS_API void* queryInterface(const char* id) const override;
    CAMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* buttonName_raw() const = 0;
};

// Inline wrappers

inline std::string CAMEventArgs::info() const
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

inline bool OperationBaseEvent::add(OperationBaseEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool OperationBaseEvent::remove(OperationBaseEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline int OperationBaseEventArgs::operationid() const
{
    int res = operationid_raw();
    return res;
}

inline core::Ptr<OperationBase> OperationBaseEventArgs::operationbase() const
{
    core::Ptr<OperationBase> res = operationbase_raw();
    return res;
}

inline std::string OperationBaseEventArgs::documentName() const
{
    std::string res;

    char* p= documentName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Document> OperationBaseEventArgs::document() const
{
    core::Ptr<core::Document> res = document_raw();
    return res;
}

inline CAMEventState OperationBaseEventArgs::eventState() const
{
    CAMEventState res = eventState_raw();
    return res;
}

inline std::string OperationBaseEventArgs::stateMessage() const
{
    std::string res;

    char* p= stateMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<CAMEventArgs> OperationBaseEventArgs::camEventArgs() const
{
    core::Ptr<CAMEventArgs> res = camEventArgs_raw();
    return res;
}

inline OperationBaseEventTypes OperationBaseEventArgs::eventType() const
{
    OperationBaseEventTypes res = eventType_raw();
    return res;
}

inline CAMEventChangeType OperationChangedEventArgs::changeType() const
{
    CAMEventChangeType res = changeType_raw();
    return res;
}

inline bool OperationBaseCommandStartedEventArgs::isEdit() const
{
    bool res = isEdit_raw();
    return res;
}

inline std::string OperationBaseCommandButtonPressedEventArgs::buttonName() const
{
    std::string res;

    char* p= buttonName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef CAMEVENTS_API