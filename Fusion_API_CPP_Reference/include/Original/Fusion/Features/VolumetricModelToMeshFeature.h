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
#include "Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_CPP__
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API XI_IMPORT
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
/// Object that represents a model to mesh feature.
class VolumetricModelToMeshFeature : public Feature {
public:

    /// Get the mesh body created from the volumetric model.
    /// Returns the mesh body object.
    core::Ptr<MeshBody> meshBody() const;

    /// Gets and sets the volumetric model to be converted to a mesh. The volumetric model must have the
    /// same parent component as the VolumetricModelToMeshFeature.This property is typed as core.Base
    /// because the adsk.fusion library does not reference the volume library where the VolumetricModel object
    /// is defined. At runtime, this property will return a VolumetricModel object.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> volumetricModel() const;
    bool volumetricModel(const core::Ptr<core::Base>& value);

    /// Gets and sets the refinement type to be used when creating the mesh.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    VolumetricMeshRefinementTypes refinementType() const;
    bool refinementType(VolumetricMeshRefinementTypes value);

    /// Gets the element size that will be used when creating the mesh. This value is only used when the
    /// refinement type is set to Custom. The value must be greater than 0.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ModelParameter> elementSize() const;

    /// Gets and sets the meshing approach to be used when creating the mesh.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    VolumetricMeshingApproachTypes meshingApproach() const;
    bool meshingApproach(VolumetricMeshingApproachTypes value);

    /// Gets and sets if the volumetric model should be removed after creating the mesh.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isVolumetricModelRemoved() const;
    bool isVolumetricModelRemoved(bool value);

    /// Gets and sets if small mesh shells should be removed after creating the mesh.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isSmallShellsRemoved() const;
    bool isSmallShellsRemoved(bool value);

    /// Gets the small mesh threshold used to determine if a mesh shell is considered small.
    /// The value is a fraction of the total mesh area and must be between 0 and 1.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ModelParameter> smallShellThreshold() const;

    /// Gets and sets if the feature compute should be suspended if a dependent entity changes.
    /// If true, the feature will need to be recomputed manually if a dependent entity changes.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isComputeSuspended() const;
    bool isComputeSuspended(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<VolumetricModelToMeshFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<VolumetricModelToMeshFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API static const char* classType();
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody* meshBody_raw() const = 0;
    virtual core::Base* volumetricModel_raw() const = 0;
    virtual bool volumetricModel_raw(core::Base* value) = 0;
    virtual VolumetricMeshRefinementTypes refinementType_raw() const = 0;
    virtual bool refinementType_raw(VolumetricMeshRefinementTypes value) = 0;
    virtual ModelParameter* elementSize_raw() const = 0;
    virtual VolumetricMeshingApproachTypes meshingApproach_raw() const = 0;
    virtual bool meshingApproach_raw(VolumetricMeshingApproachTypes value) = 0;
    virtual bool isVolumetricModelRemoved_raw() const = 0;
    virtual bool isVolumetricModelRemoved_raw(bool value) = 0;
    virtual bool isSmallShellsRemoved_raw() const = 0;
    virtual bool isSmallShellsRemoved_raw(bool value) = 0;
    virtual ModelParameter* smallShellThreshold_raw() const = 0;
    virtual bool isComputeSuspended_raw() const = 0;
    virtual bool isComputeSuspended_raw(bool value) = 0;
    virtual VolumetricModelToMeshFeature* nativeObject_raw() const = 0;
    virtual VolumetricModelToMeshFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<MeshBody> VolumetricModelToMeshFeature::meshBody() const
{
    core::Ptr<MeshBody> res = meshBody_raw();
    return res;
}

inline core::Ptr<core::Base> VolumetricModelToMeshFeature::volumetricModel() const
{
    core::Ptr<core::Base> res = volumetricModel_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::volumetricModel(const core::Ptr<core::Base>& value)
{
    return volumetricModel_raw(value.get());
}

inline VolumetricMeshRefinementTypes VolumetricModelToMeshFeature::refinementType() const
{
    VolumetricMeshRefinementTypes res = refinementType_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::refinementType(VolumetricMeshRefinementTypes value)
{
    return refinementType_raw(value);
}

inline core::Ptr<ModelParameter> VolumetricModelToMeshFeature::elementSize() const
{
    core::Ptr<ModelParameter> res = elementSize_raw();
    return res;
}

inline VolumetricMeshingApproachTypes VolumetricModelToMeshFeature::meshingApproach() const
{
    VolumetricMeshingApproachTypes res = meshingApproach_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::meshingApproach(VolumetricMeshingApproachTypes value)
{
    return meshingApproach_raw(value);
}

inline bool VolumetricModelToMeshFeature::isVolumetricModelRemoved() const
{
    bool res = isVolumetricModelRemoved_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::isVolumetricModelRemoved(bool value)
{
    return isVolumetricModelRemoved_raw(value);
}

inline bool VolumetricModelToMeshFeature::isSmallShellsRemoved() const
{
    bool res = isSmallShellsRemoved_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::isSmallShellsRemoved(bool value)
{
    return isSmallShellsRemoved_raw(value);
}

inline core::Ptr<ModelParameter> VolumetricModelToMeshFeature::smallShellThreshold() const
{
    core::Ptr<ModelParameter> res = smallShellThreshold_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::isComputeSuspended() const
{
    bool res = isComputeSuspended_raw();
    return res;
}

inline bool VolumetricModelToMeshFeature::isComputeSuspended(bool value)
{
    return isComputeSuspended_raw(value);
}

inline core::Ptr<VolumetricModelToMeshFeature> VolumetricModelToMeshFeature::nativeObject() const
{
    core::Ptr<VolumetricModelToMeshFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<VolumetricModelToMeshFeature> VolumetricModelToMeshFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<VolumetricModelToMeshFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICMODELTOMESHFEATURE_API