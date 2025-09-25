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
# ifdef __COMPILING_ADSK_FUSION_TIMELINE_CPP__
# define ADSK_FUSION_TIMELINE_API XI_EXPORT
# else
# define ADSK_FUSION_TIMELINE_API
# endif
#else
# define ADSK_FUSION_TIMELINE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TimelineGroups;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// A collection of TimelineObjects in a parametric design.
class Timeline : public core::Base {
public:

    /// Moves the marker to the beginning of the timeline.
    /// Returns true if the move is successful
    bool moveToBeginning();

    /// Moves the marker to the end of the timeline.
    /// Returns true if the move is successful
    bool moveToEnd();

    /// Moves the marker to the next step in the timeline.
    /// Returns true if the move is successful
    bool movetoNextStep();

    /// Moves the marker to the previous step in the timeline.
    /// Returns true if the move is successful
    bool moveToPreviousStep();

    /// Plays the timeline beginning at the current position of the marker.
    /// Returns true if playing the timeline was successful
    bool play();

    /// Gets and sets the current position of the marker where
    /// 0 is at the beginning of the timeline and the value of Timeline.count is the end of the
    /// timeline.
    int markerPosition() const;
    bool markerPosition(int value);

    /// Function that returns the specified item in the timeline using an index into the collection.
    /// The items are returned in the order they appear in the timeline.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified TimeLineObject or null if an invalid index was specified. A TimeLineObject
    /// represents both a simple timeline object like a feature or sketch, but is also the base class
    /// for the TimelineGroup object. This means the this method can return a TimelineObject or a
    /// TimelineGroup.
    core::Ptr<TimelineObject> item(size_t index) const;

    /// Returns the number of items in the collection.
    size_t count() const;

    /// Returns the collection of groups within the timeline.
    core::Ptr<TimelineGroups> timelineGroups() const;

    /// Deletes all objects in the timeline that are after the current position of the marker.
    /// Returns true if successful.
    bool deleteAllAfterMarker();

    typedef TimelineObject iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_TIMELINE_API static const char* classType();
    ADSK_FUSION_TIMELINE_API const char* objectType() const override;
    ADSK_FUSION_TIMELINE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TIMELINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool moveToBeginning_raw() = 0;
    virtual bool moveToEnd_raw() = 0;
    virtual bool movetoNextStep_raw() = 0;
    virtual bool moveToPreviousStep_raw() = 0;
    virtual bool play_raw() = 0;
    virtual int markerPosition_raw() const = 0;
    virtual bool markerPosition_raw(int value) = 0;
    virtual TimelineObject* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual TimelineGroups* timelineGroups_raw() const = 0;
    virtual bool deleteAllAfterMarker_raw() = 0;
};

// Inline wrappers

inline bool Timeline::moveToBeginning()
{
    bool res = moveToBeginning_raw();
    return res;
}

inline bool Timeline::moveToEnd()
{
    bool res = moveToEnd_raw();
    return res;
}

inline bool Timeline::movetoNextStep()
{
    bool res = movetoNextStep_raw();
    return res;
}

inline bool Timeline::moveToPreviousStep()
{
    bool res = moveToPreviousStep_raw();
    return res;
}

inline bool Timeline::play()
{
    bool res = play_raw();
    return res;
}

inline int Timeline::markerPosition() const
{
    int res = markerPosition_raw();
    return res;
}

inline bool Timeline::markerPosition(int value)
{
    return markerPosition_raw(value);
}

inline core::Ptr<TimelineObject> Timeline::item(size_t index) const
{
    core::Ptr<TimelineObject> res = item_raw(index);
    return res;
}

inline size_t Timeline::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<TimelineGroups> Timeline::timelineGroups() const
{
    core::Ptr<TimelineGroups> res = timelineGroups_raw();
    return res;
}

inline bool Timeline::deleteAllAfterMarker()
{
    bool res = deleteAllAfterMarker_raw();
    return res;
}

template <class OutputIterator> inline void Timeline::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TIMELINE_API