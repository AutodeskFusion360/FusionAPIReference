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
# ifdef __COMPILING_ADSK_FUSION_CHAMFERFEATURES_CPP__
# define ADSK_FUSION_CHAMFERFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_CHAMFERFEATURES_API
# endif
#else
# define ADSK_FUSION_CHAMFERFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ChamferFeature;
    class ChamferFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing chamfer features in a component
/// and supports the ability to create new chamfer features.
class ChamferFeatures : public core::Base {
public:

    /// Function that returns the specified chamfer feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ChamferFeature> item(size_t index) const;

    /// The number of chamfer features in the collection.
    size_t count() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a ChamferFeatureInput object. Use properties and methods on this object
    /// to define the chamfer you want to create and then use the Add method, passing in
    /// the ChamferFeatureInput object.
    /// edges : The collection of edges that will be chamfered.
    /// isTangentChain : Boolean indicating if all edges that are tangentially connected to any of the input edges should be included in the chamfer or not.
    /// Returns the newly created ChamferFeatureInput object or null if the creation failed.
    core::Ptr<ChamferFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& edges, bool isTangentChain) const;

    /// Creates a new chamfer feature.
    /// input : A ChamferFeatureInput object that defines the desired chamfer. Use the createInput
    /// method to create a new ChamferFeatureInput object and then use methods on it
    /// (the ChamferFeatureInput object) to define the chamfer.
    /// Returns the newly created ChamferFeature object or null if the creation failed.
    core::Ptr<ChamferFeature> add(const core::Ptr<ChamferFeatureInput>& input);

    /// Function that returns the specified chamfer feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ChamferFeature> itemByName(const std::string& name) const;

    /// Creates a ChamferFeatureInput object. Use properties and methods on this object
    /// to define the chamfer you want to create and then use the Add method, passing in
    /// the ChamferFeatureInput object.
    /// Returns the newly created ChamferFeatureInput object or null if the creation failed.
    core::Ptr<ChamferFeatureInput> createInput2() const;

    typedef ChamferFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CHAMFERFEATURES_API static const char* classType();
    ADSK_FUSION_CHAMFERFEATURES_API const char* objectType() const override;
    ADSK_FUSION_CHAMFERFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CHAMFERFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ChamferFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ChamferFeatureInput* createInput_raw(core::ObjectCollection* edges, bool isTangentChain) const = 0;
    virtual ChamferFeature* add_raw(ChamferFeatureInput* input) = 0;
    virtual ChamferFeature* itemByName_raw(const char* name) const = 0;
    virtual ChamferFeatureInput* createInput2_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ChamferFeature> ChamferFeatures::item(size_t index) const
{
    core::Ptr<ChamferFeature> res = item_raw(index);
    return res;
}

inline size_t ChamferFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ChamferFeatureInput> ChamferFeatures::createInput(const core::Ptr<core::ObjectCollection>& edges, bool isTangentChain) const
{
    core::Ptr<ChamferFeatureInput> res = createInput_raw(edges.get(), isTangentChain);
    return res;
}

inline core::Ptr<ChamferFeature> ChamferFeatures::add(const core::Ptr<ChamferFeatureInput>& input)
{
    core::Ptr<ChamferFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ChamferFeature> ChamferFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ChamferFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<ChamferFeatureInput> ChamferFeatures::createInput2() const
{
    core::Ptr<ChamferFeatureInput> res = createInput2_raw();
    return res;
}

template <class OutputIterator> inline void ChamferFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CHAMFERFEATURES_API