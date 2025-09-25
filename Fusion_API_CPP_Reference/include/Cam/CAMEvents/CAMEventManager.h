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
# ifdef __COMPILING_ADSK_CAM_CAMEVENTMANAGER_CPP__
# define ADSK_CAM_CAMEVENTMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMEVENTMANAGER_API
# endif
#else
# define ADSK_CAM_CAMEVENTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class OperationBaseEvent;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Class exposing all available events in Manufacture.
/// While Setup events have been made available via the CAM object,
/// they will be deprecated soon in favor of being covered by events listed here.
class CAMEventManager : public core::Base {
public:

    /// The operationBaseCommandStarted event fires after the Operation Command has been fully initialized
    /// to give add-ins the opportunity to hook their data into the operaiton.
    /// The OperationBaseCreated event fires when a new operation is created.
    core::Ptr<OperationBaseEvent> operationBaseCommandStarted() const;

    /// The OperationBaseGenerationStarted event fires:
    /// - right before being executed on the main thread
    /// The event is raised for all operations except for toolpath edits.
    core::Ptr<OperationBaseEvent> operationBaseGenerationStarted() const;

    /// The OperationBasePostChange event fires after a change in an operationbase object has been detected.
    /// This can happen whenever an operationbase has been renamed, the tool has changed,
    /// some parameters have changed or a combination of all of those cases.
    /// When listening to this event, the event may be fired multiple times and each will provide different arguments:
    /// 1. whenever an operation is changed in an operation command
    /// 2. after the operation command has been closed
    /// 3. whenever the operation has been changed in the UI without a visible command
    /// 4. whenever the operation has been changed via the API
    /// Cases 1. and 2. may both happen if the user changes the tool of an operation.
    /// The latter contains a summary of all changes done in the operation command.
    core::Ptr<OperationBaseEvent> operationBaseChanged() const;

    /// The OperationBaseGenerationStarting event fires:
    /// - either when a task has been prepared and awaits execution on a separate thread
    /// - or, if the generation is done in an addin or script, after the generation routine would have started for the other two cases
    /// The event is raised for all operations except for toolpath edits.
    core::Ptr<OperationBaseEvent> operationBaseGenerationStarting() const;

    /// The OperationBaseCommandButtonPressed event fires after a custom parameter button has been pressed.
    /// The event is not fired when a button belonging to a native parameter is pressed,
    /// i.e. the "Tool" button which opens the tool library.
    core::Ptr<OperationBaseEvent> operationBaseCommandButtonPressed() const;

    ADSK_CAM_CAMEVENTMANAGER_API static const char* classType();
    ADSK_CAM_CAMEVENTMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMEVENTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMEVENTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationBaseEvent* operationBaseCommandStarted_raw() const = 0;
    virtual OperationBaseEvent* operationBaseGenerationStarted_raw() const = 0;
    virtual OperationBaseEvent* operationBaseChanged_raw() const = 0;
    virtual OperationBaseEvent* operationBaseGenerationStarting_raw() const = 0;
    virtual OperationBaseEvent* operationBaseCommandButtonPressed_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<OperationBaseEvent> CAMEventManager::operationBaseCommandStarted() const
{
    core::Ptr<OperationBaseEvent> res = operationBaseCommandStarted_raw();
    return res;
}

inline core::Ptr<OperationBaseEvent> CAMEventManager::operationBaseGenerationStarted() const
{
    core::Ptr<OperationBaseEvent> res = operationBaseGenerationStarted_raw();
    return res;
}

inline core::Ptr<OperationBaseEvent> CAMEventManager::operationBaseChanged() const
{
    core::Ptr<OperationBaseEvent> res = operationBaseChanged_raw();
    return res;
}

inline core::Ptr<OperationBaseEvent> CAMEventManager::operationBaseGenerationStarting() const
{
    core::Ptr<OperationBaseEvent> res = operationBaseGenerationStarting_raw();
    return res;
}

inline core::Ptr<OperationBaseEvent> CAMEventManager::operationBaseCommandButtonPressed() const
{
    core::Ptr<OperationBaseEvent> res = operationBaseCommandButtonPressed_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMEVENTMANAGER_API