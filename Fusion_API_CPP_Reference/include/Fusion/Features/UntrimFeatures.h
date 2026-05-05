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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_UNTRIMFEATURES_CPP__
# define ADSK_FUSION_UNTRIMFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_UNTRIMFEATURES_API
# endif
#else
# define ADSK_FUSION_UNTRIMFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class BRepLoop;
    class UntrimFeature;
    class UntrimFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Untrim features in a component
/// and supports the ability to create new Untrim features.
class UntrimFeatures : public core::Base {
public:

    /// Function that returns the specified Untrim feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<UntrimFeature> item(size_t index) const;

    /// The number of Untrim features in the collection.
    size_t count() const;

    /// Creates an UntrimFeatureInput object that defines the input needed to create an untrim feature. Use the input
    /// object to define the input to create the desired feature and then use the Add method, passing in the UntrimFeatureInput object.
    /// faces : An array of BRepFace objects that will have the loops of the specified type removed.
    /// Only loops that do not have a connected face can be removed (the edges in the loop have a single face).
    /// The array can only contain faces from surface bodies, (the isSolid property of the BRepBody returns false).
    /// untrimLoopType : The loop type to be untrimmed (AllLoopUntrimType, InternalLoopUntrimType, or ExternalLoopUntrimType).
    /// extensionDistance : If the untrim loop type is AllLoopUntrimType or ExternalLoopUntrimType the untrimmed faces can be extended by a specified distance.
    /// Returns the newly created UntrimFeatureInput object or null if the creation failed.
    core::Ptr<UntrimFeatureInput> createInputFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType, const core::Ptr<core::ValueInput>& extensionDistance = NULL) const;

    /// Creates an UntrimFeatureInput object that defines the input needed to create an untrim feature. Use the input
    /// object to define the input to create the desired feature and then use the Add method, passing in the UntrimFeatureInput object.
    /// loops : Input the entities that define loops to remove.
    /// Only loops that do not have a connected face can be removed (the edges in the loop have a single face)
    /// The array can only contain loops from surface bodies, (the isSolid property of the BRepBody returns false).
    /// extensionDistance : If an external boundary is removed the untrimmed face can be extended by a specified distance.
    /// Returns the newly created UntrimFeatureInput object or null if the creation failed.
    core::Ptr<UntrimFeatureInput> createInputFromLoops(const std::vector<core::Ptr<BRepLoop>>& loops, const core::Ptr<core::ValueInput>& extensionDistance = NULL) const;

    /// Creates a new Untrim feature.
    /// input : An UntrimFeatureInput object that defines the desired Untrim feature. Use the createInput
    /// method to create a new UntrimFeatureInput object and then use methods on it
    /// (the UntrimFeatureInput object) to define the desired options for the Untrim feature.
    /// Returns the newly created UntrimFeature object or null if the creation failed.
    core::Ptr<UntrimFeature> add(const core::Ptr<UntrimFeatureInput>& input);

    /// Function that returns the specified Untrim feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<UntrimFeature> itemByName(const std::string& name) const;

    typedef UntrimFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_UNTRIMFEATURES_API static const char* classType();
    ADSK_FUSION_UNTRIMFEATURES_API const char* objectType() const override;
    ADSK_FUSION_UNTRIMFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNTRIMFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UntrimFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual UntrimFeatureInput* createInputFromFaces_raw(BRepFace** faces, size_t faces_size, UntrimLoopTypes untrimLoopType, core::ValueInput* extensionDistance) const = 0;
    virtual UntrimFeatureInput* createInputFromLoops_raw(BRepLoop** loops, size_t loops_size, core::ValueInput* extensionDistance) const = 0;
    virtual UntrimFeature* add_raw(UntrimFeatureInput* input) = 0;
    virtual UntrimFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<UntrimFeature> UntrimFeatures::item(size_t index) const
{
    core::Ptr<UntrimFeature> res = item_raw(index);
    return res;
}

inline size_t UntrimFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<UntrimFeatureInput> UntrimFeatures::createInputFromFaces(const std::vector<core::Ptr<BRepFace>>& faces, UntrimLoopTypes untrimLoopType, const core::Ptr<core::ValueInput>& extensionDistance) const
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    core::Ptr<UntrimFeatureInput> res = createInputFromFaces_raw(faces_, faces.size(), untrimLoopType, extensionDistance.get());
    delete[] faces_;
    return res;
}

inline core::Ptr<UntrimFeatureInput> UntrimFeatures::createInputFromLoops(const std::vector<core::Ptr<BRepLoop>>& loops, const core::Ptr<core::ValueInput>& extensionDistance) const
{
    BRepLoop** loops_ = new BRepLoop*[loops.size()];
    for(size_t i=0; i<loops.size(); ++i)
        loops_[i] = loops[i].get();

    core::Ptr<UntrimFeatureInput> res = createInputFromLoops_raw(loops_, loops.size(), extensionDistance.get());
    delete[] loops_;
    return res;
}

inline core::Ptr<UntrimFeature> UntrimFeatures::add(const core::Ptr<UntrimFeatureInput>& input)
{
    core::Ptr<UntrimFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<UntrimFeature> UntrimFeatures::itemByName(const std::string& name) const
{
    core::Ptr<UntrimFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void UntrimFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNTRIMFEATURES_API