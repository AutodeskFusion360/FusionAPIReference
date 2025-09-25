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
# ifdef __COMPILING_ADSK_FUSION_REVERSENORMALFEATURES_CPP__
# define ADSK_FUSION_REVERSENORMALFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_REVERSENORMALFEATURES_API
# endif
#else
# define ADSK_FUSION_REVERSENORMALFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class ReverseNormalFeature;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Reverse Normal features in a component
/// and supports the ability to create new Reverse Normal features.
class ReverseNormalFeatures : public core::Base {
public:

    /// Function that returns the specified Reverse Normal feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ReverseNormalFeature> item(size_t index) const;

    /// Function that returns the specified reverse normal feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ReverseNormalFeature> itemByName(const std::string& name) const;

    /// The number of Reverse Normal features in the collection.
    size_t count() const;

    /// Creates a new Reverse Normal feature.
    /// surfaces : One or more surface bodies (open BRepBodies) containing the faces whose normals are to be reversed.
    /// All faces of the input surface bodies get reversed.
    /// Returns the newly created ReverseNormalFeature object or null if the creation failed.
    core::Ptr<ReverseNormalFeature> add(const core::Ptr<core::ObjectCollection>& surfaces);

    typedef ReverseNormalFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_REVERSENORMALFEATURES_API static const char* classType();
    ADSK_FUSION_REVERSENORMALFEATURES_API const char* objectType() const override;
    ADSK_FUSION_REVERSENORMALFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REVERSENORMALFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ReverseNormalFeature* item_raw(size_t index) const = 0;
    virtual ReverseNormalFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ReverseNormalFeature* add_raw(core::ObjectCollection* surfaces) = 0;
};

// Inline wrappers

inline core::Ptr<ReverseNormalFeature> ReverseNormalFeatures::item(size_t index) const
{
    core::Ptr<ReverseNormalFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<ReverseNormalFeature> ReverseNormalFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ReverseNormalFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ReverseNormalFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ReverseNormalFeature> ReverseNormalFeatures::add(const core::Ptr<core::ObjectCollection>& surfaces)
{
    core::Ptr<ReverseNormalFeature> res = add_raw(surfaces.get());
    return res;
}

template <class OutputIterator> inline void ReverseNormalFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REVERSENORMALFEATURES_API