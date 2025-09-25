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
# ifdef __COMPILING_ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_CPP__
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class FaceGroup;
    class MeshCombineFaceGroupsFeature;
    class MeshCombineFaceGroupsFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh combine face groups features in a component
/// and supports the ability to create new mesh face group combine features.
class MeshCombineFaceGroupsFeatures : public core::Base {
public:

    /// Function that returns the specified mesh combine face groups feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshCombineFaceGroupsFeature> item(size_t index) const;

    /// The number of mesh combine face groups features in the collection.
    size_t count() const;

    /// Creates a MeshCombineFaceGroupsFeatureInput object. Use properties and methods on this object
    /// to define the mesh combine face groups feature you want to create and then use the add method, passing in
    /// the MeshCombineFaceGroupsFeatureInput object.
    /// inputFaceGroups : A array with face groups belonging to the same mesh. The mesh can be in either a parametric or direct modeling design.
    /// Returns the newly created MeshCombineFaceGroupsFeatureInput object or null if the creation failed.
    core::Ptr<MeshCombineFaceGroupsFeatureInput> createInput(const std::vector<core::Ptr<FaceGroup>>& inputFaceGroups) const;

    /// Creates a mesh combine face groups feature.
    /// input : A MeshCombineFaceGroupsFeatureInput object that defines the desired mesh combine face groups feature. Use the createInput
    /// method to create a new MeshCombineFaceGroupsFeatureInput object and then use methods on it
    /// (the MeshCombineFaceGroupsFeatureInput object) to define the mesh combine face groups feature.
    /// Returns the newly created MeshCombineFaceGroupsFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshCombineFaceGroupsFeature> add(const core::Ptr<MeshCombineFaceGroupsFeatureInput>& input);

    /// Function that returns the specified MeshCombineFaceGroups feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshCombineFaceGroupsFeature> itemByName(const std::string& name) const;

    typedef MeshCombineFaceGroupsFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API static const char* classType();
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshCombineFaceGroupsFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshCombineFaceGroupsFeatureInput* createInput_raw(FaceGroup** inputFaceGroups, size_t inputFaceGroups_size) const = 0;
    virtual MeshCombineFaceGroupsFeature* add_raw(MeshCombineFaceGroupsFeatureInput* input) = 0;
    virtual MeshCombineFaceGroupsFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshCombineFaceGroupsFeature> MeshCombineFaceGroupsFeatures::item(size_t index) const
{
    core::Ptr<MeshCombineFaceGroupsFeature> res = item_raw(index);
    return res;
}

inline size_t MeshCombineFaceGroupsFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeatureInput> MeshCombineFaceGroupsFeatures::createInput(const std::vector<core::Ptr<FaceGroup>>& inputFaceGroups) const
{
    FaceGroup** inputFaceGroups_ = new FaceGroup*[inputFaceGroups.size()];
    for(size_t i=0; i<inputFaceGroups.size(); ++i)
        inputFaceGroups_[i] = inputFaceGroups[i].get();

    core::Ptr<MeshCombineFaceGroupsFeatureInput> res = createInput_raw(inputFaceGroups_, inputFaceGroups.size());
    delete[] inputFaceGroups_;
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeature> MeshCombineFaceGroupsFeatures::add(const core::Ptr<MeshCombineFaceGroupsFeatureInput>& input)
{
    core::Ptr<MeshCombineFaceGroupsFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshCombineFaceGroupsFeature> MeshCombineFaceGroupsFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshCombineFaceGroupsFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshCombineFaceGroupsFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCOMBINEFACEGROUPSFEATURES_API