//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_MESHREMOVEFEATUREINPUT_CPP__
# define ADSK_FUSION_MESHREMOVEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_MESHREMOVEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_MESHREMOVEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class MeshBody;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a mesh remove
/// feature.
class MeshRemoveFeatureInput : public core::Base {
public:

    /// Gets and sets the input meshes.
    std::vector<core::Ptr<MeshBody>> inputBodies() const;
    bool inputBodies(const std::vector<core::Ptr<MeshBody>>& value);

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

    ADSK_FUSION_MESHREMOVEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_MESHREMOVEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_MESHREMOVEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHREMOVEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MeshBody** inputBodies_raw(size_t& return_size) const = 0;
    virtual bool inputBodies_raw(MeshBody** value, size_t value_size) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<MeshBody>> MeshRemoveFeatureInput::inputBodies() const
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

inline bool MeshRemoveFeatureInput::inputBodies(const std::vector<core::Ptr<MeshBody>>& value)
{
    MeshBody** value_ = new MeshBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<BaseFeature> MeshRemoveFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool MeshRemoveFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHREMOVEFEATUREINPUT_API