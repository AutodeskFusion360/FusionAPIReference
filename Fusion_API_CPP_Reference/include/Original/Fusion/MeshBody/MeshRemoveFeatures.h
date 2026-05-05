//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHREMOVEFEATURES_CPP__
# define ADSK_FUSION_MESHREMOVEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREMOVEFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHREMOVEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class MeshRemoveFeature;
    class MeshRemoveFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh remove features in a component
/// and supports the ability to create new mesh remove features.
class MeshRemoveFeatures : public core::Base {
public:

    /// Function that returns the specified mesh remove feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshRemoveFeature> item(size_t index) const;

    /// The number of mesh remove features in the collection.
    size_t count() const;

    /// Creates a MeshRemoveFeatureInput object. Use properties and methods on this object
    /// to define the mesh remove feature you want to create and then use the add method, passing in
    /// the MeshRemoveFeatureInput object.
    /// inputBodies : A array with mesh bodies in a parametric design.
    /// Returns the newly created MeshRemoveFeatureInput object or null if the creation failed.
    core::Ptr<MeshRemoveFeatureInput> createInput(const std::vector<core::Ptr<MeshBody>>& inputBodies) const;

    /// Creates a mesh remove feature. Works only in parametric mode.
    /// input : A MeshRemoveFeatureInput object that defines the desired mesh remove feature. Use the createInput
    /// method to create a new MeshRemoveFeatureInput object and then use methods on it
    /// (the MeshRemoveFeatureInput object) to define the removal.
    /// When successfull, a MeshRemoveFeature is created for each MeshBody that was input.
    /// An array of the created MeshRemoveFeature objects is returned.
    std::vector<core::Ptr<MeshRemoveFeature>> add(const core::Ptr<MeshRemoveFeatureInput>& input);

    /// Function that returns the specified mesh remove feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshRemoveFeature> itemByName(const std::string& name) const;

    typedef MeshRemoveFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHREMOVEFEATURES_API static const char* classType();
    ADSK_FUSION_MESHREMOVEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHREMOVEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREMOVEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshRemoveFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshRemoveFeatureInput* createInput_raw(MeshBody** inputBodies, size_t inputBodies_size) const = 0;
    virtual MeshRemoveFeature** add_raw(MeshRemoveFeatureInput* input, size_t& return_size) = 0;
    virtual MeshRemoveFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshRemoveFeature> MeshRemoveFeatures::item(size_t index) const
{
    core::Ptr<MeshRemoveFeature> res = item_raw(index);
    return res;
}

inline size_t MeshRemoveFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshRemoveFeatureInput> MeshRemoveFeatures::createInput(const std::vector<core::Ptr<MeshBody>>& inputBodies) const
{
    MeshBody** inputBodies_ = new MeshBody*[inputBodies.size()];
    for(size_t i=0; i<inputBodies.size(); ++i)
        inputBodies_[i] = inputBodies[i].get();

    core::Ptr<MeshRemoveFeatureInput> res = createInput_raw(inputBodies_, inputBodies.size());
    delete[] inputBodies_;
    return res;
}

inline std::vector<core::Ptr<MeshRemoveFeature>> MeshRemoveFeatures::add(const core::Ptr<MeshRemoveFeatureInput>& input)
{
    std::vector<core::Ptr<MeshRemoveFeature>> res;
    size_t s;

    MeshRemoveFeature** p= add_raw(input.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MeshRemoveFeature> MeshRemoveFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshRemoveFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshRemoveFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREMOVEFEATURES_API