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
#include "../Fusion/ModelParameter.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATUREPARAMETER_CPP__
# define ADSK_FUSION_CUSTOMFEATUREPARAMETER_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATUREPARAMETER_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATUREPARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A custom parameter is a parameter that was created as the result of a custom feature
/// being created. It is associated with the custom feature and it's lifetime is the same
/// as the custom feature that owns it.
class CustomFeatureParameter : public ModelParameter {
public:

    /// Returns the ID of this custom feature parameter.
    std::string id() const;

    /// Gets and sets if this parameter is visible in the parameters dialog. By default, all new parameters are visible.
    /// 
    /// This can be useful in cases where the feature can be edited to be in different states where a parameter
    /// is only valid in a certain state. You can change the visibility based on the current state of the feature
    /// and if that parameter should be available for edit. This implies that you create all the parameters that
    /// might be needed and then change their visibility based on the current state of the feature. The parameters
    /// that are not visible will not be returned by the ModelParameters collection and are only available through
    /// the custom feature they're associated with.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Returns the custom feature this parameter is associated with.
    core::Ptr<CustomFeature> parentCustomFeature() const;

    ADSK_FUSION_CUSTOMFEATUREPARAMETER_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATUREPARAMETER_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATUREPARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATUREPARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual CustomFeature* parentCustomFeature_raw() const = 0;
};

// Inline wrappers

inline std::string CustomFeatureParameter::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomFeatureParameter::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool CustomFeatureParameter::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline core::Ptr<CustomFeature> CustomFeatureParameter::parentCustomFeature() const
{
    core::Ptr<CustomFeature> res = parentCustomFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATUREPARAMETER_API