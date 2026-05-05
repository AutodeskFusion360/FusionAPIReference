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
# ifdef __COMPILING_ADSK_FUSION_RULEFILLETFEATURES_CPP__
# define ADSK_FUSION_RULEFILLETFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_RULEFILLETFEATURES_API
# endif
#else
# define ADSK_FUSION_RULEFILLETFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RuleFilletFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This object is obsolete. You should use the FilletFeatures to access the rule fillet features.
/// The FilletFeature.filletFeatureType can be used to determine if a FilletFeature is a rule fillet feature or not.
class RuleFilletFeatures : public core::Base {
public:

    /// Function that returns the specified rule fillet feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RuleFilletFeature> item(size_t index) const;

    /// Function that returns the specified rule fillet feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<RuleFilletFeature> itemByName(const std::string& name) const;

    /// The number of rule fillet features in the collection.
    size_t count() const;

    typedef RuleFilletFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RULEFILLETFEATURES_API static const char* classType();
    ADSK_FUSION_RULEFILLETFEATURES_API const char* objectType() const override;
    ADSK_FUSION_RULEFILLETFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEFILLETFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RuleFilletFeature* item_raw(size_t index) const = 0;
    virtual RuleFilletFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RuleFilletFeature> RuleFilletFeatures::item(size_t index) const
{
    core::Ptr<RuleFilletFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<RuleFilletFeature> RuleFilletFeatures::itemByName(const std::string& name) const
{
    core::Ptr<RuleFilletFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t RuleFilletFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void RuleFilletFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RULEFILLETFEATURES_API