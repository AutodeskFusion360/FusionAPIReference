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
# ifdef __COMPILING_ADSK_FUSION_MESHSHELLFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHSHELLFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHSHELLFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHSHELLFEATUREINPUT_API XI_IMPORT
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
/// This class defines the methods and properties that pertain to the definition of a mesh shell
/// feature.
class MeshShellFeatureInput : public core::Base {
public:

    /// Gets and sets the input mesh body.
    core::Ptr<core::Base> mesh() const;
    bool mesh(const core::Ptr<core::Base>& value);

    /// Controls the thickness of the created shell.
    /// The default value is 0.2.
    core::Ptr<core::ValueInput> thickness() const;
    bool thickness(const core::Ptr<core::ValueInput>& value);

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

    ADSK_FUSION_MESHSHELLFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHSHELLFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHSHELLFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHSHELLFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* mesh_raw() const = 0;
    virtual bool mesh_raw(core::Base* value) = 0;
    virtual core::ValueInput* thickness_raw() const = 0;
    virtual bool thickness_raw(core::ValueInput* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MeshShellFeatureInput::mesh() const
{
    core::Ptr<core::Base> res = mesh_raw();
    return res;
}

inline bool MeshShellFeatureInput::mesh(const core::Ptr<core::Base>& value)
{
    return mesh_raw(value.get());
}

inline core::Ptr<core::ValueInput> MeshShellFeatureInput::thickness() const
{
    core::Ptr<core::ValueInput> res = thickness_raw();
    return res;
}

inline bool MeshShellFeatureInput::thickness(const core::Ptr<core::ValueInput>& value)
{
    return thickness_raw(value.get());
}

inline core::Ptr<BaseFeature> MeshShellFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshShellFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHSHELLFEATUREINPUT_API