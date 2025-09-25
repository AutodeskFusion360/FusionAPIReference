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
# ifdef __COMPILING_ADSK_FUSION_MIRRORFEATURES_CPP__
# define ADSK_FUSION_MIRRORFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MIRRORFEATURES_API
# endif
#else
# define ADSK_FUSION_MIRRORFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class MirrorFeature;
    class MirrorFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing mirror features in a component
/// and supports the ability to create new mirror features.
class MirrorFeatures : public core::Base {
public:

    /// Function that returns the specified mirror feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MirrorFeature> item(size_t index) const;

    /// The number of mirror features in the collection.
    size_t count() const;

    /// Creates a MirrorFeatureInput object. Use properties and methods on this object
    /// to define the mirror you want to create and then use the Add method, passing in
    /// the MirrorFeatureInput object.
    /// inputEntities : A collection of the entities to mirror. It can contain faces, features, bodies, or components.
    /// The input must all be of a single type. For example, you can't provide a body and a component but
    /// the collection must be either all bodies or all components.
    /// mirrorPlane : Input planar entity that defines the mirror plane. This can be either a planar face or a construction plane.
    /// Returns the newly created MirrorFeatureInput object or null if the creation failed.
    core::Ptr<MirrorFeatureInput> createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& mirrorPlane) const;

    /// Creates a new mirror feature.
    /// input : A MirrorFeatureInput object that defines the desired mirror. Use the createInput
    /// method to create a new MirrorFeatureInput object and then use methods on it
    /// (the MirrorFeatureInput object) to define the mirror.
    /// Returns the newly created MirrorFeature object or null if the creation failed.
    core::Ptr<MirrorFeature> add(const core::Ptr<MirrorFeatureInput>& input);

    /// Function that returns the specified mirror feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MirrorFeature> itemByName(const std::string& name) const;

    typedef MirrorFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MIRRORFEATURES_API static const char* classType();
    ADSK_FUSION_MIRRORFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MIRRORFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MIRRORFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MirrorFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MirrorFeatureInput* createInput_raw(core::ObjectCollection* inputEntities, core::Base* mirrorPlane) const = 0;
    virtual MirrorFeature* add_raw(MirrorFeatureInput* input) = 0;
    virtual MirrorFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MirrorFeature> MirrorFeatures::item(size_t index) const
{
    core::Ptr<MirrorFeature> res = item_raw(index);
    return res;
}

inline size_t MirrorFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MirrorFeatureInput> MirrorFeatures::createInput(const core::Ptr<core::ObjectCollection>& inputEntities, const core::Ptr<core::Base>& mirrorPlane) const
{
    core::Ptr<MirrorFeatureInput> res = createInput_raw(inputEntities.get(), mirrorPlane.get());
    return res;
}

inline core::Ptr<MirrorFeature> MirrorFeatures::add(const core::Ptr<MirrorFeatureInput>& input)
{
    core::Ptr<MirrorFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MirrorFeature> MirrorFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MirrorFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MirrorFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MIRRORFEATURES_API