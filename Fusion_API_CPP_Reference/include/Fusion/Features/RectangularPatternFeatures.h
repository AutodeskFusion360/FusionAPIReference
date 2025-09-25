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
# ifdef __COMPILING_ADSK_FUSION_RECTANGULARPATTERNFEATURES_CPP__
# define ADSK_FUSION_RECTANGULARPATTERNFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_RECTANGULARPATTERNFEATURES_API
# endif
#else
# define ADSK_FUSION_RECTANGULARPATTERNFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class RectangularPatternFeature;
    class RectangularPatternFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing rectangular pattern features in a component
/// and supports the ability to create new rectangular pattern features.
class RectangularPatternFeatures : public core::Base {
public:

    /// Function that returns the specified rectangular pattern feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RectangularPatternFeature> item(size_t index) const;

    /// The number of rectangular pattern features in the collection.
    size_t count() const;

    /// Creates a RectangularPatternFeatureInput object. Use properties and methods on this object
    /// to define the rectangular pattern you want to create and then use the Add method, passing in
    /// the RectangularPatternFeatureInput object.
    /// inputEntities : The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// directionOneEntity : Specifies the entity used to define the first direction entity. This can be a linear edge, construction axis, sketch line or rectangular pattern feature.
    /// If a rectangular pattern feature is set, the directionOneEntity and directionTwoEntity properties return the same rectangular pattern feature.
    /// quantityOne : Specifies the number of instances in the first direction.
    /// distanceOne : Specifies the distance in the first direction. How this value is used depends on the value of the PatternDistanceType property. A
    /// negative value can be used to change the direction.
    /// If the value is ExtentPatternDistanceType then it defines the total distance of the pattern.
    /// If the value is SpacingPatternDistanceType then it defines the distance between each element.
    /// patternDistanceType : Specifies how the distance between elements is computed.
    /// Returns the newly created RectangularPatternFeatureInput object or null if the creation failed.
    core::Ptr<RectangularPatternFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne, PatternDistanceType patternDistanceType) const;

    /// Creates a new rectangular pattern feature.
    /// input : A RectangularPatternFeatureInput object that defines the desired rectangular pattern. Use the createInput
    /// method to create a new RectangularPatternFeatureInput object and then use methods on it
    /// (the RectangularPatternFeatureInput object) to define the rectangular pattern.
    /// Returns the newly created RectangularPatternFeature object or null if the creation failed.
    core::Ptr<RectangularPatternFeature> add(const core::Ptr<RectangularPatternFeatureInput>& input);

    /// Function that returns the specified rectangular pattern feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<RectangularPatternFeature> itemByName(const std::string& name) const;

    typedef RectangularPatternFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RECTANGULARPATTERNFEATURES_API static const char* classType();
    ADSK_FUSION_RECTANGULARPATTERNFEATURES_API const char* objectType() const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RECTANGULARPATTERNFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RectangularPatternFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RectangularPatternFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, core::Base* directionOneEntity, core::ValueInput* quantityOne, core::ValueInput* distanceOne, PatternDistanceType patternDistanceType) const = 0;
    virtual RectangularPatternFeature* add_raw(RectangularPatternFeatureInput* input) = 0;
    virtual RectangularPatternFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<RectangularPatternFeature> RectangularPatternFeatures::item(size_t index) const
{
    core::Ptr<RectangularPatternFeature> res = item_raw(index);
    return res;
}

inline size_t RectangularPatternFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RectangularPatternFeatureInput> RectangularPatternFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& directionOneEntity, const core::Ptr<core::ValueInput>& quantityOne, const core::Ptr<core::ValueInput>& distanceOne, PatternDistanceType patternDistanceType) const
{
    core::Ptr<RectangularPatternFeatureInput> res = createInput_raw(inputEntities.get(), directionOneEntity.get(), quantityOne.get(), distanceOne.get(), patternDistanceType);
    return res;
}

inline core::Ptr<RectangularPatternFeature> RectangularPatternFeatures::add(const core::Ptr<RectangularPatternFeatureInput>& input)
{
    core::Ptr<RectangularPatternFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<RectangularPatternFeature> RectangularPatternFeatures::itemByName(const std::string& name) const
{
    core::Ptr<RectangularPatternFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void RectangularPatternFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RECTANGULARPATTERNFEATURES_API