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
# ifdef __COMPILING_ADSK_FUSION_MESHPLANECUTFEATURES_CPP__
# define ADSK_FUSION_MESHPLANECUTFEATURES_API XI_EXPORT
# else
# define ADSK_FUSION_MESHPLANECUTFEATURES_API
# endif
#else
# define ADSK_FUSION_MESHPLANECUTFEATURES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshPlaneCutFeature;
    class MeshPlaneCutFeatureInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing mesh plane cut features in a component
/// and supports the ability to create new mesh PlaneCut features.
class MeshPlaneCutFeatures : public core::Base {
public:

    /// Function that returns the specified mesh plane cut feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<MeshPlaneCutFeature> item(size_t index) const;

    /// The number of mesh plane cut features in the collection.
    size_t count() const;

    /// Creates a MeshPlaneCutFeatureInput object. Use properties and methods on this object
    /// to define the mesh plane cut you want to create and then use the add method, passing in
    /// the MeshPlaneCutFeatureInput object.
    /// mesh : The MeshBody in either a parametric or direct modeling design, which represent the target body.
    /// cutPlane : The plane which is used to cut the mesh. The plane can either be an core.Plane or
    /// an ConstructionPlane.
    /// Returns the newly created MeshPlaneCutFeatureInput object or null if the creation failed.
    core::Ptr<MeshPlaneCutFeatureInput> createInput(const core::Ptr<core::Base>& mesh, const core::Ptr<core::Base>& cutPlane) const;

    /// Creates a mesh plane cut feature.
    /// input : A MeshPlaneCutFeatureInput object that defines the desired plane cut feature. Use the createInput
    /// method to create a new MeshPlaneCutFeatureInput object and then use methods on it
    /// (the MeshPlaneCutFeatureInput object) to define the plane cut.
    /// Returns the newly created MeshPlaneCutFeatureInput object or null if the creation failed.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<MeshPlaneCutFeature> add(const core::Ptr<MeshPlaneCutFeatureInput>& input);

    /// Function that returns the specified MeshPlaneCut feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<MeshPlaneCutFeature> itemByName(const std::string& name) const;

    typedef MeshPlaneCutFeature iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MESHPLANECUTFEATURES_API static const char* classType();
    ADSK_FUSION_MESHPLANECUTFEATURES_API const char* objectType() const override;
    ADSK_FUSION_MESHPLANECUTFEATURES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHPLANECUTFEATURES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshPlaneCutFeature* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MeshPlaneCutFeatureInput* createInput_raw(core::Base* mesh, core::Base* cutPlane) const = 0;
    virtual MeshPlaneCutFeature* add_raw(MeshPlaneCutFeatureInput* input) = 0;
    virtual MeshPlaneCutFeature* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshPlaneCutFeature> MeshPlaneCutFeatures::item(size_t index) const
{
    core::Ptr<MeshPlaneCutFeature> res = item_raw(index);
    return res;
}

inline size_t MeshPlaneCutFeatures::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<MeshPlaneCutFeatureInput> MeshPlaneCutFeatures::createInput(const core::Ptr<core::Base>& mesh, const core::Ptr<core::Base>& cutPlane) const
{
    core::Ptr<MeshPlaneCutFeatureInput> res = createInput_raw(mesh.get(), cutPlane.get());
    return res;
}

inline core::Ptr<MeshPlaneCutFeature> MeshPlaneCutFeatures::add(const core::Ptr<MeshPlaneCutFeatureInput>& input)
{
    core::Ptr<MeshPlaneCutFeature> res = add_raw(input.get());
    return res;
}

inline core::Ptr<MeshPlaneCutFeature> MeshPlaneCutFeatures::itemByName(const std::string& name) const
{
    core::Ptr<MeshPlaneCutFeature> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void MeshPlaneCutFeatures::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHPLANECUTFEATURES_API