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
# ifdef __COMPILING_ADSK_FUSION_MESHREMESHFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHREMESHFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREMESHFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHREMESHFEATUREINPUT_API XI_IMPORT
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
/// This class defines the methods and properties that pertain to the definition of a mesh re-mesh
/// feature.
class MeshRemeshFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh re-mesh, default value is AdaptiveType.
    MeshRemeshMethodTypes meshRemeshMethodType() const;
    bool meshRemeshMethodType(MeshRemeshMethodTypes value);

    /// Controls the density of the newly created faces of the re-meshed mesh.
    /// The values can range between 0 and 1. The default value is 0.25
    core::Ptr<core::ValueInput> density() const;
    bool density(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets how much of the original shape needs to preserved.
    /// The value can range between 0 and 1. The default value is 0.5.
    /// Only valid if meshRemeshMethodType is AdaptiveType.
    core::Ptr<core::ValueInput> shapePreservation() const;
    bool shapePreservation(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if sharp edges are preserved during the re-mesh process.
    /// Default value is false.
    bool isPreserveSharpEdgesEnabled() const;
    bool isPreserveSharpEdgesEnabled(bool value);

    /// Gets and sets if open boundary edges are preserved during the re-mesh process.
    /// Default value is false.
    bool isPreserveBoundariesEnabled() const;
    bool isPreserveBoundariesEnabled(bool value);

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

    ADSK_FUSION_MESHREMESHFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHREMESHFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHREMESHFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREMESHFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshRemeshMethodTypes meshRemeshMethodType_raw() const = 0;
    virtual bool meshRemeshMethodType_raw(MeshRemeshMethodTypes value) = 0;
    virtual core::ValueInput* density_raw() const = 0;
    virtual bool density_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* shapePreservation_raw() const = 0;
    virtual bool shapePreservation_raw(core::ValueInput* value) = 0;
    virtual bool isPreserveSharpEdgesEnabled_raw() const = 0;
    virtual bool isPreserveSharpEdgesEnabled_raw(bool value) = 0;
    virtual bool isPreserveBoundariesEnabled_raw() const = 0;
    virtual bool isPreserveBoundariesEnabled_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshRemeshFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshRemeshMethodTypes MeshRemeshFeatureInput::meshRemeshMethodType() const
{
    MeshRemeshMethodTypes res = meshRemeshMethodType_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::meshRemeshMethodType(MeshRemeshMethodTypes value)
{
    return meshRemeshMethodType_raw(value);
}

inline core::Ptr<core::ValueInput> MeshRemeshFeatureInput::density() const
{
    core::Ptr<core::ValueInput> res = density_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::density(const core::Ptr<core::ValueInput>& value)
{
    return density_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshRemeshFeatureInput::shapePreservation() const
{
    core::Ptr<core::ValueInput> res = shapePreservation_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::shapePreservation(const core::Ptr<core::ValueInput>& value)
{
    return shapePreservation_raw(value.get());
}

inline bool MeshRemeshFeatureInput::isPreserveSharpEdgesEnabled() const
{
    bool res = isPreserveSharpEdgesEnabled_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::isPreserveSharpEdgesEnabled(bool value)
{
    return isPreserveSharpEdgesEnabled_raw(value);
}

inline bool MeshRemeshFeatureInput::isPreserveBoundariesEnabled() const
{
    bool res = isPreserveBoundariesEnabled_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::isPreserveBoundariesEnabled(bool value)
{
    return isPreserveBoundariesEnabled_raw(value);
}

inline core::Ptr<BaseFeature> MeshRemeshFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshRemeshFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREMESHFEATUREINPUT_API