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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICMODELFEATURES_CPP__
# define ADSK_FUSION_VOLUMETRICMODELFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICMODELFEATURES_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICMODELFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class VolumetricModelFeature;
    class VolumetricModelFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing volumetric model features in a component
/// and supports the ability to create new Volumetric Model features.
class VolumetricModelFeatures : public core::Base {
public:

    /// The number of features in the collection.
    size_t count() const;

    /// Function that returns the specified item using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<VolumetricModelFeature> item(size_t index) const;

    /// Returns the item with the specified name.
    /// name : The name of the item.
    /// Returns the specified item or null in the case where there is no item with the specified name.
    core::Ptr<VolumetricModelFeature> itemByName(const std::string& name) const;

    /// Creates a VolumetricModelFeatureInput object. Use properties and methods on this object
    /// to define the volumetric model feature you want to create and then use the Add method,
    /// passing in the VolumetricModelFeatureInput object.
    /// boundaryBody : The boundary body for the volumetric model. Must be a BRepBody or MeshBody. Must have the same parent
    /// component as the VolumetricModelFeatures.
    /// Returns the newly created VolumetricModelFeatureInput object or null if the creation failed.
    core::Ptr<VolumetricModelFeatureInput> createInput(const core::Ptr<core::Base>& boundaryBody);

    /// Creates a new volumetric model feature.
    /// input : A VolumetricModelFeatureInput object that defines the desired volumetric model feature. Use the createInput
    /// method to create a new VolumetricModelFeatureInput object and then use methods on the VolumetricModelFeatureInput
    /// object to define the volumetric model feature.
    /// Returns the newly created VolumetricModelFeature object or null if the creation failed.
    core::Ptr<VolumetricModelFeature> add(const core::Ptr<VolumetricModelFeatureInput>& input);

    typedef VolumetricModelFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_VOLUMETRICMODELFEATURES_API static const char* classType();
    ADSK_FUSION_VOLUMETRICMODELFEATURES_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICMODELFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICMODELFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual VolumetricModelFeature* item_raw(size_t index) const = 0;
    virtual VolumetricModelFeature* itemByName_raw(const char* name) const = 0;
    virtual VolumetricModelFeatureInput* createInput_raw(core::Base* boundaryBody) = 0;
    virtual VolumetricModelFeature* add_raw(VolumetricModelFeatureInput* input) = 0;
};

// Inline wrappers

inline size_t VolumetricModelFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<VolumetricModelFeature> VolumetricModelFeatures::item(size_t index) const
{
    core::Ptr<VolumetricModelFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<VolumetricModelFeature> VolumetricModelFeatures::itemByName(const std::string& name) const
{
    core::Ptr<VolumetricModelFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<VolumetricModelFeatureInput> VolumetricModelFeatures::createInput(const core::Ptr<core::Base>& boundaryBody)
{
    core::Ptr<VolumetricModelFeatureInput> res = createInput_raw(boundaryBody.get());
    return res;
}

inline core::Ptr<VolumetricModelFeature> VolumetricModelFeatures::add(const core::Ptr<VolumetricModelFeatureInput>& input)
{
    core::Ptr<VolumetricModelFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void VolumetricModelFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICMODELFEATURES_API