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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATURES_CPP__
# define ADSK_FUSION_CUSTOMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATURES_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeature;
    class CustomFeatureDefinition;
    class CustomFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing custom features in a component
/// and supports the ability to create new custom features.
class CustomFeatures : public core::Base {
public:

    /// Function that returns the specified ruled surface feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CustomFeature> item(size_t index) const;

    /// The number of CustomFeature objects in the collection.
    size_t count() const;

    /// Function that returns the specified CustomFeature feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<CustomFeature> itemByName(const std::string& name) const;

    /// Creates a new input object that you use to define a custom feature. Creating an input object doesn't
    /// create the feature but provides a way to gather all of the input needed to create a custom feature.
    /// To create the custom feature, the fully defined input object is passed to the add method.
    /// definition : The CustomFeatureDefinition for the type of custom feature being created.
    /// Returns the newly created CustomFeatureInput object or null in the case of invalid input.
    core::Ptr<CustomFeatureInput> createInput(const core::Ptr<CustomFeatureDefinition>& definition) const;

    /// Creates a new custom feature.
    /// input : The CustomFeatureInput object that defines the information needed to create a custom feature.
    /// Returns the newly created CustomFeature.
    core::Ptr<CustomFeature> add(const core::Ptr<CustomFeatureInput>& input);

    typedef CustomFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CUSTOMFEATURES_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CustomFeature* itemByName_raw(const char* name) const = 0;
    virtual CustomFeatureInput* createInput_raw(CustomFeatureDefinition* definition) const = 0;
    virtual CustomFeature* add_raw(CustomFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<CustomFeature> CustomFeatures::item(size_t index) const
{
    core::Ptr<CustomFeature> res = item_raw(index);
    return res;
}

inline size_t CustomFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CustomFeature> CustomFeatures::itemByName(const std::string& name) const
{
    core::Ptr<CustomFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<CustomFeatureInput> CustomFeatures::createInput(const core::Ptr<CustomFeatureDefinition>& definition) const
{
    core::Ptr<CustomFeatureInput> res = createInput_raw(definition.get());
    return res;
}

inline core::Ptr<CustomFeature> CustomFeatures::add(const core::Ptr<CustomFeatureInput>& input)
{
    core::Ptr<CustomFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void CustomFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATURES_API