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
# ifdef __COMPILING_ADSK_FUSION_COMBINEFEATURES_CPP__
# define ADSK_FUSION_COMBINEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_COMBINEFEATURES_API
# endif
#else
# define ADSK_FUSION_COMBINEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class CombineFeature;
    class CombineFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Combine features in a component
/// and supports the ability to create new Combine features.
class CombineFeatures : public core::Base {
public:

    /// Function that returns the specified combine feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    /// This property returns nothing in the case where the feature is non-parametric.
    core::Ptr<CombineFeature> item(size_t index) const;

    /// The number of combine features in the collection.
    /// This property returns nothing in the case where the feature is non-parametric.
    size_t count() const;

    /// Creates a CombineFeatureInput object. Use properties and methods on this object
    /// to define the combine you want to create and then use the Add method, passing in
    /// the CombineFeatureInput object.
    /// targetBody : A BRep body that represents the blank body.
    /// toolBodies : An ObjectCollection containing one or more BRep bodies that represent tool bodies.
    /// Returns the newly created CombineFeatureInput object or null if the creation failed.
    core::Ptr<CombineFeatureInput> createInput(const core::Ptr<BRepBody>& targetBody, const core::Ptr<core::ObjectCollection>& toolBodies) const;

    /// Creates a new combine feature.
    /// input : A CombineFeatureInput object that defines the desired combine. Use the createInput
    /// method to create a new CombineFeatureInput object and then use methods on it
    /// (the CombineFeatureInput object) to define the combine.
    /// Returns the newly created CombineFeature object or null if the creation failed.
    /// This function returns nothing in the case where the feature is non-parametric.
    core::Ptr<CombineFeature> add(const core::Ptr<CombineFeatureInput>& input);

    /// Function that returns the specified combine feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<CombineFeature> itemByName(const std::string& name) const;

    typedef CombineFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_COMBINEFEATURES_API static const char* classType();
    ADSK_FUSION_COMBINEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_COMBINEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COMBINEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CombineFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CombineFeatureInput* createInput_raw(BRepBody* targetBody, core::ObjectCollection* toolBodies) const = 0;
    virtual CombineFeature* add_raw(CombineFeatureInput* input) = 0;
    virtual CombineFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<CombineFeature> CombineFeatures::item(size_t index) const
{
    core::Ptr<CombineFeature> res = item_raw(index);
    return res;
}

inline size_t CombineFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CombineFeatureInput> CombineFeatures::createInput(const core::Ptr<BRepBody>& targetBody, const core::Ptr<core::ObjectCollection>& toolBodies) const
{
    core::Ptr<CombineFeatureInput> res = createInput_raw(targetBody.get(), toolBodies.get());
    return res;
}

inline core::Ptr<CombineFeature> CombineFeatures::add(const core::Ptr<CombineFeatureInput>& input)
{
    core::Ptr<CombineFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<CombineFeature> CombineFeatures::itemByName(const std::string& name) const
{
    core::Ptr<CombineFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void CombineFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COMBINEFEATURES_API