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
# ifdef __COMPILING_ADSK_FUSION_EXTRUDEFEATURES_CPP__
# define ADSK_FUSION_EXTRUDEFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_EXTRUDEFEATURES_API
# endif
#else
# define ADSK_FUSION_EXTRUDEFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ExtrudeFeature;
    class ExtrudeFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing extrude features in a design
/// and supports the ability to create new extrude features.
class ExtrudeFeatures : public core::Base {
public:

    /// Function that returns the specified extrude feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ExtrudeFeature> item(size_t index) const;

    /// The number of extrude features in the collection.
    size_t count() const;

    /// Creates a new ExtrudeFeatureInput object that is used to specify the input needed
    /// to create a new extrude feature.
    /// profile : The profile argument can be a single Profile, a single planar face, a single SketchText object,
    /// or an ObjectCollection consisting of multiple profiles, planar faces, and sketch texts.
    /// When an ObjectCollection is used all of the profiles, faces, and sketch texts must be co-planar.
    /// 
    /// To create a surface (non-solid) extrusion, you can use the createOpenProfile and createBRepEdgeProfile
    /// methods of the Component object to create an open profile. You also need to set the isSolid property
    /// of the returned ExtrudeFeatureInput property to False.
    /// operation : The feature operation to perform.
    /// Returns the newly created ExtrudeFeatureInput object or null if the creation failed.
    core::Ptr<ExtrudeFeatureInput> createInput(const core::Ptr<core::Base>& profile, FeatureOperations operation) const;

    /// Creates a new extrude feature based on the information defined by the provided ExtrudeFeatureInput object.
    /// To create a new extrusion use the createInput function to create a new input object and use the methods and
    /// properties on that object to define the required input for an extrusion. Once the information is defined on the
    /// input object you can pass it to the Add method to create the extrusion.
    /// input : The ExtrudeFeatureInput object that specifies the input needed to create a new extrude
    /// feature.
    /// Returns the newly created ExtrudeFeature or null if the creation failed.
    core::Ptr<ExtrudeFeature> add(const core::Ptr<ExtrudeFeatureInput>& input);

    /// Function that returns the specified extrude feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<ExtrudeFeature> itemByName(const std::string& name) const;

    /// Creates a basic extrusion that goes from the profile plane the specified distance.
    /// profile : The profile argument can be a single Profile, a single planar face, a single SketchText object,
    /// or an ObjectCollection consisting of multiple profiles, planar faces, and sketch texts.
    /// When an ObjectCollection is used all of the profiles, faces, and sketch texts must be co-planar.
    /// 
    /// This method can only be used to create solid extrusions. To create a surface extrusion you need
    /// to use the add method.
    /// distance : ValueInput object that defines the extrude distance. A positive value extrudes in the positive direction
    /// of the sketch plane and negative value is in the opposite direction.
    /// operation : The feature operation to perform.
    /// Returns the newly created ExtrudeFeature or null if the creation failed.
    core::Ptr<ExtrudeFeature> addSimple(const core::Ptr<core::Base>& profile, const core::Ptr<core::ValueInput>& distance, FeatureOperations operation);

    typedef ExtrudeFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_EXTRUDEFEATURES_API static const char* classType();
    ADSK_FUSION_EXTRUDEFEATURES_API const char* objectType() const override;
    ADSK_FUSION_EXTRUDEFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTRUDEFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ExtrudeFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ExtrudeFeatureInput* createInput_raw(core::Base* profile, FeatureOperations operation) const = 0;
    virtual ExtrudeFeature* add_raw(ExtrudeFeatureInput* input) = 0;
    virtual ExtrudeFeature* itemByName_raw(const char* name) const = 0;
    virtual ExtrudeFeature* addSimple_raw(core::Base* profile, core::ValueInput* distance, FeatureOperations operation) = 0;
};

// Inline wrappers

inline core::Ptr<ExtrudeFeature> ExtrudeFeatures::item(size_t index) const
{
    core::Ptr<ExtrudeFeature> res = item_raw(index);
    return res;
}

inline size_t ExtrudeFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ExtrudeFeatureInput> ExtrudeFeatures::createInput(const core::Ptr<core::Base>& profile, FeatureOperations operation) const
{
    core::Ptr<ExtrudeFeatureInput> res = createInput_raw(profile.get(), operation);
    return res;
}

inline core::Ptr<ExtrudeFeature> ExtrudeFeatures::add(const core::Ptr<ExtrudeFeatureInput>& input)
{
    core::Ptr<ExtrudeFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<ExtrudeFeature> ExtrudeFeatures::itemByName(const std::string& name) const
{
    core::Ptr<ExtrudeFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<ExtrudeFeature> ExtrudeFeatures::addSimple(const core::Ptr<core::Base>& profile, const core::Ptr<core::ValueInput>& distance, FeatureOperations operation)
{
    core::Ptr<ExtrudeFeature> res = addSimple_raw(profile.get(), distance.get(), operation);
    return res;
}

template <class OutputIterator> inline void ExtrudeFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTRUDEFEATURES_API