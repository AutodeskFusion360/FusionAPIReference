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
# ifdef __COMPILING_ADSK_FUSION_CORNERCLOSUREFEATURES_CPP__
# define ADSK_FUSION_CORNERCLOSUREFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_CORNERCLOSUREFEATURES_API
# endif
#else
# define ADSK_FUSION_CORNERCLOSUREFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
    class CornerClosureFeature;
    class CornerClosureFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing corner closure features in a design and supports the ability to create new corner closure features.
class CornerClosureFeatures : public core::Base {
public:

    /// Function that returns the specified corner closure feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CornerClosureFeature> item(size_t index) const;

    /// The number of corner closure features in the collection.
    size_t count() const;

    /// Function that returns the specified corner closure feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<CornerClosureFeature> itemByName(const std::string& name) const;

    /// Creates a CornerClosureFeatureInput object. Use methods on this object to define the corner closure you want
    /// to create and then use the add method, passing in the CornerClosureFeatureInput object.
    /// dominantEdge : The BRepEdge that defines the dominant edge of the corner closure.
    /// submissiveEdge : The BRepEdge that defines the submissive edge of the corner closure.
    /// Returns the newly created CornerClosureFeatureInput object or null if the creation failed.
    core::Ptr<CornerClosureFeatureInput> createInput(const core::Ptr<BRepEdge>& dominantEdge, const core::Ptr<BRepEdge>& submissiveEdge) const;

    /// Creates a new Corner Closure feature.
    /// input : A CornerClosureFeatureInput object that defines the desired corner closure. Use the createCornerClosureFeatureInput
    /// method to create a new CornerClosureFeatureInput object and then use methods on it
    /// (the CornerClosureFeatureInput object) to define the corner closure.
    /// Returns the newly created CornerClosureFeature object or null if the creation failed.
    core::Ptr<CornerClosureFeature> add(const core::Ptr<CornerClosureFeatureInput>& input);

    typedef CornerClosureFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CORNERCLOSUREFEATURES_API static const char* classType();
    ADSK_FUSION_CORNERCLOSUREFEATURES_API const char* objectType() const override;
    ADSK_FUSION_CORNERCLOSUREFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CORNERCLOSUREFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CornerClosureFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CornerClosureFeature* itemByName_raw(const char* name) const = 0;
    virtual CornerClosureFeatureInput* createInput_raw(BRepEdge* dominantEdge, BRepEdge* submissiveEdge) const = 0;
    virtual CornerClosureFeature* add_raw(CornerClosureFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<CornerClosureFeature> CornerClosureFeatures::item(size_t index) const
{
    core::Ptr<CornerClosureFeature> res = item_raw(index);
    return res;
}

inline size_t CornerClosureFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CornerClosureFeature> CornerClosureFeatures::itemByName(const std::string& name) const
{
    core::Ptr<CornerClosureFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<CornerClosureFeatureInput> CornerClosureFeatures::createInput(const core::Ptr<BRepEdge>& dominantEdge, const core::Ptr<BRepEdge>& submissiveEdge) const
{
    core::Ptr<CornerClosureFeatureInput> res = createInput_raw(dominantEdge.get(), submissiveEdge.get());
    return res;
}

inline core::Ptr<CornerClosureFeature> CornerClosureFeatures::add(const core::Ptr<CornerClosureFeatureInput>& input)
{
    core::Ptr<CornerClosureFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void CornerClosureFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CORNERCLOSUREFEATURES_API