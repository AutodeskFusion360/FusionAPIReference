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
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_CPP__
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class VolumetricModelToMeshFeature;
    class VolumetricModelToMeshFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing volumetric model to mesh features in a component
/// and supports the ability to create new Volumetric Model To Mesh features.
class VolumetricModelToMeshFeatures : public core::Base {
public:

    /// The number of features in the collection.
    size_t count() const;

    /// Function that returns the specified item using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<VolumetricModelToMeshFeature> item(size_t index) const;

    /// Returns the item with the specified name.
    /// name : The name of the item.
    /// Returns the specified item or null in the case where there is no item with the specified name.
    core::Ptr<VolumetricModelToMeshFeature> itemByName(const std::string& name) const;

    /// Add a new volumetric model to mesh feature. To create a new volumetric model to mesh feature use
    /// the createInput function to create a new input object and use the methods and proprties on that
    /// object to define the required input for an volumetric model to mesh feature. Once the information
    /// is defined on the input object you can pass it to the Add method to create the Volumetric Model to
    /// Mesh.
    /// input : The input object for creating a volumetric model to mesh feature.
    /// The newly added volumetric model to mesh feature.
    core::Ptr<VolumetricModelToMeshFeature> add(const core::Ptr<VolumetricModelToMeshFeatureInput>& input);

    /// Create a new VolumetricModelToMeshFeatureInput object.
    /// volumetricModel : The volumetric model to be converted to a mesh. Must have the same parent component as the
    /// VolumetricModelToMeshFeatures. This property is typed as core.Base because the adsk.fusion
    /// library does not reference the volume library where the VolumetricModel object is defined.
    /// At runtime, this property will return a VolumetricModel object.
    /// Returns the newly created VolumetricModelToMeshFeatureInput object or null if the creation failed.
    core::Ptr<VolumetricModelToMeshFeatureInput> createInput(const core::Ptr<core::Base>& volumetricModel);

    typedef VolumetricModelToMeshFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API static const char* classType();
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual VolumetricModelToMeshFeature* item_raw(size_t index) const = 0;
    virtual VolumetricModelToMeshFeature* itemByName_raw(const char* name) const = 0;
    virtual VolumetricModelToMeshFeature* add_raw(VolumetricModelToMeshFeatureInput* input) = 0;
    virtual VolumetricModelToMeshFeatureInput* createInput_raw(core::Base* volumetricModel) = 0;
};

// Inline wrappers

inline size_t VolumetricModelToMeshFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeature> VolumetricModelToMeshFeatures::item(size_t index) const
{
    core::Ptr<VolumetricModelToMeshFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeature> VolumetricModelToMeshFeatures::itemByName(const std::string& name) const
{
    core::Ptr<VolumetricModelToMeshFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeature> VolumetricModelToMeshFeatures::add(const core::Ptr<VolumetricModelToMeshFeatureInput>& input)
{
    core::Ptr<VolumetricModelToMeshFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeatureInput> VolumetricModelToMeshFeatures::createInput(const core::Ptr<core::Base>& volumetricModel)
{
    core::Ptr<VolumetricModelToMeshFeatureInput> res = createInput_raw(volumetricModel.get());
    return res;
}

template <class OutputIterator> inline void VolumetricModelToMeshFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURES_API