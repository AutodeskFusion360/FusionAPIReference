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
# ifdef __COMPILING_ADSK_FUSION_BOSSFEATURES_CPP__
# define ADSK_FUSION_BOSSFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_BOSSFEATURES_API
# endif
#else
# define ADSK_FUSION_BOSSFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BossFeature;
    class BossFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing boss features in a design.
class BossFeatures : public core::Base {
public:

    /// Function that returns the specified boss feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BossFeature> item(size_t index) const;

    /// The number of boss features in the collection.
    size_t count() const;

    /// Function that returns the specified boss feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<BossFeature> itemByName(const std::string& name) const;

    /// Creates a new boss feature (or more boss features) based on the information provided
    /// by a BossFeatureInput object.
    /// To create a new boss or boss connection, use createInput function to define a new input object for
    /// the type of boss feature you want to create. Use the methods and properties on the input object
    /// to define any additional inputs. Once the information is defined on the input object, you
    /// can pass it to the Add method to create the boss feature or boss connection.
    /// input : The BossFeatureInput object that defines the boss or boss connection you want to create.
    /// Returns the newly created BossFeature objects or empty vector/list if the creation failed.
    std::vector<core::Ptr<BossFeature>> add(const core::Ptr<BossFeatureInput>& input);

    /// Creates a new BossFeatureInput object that is used to specify the input needed to create a new boss feature(s).
    /// Returns the newly created BossFeatureInput object or null if the creation failed.
    core::Ptr<BossFeatureInput> createInput() const;

    typedef BossFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BOSSFEATURES_API static const char* classType();
    ADSK_FUSION_BOSSFEATURES_API const char* objectType() const override;
    ADSK_FUSION_BOSSFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOSSFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BossFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BossFeature* itemByName_raw(const char* name) const = 0;
    virtual BossFeature** add_raw(BossFeatureInput* input, size_t& return_size) = 0;
    virtual BossFeatureInput* createInput_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BossFeature> BossFeatures::item(size_t index) const
{
    core::Ptr<BossFeature> res = item_raw(index);
    return res;
}

inline size_t BossFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BossFeature> BossFeatures::itemByName(const std::string& name) const
{
    core::Ptr<BossFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline std::vector<core::Ptr<BossFeature>> BossFeatures::add(const core::Ptr<BossFeatureInput>& input)
{
    std::vector<core::Ptr<BossFeature>> res;
    size_t s;

    BossFeature** p= add_raw(input.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<BossFeatureInput> BossFeatures::createInput() const
{
    core::Ptr<BossFeatureInput> res = createInput_raw();
    return res;
}

template <class OutputIterator> inline void BossFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOSSFEATURES_API