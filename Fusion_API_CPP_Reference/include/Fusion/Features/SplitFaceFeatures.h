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
# ifdef __COMPILING_ADSK_FUSION_SPLITFACEFEATURES_CPP__
# define ADSK_FUSION_SPLITFACEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SPLITFACEFEATURES_API
# endif
#else
# define ADSK_FUSION_SPLITFACEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class SplitFaceFeature;
    class SplitFaceFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing split face features in a component
/// and supports the ability to create new split face features.
class SplitFaceFeatures : public core::Base {
public:

    /// Function that returns the specified split face feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SplitFaceFeature> item(size_t index) const;

    /// The number of split face features in the collection.
    size_t count() const;

    /// Creates a SplitFaceFeatureInput object. Use properties and methods on this object
    /// to define the split face you want to create and then use the Add method, passing in
    /// the SplitFaceFeatureInput object.
    /// 
    /// A newly created SplitFaceFeatureInput object defaults to creating a split face feature
    /// using the "Split with Surface" option. You can use functions on the SplitFaceFeatureInput
    /// object to define a different type of split type.
    /// facesToSplit : Input the faces to be split. The collection can contain one or more faces from solid and/or open bodies.
    /// splittingTool : Input entity(s) that defines the splitting tool. The splitting tool can be a single entity or an ObjectCollection
    /// containing solid and/or open bodies, construction planes, faces, or sketch curves that partially or fully intersect
    /// the faces that are being split.
    /// isSplittingToolExtended : A boolean value for setting whether or not the splittingTool is to be automatically extended (if possible) so as to
    /// completely intersect the faces that are to be split. This is only used when the split type is "split with surface"
    /// which is the default type when a new createInput is created. Use functions on the returned SplitFaceFeatureInput
    /// to define a different type of split type.
    /// Returns the newly created SplitFaceFeatureInput object or null if the creation failed.
    core::Ptr<SplitFaceFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& facesToSplit, const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended) const;

    /// Creates a new split face feature.
    /// input : A SplitFaceFeatureInput object that defines the desired split face feature. Use the createInput
    /// method to create a new SplitFaceFeatureInput object and then use methods on it
    /// (the SplitFaceFeatureInput object) to define the split face.
    /// Returns the newly created SplitFaceFeature object or null if the creation failed.
    core::Ptr<SplitFaceFeature> add(const core::Ptr<SplitFaceFeatureInput>& input);

    /// Function that returns the specified split face feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<SplitFaceFeature> itemByName(const std::string& name) const;

    typedef SplitFaceFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SPLITFACEFEATURES_API static const char* classType();
    ADSK_FUSION_SPLITFACEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SPLITFACEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SPLITFACEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SplitFaceFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SplitFaceFeatureInput* createInput_raw(core::ObjectCollection* facesToSplit, core::Base* splittingTool, bool isSplittingToolExtended) const = 0;
    virtual SplitFaceFeature* add_raw(SplitFaceFeatureInput* input) = 0;
    virtual SplitFaceFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<SplitFaceFeature> SplitFaceFeatures::item(size_t index) const
{
    core::Ptr<SplitFaceFeature> res = item_raw(index);
    return res;
}

inline size_t SplitFaceFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SplitFaceFeatureInput> SplitFaceFeatures::createInput(const core::Ptr<core::ObjectCollection>& facesToSplit, const core::Ptr<core::Base>& splittingTool, bool isSplittingToolExtended) const
{
    core::Ptr<SplitFaceFeatureInput> res = createInput_raw(facesToSplit.get(), splittingTool.get(), isSplittingToolExtended);
    return res;
}

inline core::Ptr<SplitFaceFeature> SplitFaceFeatures::add(const core::Ptr<SplitFaceFeatureInput>& input)
{
    core::Ptr<SplitFaceFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<SplitFaceFeature> SplitFaceFeatures::itemByName(const std::string& name) const
{
    core::Ptr<SplitFaceFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void SplitFaceFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SPLITFACEFEATURES_API