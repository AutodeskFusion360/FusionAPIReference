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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHCONVERTFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHCONVERTFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHCONVERTFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHCONVERTFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class MeshBody;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a mesh convert
/// feature.
class MeshConvertFeatureInput : public core::Base {
public:

    /// Gets and sets the input meshes.
    std::vector<core::Ptr<MeshBody>> inputBodies() const;
    bool inputBodies(const std::vector<core::Ptr<MeshBody>>& value);

    /// Gets and sets the convert type of mesh convert, default value is FacetedMeshConvertMethodType.
    MeshConvertMethodTypes meshConvertMethodType() const;
    bool meshConvertMethodType(MeshConvertMethodTypes value);

    /// Gets and sets the resolution method of mesh convert, default value is ByAccuracyMeshConvertResolutionType.
    /// Only valid if meshConvertMethodType is OrganicMeshConvertMethodType.
    MeshConvertResolutionTypes meshConvertResolutionType() const;
    bool meshConvertResolutionType(MeshConvertResolutionTypes value);

    /// Gets and sets the accuracy of organic mesh convert, default value is MediumMeshConvertResolutionType.
    /// Only valid if meshConvertResolutionType is ByAccuracyMeshConvertResolutionType.
    MeshConvertAccuracyTypes meshConvertAccuracyType() const;
    bool meshConvertAccuracyType(MeshConvertAccuracyTypes value);

    /// Specify the number of faces to generate for the converted body.
    /// Only valid if meshConvertResolutionType is ByFacetNumberMeshConvertResolutionType.
    core::Ptr<core::ValueInput> numberOfFaces() const;
    bool numberOfFaces(const core::Ptr<core::ValueInput>& value);

    /// Smooths the boundaries of open holes in the mesh body. Improves the chance of successful conversion by
    /// refining the shape of holes that will remain open. Default value is false. Only valid if meshConvertMethodType is
    /// OrganicMeshConvertType.
    bool isPreprocessHoles() const;
    bool isPreprocessHoles(bool value);

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

    /// Gets and sets the operation type of mesh convert, default value is ParametricFeatureMeshConvertOperationType.
    MeshConvertOperationTypes meshConvertOperationType() const;
    bool meshConvertOperationType(MeshConvertOperationTypes value);

    ADSK_FUSION_MESHCONVERTFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHCONVERTFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHCONVERTFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHCONVERTFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual bool inputBodies_raw(MeshBody** value, size_t value_size) = 0;
    virtual MeshConvertMethodTypes meshConvertMethodType_raw() const = 0;
    virtual bool meshConvertMethodType_raw(MeshConvertMethodTypes value) = 0;
    virtual MeshConvertResolutionTypes meshConvertResolutionType_raw() const = 0;
    virtual bool meshConvertResolutionType_raw(MeshConvertResolutionTypes value) = 0;
    virtual MeshConvertAccuracyTypes meshConvertAccuracyType_raw() const = 0;
    virtual bool meshConvertAccuracyType_raw(MeshConvertAccuracyTypes value) = 0;
    virtual core::ValueInput* numberOfFaces_raw() const = 0;
    virtual bool numberOfFaces_raw(core::ValueInput* value) = 0;
    virtual bool isPreprocessHoles_raw() const = 0;
    virtual bool isPreprocessHoles_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual MeshConvertOperationTypes meshConvertOperationType_raw() const = 0;
    virtual bool meshConvertOperationType_raw(MeshConvertOperationTypes value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<MeshBody>> MeshConvertFeatureInput::inputBodies() const
{
    std::vector<core::Ptr<MeshBody>> res;
    size_t s;

    MeshBody** p= inputBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool MeshConvertFeatureInput::inputBodies(const std::vector<core::Ptr<MeshBody>>& value)
{
    MeshBody** value_ = new MeshBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline MeshConvertMethodTypes MeshConvertFeatureInput::meshConvertMethodType() const
{
    MeshConvertMethodTypes res = meshConvertMethodType_raw();
    return res;
}

inline bool MeshConvertFeatureInput::meshConvertMethodType(MeshConvertMethodTypes value)
{
    return meshConvertMethodType_raw(value);
}

inline MeshConvertResolutionTypes MeshConvertFeatureInput::meshConvertResolutionType() const
{
    MeshConvertResolutionTypes res = meshConvertResolutionType_raw();
    return res;
}

inline bool MeshConvertFeatureInput::meshConvertResolutionType(MeshConvertResolutionTypes value)
{
    return meshConvertResolutionType_raw(value);
}

inline MeshConvertAccuracyTypes MeshConvertFeatureInput::meshConvertAccuracyType() const
{
    MeshConvertAccuracyTypes res = meshConvertAccuracyType_raw();
    return res;
}

inline bool MeshConvertFeatureInput::meshConvertAccuracyType(MeshConvertAccuracyTypes value)
{
    return meshConvertAccuracyType_raw(value);
}

inline core::Ptr<core::ValueInput> MeshConvertFeatureInput::numberOfFaces() const
{
    core::Ptr<core::ValueInput> res = numberOfFaces_raw();
    return res;
}

inline bool MeshConvertFeatureInput::numberOfFaces(const core::Ptr<core::ValueInput>& value)
{
    return numberOfFaces_raw(value.get());
}

inline bool MeshConvertFeatureInput::isPreprocessHoles() const
{
    bool res = isPreprocessHoles_raw();
    return res;
}

inline bool MeshConvertFeatureInput::isPreprocessHoles(bool value)
{
    return isPreprocessHoles_raw(value);
}

inline core::Ptr<BaseFeature> MeshConvertFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshConvertFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline MeshConvertOperationTypes MeshConvertFeatureInput::meshConvertOperationType() const
{
    MeshConvertOperationTypes res = meshConvertOperationType_raw();
    return res;
}

inline bool MeshConvertFeatureInput::meshConvertOperationType(MeshConvertOperationTypes value)
{
    return meshConvertOperationType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHCONVERTFEATUREINPUT_API