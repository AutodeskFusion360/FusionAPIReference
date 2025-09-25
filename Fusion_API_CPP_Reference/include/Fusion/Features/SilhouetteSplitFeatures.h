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
# ifdef __COMPILING_ADSK_FUSION_SILHOUETTESPLITFEATURES_CPP__
# define ADSK_FUSION_SILHOUETTESPLITFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SILHOUETTESPLITFEATURES_API
# endif
#else
# define ADSK_FUSION_SILHOUETTESPLITFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class SilhouetteSplitFeature;
    class SilhouetteSplitFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Silhouette Split features in a component
/// and supports the ability to create new Silhouette Split features.
class SilhouetteSplitFeatures : public core::Base {
public:

    /// Function that returns the specified silhouette split feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SilhouetteSplitFeature> item(size_t index) const;

    /// The number of Silhouette Split features in the collection.
    size_t count() const;

    /// Creates a SilhouetteSplitFeatureInput object. Use properties and methods on this object
    /// to define the silhouette split you want to create and then use the Add method, passing in
    /// the SilhouetteSplitFeatureInput object.
    /// viewDirection : A construction axis, linear BRepEdge, planar BRepFace or a construction plane that defines the view direction
    /// where the silhouette is calculated.
    /// targetBody : Input the single solid body to split
    /// operation : The type of silhouette split operation to perform.
    /// Returns the newly created SilhouetteSplitFeatureInput object or null if the creation failed.
    core::Ptr<SilhouetteSplitFeatureInput> createInput(const core::Ptr<core::Base>& viewDirection, const core::Ptr<BRepBody>& targetBody, SilhouetteSplitOperations operation) const;

    /// Creates a new silhouette split feature.
    /// input : A SilhouetteSplitFeatureInput object that defines the desired silhouette split feature. Use the createInput
    /// method to create a new SilhouetteSplitFeatureInput object and then use methods on it
    /// (the SilhouetteSplitFeatureInput object) to define the silhouette split.
    /// Returns the newly created SilhouetteSplitFeature object or null if the creation failed.
    core::Ptr<SilhouetteSplitFeature> add(const core::Ptr<SilhouetteSplitFeatureInput>& input);

    /// Function that returns the specified silhouette split feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<SilhouetteSplitFeature> itemByName(const std::string& name) const;

    typedef SilhouetteSplitFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SILHOUETTESPLITFEATURES_API static const char* classType();
    ADSK_FUSION_SILHOUETTESPLITFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SILHOUETTESPLITFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SILHOUETTESPLITFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SilhouetteSplitFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SilhouetteSplitFeatureInput* createInput_raw(core::Base* viewDirection, BRepBody* targetBody, SilhouetteSplitOperations operation) const = 0;
    virtual SilhouetteSplitFeature* add_raw(SilhouetteSplitFeatureInput* input) = 0;
    virtual SilhouetteSplitFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<SilhouetteSplitFeature> SilhouetteSplitFeatures::item(size_t index) const
{
    core::Ptr<SilhouetteSplitFeature> res = item_raw(index);
    return res;
}

inline size_t SilhouetteSplitFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SilhouetteSplitFeatureInput> SilhouetteSplitFeatures::createInput(const core::Ptr<core::Base>& viewDirection, const core::Ptr<BRepBody>& targetBody, SilhouetteSplitOperations operation) const
{
    core::Ptr<SilhouetteSplitFeatureInput> res = createInput_raw(viewDirection.get(), targetBody.get(), operation);
    return res;
}

inline core::Ptr<SilhouetteSplitFeature> SilhouetteSplitFeatures::add(const core::Ptr<SilhouetteSplitFeatureInput>& input)
{
    core::Ptr<SilhouetteSplitFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<SilhouetteSplitFeature> SilhouetteSplitFeatures::itemByName(const std::string& name) const
{
    core::Ptr<SilhouetteSplitFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void SilhouetteSplitFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SILHOUETTESPLITFEATURES_API