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
# ifdef __COMPILING_ADSK_FUSION_MESHREDUCEFEATURES_CPP__
# define ADSK_FUSION_MESHREDUCEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREDUCEFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHREDUCEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshReduceFeature;
    class MeshReduceFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh reduce features in a component
/// and supports the ability to create new mesh reduce features.
class MeshReduceFeatures : public core::Base {
public:

    /// Function that returns the specified mesh reduce feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshReduceFeature> item(size_t index) const;

    /// The number of mesh reduce features in the collection.
    size_t count() const;

    /// Creates a MeshReduceFeatureInput object. Use properties and methods on this object
    /// to define the mesh reduce you want to create and then use the add method, passing in
    /// the MeshReduceFeatureInput object.
    /// mesh : A MeshBody in either a parametric or direct modeling design.
    /// Returns the newly created MeshReduceFeatureInput object or null if the creation failed.
    core::Ptr<MeshReduceFeatureInput> createInput(const core::Ptr<core::Base>& mesh) const;

    /// Creates a mesh reduce feature.
    /// input : A MeshReduceFeatureInput object that defines the desired reduce feature. Use the createInput
    /// method to create a new MeshReduceFeatureInput object and then use methods on it
    /// (the MeshReduceFeatureInput object) to define the reduce.
    /// Returns the newly created MeshReduceFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshReduceFeature> add(const core::Ptr<MeshReduceFeatureInput>& input);

    /// Function that returns the specified MeshReduce feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshReduceFeature> itemByName(const std::string& name) const;

    typedef MeshReduceFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHREDUCEFEATURES_API static const char* classType();
    ADSK_FUSION_MESHREDUCEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHREDUCEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREDUCEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshReduceFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshReduceFeatureInput* createInput_raw(core::Base* mesh) const = 0;
    virtual MeshReduceFeature* add_raw(MeshReduceFeatureInput* input) = 0;
    virtual MeshReduceFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshReduceFeature> MeshReduceFeatures::item(size_t index) const
{
    core::Ptr<MeshReduceFeature> res = item_raw(index);
    return res;
}

inline size_t MeshReduceFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshReduceFeatureInput> MeshReduceFeatures::createInput(const core::Ptr<core::Base>& mesh) const
{
    core::Ptr<MeshReduceFeatureInput> res = createInput_raw(mesh.get());
    return res;
}

inline core::Ptr<MeshReduceFeature> MeshReduceFeatures::add(const core::Ptr<MeshReduceFeatureInput>& input)
{
    core::Ptr<MeshReduceFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshReduceFeature> MeshReduceFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshReduceFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshReduceFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREDUCEFEATURES_API