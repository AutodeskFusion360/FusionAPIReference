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
#include "../Features/Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHCONVERTFEATURE_CPP__
# define ADSK_FUSION_MESHCONVERTFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCONVERTFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHCONVERTFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MeshBody;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing mesh convert feature in a design.
/// To change the properties of this feature, you need to position the timeline marker to immediately before this feature.
/// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
class MeshConvertFeature : public Feature {
public:

    /// Gets and sets the input meshes.
    std::vector<core::Ptr<MeshBody>> inputBodies() const;
    bool inputBodies(const std::vector<core::Ptr<MeshBody>>& value);

    /// Gets and sets the convert type of mesh convert.
    MeshConvertMethodTypes meshConvertMethodType() const;
    bool meshConvertMethodType(MeshConvertMethodTypes value);

    /// Gets and sets the resolution method of mesh convert.
    /// Only valid if meshConvertMethodType is OrganicMeshConvertMethodType.
    MeshConvertResolutionTypes meshConvertResolutionType() const;
    bool meshConvertResolutionType(MeshConvertResolutionTypes value);

    /// Gets and sets the accuracy of organic mesh convert.
    /// Only valid if meshConvertResolutionType is ByAccuracyMeshConvertResolutionType.
    MeshConvertAccuracyTypes meshConvertAccuracyType() const;
    bool meshConvertAccuracyType(MeshConvertAccuracyTypes value);

    /// Specify the number of faces to generate for the converted body.
    /// Only valid if meshConvertResolutionTypes is ByFacetNumberMeshConvertResolutionType.
    core::Ptr<ModelParameter> numberOfFaces() const;

    /// Smooths the boundaries of open holes in the mesh body. Improves the chance of successful conversion by
    /// refining the shape of holes that will remain open. Only valid if meshConvertMethodType is OrganicMeshConvertMethodType.
    bool isPreprocessHoles() const;
    bool isPreprocessHoles(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshConvertFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshConvertFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHCONVERTFEATURE_API static const char* classType();
    ADSK_FUSION_MESHCONVERTFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHCONVERTFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCONVERTFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual bool inputBodies_raw(MeshBody** value, size_t value_size) = 0;
    virtual MeshConvertMethodTypes meshConvertMethodType_raw() const = 0;
    virtual bool meshConvertMethodType_raw(MeshConvertMethodTypes value) = 0;
    virtual MeshConvertResolutionTypes meshConvertResolutionType_raw() const = 0;
    virtual bool meshConvertResolutionType_raw(MeshConvertResolutionTypes value) = 0;
    virtual MeshConvertAccuracyTypes meshConvertAccuracyType_raw() const = 0;
    virtual bool meshConvertAccuracyType_raw(MeshConvertAccuracyTypes value) = 0;
    virtual ModelParameter* numberOfFaces_raw() const = 0;
    virtual bool isPreprocessHoles_raw() const = 0;
    virtual bool isPreprocessHoles_raw(bool value) = 0;
    virtual MeshConvertFeature* nativeObject_raw() const = 0;
    virtual MeshConvertFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<MeshBody>> MeshConvertFeature::inputBodies() const
{
    std::vector<core::Ptr<MeshBody>> res;
    size_t s;

    MeshBody** p= inputBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MeshConvertFeature::inputBodies(const std::vector<core::Ptr<MeshBody>>& value)
{
    MeshBody** value_ = new MeshBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline MeshConvertMethodTypes MeshConvertFeature::meshConvertMethodType() const
{
    MeshConvertMethodTypes res = meshConvertMethodType_raw();
    return res;
}

inline bool MeshConvertFeature::meshConvertMethodType(MeshConvertMethodTypes value)
{
    return meshConvertMethodType_raw(value);
}

inline MeshConvertResolutionTypes MeshConvertFeature::meshConvertResolutionType() const
{
    MeshConvertResolutionTypes res = meshConvertResolutionType_raw();
    return res;
}

inline bool MeshConvertFeature::meshConvertResolutionType(MeshConvertResolutionTypes value)
{
    return meshConvertResolutionType_raw(value);
}

inline MeshConvertAccuracyTypes MeshConvertFeature::meshConvertAccuracyType() const
{
    MeshConvertAccuracyTypes res = meshConvertAccuracyType_raw();
    return res;
}

inline bool MeshConvertFeature::meshConvertAccuracyType(MeshConvertAccuracyTypes value)
{
    return meshConvertAccuracyType_raw(value);
}

inline core::Ptr<ModelParameter> MeshConvertFeature::numberOfFaces() const
{
    core::Ptr<ModelParameter> res = numberOfFaces_raw();
    return res;
}

inline bool MeshConvertFeature::isPreprocessHoles() const
{
    bool res = isPreprocessHoles_raw();
    return res;
}

inline bool MeshConvertFeature::isPreprocessHoles(bool value)
{
    return isPreprocessHoles_raw(value);
}

inline core::Ptr<MeshConvertFeature> MeshConvertFeature::nativeObject() const
{
    core::Ptr<MeshConvertFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshConvertFeature> MeshConvertFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshConvertFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCONVERTFEATURE_API