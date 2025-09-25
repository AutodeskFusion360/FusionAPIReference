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
# ifdef __COMPILING_ADSK_FUSION_MESHREVERSENORMALFEATURES_CPP__
# define ADSK_FUSION_MESHREVERSENORMALFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREVERSENORMALFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHREVERSENORMALFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshReverseNormalFeature;
    class MeshReverseNormalFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing MeshReverseNormal features in a component
/// and supports the ability to create new MeshReverseNormal features.
class MeshReverseNormalFeatures : public core::Base {
public:

    /// Function that returns the specified mesh reverse normal feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshReverseNormalFeature> item(size_t index) const;

    /// The number of mesh reverse normal features in the collection.
    size_t count() const;

    /// Creates a MeshReverseNormalFeatureInput object. Use properties and methods on this object
    /// to define the mesh reverse normal you want to create and then use the add method, passing in
    /// the MeshReverseNormalFeatureInput object.
    /// mesh : A mesh body or an object collection with face groups in either a parametric or direct modeling design.
    /// Returns the newly created MeshReverseNormalFeatureInput object or null if the creation failed.
    core::Ptr<MeshReverseNormalFeatureInput> createInput(const core::Ptr<core::Base>& mesh) const;

    /// Creates a mesh reverse normal feature.
    /// input : A MeshReverseNormalFeatureInput object that defines the desired MeshReverseNormal feature. Use the createInput
    /// method to create a new MeshReverseNormalFeatureInput object and then use methods on it
    /// (the MeshReverseNormalFeatureInput object) to define the normal reversion.
    /// Returns the newly created MeshReverseNormalFeature object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshReverseNormalFeature> add(const core::Ptr<MeshReverseNormalFeatureInput>& input);

    /// Function that returns the specified MeshReverseNormal feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshReverseNormalFeature> itemByName(const std::string& name) const;

    typedef MeshReverseNormalFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHREVERSENORMALFEATURES_API static const char* classType();
    ADSK_FUSION_MESHREVERSENORMALFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHREVERSENORMALFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREVERSENORMALFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshReverseNormalFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshReverseNormalFeatureInput* createInput_raw(core::Base* mesh) const = 0;
    virtual MeshReverseNormalFeature* add_raw(MeshReverseNormalFeatureInput* input) = 0;
    virtual MeshReverseNormalFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshReverseNormalFeature> MeshReverseNormalFeatures::item(size_t index) const
{
    core::Ptr<MeshReverseNormalFeature> res = item_raw(index);
    return res;
}

inline size_t MeshReverseNormalFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshReverseNormalFeatureInput> MeshReverseNormalFeatures::createInput(const core::Ptr<core::Base>& mesh) const
{
    core::Ptr<MeshReverseNormalFeatureInput> res = createInput_raw(mesh.get());
    return res;
}

inline core::Ptr<MeshReverseNormalFeature> MeshReverseNormalFeatures::add(const core::Ptr<MeshReverseNormalFeatureInput>& input)
{
    core::Ptr<MeshReverseNormalFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshReverseNormalFeature> MeshReverseNormalFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshReverseNormalFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshReverseNormalFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREVERSENORMALFEATURES_API