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
# ifdef __COMPILING_ADSK_FUSION_MESHREDUCEFEATURE_CPP__
# define ADSK_FUSION_MESHREDUCEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREDUCEFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHREDUCEFEATURE_API XI_IMPORT
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
/// Object that represents an existing mesh reduce feature in a design.
/// To change the properties of this feature, you need to position the timeline marker to immediately before this feature.
/// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
class MeshReduceFeature : public MeshFeature {
public:

    /// Gets and sets the input mesh body.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh reduce.
    MeshReduceMethodTypes meshReduceMethodType() const;
    bool meshReduceMethodType(MeshReduceMethodTypes value);

    /// Gets and sets the target criteria for the reduction.
    MeshReduceTargetTypes meshReduceTargetType() const;
    bool meshReduceTargetType(MeshReduceTargetTypes value);

    /// Controls the maximum deviation of the reduced mesh to the original mesh.
    /// Only valid if meshReduceTargetType is MaximumDeviationMeshReduceTargetType.
    core::Ptr<ModelParameter> maximumDeviation() const;

    /// Gets and sets the proportion of number of faces of the reduced mesh to the number of
    /// faces of original mesh as a target for the reduction. The value can range between 0 and 100 percent.
    /// Only valid if meshReduceTargetType is ProportionMeshReduceTargetType.
    core::Ptr<ModelParameter> proportion() const;

    /// Gets and sets the target face count for the reduced mesh as a target for the reduction.
    /// Only valid if meshReduceTargetType is FaceCountMeshReduceTargetType.
    core::Ptr<ModelParameter> facecount() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<MeshReduceFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<MeshReduceFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_MESHREDUCEFEATURE_API static const char* classType();
    ADSK_FUSION_MESHREDUCEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHREDUCEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREDUCEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshReduceMethodTypes meshReduceMethodType_raw() const = 0;
    virtual bool meshReduceMethodType_raw(MeshReduceMethodTypes value) = 0;
    virtual MeshReduceTargetTypes meshReduceTargetType_raw() const = 0;
    virtual bool meshReduceTargetType_raw(MeshReduceTargetTypes value) = 0;
    virtual ModelParameter* maximumDeviation_raw() const = 0;
    virtual ModelParameter* proportion_raw() const = 0;
    virtual ModelParameter* facecount_raw() const = 0;
    virtual MeshReduceFeature* nativeObject_raw() const = 0;
    virtual MeshReduceFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshReduceFeature::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshReduceFeature::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshReduceMethodTypes MeshReduceFeature::meshReduceMethodType() const
{
    MeshReduceMethodTypes res = meshReduceMethodType_raw();
    return res;
}

inline bool MeshReduceFeature::meshReduceMethodType(MeshReduceMethodTypes value)
{
    return meshReduceMethodType_raw(value);
}

inline MeshReduceTargetTypes MeshReduceFeature::meshReduceTargetType() const
{
    MeshReduceTargetTypes res = meshReduceTargetType_raw();
    return res;
}

inline bool MeshReduceFeature::meshReduceTargetType(MeshReduceTargetTypes value)
{
    return meshReduceTargetType_raw(value);
}

inline core::Ptr<ModelParameter> MeshReduceFeature::maximumDeviation() const
{
    core::Ptr<ModelParameter> res = maximumDeviation_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshReduceFeature::proportion() const
{
    core::Ptr<ModelParameter> res = proportion_raw();
    return res;
}

inline core::Ptr<ModelParameter> MeshReduceFeature::facecount() const
{
    core::Ptr<ModelParameter> res = facecount_raw();
    return res;
}

inline core::Ptr<MeshReduceFeature> MeshReduceFeature::nativeObject() const
{
    core::Ptr<MeshReduceFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<MeshReduceFeature> MeshReduceFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<MeshReduceFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREDUCEFEATURE_API