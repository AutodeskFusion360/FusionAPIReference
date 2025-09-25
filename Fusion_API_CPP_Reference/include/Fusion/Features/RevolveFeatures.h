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
# ifdef __COMPILING_ADSK_FUSION_REVOLVEFEATURES_CPP__
# define ADSK_FUSION_REVOLVEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_REVOLVEFEATURES_API
# endif
#else
# define ADSK_FUSION_REVOLVEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RevolveFeature;
    class RevolveFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing revolve features in a design
/// and supports the ability to create new revolve features.
class RevolveFeatures : public core::Base {
public:

    /// Function that returns the specified revolve feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<RevolveFeature> item(size_t index) const;

    /// The number of revolve features in the collection.
    size_t count() const;

    /// Creates a new RevolveFeatureInput object that is used to specify the input needed
    /// to create a new revolve feature.
    /// profile : The profile argument can be a single Profile, a single
    /// planar face, or an ObjectCollection consisting of multiple profiles and planar faces.
    /// When an ObjectCollection is used all of the profiles and faces must be co-planar.
    /// 
    /// To create a surface (non-solid) revolution, you can use the createOpenProfile and createBRepEdgeProfile
    /// methods of the Component object to create an open profile. You also need to set the isSolid property
    /// of the returned RevolveFeatureInput property to False.
    /// axis : The axis can be a sketch line, construction axis, linear edge or a face that defines an
    /// axis (cylinder, cone, torus, etc.). If it is not in the same plane as the profile, it is
    /// projected onto the profile plane.
    /// operation : The operation type to perform.
    /// Returns the newly created RevolveFeatureInput object or null if the creation failed.
    core::Ptr<RevolveFeatureInput> createInput(const core::Ptr<core::Base>& profile, const core::Ptr<core::Base>& axis, FeatureOperations operation) const;

    /// Creates a new revolve feature based on the information provided by the provided
    /// RevolveFeatureInput object.
    /// To create a new revolve, use the createInput function to create a new input object
    /// and then use the methods and properties on that object to define the required input
    /// for a revolve. Once the information is defined on the input object you can pass it
    /// to the Add method to create the revolve.
    /// input : The RevolveFeatureInput object that specifies the input needed to create a new extrude
    /// Returns the newly created RevolveFeature or null if the creation failed.
    core::Ptr<RevolveFeature> add(const core::Ptr<RevolveFeatureInput>& input);

    /// Function that returns the specified revolve feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<RevolveFeature> itemByName(const std::string& name) const;

    typedef RevolveFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_REVOLVEFEATURES_API static const char* classType();
    ADSK_FUSION_REVOLVEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_REVOLVEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_REVOLVEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RevolveFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RevolveFeatureInput* createInput_raw(core::Base* profile, core::Base* axis, FeatureOperations operation) const = 0;
    virtual RevolveFeature* add_raw(RevolveFeatureInput* input) = 0;
    virtual RevolveFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<RevolveFeature> RevolveFeatures::item(size_t index) const
{
    core::Ptr<RevolveFeature> res = item_raw(index);
    return res;
}

inline size_t RevolveFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RevolveFeatureInput> RevolveFeatures::createInput(const core::Ptr<core::Base>& profile, const core::Ptr<core::Base>& axis, FeatureOperations operation) const
{
    core::Ptr<RevolveFeatureInput> res = createInput_raw(profile.get(), axis.get(), operation);
    return res;
}

inline core::Ptr<RevolveFeature> RevolveFeatures::add(const core::Ptr<RevolveFeatureInput>& input)
{
    core::Ptr<RevolveFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<RevolveFeature> RevolveFeatures::itemByName(const std::string& name) const
{
    core::Ptr<RevolveFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void RevolveFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_REVOLVEFEATURES_API