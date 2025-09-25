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
# ifdef __COMPILING_ADSK_FUSION_SWEEPFEATURES_CPP__
# define ADSK_FUSION_SWEEPFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_SWEEPFEATURES_API
# endif
#else
# define ADSK_FUSION_SWEEPFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class Path;
    class SweepFeature;
    class SweepFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing sweep features in a component
/// and supports the ability to create new sweep features.
class SweepFeatures : public core::Base {
public:

    /// Function that returns the specified sweep feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SweepFeature> item(size_t index) const;

    /// The number of sweep features in the collection.
    size_t count() const;

    /// Creates a SweepFeatureInput object for defining a simple sweep feature with only a path and no guide rail or surface.
    /// Use properties and methods on this object to define the sweep you want to create and then use the Add method,
    /// passing in the SweepFeatureInput object.
    /// profile : The profile argument can be a single Profile, a single
    /// planar face, or an ObjectCollection consisting of multiple profiles and planar faces.
    /// When an ObjectCollection is used all of the profiles and faces must be co-planar.
    /// path : The path to create the sweep.
    /// operation : The feature operation to perform
    /// Returns the newly created SweepFeatureInput object or null if the creation failed.
    core::Ptr<SweepFeatureInput> createInput(const core::Ptr<core::Base>& profile, const core::Ptr<Path>& path, FeatureOperations operation) const;

    /// Creates a new sweep feature.
    /// input : A SweepFeatureInput object that defines the desired sweep. Use the createInput
    /// method to create a new SweepFeatureInput object and then use methods on it
    /// (the SweepFeatureInput object) to define the sweep.
    /// Returns the newly created SweepFeature object or null if the creation failed.
    core::Ptr<SweepFeature> add(const core::Ptr<SweepFeatureInput>& input);

    /// Function that returns the specified sweep feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<SweepFeature> itemByName(const std::string& name) const;

    /// Creates a SweepFeatureInput object for defining a simple sweep feature from a B-Rep
    /// solid with a path. Use properties and methods on this object to define the sweep you
    /// want to create, and then use the Add method, passing in the SweepFeatureInput object.
    /// solidBody : The BRepBody object to sweep. It must be a solid body.
    /// path : The Path object that defines the path the body will be swept along.
    /// operation : The type of feature operation to perform.
    /// Returns the newly created SweepFeatureInput object or null if the creation fails.
    core::Ptr<SweepFeatureInput> createInputForSolid(const core::Ptr<BRepBody>& solidBody, const core::Ptr<Path>& path, FeatureOperations operation) const;

    typedef SweepFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SWEEPFEATURES_API static const char* classType();
    ADSK_FUSION_SWEEPFEATURES_API const char* objectType() const override;
    ADSK_FUSION_SWEEPFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SWEEPFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SweepFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SweepFeatureInput* createInput_raw(core::Base* profile, Path* path, FeatureOperations operation) const = 0;
    virtual SweepFeature* add_raw(SweepFeatureInput* input) = 0;
    virtual SweepFeature* itemByName_raw(const char* name) const = 0;
    virtual SweepFeatureInput* createInputForSolid_raw(BRepBody* solidBody, Path* path, FeatureOperations operation) const = 0;
};

// Inline wrappers

inline core::Ptr<SweepFeature> SweepFeatures::item(size_t index) const
{
    core::Ptr<SweepFeature> res = item_raw(index);
    return res;
}

inline size_t SweepFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SweepFeatureInput> SweepFeatures::createInput(const core::Ptr<core::Base>& profile, const core::Ptr<Path>& path, FeatureOperations operation) const
{
    core::Ptr<SweepFeatureInput> res = createInput_raw(profile.get(), path.get(), operation);
    return res;
}

inline core::Ptr<SweepFeature> SweepFeatures::add(const core::Ptr<SweepFeatureInput>& input)
{
    core::Ptr<SweepFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<SweepFeature> SweepFeatures::itemByName(const std::string& name) const
{
    core::Ptr<SweepFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<SweepFeatureInput> SweepFeatures::createInputForSolid(const core::Ptr<BRepBody>& solidBody, const core::Ptr<Path>& path, FeatureOperations operation) const
{
    core::Ptr<SweepFeatureInput> res = createInputForSolid_raw(solidBody.get(), path.get(), operation);
    return res;
}

template <class OutputIterator> inline void SweepFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SWEEPFEATURES_API