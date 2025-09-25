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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHREPAIRFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHREPAIRFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREPAIRFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHREPAIRFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a mesh repair
/// feature.
class MeshRepairFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh repair, default value is StitchAndRemoveMeshRepairType.
    MeshRepairTypes meshRepairType() const;
    bool meshRepairType(MeshRepairTypes value);

    /// Gets and sets the type of mesh repair rebuild mode, default value is FastMeshRepairRebuildType.
    /// Only valid if meshRepairType is RebuildMeshRepairType.
    MeshRepairRebuildTypes meshRepairRebuildType() const;
    bool meshRepairRebuildType(MeshRepairRebuildTypes value);

    /// Controls the density of the newly created triangles in RebuildMeshRepairType, default value is 128.
    /// The values can range between 8 and 256.
    /// Only valid if meshRepairType is RebuildMeshRepairType.
    core::Ptr<core::ValueInput> density() const;
    bool density(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the offset from the original mesh to the newly created mesh, default value is zero.
    /// Only valid if meshRepairType is RebuildMeshRepairType and meshRepairRebuildType is AccurateMeshRepairRebuildType.
    core::Ptr<core::ValueInput> offset() const;
    bool offset(const core::Ptr<core::ValueInput>& value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    ADSK_FUSION_MESHREPAIRFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHREPAIRFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHREPAIRFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREPAIRFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshRepairTypes meshRepairType_raw() const = 0;
    virtual bool meshRepairType_raw(MeshRepairTypes value) = 0;
    virtual MeshRepairRebuildTypes meshRepairRebuildType_raw() const = 0;
    virtual bool meshRepairRebuildType_raw(MeshRepairRebuildTypes value) = 0;
    virtual core::ValueInput* density_raw() const = 0;
    virtual bool density_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offset_raw() const = 0;
    virtual bool offset_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshRepairFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshRepairFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshRepairTypes MeshRepairFeatureInput::meshRepairType() const
{
    MeshRepairTypes res = meshRepairType_raw();
    return res;
}

inline bool MeshRepairFeatureInput::meshRepairType(MeshRepairTypes value)
{
    return meshRepairType_raw(value);
}

inline MeshRepairRebuildTypes MeshRepairFeatureInput::meshRepairRebuildType() const
{
    MeshRepairRebuildTypes res = meshRepairRebuildType_raw();
    return res;
}

inline bool MeshRepairFeatureInput::meshRepairRebuildType(MeshRepairRebuildTypes value)
{
    return meshRepairRebuildType_raw(value);
}

inline core::Ptr<core::ValueInput> MeshRepairFeatureInput::density() const
{
    core::Ptr<core::ValueInput> res = density_raw();
    return res;
}

inline bool MeshRepairFeatureInput::density(const core::Ptr<core::ValueInput>& value)
{
    return density_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshRepairFeatureInput::offset() const
{
    core::Ptr<core::ValueInput> res = offset_raw();
    return res;
}

inline bool MeshRepairFeatureInput::offset(const core::Ptr<core::ValueInput>& value)
{
    return offset_raw(value.get());
}

inline core::Ptr<BaseFeature> MeshRepairFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshRepairFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREPAIRFEATUREINPUT_API