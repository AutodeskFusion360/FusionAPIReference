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
# ifdef __COMPILING_ADSK_FUSION_LOFTCENTERLINEORRAILS_CPP__
# define ADSK_FUSION_LOFTCENTERLINEORRAILS_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTCENTERLINEORRAILS_API
# endif
#else
# define ADSK_FUSION_LOFTCENTERLINEORRAILS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class LoftCenterLineOrRail;
}}

namespace adsk { namespace fusion {

/// Defines a single centerline or one or more rails for a loft feature.
class LoftCenterLineOrRails : public core::Base {
public:

    /// The number of centerlines or rails in the collection.
    size_t count() const;

    /// Function that returns the specified LoftCenterLineOrRail using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<LoftCenterLineOrRail> item(int index) const;

    /// Indicates if a centerline or rails are currently defined.
    bool isCenterLine() const;

    /// Adds a centerline. A single centerline can be defined for a loft. If a centerline or rails have already
    /// been defined, they will be removed and the input will become the new single centerline.
    /// 
    /// If this LoftCenterLineOrRails object is associated with a created feature,
    /// entity : The entity that defines the center line. This can be a single sketch curve, a single BRepEdge, a Path consisting of
    /// connected B-Rep edges or sketch curves.
    /// Returns the new LoftCenterLineOrRail object or null in the case of a failure.
    core::Ptr<LoftCenterLineOrRail> addCenterLine(const core::Ptr<core::Base>& entity);

    /// Add a rail to the loft definition. Multiple rails can be defined, so each call of this
    /// method adds a new rail.
    /// 
    /// If this LoftCenterLineOrRails object is associated with a created feature, you need to position the timeline
    /// marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entity : The entity that defines the rail. This can be a single sketch curve, a single BRepEdge, or a Path consisting of
    /// connected B-Rep edges or sketch curves.
    /// Returns the new LoftCenterLineOrRail object or null in the case of a failure.
    core::Ptr<LoftCenterLineOrRail> addRail(const core::Ptr<core::Base>& entity);

    typedef LoftCenterLineOrRail iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_LOFTCENTERLINEORRAILS_API static const char* classType();
    ADSK_FUSION_LOFTCENTERLINEORRAILS_API const char* objectType() const override;
    ADSK_FUSION_LOFTCENTERLINEORRAILS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTCENTERLINEORRAILS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual LoftCenterLineOrRail* item_raw(int index) const = 0;
    virtual bool isCenterLine_raw() const = 0;
    virtual LoftCenterLineOrRail* addCenterLine_raw(core::Base* entity) = 0;
    virtual LoftCenterLineOrRail* addRail_raw(core::Base* entity) = 0;
};

// Inline wrappers

inline size_t LoftCenterLineOrRails::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<LoftCenterLineOrRail> LoftCenterLineOrRails::item(int index) const
{
    core::Ptr<LoftCenterLineOrRail> res = item_raw(index);
    return res;
}

inline bool LoftCenterLineOrRails::isCenterLine() const
{
    bool res = isCenterLine_raw();
    return res;
}

inline core::Ptr<LoftCenterLineOrRail> LoftCenterLineOrRails::addCenterLine(const core::Ptr<core::Base>& entity)
{
    core::Ptr<LoftCenterLineOrRail> res = addCenterLine_raw(entity.get());
    return res;
}

inline core::Ptr<LoftCenterLineOrRail> LoftCenterLineOrRails::addRail(const core::Ptr<core::Base>& entity)
{
    core::Ptr<LoftCenterLineOrRail> res = addRail_raw(entity.get());
    return res;
}

template <class OutputIterator> inline void LoftCenterLineOrRails::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTCENTERLINEORRAILS_API