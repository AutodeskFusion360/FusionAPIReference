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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIROUGHNESS_CPP__
# define ADSK_FUSION_PMIROUGHNESS_API XI_EXPORT
# else
# define ADSK_FUSION_PMIROUGHNESS_API
# endif
#else
# define ADSK_FUSION_PMIROUGHNESS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents roughness data used in surface texture PMI.
/// Contains information about surface roughness parameters.
class PMIRoughness : public core::Base {
public:

    /// Returns whether this PMIRoughness object has a valid value.
    bool hasValue() const;

    /// Gets the length value of the roughness measurement in cm.
    /// 
    /// Requires hasValue to be true.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    double length() const;

    /// Gets the value of the roughness measurement.
    /// 
    /// Requires hasValue to be true.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    double value() const;

    /// Gets the parameter type of the surface texture measurement.
    /// 
    /// Requires hasValue to be true.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    PMISurfaceTextureParameterTypes parameterType() const;

    /// Gets whether this represents a maximum value.
    /// 
    /// Requires hasValue to be true.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    bool isMaximum() const;

    ADSK_FUSION_PMIROUGHNESS_API static const char* classType();
    ADSK_FUSION_PMIROUGHNESS_API const char* objectType() const override;
    ADSK_FUSION_PMIROUGHNESS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIROUGHNESS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool hasValue_raw() const = 0;
    virtual double length_raw() const = 0;
    virtual double value_raw() const = 0;
    virtual PMISurfaceTextureParameterTypes parameterType_raw() const = 0;
    virtual bool isMaximum_raw() const = 0;
};

// Inline wrappers

inline bool PMIRoughness::hasValue() const
{
    bool res = hasValue_raw();
    return res;
}

inline double PMIRoughness::length() const
{
    double res = length_raw();
    return res;
}

inline double PMIRoughness::value() const
{
    double res = value_raw();
    return res;
}

inline PMISurfaceTextureParameterTypes PMIRoughness::parameterType() const
{
    PMISurfaceTextureParameterTypes res = parameterType_raw();
    return res;
}

inline bool PMIRoughness::isMaximum() const
{
    bool res = isMaximum_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIROUGHNESS_API