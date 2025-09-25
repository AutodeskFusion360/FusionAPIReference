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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMADDITIVECONTAINER_CPP__
# define ADSK_CAM_CAMADDITIVECONTAINER_API XI_EXPORT
# else
# define ADSK_CAM_CAMADDITIVECONTAINER_API
# endif
#else
# define ADSK_CAM_CAMADDITIVECONTAINER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ChildOperationList;
}}
namespace adsk { namespace core {
    class ObjectCollection;
}}

namespace adsk { namespace cam {

/// Object that represents an additive container in an existing Setup.
/// Note: All additive containers cannot be duplicated and depending on the type, some cannot be deleted.
class CAMAdditiveContainer : public OperationBase {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns a collection containing all of the immediate (top level) child operations, folders and patterns in this container
    /// in the order they appear in the browser.
    core::Ptr<ChildOperationList> children() const;

    /// Returns the parent Setup.
    core::Ptr<core::Base> parent() const;

    /// Gets a collection containing all of the operations in this container.
    /// This includes all operations nested in folders and patterns.
    core::Ptr<core::ObjectCollection> allOperations() const;

    ADSK_CAM_CAMADDITIVECONTAINER_API static const char* classType();
    ADSK_CAM_CAMADDITIVECONTAINER_API const char* objectType() const override;
    ADSK_CAM_CAMADDITIVECONTAINER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMADDITIVECONTAINER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ChildOperationList* children_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual core::ObjectCollection* allOperations_raw() const = 0;
    virtual void placeholderCAMAdditiveContainer0() {}
    virtual void placeholderCAMAdditiveContainer1() {}
    virtual void placeholderCAMAdditiveContainer2() {}
    virtual void placeholderCAMAdditiveContainer3() {}
    virtual void placeholderCAMAdditiveContainer4() {}
    virtual void placeholderCAMAdditiveContainer5() {}
    virtual void placeholderCAMAdditiveContainer6() {}
    virtual void placeholderCAMAdditiveContainer7() {}
    virtual void placeholderCAMAdditiveContainer8() {}
    virtual void placeholderCAMAdditiveContainer9() {}
    virtual void placeholderCAMAdditiveContainer10() {}
    virtual void placeholderCAMAdditiveContainer11() {}
    virtual void placeholderCAMAdditiveContainer12() {}
};

// Inline wrappers

inline core::Ptr<ChildOperationList> CAMAdditiveContainer::children() const
{
    core::Ptr<ChildOperationList> res = children_raw();
    return res;
}

inline core::Ptr<core::Base> CAMAdditiveContainer::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> CAMAdditiveContainer::allOperations() const
{
    core::Ptr<core::ObjectCollection> res = allOperations_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMADDITIVECONTAINER_API