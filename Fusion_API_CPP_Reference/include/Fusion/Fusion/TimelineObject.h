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
# ifdef __COMPILING_ADSK_FUSION_TIMELINEOBJECT_CPP__
# define ADSK_FUSION_TIMELINEOBJECT_API XI_EXPORT
# else
# define ADSK_FUSION_TIMELINEOBJECT_API
# endif
#else
# define ADSK_FUSION_TIMELINEOBJECT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TimelineGroup;
}}

namespace adsk { namespace fusion {

/// Represents an object in the timeline.
class TimelineObject : public core::Base {
public:

    /// Gets and sets if this object is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Returns the parent group, if this object is part of a group.
    /// Returns null if this object is not part of a group.
    core::Ptr<TimelineGroup> parentGroup() const;

    /// Returns the position of this item within the timeline where
    /// the first item has an index of 0.
    /// 
    /// This property can return -1 in the two cases where this object
    /// is not currently represented in the timeline. The two cases are:
    /// 
    /// 1. When this is a TimelineGroup object and the group is expanded.
    /// 
    /// 2. When this object is part of a group and the group is collapsed.
    int index() const;

    /// Indicates if this item is currently not being computed
    /// because it has been rolled back.
    /// 
    /// If this is a timelineGroup object and the group is expanded
    /// the value of this property should be ignored.
    bool isRolledBack() const;

    /// Rolls the timeline by repositioning the marker to either before or after this object.
    /// This method will fail if this is a timelineGroup object and the group is expanded.
    /// rollBefore : Set rollBefore to true to reposition the marker before this object or to false to
    /// reposition the marker after this object
    /// Returns true if the move was successful
    bool rollTo(bool rollBefore);

    /// Returns the entity associated with this timeline object.
    /// Edit operations can be performed by getting the object
    /// representing the associated entity and using the methods
    /// and properties on that entity to make changes.
    /// 
    /// Returns null if this TimelineObject represents a TimelineGroup object,
    /// since it does not have an associated entity.
    core::Ptr<core::Base> entity() const;

    /// Checks to see if this object can be reordered to the specified position.
    /// The default value of -1 indicates the end of the timeline.
    /// 
    /// This method will fail if this is a timelineGroup object and the group is expanded.
    /// beforeIndex : The index number of the position in the timeline to check
    /// Returns true if the object can be reordered to the specified position
    bool canReorder(int beforeIndex = -1);

    /// Reorders this object to the position specified.
    /// The default value of -1 indicates the end of the timeline.
    /// 
    /// beforeIndex : The index number of the position in the timeline to place this object before
    /// Returns true if the reorder operation was successful
    /// This method will fail and return false if this is a timelineGroup object and the
    /// group is expanded.
    bool reorder(int beforeIndex = -1);

    /// Indicates if this TimelineObject represents a group. If True you can
    /// operate on this object as a TimelineGroup object.
    bool isGroup() const;

    /// Gets and sets the name of this timeline object. This name is shared by the object
    /// the timeline object represents. For example, if the TimelineObject represents a Sketch
    /// and you change the name using the TimelineObject, the name of the sketch in the browser
    /// is also changed. The reverse is also true. Setting the name of an object; sketch, feature
    /// construction geometry, etc, will also change the name of the associated node in the timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the current health state of the object associated with this TimelineObject.
    FeatureHealthStates healthState() const;

    /// Returns the error or warning message in the case where the healthState property returns either
    /// WarningFeatureHealthState or ErrorFeatureHealthState. Otherwise this property returns an empty string.
    std::string errorOrWarningMessage() const;

    ADSK_FUSION_TIMELINEOBJECT_API static const char* classType();
    ADSK_FUSION_TIMELINEOBJECT_API const char* objectType() const override;
    ADSK_FUSION_TIMELINEOBJECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TIMELINEOBJECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual TimelineGroup* parentGroup_raw() const = 0;
    virtual int index_raw() const = 0;
    virtual bool isRolledBack_raw() const = 0;
    virtual bool rollTo_raw(bool rollBefore) = 0;
    virtual core::Base* entity_raw() const = 0;
    virtual bool canReorder_raw(int beforeIndex) = 0;
    virtual bool reorder_raw(int beforeIndex) = 0;
    virtual bool isGroup_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual FeatureHealthStates healthState_raw() const = 0;
    virtual char* errorOrWarningMessage_raw() const = 0;
    virtual void placeholderTimelineObject0() {}
    virtual void placeholderTimelineObject1() {}
    virtual void placeholderTimelineObject2() {}
    virtual void placeholderTimelineObject3() {}
    virtual void placeholderTimelineObject4() {}
    virtual void placeholderTimelineObject5() {}
    virtual void placeholderTimelineObject6() {}
    virtual void placeholderTimelineObject7() {}
    virtual void placeholderTimelineObject8() {}
    virtual void placeholderTimelineObject9() {}
    virtual void placeholderTimelineObject10() {}
    virtual void placeholderTimelineObject11() {}
    virtual void placeholderTimelineObject12() {}
    virtual void placeholderTimelineObject13() {}
    virtual void placeholderTimelineObject14() {}
    virtual void placeholderTimelineObject15() {}
    virtual void placeholderTimelineObject16() {}
    virtual void placeholderTimelineObject17() {}
    virtual void placeholderTimelineObject18() {}
    virtual void placeholderTimelineObject19() {}
    virtual void placeholderTimelineObject20() {}
    virtual void placeholderTimelineObject21() {}
    virtual void placeholderTimelineObject22() {}
    virtual void placeholderTimelineObject23() {}
    virtual void placeholderTimelineObject24() {}
    virtual void placeholderTimelineObject25() {}
    virtual void placeholderTimelineObject26() {}
    virtual void placeholderTimelineObject27() {}
    virtual void placeholderTimelineObject28() {}
    virtual void placeholderTimelineObject29() {}
    virtual void placeholderTimelineObject30() {}
    virtual void placeholderTimelineObject31() {}
    virtual void placeholderTimelineObject32() {}
    virtual void placeholderTimelineObject33() {}
    virtual void placeholderTimelineObject34() {}
    virtual void placeholderTimelineObject35() {}
    virtual void placeholderTimelineObject36() {}
    virtual void placeholderTimelineObject37() {}
    virtual void placeholderTimelineObject38() {}
    virtual void placeholderTimelineObject39() {}
    virtual void placeholderTimelineObject40() {}
    virtual void placeholderTimelineObject41() {}
    virtual void placeholderTimelineObject42() {}
    virtual void placeholderTimelineObject43() {}
    virtual void placeholderTimelineObject44() {}
    virtual void placeholderTimelineObject45() {}
    virtual void placeholderTimelineObject46() {}
    virtual void placeholderTimelineObject47() {}
    virtual void placeholderTimelineObject48() {}
    virtual void placeholderTimelineObject49() {}
};

// Inline wrappers

inline bool TimelineObject::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool TimelineObject::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<TimelineGroup> TimelineObject::parentGroup() const
{
    core::Ptr<TimelineGroup> res = parentGroup_raw();
    return res;
}

inline int TimelineObject::index() const
{
    int res = index_raw();
    return res;
}

inline bool TimelineObject::isRolledBack() const
{
    bool res = isRolledBack_raw();
    return res;
}

inline bool TimelineObject::rollTo(bool rollBefore)
{
    bool res = rollTo_raw(rollBefore);
    return res;
}

inline core::Ptr<core::Base> TimelineObject::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline bool TimelineObject::canReorder(int beforeIndex)
{
    bool res = canReorder_raw(beforeIndex);
    return res;
}

inline bool TimelineObject::reorder(int beforeIndex)
{
    bool res = reorder_raw(beforeIndex);
    return res;
}

inline bool TimelineObject::isGroup() const
{
    bool res = isGroup_raw();
    return res;
}

inline std::string TimelineObject::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool TimelineObject::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline FeatureHealthStates TimelineObject::healthState() const
{
    FeatureHealthStates res = healthState_raw();
    return res;
}

inline std::string TimelineObject::errorOrWarningMessage() const
{
    std::string res;

    char* p= errorOrWarningMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TIMELINEOBJECT_API