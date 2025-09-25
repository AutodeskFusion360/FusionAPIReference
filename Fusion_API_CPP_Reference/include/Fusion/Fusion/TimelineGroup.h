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
#include "TimelineObject.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TIMELINEGROUP_CPP__
# define ADSK_FUSION_TIMELINEGROUP_API XI_EXPORT
# else
# define ADSK_FUSION_TIMELINEGROUP_API
# endif
#else
# define ADSK_FUSION_TIMELINEGROUP_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Represents a group in the timeline.
class TimelineGroup : public TimelineObject {
public:

    /// Deletes the group with the option of deleting or keeping the contents.
    /// deleteGroupAndContents : Indicates if the group and its contents should be deleted or if only the group
    /// should be deleted and the contents kept and expanded. A value of true will delete
    /// the group and its contents.
    /// Returns true if the delete was successful.
    bool deleteMe(bool deleteGroupAndContents);

    /// Indicates if the group is collapsed or expanded.
    bool isCollapsed() const;
    bool isCollapsed(bool value);

    /// Function that returns the specified timeline object within the group using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<TimelineObject> item(size_t index) const;

    /// The number of items in the group.
    size_t count() const;

    typedef TimelineObject iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TIMELINEGROUP_API static const char* classType();
    ADSK_FUSION_TIMELINEGROUP_API const char* objectType() const override;
    ADSK_FUSION_TIMELINEGROUP_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TIMELINEGROUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw(bool deleteGroupAndContents) = 0;
    virtual bool isCollapsed_raw() const = 0;
    virtual bool isCollapsed_raw(bool value) = 0;
    virtual TimelineObject* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline bool TimelineGroup::deleteMe(bool deleteGroupAndContents)
{
    bool res = deleteMe_raw(deleteGroupAndContents);
    return res;
}

inline bool TimelineGroup::isCollapsed() const
{
    bool res = isCollapsed_raw();
    return res;
}

inline bool TimelineGroup::isCollapsed(bool value)
{
    return isCollapsed_raw(value);
}

inline core::Ptr<TimelineObject> TimelineGroup::item(size_t index) const
{
    core::Ptr<TimelineObject> res = item_raw(index);
    return res;
}

inline size_t TimelineGroup::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void TimelineGroup::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TIMELINEGROUP_API