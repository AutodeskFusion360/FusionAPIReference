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
#include "../Operations/OperationBase.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMHOLERECOGNITION_CPP__
# define ADSK_CAM_CAMHOLERECOGNITION_API XI_EXPORT
# else
# define ADSK_CAM_CAMHOLERECOGNITION_API
# endif
#else
# define ADSK_CAM_CAMHOLERECOGNITION_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMFolders;
    class ChildOperationList;
    class Operations;
}}

namespace adsk { namespace cam {

/// Object that represents a hole recognition object in an existing Setup, Folder or Pattern.
class CAMHoleRecognition : public OperationBase {
public:

    /// Gets if this hole recognition is active.
    bool isActive() const;

    /// Returns the Operations collection that provides access to existing individual operations
    /// in this hole recognition.
    core::Ptr<Operations> operations() const;

    /// Returns the Folders collection that provides access to existing folders
    /// in this hole recognition.
    core::Ptr<CAMFolders> folders() const;

    /// Returns a collection containing all of the immediate (top level) child operations, folders and patterns in this folder
    /// in the order they appear in the browser.
    core::Ptr<ChildOperationList> children() const;

    /// Returns the parent Setup, Folder or Pattern for this Folder.
    core::Ptr<core::Base> parent() const;

    /// Returns an array containing all of the operations in this hole recognition.
    /// This includes all operations nested in folders and patterns.
    std::vector<core::Ptr<OperationBase>> allOperations() const;

    /// Set this object as the default container.
    /// Returns true if the activation was successful.
    bool activate();

    ADSK_CAM_CAMHOLERECOGNITION_API static const char* classType();
    ADSK_CAM_CAMHOLERECOGNITION_API const char* objectType() const override;
    ADSK_CAM_CAMHOLERECOGNITION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMHOLERECOGNITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isActive_raw() const = 0;
    virtual Operations* operations_raw() const = 0;
    virtual CAMFolders* folders_raw() const = 0;
    virtual ChildOperationList* children_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual OperationBase** allOperations_raw(size_t& return_size) const = 0;
    virtual bool activate_raw() = 0;
};

// Inline wrappers

inline bool CAMHoleRecognition::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline core::Ptr<Operations> CAMHoleRecognition::operations() const
{
    core::Ptr<Operations> res = operations_raw();
    return res;
}

inline core::Ptr<CAMFolders> CAMHoleRecognition::folders() const
{
    core::Ptr<CAMFolders> res = folders_raw();
    return res;
}

inline core::Ptr<ChildOperationList> CAMHoleRecognition::children() const
{
    core::Ptr<ChildOperationList> res = children_raw();
    return res;
}

inline core::Ptr<core::Base> CAMHoleRecognition::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline std::vector<core::Ptr<OperationBase>> CAMHoleRecognition::allOperations() const
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= allOperations_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMHoleRecognition::activate()
{
    bool res = activate_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMHOLERECOGNITION_API