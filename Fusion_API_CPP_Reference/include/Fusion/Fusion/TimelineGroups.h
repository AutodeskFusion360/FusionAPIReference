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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TIMELINEGROUPS_CPP__
# define ADSK_FUSION_TIMELINEGROUPS_API XI_EXPORT
# else
# define ADSK_FUSION_TIMELINEGROUPS_API
# endif
#else
# define ADSK_FUSION_TIMELINEGROUPS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TimelineGroup;
}}

namespace adsk { namespace fusion {

/// Provides access to the time line groups within a design and provides
/// methods to create new groups.
class TimelineGroups : public core::Base {
public:

    /// Creates a new group within the timeline. The sequential set of items defined
    /// by the start and end indices will be included in the group. A group cannot contains
    /// another group so none of the items being grouped can be a group of this will fail.
    /// startIndex : The index of the first item in the timeline that will be added to the group.
    /// endIndex : The index of the last item in the timeline that will be added to the group.
    /// Returns the created TimelineGroup object or null in the case of failure.
    core::Ptr<TimelineGroup> add(int startIndex, int endIndex);

    /// Function that returns the specified timeline group using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<TimelineGroup> item(size_t index) const;

    /// Returns the number of items in the collection.
    size_t count() const;

    typedef TimelineGroup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TIMELINEGROUPS_API static const char* classType();
    ADSK_FUSION_TIMELINEGROUPS_API const char* objectType() const override;
    ADSK_FUSION_TIMELINEGROUPS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TIMELINEGROUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TimelineGroup* add_raw(int startIndex, int endIndex) = 0;
    virtual TimelineGroup* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<TimelineGroup> TimelineGroups::add(int startIndex, int endIndex)
{
    core::Ptr<TimelineGroup> res = add_raw(startIndex, endIndex);
    return res;
}

inline core::Ptr<TimelineGroup> TimelineGroups::item(size_t index) const
{
    core::Ptr<TimelineGroup> res = item_raw(index);
    return res;
}

inline size_t TimelineGroups::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void TimelineGroups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TIMELINEGROUPS_API