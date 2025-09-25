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
# ifdef __COMPILING_ADSK_FUSION_MESHPLANECUTFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a mesh plane cut
/// feature.
class MeshPlaneCutFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the plane which cuts through the mesh body. The plane can either be an core.Plane or
    /// an ConstructionPlane.
    core::Ptr<core::Base> cutPlane() const;
    bool cutPlane(const core::Ptr<core::Base>& value);

    /// Gets and sets the plane cut method of mesh plane cut, default value is TrimMeshPlaneCutType.
    MeshPlaneCutTypes meshPlaneCutType() const;
    bool meshPlaneCutType(MeshPlaneCutTypes value);

    /// Gets and sets the type of filling the plane cut, default value is NoFillMeshPlaneCutFillType. Only valid
    /// If meshPlaneCutType is not SplitFacesMeshPlaneCutType.
    MeshPlaneCutFillTypes meshPlaneCutFillType() const;
    bool meshPlaneCutFillType(MeshPlaneCutFillTypes value);

    /// Flips side of mesh body to trim relative to cut plane, default value is false.
    bool isFlip() const;
    bool isFlip(bool value);

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

    ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual core::Base* cutPlane_raw() const = 0;
    virtual bool cutPlane_raw(core::Base* value) = 0;
    virtual MeshPlaneCutTypes meshPlaneCutType_raw() const = 0;
    virtual bool meshPlaneCutType_raw(MeshPlaneCutTypes value) = 0;
    virtual MeshPlaneCutFillTypes meshPlaneCutFillType_raw() const = 0;
    virtual bool meshPlaneCutFillType_raw(MeshPlaneCutFillTypes value) = 0;
    virtual bool isFlip_raw() const = 0;
    virtual bool isFlip_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshPlaneCutFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline core::Ptr<core::Base> MeshPlaneCutFeatureInput::cutPlane() const
{
    core::Ptr<core::Base> res = cutPlane_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::cutPlane(const core::Ptr<core::Base>& value)
{
    return cutPlane_raw(value.get());
}

inline MeshPlaneCutTypes MeshPlaneCutFeatureInput::meshPlaneCutType() const
{
    MeshPlaneCutTypes res = meshPlaneCutType_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::meshPlaneCutType(MeshPlaneCutTypes value)
{
    return meshPlaneCutType_raw(value);
}

inline MeshPlaneCutFillTypes MeshPlaneCutFeatureInput::meshPlaneCutFillType() const
{
    MeshPlaneCutFillTypes res = meshPlaneCutFillType_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::meshPlaneCutFillType(MeshPlaneCutFillTypes value)
{
    return meshPlaneCutFillType_raw(value);
}

inline bool MeshPlaneCutFeatureInput::isFlip() const
{
    bool res = isFlip_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::isFlip(bool value)
{
    return isFlip_raw(value);
}

inline core::Ptr<BaseFeature> MeshPlaneCutFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshPlaneCutFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHPLANECUTFEATUREINPUT_API