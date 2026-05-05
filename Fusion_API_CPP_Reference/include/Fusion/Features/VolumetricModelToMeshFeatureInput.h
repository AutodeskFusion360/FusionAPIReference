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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_CPP__
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// An input object for creating a volumetric model to mesh feature.
class VolumetricModelToMeshFeatureInput : public core::Base {
public:

    /// Gets and sets the volumetric model to be converted to a mesh. The volumetric model must have the
    /// same parent component as the VolumetricModelToMeshFeature.This property is typed as core.Base
    /// because the adsk.fusion library does not reference the volume library where the VolumetricModel object
    /// is defined. At runtime, this property will return a VolumetricModel object.
    core::Ptr<core::Base> volumetricModel() const;
    bool volumetricModel(const core::Ptr<core::Base>& value);

    /// Gets and sets the refinement type to be used when creating the mesh. The default is Low.
    VolumetricMeshRefinementTypes refinementType() const;
    bool refinementType(VolumetricMeshRefinementTypes value);

    /// Gets and sets the element size to be used when creating the mesh. This value is only used when the
    /// RefinementType is set to Custom. The value must be greater than 0. The default is equivalent to the
    /// Low refinement type and is dependent on the size of the model.
    core::Ptr<core::ValueInput> elementSize() const;
    bool elementSize(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the meshing approach to be used when creating the mesh.
    /// The default is VolumetricMeshingAdvancedType.
    VolumetricMeshingApproachTypes meshingApproach() const;
    bool meshingApproach(VolumetricMeshingApproachTypes value);

    /// Gets and sets if the volumetric model should be removed after creating the mesh.
    /// the default is true.
    bool isVolumetricModelRemoved() const;
    bool isVolumetricModelRemoved(bool value);

    /// Gets and sets if small mesh shells should be removed after creating the mesh.
    /// The default is false.
    bool isSmallShellsRemoved() const;
    bool isSmallShellsRemoved(bool value);

    /// Gets and sets the small mesh threshold used to determine if a mesh shell is considered small.
    /// The value is a fraction of the total mesh area and must be between 0 and 1. The default is 0.02.
    core::Ptr<core::ValueInput> smallShellThreshold() const;
    bool smallShellThreshold(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if the feature compute should be suspended if a dependent entity changes. Default is false.
    /// If true, the feature will need to be recomputed manually if a dependent entity changes.
    /// The default is false.
    bool isComputeSuspended() const;
    bool isComputeSuspended(bool value);

    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* volumetricModel_raw() const = 0;
    virtual bool volumetricModel_raw(core::Base* value) = 0;
    virtual VolumetricMeshRefinementTypes refinementType_raw() const = 0;
    virtual bool refinementType_raw(VolumetricMeshRefinementTypes value) = 0;
    virtual core::ValueInput* elementSize_raw() const = 0;
    virtual bool elementSize_raw(core::ValueInput* value) = 0;
    virtual VolumetricMeshingApproachTypes meshingApproach_raw() const = 0;
    virtual bool meshingApproach_raw(VolumetricMeshingApproachTypes value) = 0;
    virtual bool isVolumetricModelRemoved_raw() const = 0;
    virtual bool isVolumetricModelRemoved_raw(bool value) = 0;
    virtual bool isSmallShellsRemoved_raw() const = 0;
    virtual bool isSmallShellsRemoved_raw(bool value) = 0;
    virtual core::ValueInput* smallShellThreshold_raw() const = 0;
    virtual bool smallShellThreshold_raw(core::ValueInput* value) = 0;
    virtual bool isComputeSuspended_raw() const = 0;
    virtual bool isComputeSuspended_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> VolumetricModelToMeshFeatureInput::volumetricModel() const
{
    core::Ptr<core::Base> res = volumetricModel_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::volumetricModel(const core::Ptr<core::Base>& value)
{
    return volumetricModel_raw(value.get());
}

inline VolumetricMeshRefinementTypes VolumetricModelToMeshFeatureInput::refinementType() const
{
    VolumetricMeshRefinementTypes res = refinementType_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::refinementType(VolumetricMeshRefinementTypes value)
{
    return refinementType_raw(value);
}

inline core::Ptr<core::ValueInput> VolumetricModelToMeshFeatureInput::elementSize() const
{
    core::Ptr<core::ValueInput> res = elementSize_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::elementSize(const core::Ptr<core::ValueInput>& value)
{
    return elementSize_raw(value.get());
}

inline VolumetricMeshingApproachTypes VolumetricModelToMeshFeatureInput::meshingApproach() const
{
    VolumetricMeshingApproachTypes res = meshingApproach_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::meshingApproach(VolumetricMeshingApproachTypes value)
{
    return meshingApproach_raw(value);
}

inline bool VolumetricModelToMeshFeatureInput::isVolumetricModelRemoved() const
{
    bool res = isVolumetricModelRemoved_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::isVolumetricModelRemoved(bool value)
{
    return isVolumetricModelRemoved_raw(value);
}

inline bool VolumetricModelToMeshFeatureInput::isSmallShellsRemoved() const
{
    bool res = isSmallShellsRemoved_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::isSmallShellsRemoved(bool value)
{
    return isSmallShellsRemoved_raw(value);
}

inline core::Ptr<core::ValueInput> VolumetricModelToMeshFeatureInput::smallShellThreshold() const
{
    core::Ptr<core::ValueInput> res = smallShellThreshold_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::smallShellThreshold(const core::Ptr<core::ValueInput>& value)
{
    return smallShellThreshold_raw(value.get());
}

inline bool VolumetricModelToMeshFeatureInput::isComputeSuspended() const
{
    bool res = isComputeSuspended_raw();
    return res;
}

inline bool VolumetricModelToMeshFeatureInput::isComputeSuspended(bool value)
{
    return isComputeSuspended_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VOLUMETRICMODELTOMESHFEATUREINPUT_API