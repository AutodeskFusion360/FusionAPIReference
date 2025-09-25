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
# ifdef __COMPILING_ADSK_FUSION_RIPFEATURES_CPP__
# define ADSK_FUSION_RIPFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_RIPFEATURES_API
# endif
#else
# define ADSK_FUSION_RIPFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RipFeature;
    class RipFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Rip features in a design.
class RipFeatures : public core::Base {
public:

    /// Function that returns the specified Rip feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RipFeature> item(size_t index) const;

    /// The number of Rip features in the collection.
    size_t count() const;

    /// Function that returns the specified Rip feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<RipFeature> itemByName(const std::string& name) const;

    /// Creates a RipFeatureInput object. Use methods on this object to define the rip you want
    /// to create and then use the add method, passing in the RipFeatureInput object.
    /// Returns the newly created RipFeatureInput object or null if the creation failed.
    core::Ptr<RipFeatureInput> createRipFeatureInput() const;

    /// Creates a new Rip feature.
    /// input : A RipFeatureInput object that defines the desired rip. Use the createInput
    /// method to create a new RipFeatureInput object and then use methods on it
    /// (the RipFeatureInput object) to define the rip.
    /// Returns the newly created RipFeature object or null if the creation failed.
    core::Ptr<RipFeature> add(const core::Ptr<RipFeatureInput>& input);

    typedef RipFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RIPFEATURES_API static const char* classType();
    ADSK_FUSION_RIPFEATURES_API const char* objectType() const override;
    ADSK_FUSION_RIPFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIPFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RipFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RipFeature* itemByName_raw(const char* name) const = 0;
    virtual RipFeatureInput* createRipFeatureInput_raw() const = 0;
    virtual RipFeature* add_raw(RipFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<RipFeature> RipFeatures::item(size_t index) const
{
    core::Ptr<RipFeature> res = item_raw(index);
    return res;
}

inline size_t RipFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RipFeature> RipFeatures::itemByName(const std::string& name) const
{
    core::Ptr<RipFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<RipFeatureInput> RipFeatures::createRipFeatureInput() const
{
    core::Ptr<RipFeatureInput> res = createRipFeatureInput_raw();
    return res;
}

inline core::Ptr<RipFeature> RipFeatures::add(const core::Ptr<RipFeatureInput>& input)
{
    core::Ptr<RipFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void RipFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIPFEATURES_API