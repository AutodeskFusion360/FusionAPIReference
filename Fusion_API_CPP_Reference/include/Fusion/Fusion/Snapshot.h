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
# ifdef __COMPILING_ADSK_FUSION_SNAPSHOT_CPP__
# define ADSK_FUSION_SNAPSHOT_API XI_EXPORT
# else
# define ADSK_FUSION_SNAPSHOT_API
# endif
#else
# define ADSK_FUSION_SNAPSHOT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Object that represents a Snapshot in the timeline
class Snapshot : public core::Base {
public:

    /// Gets and sets the name of the snapshot as seen in the timeline.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the timeline object associated with this snapshot.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Deletes this snapshot.
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_FUSION_SNAPSHOT_API static const char* classType();
    ADSK_FUSION_SNAPSHOT_API const char* objectType() const override;
    ADSK_FUSION_SNAPSHOT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SNAPSHOT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline std::string Snapshot::name() const
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

inline bool Snapshot::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<TimelineObject> Snapshot::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline bool Snapshot::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SNAPSHOT_API