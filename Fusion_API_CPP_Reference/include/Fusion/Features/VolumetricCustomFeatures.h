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
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_CPP__
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class VolumetricCustomFeature;
    class VolumetricCustomFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing volumetric custom features in a component
/// and supports the ability to create new Volumetric Custom features.
class VolumetricCustomFeatures : public core::Base {
public:

    /// The number of features in the collection.
    size_t count() const;

    /// Function that returns the specified item using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<VolumetricCustomFeature> item(size_t index) const;

    /// Returns the item with the specified internal name.
    /// name : The name of the item.
    /// Returns the specified item or null in the case where there is no item with the specified name.
    core::Ptr<VolumetricCustomFeature> itemByName(const std::string& name) const;

    /// Add a new volumetric custom feature.
    /// To create a new volumetric custom feature use the createInput method to create a new input
    /// object and use the methods and properties on that object to define the required input for a
    /// volumetric custom feature. Once the information is defined on the input object you can pass
    /// it to the add method to create the feature.
    /// input : The input object for creating a volumetric custom feature.
    /// The newly added volumetric custom feature object or null if one cannot be added.
    /// Only one volumetric model can be added to each body.
    core::Ptr<VolumetricCustomFeature> add(const core::Ptr<VolumetricCustomFeatureInput>& input);

    /// Create a new VolumetricCustomFeatureInput object.
    /// boundaryBody : The boundary body for the volumetric model. Must be a BRepBody or MeshBody. Must have the same parent
    /// component as the VolumetricCustomFeatures.
    /// Returns the newly created VolumetricCustomFeatureInput object or null if the creation failed.
    core::Ptr<VolumetricCustomFeatureInput> createInput(const core::Ptr<core::Base>& boundaryBody);

    typedef VolumetricCustomFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API static const char* classType();
    ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual VolumetricCustomFeature* item_raw(size_t index) const = 0;
    virtual VolumetricCustomFeature* itemByName_raw(const char* name) const = 0;
    virtual VolumetricCustomFeature* add_raw(VolumetricCustomFeatureInput* input) = 0;
    virtual VolumetricCustomFeatureInput* createInput_raw(core::Base* boundaryBody) = 0;
};

// Inline wrappers

inline size_t VolumetricCustomFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<VolumetricCustomFeature> VolumetricCustomFeatures::item(size_t index) const
{
    core::Ptr<VolumetricCustomFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<VolumetricCustomFeature> VolumetricCustomFeatures::itemByName(const std::string& name) const
{
    core::Ptr<VolumetricCustomFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<VolumetricCustomFeature> VolumetricCustomFeatures::add(const core::Ptr<VolumetricCustomFeatureInput>& input)
{
    core::Ptr<VolumetricCustomFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<VolumetricCustomFeatureInput> VolumetricCustomFeatures::createInput(const core::Ptr<core::Base>& boundaryBody)
{
    core::Ptr<VolumetricCustomFeatureInput> res = createInput_raw(boundaryBody.get());
    return res;
}

template <class OutputIterator> inline void VolumetricCustomFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICCUSTOMFEATURES_API