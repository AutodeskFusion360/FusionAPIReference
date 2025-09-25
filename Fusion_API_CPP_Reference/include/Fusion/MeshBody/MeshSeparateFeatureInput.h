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
# ifdef __COMPILING_ADSK_FUSION_MESHSEPARATEFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a MeshSeparate
/// feature.
class MeshSeparateFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body. This can either be a mesh body or an object collection with face groups.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Gets and sets the output type of mesh separation, default value is ShellMeshSeparateType. Only valid if the input is a mesh body.
    MeshSeparateTypes meshSeparateType() const;
    bool meshSeparateType(MeshSeparateTypes value);

    /// Preserves a copy of the original mesh body. Default value is false.
    bool isKeepBody() const;
    bool isKeepBody(bool value);

    bool isMultipleBodies() const;
    bool isMultipleBodies(bool value);

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

    ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual MeshSeparateTypes meshSeparateType_raw() const = 0;
    virtual bool meshSeparateType_raw(MeshSeparateTypes value) = 0;
    virtual bool isKeepBody_raw() const = 0;
    virtual bool isKeepBody_raw(bool value) = 0;
    virtual bool isMultipleBodies_raw() const = 0;
    virtual bool isMultipleBodies_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshSeparateFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshSeparateFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline MeshSeparateTypes MeshSeparateFeatureInput::meshSeparateType() const
{
    MeshSeparateTypes res = meshSeparateType_raw();
    return res;
}

inline bool MeshSeparateFeatureInput::meshSeparateType(MeshSeparateTypes value)
{
    return meshSeparateType_raw(value);
}

inline bool MeshSeparateFeatureInput::isKeepBody() const
{
    bool res = isKeepBody_raw();
    return res;
}

inline bool MeshSeparateFeatureInput::isKeepBody(bool value)
{
    return isKeepBody_raw(value);
}

inline bool MeshSeparateFeatureInput::isMultipleBodies() const
{
    bool res = isMultipleBodies_raw();
    return res;
}

inline bool MeshSeparateFeatureInput::isMultipleBodies(bool value)
{
    return isMultipleBodies_raw(value);
}

inline core::Ptr<BaseFeature> MeshSeparateFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshSeparateFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHSEPARATEFEATUREINPUT_API