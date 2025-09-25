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
# ifdef __COMPILING_ADSK_FUSION_MESHREPAIRFEATURE_CPP__
# define ADSK_FUSION_MESHREPAIRFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREPAIRFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHREPAIRFEATURE_API XI_IMPORT
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
/// Object that represents an existing mesh repair feature in a design.
/// To change the properties of this feature, you need to position the timeline marker to immediately before this feature.
/// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
class MeshRepairFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh repair.
    MeshRepairTypes meshRepairType() const;
    bool meshRepairType(MeshRepairTypes value);

    /// Gets and sets the type of mesh repair rebuild mode.
    /// Only valid if meshRepairType is RebuildMeshRepairType.
    MeshRepairRebuildTypes meshRepairRebuildType() const;
    bool meshRepairRebuildType(MeshRepairRebuildTypes value);

    /// Controls the density of the newly created triangles in RebuildMeshRepairType.
    /// The values can range between 8 and 256.
    /// Only valid if meshRepairType is RebuildMeshRepairType.
    core::Ptr<ModelParameter> density() const;

    /// Gets and sets the offset from the original mesh to newly created mesh.
    /// Only valid if meshRepairType is RebuildMeshRepairType and meshRepairRebuildType
    /// is AccurateMeshRepairRebuildType.
    core::Ptr<ModelParameter> offset() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshRepairFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshRepairFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHREPAIRFEATURE_API static const char* classType();
    ADSK_FUSION_MESHREPAIRFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHREPAIRFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREPAIRFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshRepairTypes meshRepairType_raw() const = 0;
    virtual bool meshRepairType_raw(MeshRepairTypes value) = 0;
    virtual MeshRepairRebuildTypes meshRepairRebuildType_raw() const = 0;
    virtual bool meshRepairRebuildType_raw(MeshRepairRebuildTypes value) = 0;
    virtual ModelParameter* density_raw() const = 0;
    virtual ModelParameter* offset_raw() const = 0;
    virtual MeshRepairFeature* nativeObject_raw() const = 0;
    virtual MeshRepairFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshRepairFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshRepairFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshRepairTypes MeshRepairFeature::meshRepairType() const
{
    MeshRepairTypes res = meshRepairType_raw();
    return res;
}

inline bool MeshRepairFeature::meshRepairType(MeshRepairTypes value)
{
    return meshRepairType_raw(value);
}

inline MeshRepairRebuildTypes MeshRepairFeature::meshRepairRebuildType() const
{
    MeshRepairRebuildTypes res = meshRepairRebuildType_raw();
    return res;
}

inline bool MeshRepairFeature::meshRepairRebuildType(MeshRepairRebuildTypes value)
{
    return meshRepairRebuildType_raw(value);
}

inline core::Ptr<ModelParameter> MeshRepairFeature::density() const
{
    core::Ptr<ModelParameter> res = density_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshRepairFeature::offset() const
{
    core::Ptr<ModelParameter> res = offset_raw();
    return res;
}

inline core::Ptr<MeshRepairFeature> MeshRepairFeature::nativeObject() const
{
    core::Ptr<MeshRepairFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshRepairFeature> MeshRepairFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshRepairFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREPAIRFEATURE_API