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
# ifdef __COMPILING_ADSK_FUSION_RIGIDGROUPS_CPP__
# define ADSK_FUSION_RIGIDGROUPS_API XI_EXPORT
# else
# define ADSK_FUSION_RIGIDGROUPS_API
# endif
#else
# define ADSK_FUSION_RIGIDGROUPS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class RigidGroup;
}}

namespace adsk { namespace fusion {

/// The collection of rigid groups in this component. This provides access to all existing
/// rigid groups and supports the ability to create new rigid groups.
class RigidGroups : public core::Base {
public:

    /// Function that returns the specified rigid group using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RigidGroup> item(size_t index) const;

    /// Function that returns the specified rigid group using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<RigidGroup> itemByName(const std::string& name) const;

    /// Returns number of joint origins in the collection.
    size_t count() const;

    /// Creates a new rigid group.
    /// occurrences : An ObjectCollection containing the occurrences to use in creating the rigid group.
    /// includeChildren : Boolean indicating if the children of the input occurrences should be included in the rigid group.
    /// Returns the new RigidGroup object or null in the case of failure.
    core::Ptr<RigidGroup> add(const core::Ptr<core::ObjectCollection>& occurrences, bool includeChildren);

    typedef RigidGroup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RIGIDGROUPS_API static const char* classType();
    ADSK_FUSION_RIGIDGROUPS_API const char* objectType() const override;
    ADSK_FUSION_RIGIDGROUPS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIGIDGROUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RigidGroup* item_raw(size_t index) const = 0;
    virtual RigidGroup* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RigidGroup* add_raw(core::ObjectCollection* occurrences, bool includeChildren) = 0;
};

// Inline wrappers

inline core::Ptr<RigidGroup> RigidGroups::item(size_t index) const
{
    core::Ptr<RigidGroup> res = item_raw(index);
    return res;
}

inline core::Ptr<RigidGroup> RigidGroups::itemByName(const std::string& name) const
{
    core::Ptr<RigidGroup> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t RigidGroups::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RigidGroup> RigidGroups::add(const core::Ptr<core::ObjectCollection>& occurrences, bool includeChildren)
{
    core::Ptr<RigidGroup> res = add_raw(occurrences.get(), includeChildren);
    return res;
}

template <class OutputIterator> inline void RigidGroups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIGIDGROUPS_API