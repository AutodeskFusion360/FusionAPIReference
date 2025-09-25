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
# ifdef __COMPILING_ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API XI_IMPORT
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
/// This class defines the methods and properties that pertain to the definition of a mesh generate face groups
/// feature.
class MeshGenerateFaceGroupsFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh generate face groups, default value is FastGenerateFaceGroupsType.
    MeshGenerateFaceGroupsMethodTypes meshGenerateFaceGroupsMethodType() const;
    bool meshGenerateFaceGroupsMethodType(MeshGenerateFaceGroupsMethodTypes value);

    /// Controls the angle threshold during the face group generation.
    /// The values can range between 0 and pi/2. The default value is 0.436.
    /// Only valid if meshGenerateFaceGroupsMethodType is FastGenerateFaceGroupsType.
    core::Ptr<core::ValueInput> angleThreshold() const;
    bool angleThreshold(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the fraction of the overall mesh area
    /// which determines the smallest face group.
    /// The value can range between 0 and 1. The default value is 0.02.
    /// Only valid if meshGenerateFaceGroupsMethodType is FastGenerateFaceGroupsType.
    core::Ptr<core::ValueInput> minimumFaceGroupSize() const;
    bool minimumFaceGroupSize(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets tolerance to define face group. This value is used
    /// during the fitting of the primitives. The values can range between
    /// 0 and 0.01. The default value is 0.001.
    /// Only valid if meshGenerateFaceGroupsMethodType is AccurateGenerateFaceGroupsType.
    core::Ptr<core::ValueInput> boundaryTolerance() const;
    bool boundaryTolerance(const core::Ptr<core::ValueInput>& value);

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

    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshGenerateFaceGroupsMethodTypes meshGenerateFaceGroupsMethodType_raw() const = 0;
    virtual bool meshGenerateFaceGroupsMethodType_raw(MeshGenerateFaceGroupsMethodTypes value) = 0;
    virtual core::ValueInput* angleThreshold_raw() const = 0;
    virtual bool angleThreshold_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* minimumFaceGroupSize_raw() const = 0;
    virtual bool minimumFaceGroupSize_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* boundaryTolerance_raw() const = 0;
    virtual bool boundaryTolerance_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshGenerateFaceGroupsFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshGenerateFaceGroupsMethodTypes MeshGenerateFaceGroupsFeatureInput::meshGenerateFaceGroupsMethodType() const
{
    MeshGenerateFaceGroupsMethodTypes res = meshGenerateFaceGroupsMethodType_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::meshGenerateFaceGroupsMethodType(MeshGenerateFaceGroupsMethodTypes value)
{
    return meshGenerateFaceGroupsMethodType_raw(value);
}

inline core::Ptr<core::ValueInput> MeshGenerateFaceGroupsFeatureInput::angleThreshold() const
{
    core::Ptr<core::ValueInput> res = angleThreshold_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::angleThreshold(const core::Ptr<core::ValueInput>& value)
{
    return angleThreshold_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshGenerateFaceGroupsFeatureInput::minimumFaceGroupSize() const
{
    core::Ptr<core::ValueInput> res = minimumFaceGroupSize_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::minimumFaceGroupSize(const core::Ptr<core::ValueInput>& value)
{
    return minimumFaceGroupSize_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshGenerateFaceGroupsFeatureInput::boundaryTolerance() const
{
    core::Ptr<core::ValueInput> res = boundaryTolerance_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::boundaryTolerance(const core::Ptr<core::ValueInput>& value)
{
    return boundaryTolerance_raw(value.get());
}

inline core::Ptr<BaseFeature> MeshGenerateFaceGroupsFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshGenerateFaceGroupsFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHGENERATEFACEGROUPSFEATUREINPUT_API