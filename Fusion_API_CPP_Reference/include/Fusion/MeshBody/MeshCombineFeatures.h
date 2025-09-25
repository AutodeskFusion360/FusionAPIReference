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
# ifdef __COMPILING_ADSK_FUSION_MESHCOMBINEFEATURES_CPP__
# define ADSK_FUSION_MESHCOMBINEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCOMBINEFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHCOMBINEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class MeshCombineFeature;
    class MeshCombineFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh combine features in a component
/// and supports the ability to create new mesh Combine features.
class MeshCombineFeatures : public core::Base {
public:

    /// Function that returns the specified mesh combine feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshCombineFeature> item(size_t index) const;

    /// The number of mesh combine features in the collection.
    size_t count() const;

    /// Creates a MeshCombineFeatureInput object. Use properties and methods on this object
    /// to define the mesh combine you want to create and then use the add method, passing in
    /// the MeshCombineFeatureInput object.
    /// targetBody : The MeshBody in either a parametric or direct modeling design, which represent the target body.
    /// toolBodies : The MeshBodies in either a parametric or direct modeling design, which represent the tool bodies.
    /// Returns the newly created MeshCombineFeatureInput object or null if the creation failed.
    core::Ptr<MeshCombineFeatureInput> createInput(const core::Ptr<MeshBody>& targetBody, const std::vector<core::Ptr<MeshBody>>& toolBodies) const;

    /// Creates a mesh combine feature.
    /// input : A MeshCombineFeatureInput object that defines the desired combine feature. Use the createInput
    /// method to create a new MeshCombineFeatureInput object and then use methods on it
    /// (the MeshCombineFeatureInput object) to define the combine.
    /// Returns the newly created MeshCombineFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshCombineFeature> add(const core::Ptr<MeshCombineFeatureInput>& input);

    /// Function that returns the specified MeshCombine feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshCombineFeature> itemByName(const std::string& name) const;

    typedef MeshCombineFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHCOMBINEFEATURES_API static const char* classType();
    ADSK_FUSION_MESHCOMBINEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHCOMBINEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCOMBINEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshCombineFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshCombineFeatureInput* createInput_raw(MeshBody* targetBody, MeshBody** toolBodies, size_t toolBodies_size) const = 0;
    virtual MeshCombineFeature* add_raw(MeshCombineFeatureInput* input) = 0;
    virtual MeshCombineFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshCombineFeature> MeshCombineFeatures::item(size_t index) const
{
    core::Ptr<MeshCombineFeature> res = item_raw(index);
    return res;
}

inline size_t MeshCombineFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshCombineFeatureInput> MeshCombineFeatures::createInput(const core::Ptr<MeshBody>& targetBody, const std::vector<core::Ptr<MeshBody>>& toolBodies) const
{
    MeshBody** toolBodies_ = new MeshBody*[toolBodies.size()];
    for(size_t i=0; i<toolBodies.size(); ++i)
        toolBodies_[i] = toolBodies[i].get();

    core::Ptr<MeshCombineFeatureInput> res = createInput_raw(targetBody.get(), toolBodies_, toolBodies.size());
    delete[] toolBodies_;
    return res;
}

inline core::Ptr<MeshCombineFeature> MeshCombineFeatures::add(const core::Ptr<MeshCombineFeatureInput>& input)
{
    core::Ptr<MeshCombineFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshCombineFeature> MeshCombineFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshCombineFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshCombineFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCOMBINEFEATURES_API