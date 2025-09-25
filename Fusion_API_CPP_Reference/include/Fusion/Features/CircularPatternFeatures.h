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
# ifdef __COMPILING_ADSK_FUSION_CIRCULARPATTERNFEATURES_CPP__
# define ADSK_FUSION_CIRCULARPATTERNFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_CIRCULARPATTERNFEATURES_API
# endif
#else
# define ADSK_FUSION_CIRCULARPATTERNFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class CircularPatternFeature;
    class CircularPatternFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing circular pattern features in a component
/// and supports the ability to create new circular pattern features.
class CircularPatternFeatures : public core::Base {
public:

    /// Function that returns the specified circular pattern feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CircularPatternFeature> item(size_t index) const;

    /// The number of circular pattern features in the collection.
    size_t count() const;

    /// Creates a CircularPatternFeatureInput object. Use properties and methods on this object
    /// to define the circular pattern you want to create and then use the Add method, passing in
    /// the CircularPatternFeatureInput object.
    /// inputEntities : The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// axis : Input linear entity or the entity has axis that defines axis of circular pattern. This can be a sketch line, linear edge,
    /// construction axis, an edge/sketch curve that defines an axis (circle, etc.) or a face that defines an axis (cylinder, cone, torus, etc.).
    /// Returns the newly created CircularPatternFeatureInput object or null if the creation failed.
    core::Ptr<CircularPatternFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& axis) const;

    /// Creates a new circular pattern feature.
    /// input : A CircularPatternFeatureInput object that defines the desired circular pattern. Use the createInput
    /// method to create a new CircularPatternFeatureInput object and then use methods on it
    /// (the CircularPatternFeatureInput object) to define the circular pattern.
    /// Returns the newly created CircularPatternFeature object or null if the creation failed.
    core::Ptr<CircularPatternFeature> add(const core::Ptr<CircularPatternFeatureInput>& input);

    /// Function that returns the specified circular pattern feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<CircularPatternFeature> itemByName(const std::string& name) const;

    typedef CircularPatternFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CIRCULARPATTERNFEATURES_API static const char* classType();
    ADSK_FUSION_CIRCULARPATTERNFEATURES_API const char* objectType() const override;
    ADSK_FUSION_CIRCULARPATTERNFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CIRCULARPATTERNFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CircularPatternFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CircularPatternFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, core::Base* axis) const = 0;
    virtual CircularPatternFeature* add_raw(CircularPatternFeatureInput* input) = 0;
    virtual CircularPatternFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<CircularPatternFeature> CircularPatternFeatures::item(size_t index) const
{
    core::Ptr<CircularPatternFeature> res = item_raw(index);
    return res;
}

inline size_t CircularPatternFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CircularPatternFeatureInput> CircularPatternFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& axis) const
{
    core::Ptr<CircularPatternFeatureInput> res = createInput_raw(inputEntities.get(), axis.get());
    return res;
}

inline core::Ptr<CircularPatternFeature> CircularPatternFeatures::add(const core::Ptr<CircularPatternFeatureInput>& input)
{
    core::Ptr<CircularPatternFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<CircularPatternFeature> CircularPatternFeatures::itemByName(const std::string& name) const
{
    core::Ptr<CircularPatternFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void CircularPatternFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CIRCULARPATTERNFEATURES_API