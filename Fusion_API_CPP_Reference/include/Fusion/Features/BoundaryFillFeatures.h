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
# ifdef __COMPILING_ADSK_FUSION_BOUNDARYFILLFEATURES_CPP__
# define ADSK_FUSION_BOUNDARYFILLFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_BOUNDARYFILLFEATURES_API
# endif
#else
# define ADSK_FUSION_BOUNDARYFILLFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BoundaryFillFeature;
    class BoundaryFillFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing boundary fill features in a component
/// and supports the ability to create new boundary fill features.
class BoundaryFillFeatures : public core::Base {
public:

    /// Function that returns the specified boundary fill feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BoundaryFillFeature> item(size_t index) const;

    /// The number of boundary fill features in the collection.
    size_t count() const;

    /// Creates a BoundaryFillFeatureInput object. Use properties and methods on this object
    /// to define the boundary fill you want to create and then use the Add method, passing in
    /// the BoundaryFillFeatureInput object.
    /// 
    /// To determine the possible boundaries and allow you to choose which cells to keep, the boundary
    /// fill feature does a partial compute when the input object is created. To do this it starts a boundary
    /// fill feature transaction and completes the transaction when you call the add method. If you don't
    /// call the add method to finish the transaction it leaves Fusion in a bad state and there will be undo
    /// problems and possibly a crash. If you have created a BoundFillFeatureInput object and don't want to finish
    /// the feature creation, you need to call the cancel method on the BoundaryFillFeatureInput object to
    /// safely abort the current boundary fill transaction.
    /// tools : A collection of one or more construction planes and open or closed BRepBody objects that will be
    /// used in calculating the possible closed boundaries.
    /// operation : The operation type to perform.
    /// Returns the newly created BoundaryFillFeatureInput object or null if the creation failed.
    core::Ptr<BoundaryFillFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& tools, FeatureOperations operation) const;

    /// Creates a new boundary fill feature.
    /// input : A BoundaryFillFeatureInput object that defines the desired boundary fill feature. Use the createInput
    /// method to create a new BoundaryFillFeatureInput object and then use methods on it
    /// (the BoundaryFillFeatureInput object) to define the boundary fill feature.
    /// Returns the newly created BoundaryFillFeature object or null if the creation failed.
    core::Ptr<BoundaryFillFeature> add(const core::Ptr<BoundaryFillFeatureInput>& input);

    /// Function that returns the specified boundary fill feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<BoundaryFillFeature> itemByName(const std::string& name) const;

    typedef BoundaryFillFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BOUNDARYFILLFEATURES_API static const char* classType();
    ADSK_FUSION_BOUNDARYFILLFEATURES_API const char* objectType() const override;
    ADSK_FUSION_BOUNDARYFILLFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOUNDARYFILLFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BoundaryFillFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BoundaryFillFeatureInput* createInput_raw(core::ObjectCollection* tools, FeatureOperations operation) const = 0;
    virtual BoundaryFillFeature* add_raw(BoundaryFillFeatureInput* input) = 0;
    virtual BoundaryFillFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<BoundaryFillFeature> BoundaryFillFeatures::item(size_t index) const
{
    core::Ptr<BoundaryFillFeature> res = item_raw(index);
    return res;
}

inline size_t BoundaryFillFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BoundaryFillFeatureInput> BoundaryFillFeatures::createInput(const core::Ptr<core::ObjectCollection>& tools, FeatureOperations operation) const
{
    core::Ptr<BoundaryFillFeatureInput> res = createInput_raw(tools.get(), operation);
    return res;
}

inline core::Ptr<BoundaryFillFeature> BoundaryFillFeatures::add(const core::Ptr<BoundaryFillFeatureInput>& input)
{
    core::Ptr<BoundaryFillFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<BoundaryFillFeature> BoundaryFillFeatures::itemByName(const std::string& name) const
{
    core::Ptr<BoundaryFillFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void BoundaryFillFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOUNDARYFILLFEATURES_API