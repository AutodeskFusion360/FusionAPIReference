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
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FLATHEMFEATUREDEFINITION_CPP__
# define ADSK_FUSION_FLATHEMFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_FLATHEMFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_FLATHEMFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The definition for a flat hem.
class FlatHemFeatureDefinition : public HemFeatureDefinition {
public:

    /// Gets the length for a flat hem.
    core::Ptr<ModelParameter> length() const;

    ADSK_FUSION_FLATHEMFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_FLATHEMFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_FLATHEMFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FLATHEMFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* length_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> FlatHemFeatureDefinition::length() const
{
    core::Ptr<ModelParameter> res = length_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FLATHEMFEATUREDEFINITION_API