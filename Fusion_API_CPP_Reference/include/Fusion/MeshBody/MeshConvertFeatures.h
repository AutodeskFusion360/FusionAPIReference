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
# ifdef __COMPILING_ADSK_FUSION_MESHCONVERTFEATURES_CPP__
# define ADSK_FUSION_MESHCONVERTFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCONVERTFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHCONVERTFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class MeshConvertFeature;
    class MeshConvertFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh convert features in a component
/// and supports the ability to create new mesh Convert features.
class MeshConvertFeatures : public core::Base {
public:

    /// Function that returns the specified mesh convert feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshConvertFeature> item(size_t index) const;

    /// The number of mesh convert features in the collection.
    size_t count() const;

    /// Creates a MeshConvertFeatureInput object. Use properties and methods on this object
    /// to define the mesh convert you want to create and then use the add method, passing in
    /// the MeshConvertFeatureInput object.
    /// inputBodies : A array with mesh bodies in either a parametric or direct modeling design.
    /// Returns the newly created MeshConvertFeatureInput object or null if the creation failed.
    core::Ptr<MeshConvertFeatureInput> createInput(const std::vector<core::Ptr<MeshBody>>& inputBodies) const;

    /// Creates a mesh convert feature.
    /// input : A MeshConvertFeatureInput object that defines the desired convert feature. Use the createInput
    /// method to create a new MeshConvertFeatureInput object and then use methods on it
    /// (the MeshConvertFeatureInput object) to define the convert.
    /// Returns the newly created MeshConvertFeatureInput object or null if the creation failed.
    /// Returns null in the case where the feature is non-parametric.
    core::Ptr<MeshConvertFeature> add(const core::Ptr<MeshConvertFeatureInput>& input);

    /// Function that returns the specified MeshConvert feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshConvertFeature> itemByName(const std::string& name) const;

    typedef MeshConvertFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHCONVERTFEATURES_API static const char* classType();
    ADSK_FUSION_MESHCONVERTFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHCONVERTFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCONVERTFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshConvertFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshConvertFeatureInput* createInput_raw(MeshBody** inputBodies, size_t inputBodies_size) const = 0;
    virtual MeshConvertFeature* add_raw(MeshConvertFeatureInput* input) = 0;
    virtual MeshConvertFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshConvertFeature> MeshConvertFeatures::item(size_t index) const
{
    core::Ptr<MeshConvertFeature> res = item_raw(index);
    return res;
}

inline size_t MeshConvertFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshConvertFeatureInput> MeshConvertFeatures::createInput(const std::vector<core::Ptr<MeshBody>>& inputBodies) const
{
    MeshBody** inputBodies_ = new MeshBody*[inputBodies.size()];
    for(size_t i=0; i<inputBodies.size(); ++i)
        inputBodies_[i] = inputBodies[i].get();

    core::Ptr<MeshConvertFeatureInput> res = createInput_raw(inputBodies_, inputBodies.size());
    delete[] inputBodies_;
    return res;
}

inline core::Ptr<MeshConvertFeature> MeshConvertFeatures::add(const core::Ptr<MeshConvertFeatureInput>& input)
{
    core::Ptr<MeshConvertFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshConvertFeature> MeshConvertFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshConvertFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshConvertFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCONVERTFEATURES_API