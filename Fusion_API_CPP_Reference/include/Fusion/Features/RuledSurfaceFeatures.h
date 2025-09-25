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
# ifdef __COMPILING_ADSK_FUSION_RULEDSURFACEFEATURES_CPP__
# define ADSK_FUSION_RULEDSURFACEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_RULEDSURFACEFEATURES_API
# endif
#else
# define ADSK_FUSION_RULEDSURFACEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class RuledSurfaceFeature;
    class RuledSurfaceFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Ruled Surface features in a component
/// and supports the ability to create new Ruled Surface features.
class RuledSurfaceFeatures : public core::Base {
public:

    /// Function that returns the specified ruled surface feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RuledSurfaceFeature> item(size_t index) const;

    /// The number of RuledSurface features in the collection.
    size_t count() const;

    /// Creates a RuledSurfaceFeatureInput object that defines the input needed to create a ruled surface feature. Use the input
    /// object to define the input to create the desired feature and then use the Add method, passing in the RuledSurfaceFeatureInput object.
    /// profile : A Profile object that defines the sketch geometry or edges that define the shape of the ruled surface. The Component.createBRepEdgeProfile
    /// method is useful to create a profile defined from edges.
    /// distance : ValueInput object that defines the extension distance of the Ruled Surface..
    /// angle : ValueInput object that defines angle to use when creating the Ruled Surface. When the input is a real value, the units are radians.
    /// ruledSurfaceType : The Ruled Surface type (TangentRuledSurfaceType, NormalRuledSurfaceType, or DirectionRuledSurfaceType).
    /// direction : If the ruled surface type is DirectionRuledSurfaceType, you must specify the direction. The direction is specified by
    /// providing a linear or planar entity. For example, a linear edge, construction axis, planar face, or construction plane can be used as input.
    /// Returns the newly created RuledSurfaceFeatureInput object or null if the creation failed.
    core::Ptr<RuledSurfaceFeatureInput> createInput(const core::Ptr<core::Base>& profile, const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle, RuledSurfaceTypes ruledSurfaceType, const core::Ptr<core::Base>& direction = NULL) const;

    /// Creates a new RuledSurface feature.
    /// input : An RuledSurfaceFeatureInput object that defines the desired RuledSurface feature. Use the createInput
    /// method to create a new RuledSurfaceFeatureInput object and then use methods on it
    /// (the RuledSurfaceFeatureInput object) to define the desired options for the ruled surface feature.
    /// Returns the newly created RuledSurfaceFeature object or null if the creation failed.
    core::Ptr<RuledSurfaceFeature> add(const core::Ptr<RuledSurfaceFeatureInput>& input);

    /// Function that returns the specified RuledSurface feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<RuledSurfaceFeature> itemByName(const std::string& name) const;

    typedef RuledSurfaceFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RULEDSURFACEFEATURES_API static const char* classType();
    ADSK_FUSION_RULEDSURFACEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_RULEDSURFACEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEDSURFACEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RuledSurfaceFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RuledSurfaceFeatureInput* createInput_raw(core::Base* profile, core::ValueInput* distance, core::ValueInput* angle, RuledSurfaceTypes ruledSurfaceType, core::Base* direction) const = 0;
    virtual RuledSurfaceFeature* add_raw(RuledSurfaceFeatureInput* input) = 0;
    virtual RuledSurfaceFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<RuledSurfaceFeature> RuledSurfaceFeatures::item(size_t index) const
{
    core::Ptr<RuledSurfaceFeature> res = item_raw(index);
    return res;
}

inline size_t RuledSurfaceFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RuledSurfaceFeatureInput> RuledSurfaceFeatures::createInput(const core::Ptr<core::Base>& profile, const core::Ptr<core::ValueInput>& distance, const core::Ptr<core::ValueInput>& angle, RuledSurfaceTypes ruledSurfaceType, const core::Ptr<core::Base>& direction) const
{
    core::Ptr<RuledSurfaceFeatureInput> res = createInput_raw(profile.get(), distance.get(), angle.get(), ruledSurfaceType, direction.get());
    return res;
}

inline core::Ptr<RuledSurfaceFeature> RuledSurfaceFeatures::add(const core::Ptr<RuledSurfaceFeatureInput>& input)
{
    core::Ptr<RuledSurfaceFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<RuledSurfaceFeature> RuledSurfaceFeatures::itemByName(const std::string& name) const
{
    core::Ptr<RuledSurfaceFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void RuledSurfaceFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RULEDSURFACEFEATURES_API