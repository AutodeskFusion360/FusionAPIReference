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
# ifdef __COMPILING_ADSK_FUSION_SCALEFEATURES_CPP__
# define ADSK_FUSION_SCALEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SCALEFEATURES_API
# endif
#else
# define ADSK_FUSION_SCALEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ScaleFeature;
    class ScaleFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing scale features in a component
/// and supports the ability to create new scale features.
class ScaleFeatures : public core::Base {
public:

    /// Function that returns the specified scale feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ScaleFeature> item(size_t index) const;

    /// The number of scale features in the collection.
    size_t count() const;

    /// Creates a ScaleFeatureInput object. Use properties and methods on this object
    /// to define the scale you want to create and then use the Add method, passing in
    /// the ScaleFeatureInput object.
    /// inputEntities : This collection can contain sketches, BRep bodies and T-Spline bodies in parametric modeling.
    /// It can contain sketches, BRep bodies, T-Spline bodies, mesh bodies, root component and occurrences in non-parametric modeling.
    /// point : Input a point as reference to scale. This can be a BRepVertex, a SketchPoint or a ConstructionPoint.
    /// scaleFactor : The ValueInput object that defines the scale factor for uniform scale.
    /// Returns the newly created ScaleFeatureInput object or null if the creation failed.
    core::Ptr<ScaleFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& scaleFactor) const;

    /// Creates a new scale feature.
    /// input : A ScaleFeatureInput object that defines the desired scale. Use the createInput
    /// method to create a new ScaleFeatureInput object and then use methods on it
    /// (the ScaleFeatureInput object) to define the scale.
    /// Returns the newly created ScaleFeature object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ScaleFeature> add(const core::Ptr<ScaleFeatureInput>& input);

    /// Function that returns the specified scale feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ScaleFeature> itemByName(const std::string& name) const;

    typedef ScaleFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SCALEFEATURES_API static const char* classType();
    ADSK_FUSION_SCALEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SCALEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SCALEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ScaleFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ScaleFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, core::Base* point, core::ValueInput* scaleFactor) const = 0;
    virtual ScaleFeature* add_raw(ScaleFeatureInput* input) = 0;
    virtual ScaleFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ScaleFeature> ScaleFeatures::item(size_t index) const
{
    core::Ptr<ScaleFeature> res = item_raw(index);
    return res;
}

inline size_t ScaleFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ScaleFeatureInput> ScaleFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& point, const core::Ptr<core::ValueInput>& scaleFactor) const
{
    core::Ptr<ScaleFeatureInput> res = createInput_raw(inputEntities.get(), point.get(), scaleFactor.get());
    return res;
}

inline core::Ptr<ScaleFeature> ScaleFeatures::add(const core::Ptr<ScaleFeatureInput>& input)
{
    core::Ptr<ScaleFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ScaleFeature> ScaleFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ScaleFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ScaleFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SCALEFEATURES_API