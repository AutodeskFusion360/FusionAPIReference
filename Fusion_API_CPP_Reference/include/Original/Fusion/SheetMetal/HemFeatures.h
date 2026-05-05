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
# ifdef __COMPILING_ADSK_FUSION_HEMFEATURES_CPP__
# define ADSK_FUSION_HEMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_HEMFEATURES_API
# endif
#else
# define ADSK_FUSION_HEMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class HemFeature;
    class HemFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing hem features in a design and supports the ability to create new hem features.
class HemFeatures : public core::Base {
public:

    /// Function that returns the specified hem feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<HemFeature> item(size_t index) const;

    /// The number of hem features in the collection.
    size_t count() const;

    /// Function that returns the specified hem feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<HemFeature> itemByName(const std::string& name) const;

    /// Creates a HemFeatureInput object. Use methods on this object to define the hem you want
    /// to create and then use the add method, passing in the HemFeatureInput object.
    /// Returns the newly created HemFeatureInput object or null if the creation failed.
    core::Ptr<HemFeatureInput> createHemFeatureInput() const;

    /// Creates a new Hem feature.
    /// input : A HemFeatureInput object that defines the desired hem. Use the createInput
    /// method to create a new HemFeatureInput object and then use methods on it
    /// (the HemFeatureInput object) to define the hem.
    /// Returns the newly created HemFeature object or null if the creation failed.
    core::Ptr<HemFeature> add(const core::Ptr<HemFeatureInput>& input);

    typedef HemFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_HEMFEATURES_API static const char* classType();
    ADSK_FUSION_HEMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_HEMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HEMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual HemFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual HemFeature* itemByName_raw(const char* name) const = 0;
    virtual HemFeatureInput* createHemFeatureInput_raw() const = 0;
    virtual HemFeature* add_raw(HemFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<HemFeature> HemFeatures::item(size_t index) const
{
    core::Ptr<HemFeature> res = item_raw(index);
    return res;
}

inline size_t HemFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<HemFeature> HemFeatures::itemByName(const std::string& name) const
{
    core::Ptr<HemFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<HemFeatureInput> HemFeatures::createHemFeatureInput() const
{
    core::Ptr<HemFeatureInput> res = createHemFeatureInput_raw();
    return res;
}

inline core::Ptr<HemFeature> HemFeatures::add(const core::Ptr<HemFeatureInput>& input)
{
    core::Ptr<HemFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void HemFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HEMFEATURES_API