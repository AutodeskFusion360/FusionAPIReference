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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CHILDOPERATIONLIST_CPP__
# define ADSK_CAM_CHILDOPERATIONLIST_API XI_EXPORT
# else
# define ADSK_CAM_CHILDOPERATIONLIST_API
# endif
#else
# define ADSK_CAM_CHILDOPERATIONLIST_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Provides access to the collection of child operations, folders and patterns of an existing setup.
class ChildOperationList : public core::Base {
public:

    /// Returns the specified item using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<core::Base> item(size_t index) const;

    /// Returns the operation, folder or pattern with the specified name (the name seen in the browser).
    /// name : The name of the operation, folder or pattern as seen in the browser.
    /// Returns the specified item or null in the case where there is no item with the specified name.
    core::Ptr<core::Base> itemByName(const std::string& name) const;

    /// Gets the number of objects in the collection.
    size_t count() const;

    /// Returns the operation, folder or pattern with the specified operation id.
    /// id : The id of the operation, folder or pattern.
    /// Returns the specified item or null in the case where there is no item with the specified operation id.
    core::Ptr<core::Base> itemByOperationId(int id) const;

    typedef core::Base iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CHILDOPERATIONLIST_API static const char* classType();
    ADSK_CAM_CHILDOPERATIONLIST_API const char* objectType() const override;
    ADSK_CAM_CHILDOPERATIONLIST_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CHILDOPERATIONLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* item_raw(size_t index) const = 0;
    virtual core::Base* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual core::Base* itemByOperationId_raw(int id) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ChildOperationList::item(size_t index) const
{
    core::Ptr<core::Base> res = item_raw(index);
    return res;
}

inline core::Ptr<core::Base> ChildOperationList::itemByName(const std::string& name) const
{
    core::Ptr<core::Base> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ChildOperationList::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<core::Base> ChildOperationList::itemByOperationId(int id) const
{
    core::Ptr<core::Base> res = itemByOperationId_raw(id);
    return res;
}

template <class OutputIterator> inline void ChildOperationList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CHILDOPERATIONLIST_API