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
# ifdef __COMPILING_ADSK_FUSION_PATHPATTERNFEATURES_CPP__
# define ADSK_FUSION_PATHPATTERNFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_PATHPATTERNFEATURES_API
# endif
#else
# define ADSK_FUSION_PATHPATTERNFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Path;
    class PathPatternFeature;
    class PathPatternFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing path pattern features in a component
/// and supports the ability to create new path pattern features.
class PathPatternFeatures : public core::Base {
public:

    /// Function that returns the specified path pattern feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PathPatternFeature> item(size_t index) const;

    /// The number of path pattern features in the collection.
    size_t count() const;

    /// Creates a PathPatternFeatureInput object. Use properties and methods on this object
    /// to define the path pattern you want to create and then use the Add method, passing in
    /// the PathPatternFeatureInput object.
    /// inputEntities : The collection can contain faces, features, bodies or occurrences.
    /// All of the entities must be of a single type. For example, it can't contain features and occurrences
    /// but only features or occurrences.
    /// path : The Path object that represents a single set of connected curves along which to drive the pattern.
    /// quantity : Specifies the number of instances in the first direction.
    /// distance : Specifies the distance. How this value is used depends on the value of the PatternDistanceType property. A
    /// negative value can be used to change the direction.
    /// If the value is ExtentPatternDistanceType then it defines the total distance of the pattern.
    /// If the value is SpacingPatternDistanceType then it defines the distance between each element.
    /// patternDistanceType : Specifies how the distance between elements is computed.
    /// Returns the newly created PathPatternFeatureInput object or null if the creation failed.
    core::Ptr<PathPatternFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<Path>& path, const core::Ptr<core::ValueInput>& quantity, const core::Ptr<core::ValueInput>& distance, PatternDistanceType patternDistanceType) const;

    /// Creates a new path pattern feature.
    /// input : A PathPatternFeatureInput object that defines the desired path pattern. Use the createInput
    /// method to create a new PathPatternFeatureInput object and then use methods on it
    /// (the PathPatternFeatureInput object) to define the path pattern.
    /// Returns the newly created PathPatternFeature object or null if the creation failed.
    core::Ptr<PathPatternFeature> add(const core::Ptr<PathPatternFeatureInput>& input);

    /// Function that returns the specified path pattern feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<PathPatternFeature> itemByName(const std::string& name) const;

    typedef PathPatternFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PATHPATTERNFEATURES_API static const char* classType();
    ADSK_FUSION_PATHPATTERNFEATURES_API const char* objectType() const override;
    ADSK_FUSION_PATHPATTERNFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATHPATTERNFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PathPatternFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual PathPatternFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, Path* path, core::ValueInput* quantity, core::ValueInput* distance, PatternDistanceType patternDistanceType) const = 0;
    virtual PathPatternFeature* add_raw(PathPatternFeatureInput* input) = 0;
    virtual PathPatternFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<PathPatternFeature> PathPatternFeatures::item(size_t index) const
{
    core::Ptr<PathPatternFeature> res = item_raw(index);
    return res;
}

inline size_t PathPatternFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PathPatternFeatureInput> PathPatternFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<Path>& path, const core::Ptr<core::ValueInput>& quantity, const core::Ptr<core::ValueInput>& distance, PatternDistanceType patternDistanceType) const
{
    core::Ptr<PathPatternFeatureInput> res = createInput_raw(inputEntities.get(), path.get(), quantity.get(), distance.get(), patternDistanceType);
    return res;
}

inline core::Ptr<PathPatternFeature> PathPatternFeatures::add(const core::Ptr<PathPatternFeatureInput>& input)
{
    core::Ptr<PathPatternFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<PathPatternFeature> PathPatternFeatures::itemByName(const std::string& name) const
{
    core::Ptr<PathPatternFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void PathPatternFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATHPATTERNFEATURES_API