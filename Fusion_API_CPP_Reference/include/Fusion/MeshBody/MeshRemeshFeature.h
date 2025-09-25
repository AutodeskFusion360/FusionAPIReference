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
# ifdef __COMPILING_ADSK_FUSION_MESHREMESHFEATURE_CPP__
# define ADSK_FUSION_MESHREMESHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREMESHFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHREMESHFEATURE_API XI_IMPORT
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
/// Object that represents an existing mesh re-mesh feature in a design.
/// To change the properties of this feature, you need to position the timeline marker to immediately before this feature.
/// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
class MeshRemeshFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh re-mesh.
    MeshRemeshMethodTypes meshRemeshMethodType() const;
    bool meshRemeshMethodType(MeshRemeshMethodTypes value);

    /// Controls the density of the newly created faces of the re-meshed mesh.
    /// The values can range between 0 and 1.
    core::Ptr<ModelParameter> density() const;

    /// Gets and sets how much of the original shape needs to preserved.
    /// The value can range between 0 and 1.
    /// Only valid if meshRemeshMethodType is AdaptiveType.
    core::Ptr<ModelParameter> shapePreservation() const;

    /// Gets and sets if sharp edges are preserved during the re-mesh process.
    bool isPreserveSharpEdgesEnabled() const;
    bool isPreserveSharpEdgesEnabled(bool value);

    /// Gets and sets if open boundary edges are preserved during the re-mesh process.
    bool isPreserveBoundariesEnabled() const;
    bool isPreserveBoundariesEnabled(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshRemeshFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshRemeshFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHREMESHFEATURE_API static const char* classType();
    ADSK_FUSION_MESHREMESHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHREMESHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREMESHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshRemeshMethodTypes meshRemeshMethodType_raw() const = 0;
    virtual bool meshRemeshMethodType_raw(MeshRemeshMethodTypes value) = 0;
    virtual ModelParameter* density_raw() const = 0;
    virtual ModelParameter* shapePreservation_raw() const = 0;
    virtual bool isPreserveSharpEdgesEnabled_raw() const = 0;
    virtual bool isPreserveSharpEdgesEnabled_raw(bool value) = 0;
    virtual bool isPreserveBoundariesEnabled_raw() const = 0;
    virtual bool isPreserveBoundariesEnabled_raw(bool value) = 0;
    virtual MeshRemeshFeature* nativeObject_raw() const = 0;
    virtual MeshRemeshFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshRemeshFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshRemeshFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshRemeshMethodTypes MeshRemeshFeature::meshRemeshMethodType() const
{
    MeshRemeshMethodTypes res = meshRemeshMethodType_raw();
    return res;
}

inline bool MeshRemeshFeature::meshRemeshMethodType(MeshRemeshMethodTypes value)
{
    return meshRemeshMethodType_raw(value);
}

inline core::Ptr<ModelParameter> MeshRemeshFeature::density() const
{
    core::Ptr<ModelParameter> res = density_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshRemeshFeature::shapePreservation() const
{
    core::Ptr<ModelParameter> res = shapePreservation_raw();
    return res;
}

inline bool MeshRemeshFeature::isPreserveSharpEdgesEnabled() const
{
    bool res = isPreserveSharpEdgesEnabled_raw();
    return res;
}

inline bool MeshRemeshFeature::isPreserveSharpEdgesEnabled(bool value)
{
    return isPreserveSharpEdgesEnabled_raw(value);
}

inline bool MeshRemeshFeature::isPreserveBoundariesEnabled() const
{
    bool res = isPreserveBoundariesEnabled_raw();
    return res;
}

inline bool MeshRemeshFeature::isPreserveBoundariesEnabled(bool value)
{
    return isPreserveBoundariesEnabled_raw(value);
}

inline core::Ptr<MeshRemeshFeature> MeshRemeshFeature::nativeObject() const
{
    core::Ptr<MeshRemeshFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshRemeshFeature> MeshRemeshFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshRemeshFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREMESHFEATURE_API