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
#include "MeshFeature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_CPP__
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing mesh generate face groups feature in a design.
class MeshGenerateFaceGroupsFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh generate face groups.
    MeshGenerateFaceGroupsMethodTypes meshGenerateFaceGroupsMethodType() const;
    bool meshGenerateFaceGroupsMethodType(MeshGenerateFaceGroupsMethodTypes value);

    /// Controls the angle threshold during the face group generation.
    /// The values can range between 0 and pi/2.
    /// Only valid if meshGenerateFaceGroupsMethodType is FastGenerateFaceGroupsType.
    core::Ptr<ModelParameter> angleThreshold() const;

    /// Gets and sets the fraction of the overall mesh area
    /// which determines the smallest face group.
    /// The value can range between 0 and 1.
    /// Only valid if meshGenerateFaceGroupsMethodType is FastGenerateFaceGroupsType.
    core::Ptr<ModelParameter> minimumFaceGroupSize() const;

    /// Gets and sets tolerance to define face group. This value is used
    /// during the fitting of the primitives. The values can range between
    /// 0 and 0.01.
    /// Only valid if meshGenerateFaceGroupsMethodType is AccurateGenerateFaceGroupsType.
    core::Ptr<ModelParameter> boundaryTolerance() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshGenerateFaceGroupsFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshGenerateFaceGroupsFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API static const char* classType();
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshGenerateFaceGroupsMethodTypes meshGenerateFaceGroupsMethodType_raw() const = 0;
    virtual bool meshGenerateFaceGroupsMethodType_raw(MeshGenerateFaceGroupsMethodTypes value) = 0;
    virtual ModelParameter* angleThreshold_raw() const = 0;
    virtual ModelParameter* minimumFaceGroupSize_raw() const = 0;
    virtual ModelParameter* boundaryTolerance_raw() const = 0;
    virtual MeshGenerateFaceGroupsFeature* nativeObject_raw() const = 0;
    virtual MeshGenerateFaceGroupsFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshGenerateFaceGroupsFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshGenerateFaceGroupsMethodTypes MeshGenerateFaceGroupsFeature::meshGenerateFaceGroupsMethodType() const
{
    MeshGenerateFaceGroupsMethodTypes res = meshGenerateFaceGroupsMethodType_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeature::meshGenerateFaceGroupsMethodType(MeshGenerateFaceGroupsMethodTypes value)
{
    return meshGenerateFaceGroupsMethodType_raw(value);
}

inline core::Ptr<ModelParameter> MeshGenerateFaceGroupsFeature::angleThreshold() const
{
    core::Ptr<ModelParameter> res = angleThreshold_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshGenerateFaceGroupsFeature::minimumFaceGroupSize() const
{
    core::Ptr<ModelParameter> res = minimumFaceGroupSize_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshGenerateFaceGroupsFeature::boundaryTolerance() const
{
    core::Ptr<ModelParameter> res = boundaryTolerance_raw();
    return res;
}

inline core::Ptr<MeshGenerateFaceGroupsFeature> MeshGenerateFaceGroupsFeature::nativeObject() const
{
    core::Ptr<MeshGenerateFaceGroupsFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshGenerateFaceGroupsFeature> MeshGenerateFaceGroupsFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshGenerateFaceGroupsFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHGENERATEFACEGROUPSFEATURE_API