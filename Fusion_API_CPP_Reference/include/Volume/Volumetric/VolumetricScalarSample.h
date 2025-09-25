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
#include "VolumetricSample.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_CPP__
# define ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API XI_EXPORT
# else
# define ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API
# endif
#else
# define ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API XI_IMPORT
#endif

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The VolumetricScalarSample object which contains the result of sampling a scalar value from the volumetric model at a point.
class VolumetricScalarSample : public VolumetricSample {
public:

    /// Gets the scalar value at the sample point.
    double value() const;

    ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API static const char* classType();
    ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API const char* objectType() const override;
    ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
};

// Inline wrappers

inline double VolumetricScalarSample::value() const
{
    double res = value_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_VOLUMETRICSCALARSAMPLE_API