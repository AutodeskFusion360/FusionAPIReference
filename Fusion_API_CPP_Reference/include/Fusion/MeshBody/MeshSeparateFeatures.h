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
# ifdef __COMPILING_ADSK_FUSION_MESHSEPARATEFEATURES_CPP__
# define ADSK_FUSION_MESHSEPARATEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHSEPARATEFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHSEPARATEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshSeparateFeature;
    class MeshSeparateFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing MeshSeparate features in a component
/// and supports the ability to create new MeshSeparate features.
class MeshSeparateFeatures : public core::Base {
public:

    /// Function that returns the specified mesh separate feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshSeparateFeature> item(size_t index) const;

    /// The number of mesh separate features in the collection.
    size_t count() const;

    /// Creates a MeshSeparateFeatureInput object. Use properties and methods on this object
    /// to define the mesh separate you want to create and then use the add method, passing in
    /// the MeshSeparateFeatureInput object.
    /// mesh : A mesh body or an object collection with face groups in either a parametric or direct modeling design.
    /// Returns the newly created MeshSeparateFeatureInput object or null if the creation failed.
    core::Ptr<MeshSeparateFeatureInput> createInput(const core::Ptr<core::Base>& mesh) const;

    /// Creates a mesh separate feature.
    /// input : A MeshSeparateFeatureInput object that defines the desired MeshSeparate feature. Use the createInput
    /// method to create a new MeshSeparateFeatureInput object and then use methods on it
    /// (the MeshSeparateFeatureInput object) to define the separation.
    /// Returns the newly created MeshSeparateFeature object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshSeparateFeature> add(const core::Ptr<MeshSeparateFeatureInput>& input);

    /// Function that returns the specified MeshSeparate feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshSeparateFeature> itemByName(const std::string& name) const;

    typedef MeshSeparateFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHSEPARATEFEATURES_API static const char* classType();
    ADSK_FUSION_MESHSEPARATEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHSEPARATEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHSEPARATEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshSeparateFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshSeparateFeatureInput* createInput_raw(core::Base* mesh) const = 0;
    virtual MeshSeparateFeature* add_raw(MeshSeparateFeatureInput* input) = 0;
    virtual MeshSeparateFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshSeparateFeature> MeshSeparateFeatures::item(size_t index) const
{
    core::Ptr<MeshSeparateFeature> res = item_raw(index);
    return res;
}

inline size_t MeshSeparateFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshSeparateFeatureInput> MeshSeparateFeatures::createInput(const core::Ptr<core::Base>& mesh) const
{
    core::Ptr<MeshSeparateFeatureInput> res = createInput_raw(mesh.get());
    return res;
}

inline core::Ptr<MeshSeparateFeature> MeshSeparateFeatures::add(const core::Ptr<MeshSeparateFeatureInput>& input)
{
    core::Ptr<MeshSeparateFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshSeparateFeature> MeshSeparateFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshSeparateFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshSeparateFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHSEPARATEFEATURES_API