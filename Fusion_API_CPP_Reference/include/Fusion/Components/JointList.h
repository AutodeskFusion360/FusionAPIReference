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
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_JOINTLIST_CPP__
# define ADSK_FUSION_JOINTLIST_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTLIST_API
# endif
#else
# define ADSK_FUSION_JOINTLIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Joint;
}}

namespace adsk { namespace fusion {

/// A list of joints.
class JointList : public core::Base {
public:

    /// Function that returns the specified joint using an index into the list.
    /// index : The index of the item within the list to return. The first item in the list has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Joint> item(size_t index) const;

    /// Function that returns the specified joint using a name.
    /// name : The name of the item within the list to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<Joint> itemByName(const std::string& name) const;

    /// Returns number of joints in the list.
    size_t count() const;

    typedef Joint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_JOINTLIST_API static const char* classType();
    ADSK_FUSION_JOINTLIST_API const char* objectType() const override;
    ADSK_FUSION_JOINTLIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Joint* item_raw(size_t index) const = 0;
    virtual Joint* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Joint> JointList::item(size_t index) const
{
    core::Ptr<Joint> res = item_raw(index);
    return res;
}

inline core::Ptr<Joint> JointList::itemByName(const std::string& name) const
{
    core::Ptr<Joint> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t JointList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void JointList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTLIST_API