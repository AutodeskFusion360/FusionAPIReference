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
# ifdef __COMPILING_ADSK_FUSION_PATCHFEATURES_CPP__
# define ADSK_FUSION_PATCHFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_PATCHFEATURES_API
# endif
#else
# define ADSK_FUSION_PATCHFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PatchFeature;
    class PatchFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Patch features in a component
/// and supports the ability to create new Patch features.
class PatchFeatures : public core::Base {
public:

    /// Function that returns the specified patch feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PatchFeature> item(size_t index) const;

    /// Function that returns the specified patch feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<PatchFeature> itemByName(const std::string& name) const;

    /// The number of Patch features in the collection.
    size_t count() const;

    /// Creates a PatchFeatureInput object. Use properties and methods on the returned PatchFeatureInput
    /// object to set other settings. The PatchFeatureInput object is used as input to the add method
    /// to create the patch feature.
    /// boundaryCurve : Defines the input geometry that will be used to define the boundary. This can be a sketch profile,
    /// a single sketch curve, a single B-Rep edge, an ObjectCollection, or a Path object.
    /// 
    /// If a single sketch curve or B-Rep edge is an input that is not closed; Fusion will automatically find connected sketch curves
    /// or B-Rep edges to define a closed loop.
    /// 
    /// If an ObjectCollection is an input, it must be a set of curves that define a closed shape.
    /// 
    /// If a Path is an input, it must define a closed shape.
    /// operation : The feature operation to perform. Only 'NewBodyFeatureOperation' and 'NewComponentFeatureOperation' are
    /// valid operations for patch features.
    /// Returns the newly created PatchFeatureInput object or null if the creation fails.
    core::Ptr<PatchFeatureInput> createInput(const core::Ptr<core::Base>& boundaryCurve, FeatureOperations operation) const;

    /// Creates a new patch feature.
    /// input : A PatchFeatureInput object that defines the desired patch feature. Use the createInput
    /// method to create a new PatchFeatureInput object and then use methods on it
    /// (the PatchFeatureInput object) to define the patch feature.
    /// Returns the newly created PatchFeature object or null if the creation failed.
    core::Ptr<PatchFeature> add(const core::Ptr<PatchFeatureInput>& input);

    typedef PatchFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PATCHFEATURES_API static const char* classType();
    ADSK_FUSION_PATCHFEATURES_API const char* objectType() const override;
    ADSK_FUSION_PATCHFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATCHFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PatchFeature* item_raw(size_t index) const = 0;
    virtual PatchFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual PatchFeatureInput* createInput_raw(core::Base* boundaryCurve, FeatureOperations operation) const = 0;
    virtual PatchFeature* add_raw(PatchFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<PatchFeature> PatchFeatures::item(size_t index) const
{
    core::Ptr<PatchFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<PatchFeature> PatchFeatures::itemByName(const std::string& name) const
{
    core::Ptr<PatchFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t PatchFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PatchFeatureInput> PatchFeatures::createInput(const core::Ptr<core::Base>& boundaryCurve, FeatureOperations operation) const
{
    core::Ptr<PatchFeatureInput> res = createInput_raw(boundaryCurve.get(), operation);
    return res;
}

inline core::Ptr<PatchFeature> PatchFeatures::add(const core::Ptr<PatchFeatureInput>& input)
{
    core::Ptr<PatchFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void PatchFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATCHFEATURES_API