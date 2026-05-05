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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OFFSETFACESFEATURES_CPP__
# define ADSK_FUSION_OFFSETFACESFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFACESFEATURES_API
# endif
#else
# define ADSK_FUSION_OFFSETFACESFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class OffsetFacesFeature;
    class OffsetFacesFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing Offset Faces features in a design.
/// Offset Face features are created in the UI using the "Offset Face" or "Press Pull" command.
class OffsetFacesFeatures : public core::Base {
public:

    /// Function that returns the specified Offset Face feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<OffsetFacesFeature> item(size_t index) const;

    /// Function that returns the specified Offset Face feature using the name of the feature.
    /// Offset Face features are created in the UI using the "Press Pull" command.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<OffsetFacesFeature> itemByName(const std::string& name) const;

    /// The number of Offset Face features in the collection.
    /// Offset Face features are created in the UI using the "Press Pull" command.
    size_t count() const;

    /// Creates an OffsetFacesFeatureInput object. Use properties and methods on this object
    /// to define the offset feature you want to create and then use the add method, passing in
    /// the OffsetFacesFeatureInput object to create the feature.
    /// faces : An array of BRepFace objects to offset. These faces can exist on multiple bodies
    /// and in multiple components. They cannot be in an externally referenced component.
    /// distance : The distance of the offset. A positive value offsets the faces in the direction of the face
    /// normal. A negative value goes in the other direction.
    /// 
    /// This is a ValueInput object that can be created using either createByReal or createByString.
    /// When a real ValueInput is used, the value is centimeters. When a string ValueInput is used, it
    /// defines the expression of the parameter that will be created to control the feature and any
    /// valid expression that defines a distance can be used.
    /// Returns the newly created OffsetFacesFeatureInput object or null if the creation failed.
    core::Ptr<OffsetFacesFeatureInput> createInput(const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::ValueInput>& distance) const;

    /// Creates a new offset feature.
    /// input : An OffsetFacesFeatureInput object that defines the desired offset faces feature. Use the
    /// createInput method to create a new OffsetFacesFeatureInput object and then use methods on it
    /// (the OffsetFacesFeatureInput object) to define the offset feature.
    /// Returns the newly created OffsetFacesFeature object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<OffsetFacesFeature> add(const core::Ptr<OffsetFacesFeatureInput>& input);

    typedef OffsetFacesFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_OFFSETFACESFEATURES_API static const char* classType();
    ADSK_FUSION_OFFSETFACESFEATURES_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFACESFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFACESFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OffsetFacesFeature* item_raw(size_t index) const = 0;
    virtual OffsetFacesFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual OffsetFacesFeatureInput* createInput_raw(BRepFace** faces, size_t faces_size, core::ValueInput* distance) const = 0;
    virtual OffsetFacesFeature* add_raw(OffsetFacesFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<OffsetFacesFeature> OffsetFacesFeatures::item(size_t index) const
{
    core::Ptr<OffsetFacesFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<OffsetFacesFeature> OffsetFacesFeatures::itemByName(const std::string& name) const
{
    core::Ptr<OffsetFacesFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t OffsetFacesFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<OffsetFacesFeatureInput> OffsetFacesFeatures::createInput(const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::ValueInput>& distance) const
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    core::Ptr<OffsetFacesFeatureInput> res = createInput_raw(faces_, faces.size(), distance.get());
    delete[] faces_;
    return res;
}

inline core::Ptr<OffsetFacesFeature> OffsetFacesFeatures::add(const core::Ptr<OffsetFacesFeatureInput>& input)
{
    core::Ptr<OffsetFacesFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void OffsetFacesFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFACESFEATURES_API