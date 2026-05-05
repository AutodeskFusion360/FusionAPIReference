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
# ifdef __COMPILING_ADSK_FUSION_EMBOSSFEATURES_CPP__
# define ADSK_FUSION_EMBOSSFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_EMBOSSFEATURES_API
# endif
#else
# define ADSK_FUSION_EMBOSSFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class EmbossFeature;
    class EmbossFeatureInput;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing emboss features in a component
/// and supports the ability to create new emboss features.
class EmbossFeatures : public core::Base {
public:

    /// Function that returns the specified emboss feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<EmbossFeature> item(size_t index) const;

    /// Function that returns the specified emboss feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<EmbossFeature> itemByName(const std::string& name) const;

    /// The number of emboss features in the collection.
    size_t count() const;

    /// Creates an EmbossFeatureInput object. Use properties and methods on this object
    /// to define the emboss feature you want to create and then use the Add method, passing in
    /// the EmbossFeatureInput object to create the feature.
    /// profiles : An array of Profile objects that define the shape of the emboss.
    /// The profile argument can be Profile and SketchText objects.
    /// When multiple objects are used, all profiles and sketch texts must be co-planar.
    /// faces : An array of BRepFace objects that define the faces the emboss will be performed on. By default,
    /// faces that are tangent to any of the input faces are also used. Use the isTangentChain property
    /// on the input object to disable the use of tangent faces.
    /// depth : A ValueInput object that defines the depth of the emboss. A positive value results in the emboss
    /// protruding out of the body and a negative value results in the emboss going into the body.
    /// Returns the newly created EmbossFeatureInput object or null if the creation failed.
    core::Ptr<EmbossFeatureInput> createInput(const std::vector<core::Ptr<core::Base>>& profiles, const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::ValueInput>& depth) const;

    /// Creates a new emboss feature.
    /// input : An EmbossFeatureInput object that defines the desired emboss feature. Use the createInput
    /// method to create a new EmbossFeatureInput object and then use methods on the EmbossFeatureInput
    /// object to define the emboss feature.
    /// Returns the newly created EmbossFeature object or null if the creation failed.
    core::Ptr<EmbossFeature> add(const core::Ptr<EmbossFeatureInput>& input);

    typedef EmbossFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_EMBOSSFEATURES_API static const char* classType();
    ADSK_FUSION_EMBOSSFEATURES_API const char* objectType() const override;
    ADSK_FUSION_EMBOSSFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EMBOSSFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual EmbossFeature* item_raw(size_t index) const = 0;
    virtual EmbossFeature* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual EmbossFeatureInput* createInput_raw(core::Base** profiles, size_t profiles_size, BRepFace** faces, size_t faces_size, core::ValueInput* depth) const = 0;
    virtual EmbossFeature* add_raw(EmbossFeatureInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<EmbossFeature> EmbossFeatures::item(size_t index) const
{
    core::Ptr<EmbossFeature> res = item_raw(index);
    return res;
}

inline core::Ptr<EmbossFeature> EmbossFeatures::itemByName(const std::string& name) const
{
    core::Ptr<EmbossFeature> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t EmbossFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<EmbossFeatureInput> EmbossFeatures::createInput(const std::vector<core::Ptr<core::Base>>& profiles, const std::vector<core::Ptr<BRepFace>>& faces, const core::Ptr<core::ValueInput>& depth) const
{
    core::Base** profiles_ = new core::Base*[profiles.size()];
    for(size_t i=0; i<profiles.size(); ++i)
        profiles_[i] = profiles[i].get();
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    core::Ptr<EmbossFeatureInput> res = createInput_raw(profiles_, profiles.size(), faces_, faces.size(), depth.get());
    delete[] profiles_;
    delete[] faces_;
    return res;
}

inline core::Ptr<EmbossFeature> EmbossFeatures::add(const core::Ptr<EmbossFeatureInput>& input)
{
    core::Ptr<EmbossFeature> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void EmbossFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EMBOSSFEATURES_API