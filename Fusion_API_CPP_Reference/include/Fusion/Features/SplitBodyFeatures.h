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
# ifdef __COMPILING_ADSK_FUSION_SPLITBODYFEATURES_CPP__
# define ADSK_FUSION_SPLITBODYFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SPLITBODYFEATURES_API
# endif
#else
# define ADSK_FUSION_SPLITBODYFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SplitBodyFeature;
    class SplitBodyFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing split body features in a component
/// and supports the ability to create new split body features.
class SplitBodyFeatures : public core::Base {
public:

    /// Function that returns the specified split body feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SplitBodyFeature> item(size_t index) const;

    /// The number of split body features in the collection.
    size_t count() const;

    /// Creates a SplitBodyFeatureInput object. Use properties and methods on this object
    /// to define the split body you want to create and then use the Add method, passing in
    /// the SplitBodyFeatureInput object.
    /// splitBodies : Input solid body or open bodies to be split. This can be a single BRepBody or an ObjectCollection if multiple
    /// bodies are to be split.
    /// splittingTool : Input entity that defines the splitting tool. The splitting tool is a single entity that can be either a solid or open BRepBody,
    /// construction plane, profile, or a face.
    /// isSplittingToolExtended : A boolean value for setting whether or not the splitting tool is to be automatically extended (if possible) so as to
    /// completely intersect the bodyToSplit.
    /// Returns the newly created SplitBodyFeatureInput object or null if the creation failed.
    core::Ptr<SplitBodyFeatureInput> createInput(const core::Ptr<core::Base>& splitBodies, const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended) const;

    /// Creates a new split body feature.
    /// input : A SplitBodyFeatureInput object that defines the desired split body feature. Use the createInput
    /// method to create a new SplitBodyFeatureInput object and then use methods on it
    /// (the SplitBodyFeatureInput object) to define the split body.
    /// Returns the newly created SplitBodyFeature object or null if the creation failed.
    core::Ptr<SplitBodyFeature> add(const core::Ptr<SplitBodyFeatureInput>& input);

    /// Function that returns the specified split body feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<SplitBodyFeature> itemByName(const std::string& name) const;

    typedef SplitBodyFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SPLITBODYFEATURES_API static const char* classType();
    ADSK_FUSION_SPLITBODYFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SPLITBODYFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPLITBODYFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SplitBodyFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SplitBodyFeatureInput* createInput_raw(core::Base* splitBodies, core::Base* splittingTool, bool isSplittingToolExtended) const = 0;
    virtual SplitBodyFeature* add_raw(SplitBodyFeatureInput* input) = 0;
    virtual SplitBodyFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<SplitBodyFeature> SplitBodyFeatures::item(size_t index) const
{
    core::Ptr<SplitBodyFeature> res = item_raw(index);
    return res;
}

inline size_t SplitBodyFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SplitBodyFeatureInput> SplitBodyFeatures::createInput(const core::Ptr<core::Base>& splitBodies, const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended) const
{
    core::Ptr<SplitBodyFeatureInput> res = createInput_raw(splitBodies.get(), splittingTool.get(), isSplittingToolExtended);
    return res;
}

inline core::Ptr<SplitBodyFeature> SplitBodyFeatures::add(const core::Ptr<SplitBodyFeatureInput>& input)
{
    core::Ptr<SplitBodyFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<SplitBodyFeature> SplitBodyFeatures::itemByName(const std::string& name) const
{
    core::Ptr<SplitBodyFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void SplitBodyFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPLITBODYFEATURES_API