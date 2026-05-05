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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DERIVEFEATURES_CPP__
# define ADSK_FUSION_DERIVEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_DERIVEFEATURES_API
# endif
#else
# define ADSK_FUSION_DERIVEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class DeriveFeature;
    class DeriveFeatureInput;
    class Design;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing derive features in a component
/// and supports the ability to create new derive features.
class DeriveFeatures : public core::Base {
public:

    /// Function that returns the specified derive feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<DeriveFeature> item(size_t index) const;

    /// The number of derive features in the collection.
    size_t count() const;

    /// Creates a DeriveFeatureInput object. Use properties and methods on this object
    /// to define the derive you want to create and then use the Add method, passing in
    /// the DeriveFeatureInput object.
    /// sourceDesign : The Design that will be derived.
    /// Returns a DeriveFeatureInput or null if the creation failed.
    core::Ptr<DeriveFeatureInput> createInput(const core::Ptr<Design>& sourceDesign) const;

    /// Creates a new derive feature.
    /// input : A DeriveFeatureInput object that defines the desired derive. Use the createInput method
    /// to create a new DeriveFeatureInput object and then use methods on it to define the derive.
    /// Returns the newly created DeriveFeature object or null if the creation failed.
    core::Ptr<DeriveFeature> add(const core::Ptr<DeriveFeatureInput>& input);

    /// Function that returns the specified derive feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<DeriveFeature> itemByName(const std::string& name) const;

    typedef DeriveFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_DERIVEFEATURES_API static const char* classType();
    ADSK_FUSION_DERIVEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_DERIVEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DERIVEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DeriveFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DeriveFeatureInput* createInput_raw(Design* sourceDesign) const = 0;
    virtual DeriveFeature* add_raw(DeriveFeatureInput* input) = 0;
    virtual DeriveFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<DeriveFeature> DeriveFeatures::item(size_t index) const
{
    core::Ptr<DeriveFeature> res = item_raw(index);
    return res;
}

inline size_t DeriveFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<DeriveFeatureInput> DeriveFeatures::createInput(const core::Ptr<Design>& sourceDesign) const
{
    core::Ptr<DeriveFeatureInput> res = createInput_raw(sourceDesign.get());
    return res;
}

inline core::Ptr<DeriveFeature> DeriveFeatures::add(const core::Ptr<DeriveFeatureInput>& input)
{
    core::Ptr<DeriveFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<DeriveFeature> DeriveFeatures::itemByName(const std::string& name) const
{
    core::Ptr<DeriveFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void DeriveFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DERIVEFEATURES_API