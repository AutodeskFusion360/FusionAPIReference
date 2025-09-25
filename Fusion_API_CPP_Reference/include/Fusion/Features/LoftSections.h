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
# ifdef __COMPILING_ADSK_FUSION_LOFTSECTIONS_CPP__
# define ADSK_FUSION_LOFTSECTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTSECTIONS_API
# endif
#else
# define ADSK_FUSION_LOFTSECTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class LoftSection;
}}

namespace adsk { namespace fusion {

/// The set of two or more sections used to define the shape of the loft.
class LoftSections : public core::Base {
public:

    /// The number of LoftSections in the collection.
    size_t count() const;

    /// Function that returns the specified LoftSection using an index into the collection. They are returned
    /// in the same order that they are used in the loft. Their order can be modified using the reorder method
    /// of the LoftSection object.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<LoftSection> item(int index) const;

    /// Adds a new section to the loft. The initial end condition is "Free". Additional methods on the
    /// returned LoftSection can be used to further define the section.
    /// 
    /// If this LoftSections object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// entity : Specifies the BRepFace, Profile, Path, SketchPoint, ConstructionPoint, or an ObjectCollection containing
    /// a contiguous set of Profile objects that defines the section.
    /// Returns the newly created LoftSection object.
    core::Ptr<LoftSection> add(const core::Ptr<core::Base>& entity);

    typedef LoftSection iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_LOFTSECTIONS_API static const char* classType();
    ADSK_FUSION_LOFTSECTIONS_API const char* objectType() const override;
    ADSK_FUSION_LOFTSECTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTSECTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual LoftSection* item_raw(int index) const = 0;
    virtual LoftSection* add_raw(core::Base* entity) = 0;
};

// Inline wrappers

inline size_t LoftSections::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<LoftSection> LoftSections::item(int index) const
{
    core::Ptr<LoftSection> res = item_raw(index);
    return res;
}

inline core::Ptr<LoftSection> LoftSections::add(const core::Ptr<core::Base>& entity)
{
    core::Ptr<LoftSection> res = add_raw(entity.get());
    return res;
}

template <class OutputIterator> inline void LoftSections::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTSECTIONS_API