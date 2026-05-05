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
# ifdef __COMPILING_ADSK_FUSION_EXTENDFEATURES_CPP__
# define ADSK_FUSION_EXTENDFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_EXTENDFEATURES_API
# endif
#else
# define ADSK_FUSION_EXTENDFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ExtendFeature;
    class ExtendFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Extend features in a component
/// and supports the ability to create new Extend features.
class ExtendFeatures : public core::Base {
public:

    /// Function that returns the specified extend feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ExtendFeature> item(size_t index) const;

    /// The number of Extend features in the collection.
    size_t count() const;

    /// Creates an ExtendFeatureInput object. Use properties and methods on this object
    /// to define the extend feature you want to create and then use the Add method, passing in
    /// the ExtendFeatureInput object.
    /// edges : The surface edges to extend.
    /// Only the outer edges from an open body can be extended. The edges must all be from the same body.
    /// Depending on the extend type there can also be some limitations on the edges being input as described below
    /// for the extendType argument.
    /// distance : ValueInput object that defines the distance to extend the face/s.
    /// Natural and Tangent Extend types require a positive distance value.
    /// Perpendicular Extend Type supports either a positive or negative value to
    /// control the direction of the extend. A positive number results in the
    /// perpendicular extension being in the same direction as the positive normal
    /// of the connected faces.
    /// extendType : The extension type to use when extending the face(s).
    /// Input edges must be connected at endpoints when Tangent or Perpendicular Extend Types are used.
    /// Input edges need not be connected when Natural Extend type is used.
    /// isChainingEnabled : An optional boolean argument whose default is true. If this argument is true, all edges that are
    /// tangent or curvature continuous, and end point connected, will be found automatically and include
    /// in the set of edges to extend.
    /// Returns the newly created ExtendFeatureInput object or null if the creation failed.
    core::Ptr<ExtendFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, SurfaceExtendTypes extendType, bool isChainingEnabled = true) const;

    /// Creates a new extend feature.
    /// input : An ExtendFeatureInput object that defines the desired extend feature. Use the createInput
    /// method to create a new ExtendFeatureInput object and then use methods on it
    /// (the ExtendFeatureInput object) to define the desired options for the extent feature.
    /// Returns the newly created ExtendFeature object or null if the creation failed.
    core::Ptr<ExtendFeature> add(const core::Ptr<ExtendFeatureInput>& input);

    /// Function that returns the specified extend feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ExtendFeature> itemByName(const std::string& name) const;

    typedef ExtendFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_EXTENDFEATURES_API static const char* classType();
    ADSK_FUSION_EXTENDFEATURES_API const char* objectType() const override;
    ADSK_FUSION_EXTENDFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTENDFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ExtendFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ExtendFeatureInput* createInput_raw(core::ObjectCollection* edges, core::ValueInput* distance, SurfaceExtendTypes extendType, bool isChainingEnabled) const = 0;
    virtual ExtendFeature* add_raw(ExtendFeatureInput* input) = 0;
    virtual ExtendFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<ExtendFeature> ExtendFeatures::item(size_t index) const
{
    core::Ptr<ExtendFeature> res = item_raw(index);
    return res;
}

inline size_t ExtendFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ExtendFeatureInput> ExtendFeatures::createInput(const core::Ptr<core::ObjectCollection>& edges, const core::Ptr<core::ValueInput>& distance, SurfaceExtendTypes extendType, bool isChainingEnabled) const
{
    core::Ptr<ExtendFeatureInput> res = createInput_raw(edges.get(), distance.get(), extendType, isChainingEnabled);
    return res;
}

inline core::Ptr<ExtendFeature> ExtendFeatures::add(const core::Ptr<ExtendFeatureInput>& input)
{
    core::Ptr<ExtendFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ExtendFeature> ExtendFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ExtendFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void ExtendFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTENDFEATURES_API