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
# ifdef __COMPILING_ADSK_FUSION_LOFTFEATURES_CPP__
# define ADSK_FUSION_LOFTFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTFEATURES_API
# endif
#else
# define ADSK_FUSION_LOFTFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class LoftFeature;
    class LoftFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing loft features in a design.
class LoftFeatures : public core::Base {
public:

    /// Function that returns the specified loft feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<LoftFeature> item(size_t index) const;

    /// Function that returns the specified loft feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<LoftFeature> itemByName(const std::string& name) const;

    /// The number of loft features in the collection.
    size_t count() const;

    /// Creates a LoftFeatureInput object. Use properties and methods on the returned LoftFeatureInput
    /// object to provide the required input to create a loft feature. The LoftFeatureInput object can then be used as input to the
    /// add method to create the loft feature.
    /// operation : The feature operation to perform.
    /// Returns the newly created LoftFeatureInput object or null if the creation failed.
    core::Ptr<LoftFeatureInput> createInput(FeatureOperations operation) const;

    /// Creates a new loft feature.
    /// input : A LoftFeatureInput object that defines the desired loft feature. Use the createInput
    /// method to create a new LoftFeatureInput object and then use methods on it
    /// (the LoftFeatureInput object) to define the required input.
    /// Returns the newly created LoftFeature object or null if the creation failed.
    core::Ptr<LoftFeature> add(const core::Ptr<LoftFeatureInput>& input);

    typedef LoftFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_LOFTFEATURES_API static const char* classType();
    ADSK_FUSION_LOFTFEATURES_API const char* objectType() const override;
    ADSK_FUSION_LOFTFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoftFeature* item_raw(size_t index) const = 0;
    virtual LoftFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual LoftFeatureInput* createInput_raw(FeatureOperations operation) const = 0;
    virtual LoftFeature* add_raw(LoftFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<LoftFeature> LoftFeatures::item(size_t index) const
{
    core::Ptr<LoftFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<LoftFeature> LoftFeatures::itemByName(const std::string& name) const
{
    core::Ptr<LoftFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t LoftFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<LoftFeatureInput> LoftFeatures::createInput(FeatureOperations operation) const
{
    core::Ptr<LoftFeatureInput> res = createInput_raw(operation);
    return res;
}

inline core::Ptr<LoftFeature> LoftFeatures::add(const core::Ptr<LoftFeatureInput>& input)
{
    core::Ptr<LoftFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void LoftFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTFEATURES_API