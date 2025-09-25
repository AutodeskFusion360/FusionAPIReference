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
# ifdef __COMPILING_ADSK_FUSION_STITCHFEATURES_CPP__
# define ADSK_FUSION_STITCHFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_STITCHFEATURES_API
# endif
#else
# define ADSK_FUSION_STITCHFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class StitchFeature;
    class StitchFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Stitch features in a component
/// and supports the ability to create new Stitch features.
class StitchFeatures : public core::Base {
public:

    /// Function that returns the specified stitch feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<StitchFeature> item(size_t index) const;

    /// The number of Stitch features in the collection.
    size_t count() const;

    /// Creates a StitchFeatureInput object. Use properties and methods on this object
    /// to define the stitch feature you want to create and then use the Add method, passing in
    /// the StitchFeatureInput object.
    /// stitchSurfaces : The surfaces (open BRepBodies) to stitch together.
    /// Stitching surfaces can form multiple closed volumes resulting in multiple solids.
    /// Stitch Surfaces can form multiple BRepShells (entirely connected set of entities) that would result in a
    /// single non-solid BRepBody.
    /// tolerance : ValueInput object that defines the stitching tolerance. It must define a distance value.
    /// operation : Specifies the operation type for the result when the final result is a closed solid. Otherwise
    /// this argument is ignored.
    /// Returns the newly created StitchFeatureInput object or null if the creation failed.
    core::Ptr<StitchFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& stitchSurfaces, const core::Ptr<core::ValueInput>& tolerance, FeatureOperations operation = adsk::fusion::NewBodyFeatureOperation) const;

    /// Creates a new stitch feature.
    /// input : A StitchFeatureInput object that defines the desired stitch feature. Use the createInput
    /// method to create a new StitchFeatureInput object and then use methods on it
    /// (the StitchFeatureInput object) to define the stitch feature.
    /// Returns the newly created StitchFeature object or null if the creation failed.
    core::Ptr<StitchFeature> add(const core::Ptr<StitchFeatureInput>& input);

    /// Function that returns the specified stitch feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<StitchFeature> itemByName(const std::string& name) const;

    typedef StitchFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_STITCHFEATURES_API static const char* classType();
    ADSK_FUSION_STITCHFEATURES_API const char* objectType() const override;
    ADSK_FUSION_STITCHFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STITCHFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual StitchFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual StitchFeatureInput* createInput_raw(core::ObjectCollection* stitchSurfaces, core::ValueInput* tolerance, FeatureOperations operation) const = 0;
    virtual StitchFeature* add_raw(StitchFeatureInput* input) = 0;
    virtual StitchFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<StitchFeature> StitchFeatures::item(size_t index) const
{
    core::Ptr<StitchFeature> res = item_raw(index);
    return res;
}

inline size_t StitchFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<StitchFeatureInput> StitchFeatures::createInput(const core::Ptr<core::ObjectCollection>& stitchSurfaces, const core::Ptr<core::ValueInput>& tolerance, FeatureOperations operation) const
{
    core::Ptr<StitchFeatureInput> res = createInput_raw(stitchSurfaces.get(), tolerance.get(), operation);
    return res;
}

inline core::Ptr<StitchFeature> StitchFeatures::add(const core::Ptr<StitchFeatureInput>& input)
{
    core::Ptr<StitchFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<StitchFeature> StitchFeatures::itemByName(const std::string& name) const
{
    core::Ptr<StitchFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void StitchFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STITCHFEATURES_API