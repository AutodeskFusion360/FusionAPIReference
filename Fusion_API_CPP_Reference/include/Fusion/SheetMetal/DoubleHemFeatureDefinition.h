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
# ifdef __COMPILING_ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_CPP__
# define ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The definition for a double hem.
class DoubleHemFeatureDefinition : public HemFeatureDefinition {
public:

    /// Gets the gap for a double hem.
    core::Ptr<ModelParameter> gap() const;

    /// Gets the length for a double hem.
    core::Ptr<ModelParameter> length() const;

    /// Gets the setback for a double hem.
    core::Ptr<ModelParameter> setback() const;

    ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* gap_raw() const = 0;
    virtual ModelParameter* length_raw() const = 0;
    virtual ModelParameter* setback_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> DoubleHemFeatureDefinition::gap() const
{
    core::Ptr<ModelParameter> res = gap_raw();
    return res;
}

inline core::Ptr<ModelParameter> DoubleHemFeatureDefinition::length() const
{
    core::Ptr<ModelParameter> res = length_raw();
    return res;
}

inline core::Ptr<ModelParameter> DoubleHemFeatureDefinition::setback() const
{
    core::Ptr<ModelParameter> res = setback_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DOUBLEHEMFEATUREDEFINITION_API