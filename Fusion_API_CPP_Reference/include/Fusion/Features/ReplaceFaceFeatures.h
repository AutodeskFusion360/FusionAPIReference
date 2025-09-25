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
# ifdef __COMPILING_ADSK_FUSION_REPLACEFACEFEATURES_CPP__
# define ADSK_FUSION_REPLACEFACEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_REPLACEFACEFEATURES_API
# endif
#else
# define ADSK_FUSION_REPLACEFACEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ReplaceFaceFeature;
    class ReplaceFaceFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing replace face features in a component
/// and supports the ability to create new replace face features.
class ReplaceFaceFeatures : public core::Base {
public:

    /// Function that returns the specified replace face feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ReplaceFaceFeature> item(size_t index) const;

    /// The number of replace face features in the collection.
    size_t count() const;

    /// Creates a ReplaceFaceFeatureInput object. Use properties and methods on this object
    /// to define the replace face you want to create and then use the Add method, passing in
    /// the ReplaceFaceFeatureInput object.
    /// sourceFaces : Input the entities that define the source faces (the faces to be replaced).
    /// The collection can contain the faces from a solid and/or features. All the faces must be on the same body.
    /// isTangentChain : A boolean value for setting whether or not faces that are tangentially connected to
    /// the input faces (if any) will also be included. A value of true indicates that tangent
    /// faces will be included.
    /// targetFaces : Input the entities that define the target faces. The new faces must completely intersect the part.
    /// The collection can contain the surface faces, surface bodies and construction planes.
    /// Returns the newly created ReplaceFaceFeatureInput object or null if the creation failed.
    core::Ptr<ReplaceFaceFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& sourceFaces, bool isTangentChain, const core::Ptr<core::Base>& targetFaces) const;

    /// Creates a new replace face feature.
    /// input : A ReplaceFaceFeatureInput object that defines the desired replace face. Use the createInput
    /// method to create a new ReplaceFaceFeatureInput object and then use methods on it
    /// (the ReplaceFaceFeatureInput object) to define the replace face.
    /// Returns the newly created ReplaceFaceFeature object or null if the creation failed.
    core::Ptr<ReplaceFaceFeature> add(const core::Ptr<ReplaceFaceFeatureInput>& input);

    /// Function that returns the specified replace face feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ReplaceFaceFeature> itemByName(const std::string& name) const;

    typedef ReplaceFaceFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_REPLACEFACEFEATURES_API static const char* classType();
    ADSK_FUSION_REPLACEFACEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_REPLACEFACEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REPLACEFACEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ReplaceFaceFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ReplaceFaceFeatureInput* createInput_raw(core::ObjectCollection* sourceFaces, bool isTangentChain, core::Base* targetFaces) const = 0;
    virtual ReplaceFaceFeature* add_raw(ReplaceFaceFeatureInput* input) = 0;
    virtual ReplaceFaceFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ReplaceFaceFeature> ReplaceFaceFeatures::item(size_t index) const
{
    core::Ptr<ReplaceFaceFeature> res = item_raw(index);
    return res;
}

inline size_t ReplaceFaceFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ReplaceFaceFeatureInput> ReplaceFaceFeatures::createInput(const core::Ptr<core::ObjectCollection>& sourceFaces, bool isTangentChain, const core::Ptr<core::Base>& targetFaces) const
{
    core::Ptr<ReplaceFaceFeatureInput> res = createInput_raw(sourceFaces.get(), isTangentChain, targetFaces.get());
    return res;
}

inline core::Ptr<ReplaceFaceFeature> ReplaceFaceFeatures::add(const core::Ptr<ReplaceFaceFeatureInput>& input)
{
    core::Ptr<ReplaceFaceFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ReplaceFaceFeature> ReplaceFaceFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ReplaceFaceFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ReplaceFaceFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REPLACEFACEFEATURES_API