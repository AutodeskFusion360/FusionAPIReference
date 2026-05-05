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
# ifdef __COMPILING_ADSK_FUSION_FILLETFEATURES_CPP__
# define ADSK_FUSION_FILLETFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_FILLETFEATURES_API
# endif
#else
# define ADSK_FUSION_FILLETFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class FilletFeature;
    class FilletFeatureInput;
    class FullRoundFilletFeatureInput;
    class RuleFilletFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing fillet features in a component
/// and supports the ability to create new fillet features.
class FilletFeatures : public core::Base {
public:

    /// Function that returns the specified fillet feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<FilletFeature> item(size_t index) const;

    /// The number of fillet features in the collection.
    size_t count() const;

    /// Creates a FilletFeatureInput object. Use properties and methods on this object
    /// to define the fillet you want to create and then use the Add method, passing in
    /// the FilletFeatureInput object.
    /// Returns the newly created FilletFeatureInput object or null if the creation failed.
    core::Ptr<FilletFeatureInput> createInput() const;

    /// Creates a new fillet feature.
    /// input : A FilletFeatureInput object that defines the desired fillet. Use the createInput
    /// method to create a new FilletFeatureInput object and then use methods on it
    /// (the FilletFeatureInput object) to define the fillet.
    /// Returns the newly created FilletFeature object or null if the creation failed.
    core::Ptr<FilletFeature> add(const core::Ptr<FilletFeatureInput>& input);

    /// Function that returns the specified fillet feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<FilletFeature> itemByName(const std::string& name) const;

    /// Creates a FullRoundFilletFeatureInput object. Use properties and methods on this object
    /// to define the fillet you want to create and then use the addFullRoundFillet method, passing in
    /// the FullRoundFilletFeatureInput object.
    /// Returns the newly created FullRoundFilletFeatureInput object or null if the creation failed.
    core::Ptr<FullRoundFilletFeatureInput> createFullRoundFilletInput() const;

    /// Creates a new full round fillet feature.
    /// input : A FullRoundFilletFeatureInput object that defines the desired fillet.
    /// Use the createFullRoundFilletInput method to create a new FullRoundFilletFeatureInput object
    /// and then use methods on it (the FullRoundFilletFeatureInput object) to define the fillet.
    /// Returns the newly created FilletFeature object or null if the creation failed.
    core::Ptr<FilletFeature> addFullRoundFillet(const core::Ptr<FullRoundFilletFeatureInput>& input);

    /// Creates a RuleFilletFeatureInput object. Use properties and methods on this object
    /// to define the fillet you want to create and then use the addRuleFillet method, passing in
    /// the RuleFilletFeatureInput object.
    /// Returns the newly created RuleFilletFeatureInput object or null if the creation failed.
    core::Ptr<RuleFilletFeatureInput> createRuleFilletInput() const;

    /// Creates a new rule fillet feature.
    /// input : A RuleFilletFeatureInput object that defines the desired fillet.
    /// Use the createRuleFilletInput method to create a new RuleFilletFeatureInput object
    /// and then use methods on it(the RuleFilletFeatureInput object) to define the fillet.
    /// Returns the newly created FilletFeature object or null if the creation failed.
    core::Ptr<FilletFeature> addRuleFillet(const core::Ptr<RuleFilletFeatureInput>& input);

    typedef FilletFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_FILLETFEATURES_API static const char* classType();
    ADSK_FUSION_FILLETFEATURES_API const char* objectType() const override;
    ADSK_FUSION_FILLETFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FILLETFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FilletFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual FilletFeatureInput* createInput_raw() const = 0;
    virtual FilletFeature* add_raw(FilletFeatureInput* input) = 0;
    virtual FilletFeature* itemByName_raw(const char* name) const = 0;
    virtual FullRoundFilletFeatureInput* createFullRoundFilletInput_raw() const = 0;
    virtual FilletFeature* addFullRoundFillet_raw(FullRoundFilletFeatureInput* input) = 0;
    virtual RuleFilletFeatureInput* createRuleFilletInput_raw() const = 0;
    virtual FilletFeature* addRuleFillet_raw(RuleFilletFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<FilletFeature> FilletFeatures::item(size_t index) const
{
    core::Ptr<FilletFeature> res = item_raw(index);
    return res;
}

inline size_t FilletFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<FilletFeatureInput> FilletFeatures::createInput() const
{
    core::Ptr<FilletFeatureInput> res = createInput_raw();
    return res;
}

inline core::Ptr<FilletFeature> FilletFeatures::add(const core::Ptr<FilletFeatureInput>& input)
{
    core::Ptr<FilletFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<FilletFeature> FilletFeatures::itemByName(const std::string& name) const
{
    core::Ptr<FilletFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<FullRoundFilletFeatureInput> FilletFeatures::createFullRoundFilletInput() const
{
    core::Ptr<FullRoundFilletFeatureInput> res = createFullRoundFilletInput_raw();
    return res;
}

inline core::Ptr<FilletFeature> FilletFeatures::addFullRoundFillet(const core::Ptr<FullRoundFilletFeatureInput>& input)
{
    core::Ptr<FilletFeature> res = addFullRoundFillet_raw(input.get());
    return res;
}

inline core::Ptr<RuleFilletFeatureInput> FilletFeatures::createRuleFilletInput() const
{
    core::Ptr<RuleFilletFeatureInput> res = createRuleFilletInput_raw();
    return res;
}

inline core::Ptr<FilletFeature> FilletFeatures::addRuleFillet(const core::Ptr<RuleFilletFeatureInput>& input)
{
    core::Ptr<FilletFeature> res = addRuleFillet_raw(input.get());
    return res;
}

template <class OutputIterator> inline void FilletFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FILLETFEATURES_API