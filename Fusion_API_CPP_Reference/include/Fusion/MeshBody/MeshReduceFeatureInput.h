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
# ifdef __COMPILING_ADSK_FUSION_MESHREDUCEFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHREDUCEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREDUCEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHREDUCEFEATUREINPUT_API XI_IMPORT
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
/// This class defines the methods and properties that pertain to the definition of a mesh reduce
/// feature.
class MeshReduceFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the type of mesh reduce, default value is AdaptiveReduceType.
    MeshReduceMethodTypes meshReduceMethodType() const;
    bool meshReduceMethodType(MeshReduceMethodTypes value);

    /// Gets and sets the target criteria for the reduction, default value is MaximumDeviationMeshReduceTargetType.
    MeshReduceTargetTypes meshReduceTargetType() const;
    bool meshReduceTargetType(MeshReduceTargetTypes value);

    /// Controls the maximum deviation of the reduced mesh to the original mesh.
    /// The default value is 0.
    /// Only valid if meshReduceTargetType is MaximumDeviationMeshReduceTargetType.
    core::Ptr<core::ValueInput> maximumDeviation() const;
    bool maximumDeviation(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the proportion of number of faces of the reduced mesh to the number of
    /// faces of original mesh as a target for the reduction. The value can range between 0 and 100 percent.
    /// Only valid if meshReduceTargetType is ProportionMeshReduceTargetType.
    core::Ptr<core::ValueInput> proportion() const;
    bool proportion(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the target face count for the reduced mesh as a target for the reduction.
    /// Only valid if meshReduceTargetType is FaceCountMeshReduceTargetType.
    core::Ptr<core::ValueInput> facecount() const;
    bool facecount(const core::Ptr<core::ValueInput>& value);

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

    ADSK_FUSION_MESHREDUCEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHREDUCEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHREDUCEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREDUCEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshReduceMethodTypes meshReduceMethodType_raw() const = 0;
    virtual bool meshReduceMethodType_raw(MeshReduceMethodTypes value) = 0;
    virtual MeshReduceTargetTypes meshReduceTargetType_raw() const = 0;
    virtual bool meshReduceTargetType_raw(MeshReduceTargetTypes value) = 0;
    virtual core::ValueInput* maximumDeviation_raw() const = 0;
    virtual bool maximumDeviation_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* proportion_raw() const = 0;
    virtual bool proportion_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* facecount_raw() const = 0;
    virtual bool facecount_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshReduceFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshReduceFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshReduceMethodTypes MeshReduceFeatureInput::meshReduceMethodType() const
{
    MeshReduceMethodTypes res = meshReduceMethodType_raw();
    return res;
}

inline bool MeshReduceFeatureInput::meshReduceMethodType(MeshReduceMethodTypes value)
{
    return meshReduceMethodType_raw(value);
}

inline MeshReduceTargetTypes MeshReduceFeatureInput::meshReduceTargetType() const
{
    MeshReduceTargetTypes res = meshReduceTargetType_raw();
    return res;
}

inline bool MeshReduceFeatureInput::meshReduceTargetType(MeshReduceTargetTypes value)
{
    return meshReduceTargetType_raw(value);
}

inline core::Ptr<core::ValueInput> MeshReduceFeatureInput::maximumDeviation() const
{
    core::Ptr<core::ValueInput> res = maximumDeviation_raw();
    return res;
}

inline bool MeshReduceFeatureInput::maximumDeviation(const core::Ptr<core::ValueInput>& value)
{
    return maximumDeviation_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshReduceFeatureInput::proportion() const
{
    core::Ptr<core::ValueInput> res = proportion_raw();
    return res;
}

inline bool MeshReduceFeatureInput::proportion(const core::Ptr<core::ValueInput>& value)
{
    return proportion_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshReduceFeatureInput::facecount() const
{
    core::Ptr<core::ValueInput> res = facecount_raw();
    return res;
}

inline bool MeshReduceFeatureInput::facecount(const core::Ptr<core::ValueInput>& value)
{
    return facecount_raw(value.get());
}

inline core::Ptr<BaseFeature> MeshReduceFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshReduceFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREDUCEFEATUREINPUT_API