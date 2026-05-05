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
#include "HemFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_CPP__
# define ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The definition for a rolled hem.
class RolledHemFeatureDefinition : public HemFeatureDefinition {
public:

    /// Gets the radius for a rolled hem.
    core::Ptr<ModelParameter> radius() const;

    /// Gets the angle for a rolled hem.
    core::Ptr<ModelParameter> angle() const;

    ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* radius_raw() const = 0;
    virtual ModelParameter* angle_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> RolledHemFeatureDefinition::radius() const
{
    core::Ptr<ModelParameter> res = radius_raw();
    return res;
}

inline core::Ptr<ModelParameter> RolledHemFeatureDefinition::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ROLLEDHEMFEATUREDEFINITION_API