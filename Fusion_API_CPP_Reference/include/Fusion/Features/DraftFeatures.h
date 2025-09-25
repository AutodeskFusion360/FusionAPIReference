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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DRAFTFEATURES_CPP__
# define ADSK_FUSION_DRAFTFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_DRAFTFEATURES_API
# endif
#else
# define ADSK_FUSION_DRAFTFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class DraftFeature;
    class DraftFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing draft features in a component
/// and supports the ability to create new draft features.
class DraftFeatures : public core::Base {
public:

    /// Function that returns the specified draft feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<DraftFeature> item(size_t index) const;

    /// The number of draft features in the collection.
    size_t count() const;

    /// Creates a DraftFeatureInput object. Use properties and methods on this object
    /// to define the draft you want to create and then use the Add method, passing in
    /// the DraftFeatureInput object.
    /// inputFaces : BRepFace array that contains the faces to which draft will be applied.
    /// The picked point on face is always the point returned from pointOnFace property of the first BRepFace in this collection.
    /// plane : Input object that defines the direction in which the draft is applied. This can be a planar BrepFace, or a ConstructionPlane.
    /// isTangentChain : A boolean value for setting whether or not faces that are tangentially connected to
    /// any of the input faces (if any) will also be included. It defaults to true.
    /// Returns the newly created DraftFeatureInput object or null if the creation failed.
    core::Ptr<DraftFeatureInput> createInput(const std::vector<core::Ptr<BRepFace>>& inputFaces, const core::Ptr<core::Base>& plane, bool isTangentChain = true) const;

    /// Creates a new draft feature.
    /// input : A DraftFeatureInput object that defines the desired draft. Use the createInput
    /// method to create a new DraftFeatureInput object and then use methods on it
    /// (the DraftFeatureInput object) to define the draft.
    /// Returns the newly created DraftFeature object or null if the creation failed.
    core::Ptr<DraftFeature> add(const core::Ptr<DraftFeatureInput>& input);

    /// Function that returns the specified draft feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<DraftFeature> itemByName(const std::string& name) const;

    typedef DraftFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_DRAFTFEATURES_API static const char* classType();
    ADSK_FUSION_DRAFTFEATURES_API const char* objectType() const override;
    ADSK_FUSION_DRAFTFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DRAFTFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DraftFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DraftFeatureInput* createInput_raw(BRepFace** inputFaces, size_t inputFaces_size, core::Base* plane, bool isTangentChain) const = 0;
    virtual DraftFeature* add_raw(DraftFeatureInput* input) = 0;
    virtual DraftFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<DraftFeature> DraftFeatures::item(size_t index) const
{
    core::Ptr<DraftFeature> res = item_raw(index);
    return res;
}

inline size_t DraftFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<DraftFeatureInput> DraftFeatures::createInput(const std::vector<core::Ptr<BRepFace>>& inputFaces, const core::Ptr<core::Base>& plane, bool isTangentChain) const
{
    BRepFace** inputFaces_ = new BRepFace*[inputFaces.size()];
    for(size_t i=0; i<inputFaces.size(); ++i)
        inputFaces_[i] = inputFaces[i].get();

    core::Ptr<DraftFeatureInput> res = createInput_raw(inputFaces_, inputFaces.size(), plane.get(), isTangentChain);
    delete[] inputFaces_;
    return res;
}

inline core::Ptr<DraftFeature> DraftFeatures::add(const core::Ptr<DraftFeatureInput>& input)
{
    core::Ptr<DraftFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<DraftFeature> DraftFeatures::itemByName(const std::string& name) const
{
    core::Ptr<DraftFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void DraftFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DRAFTFEATURES_API