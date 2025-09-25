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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFEACONVECTION_CPP__
# define ADSK_CAM_ADDITIVEFEACONVECTION_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFEACONVECTION_API
# endif
#else
# define ADSK_CAM_ADDITIVEFEACONVECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The convection defines the temperature-dependent heat loss boundary condition according to Newton's law of cooling
class AdditiveFEAConvection : public core::Base {
public:

    /// Append a row of data to the convection table
    /// convectionCoefficient : Convection in W/mm^2-K
    /// temperature : Temperature in C
    void append(double convectionCoefficient, double temperature);

    ADSK_CAM_ADDITIVEFEACONVECTION_API static const char* classType();
    ADSK_CAM_ADDITIVEFEACONVECTION_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFEACONVECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFEACONVECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void append_raw(double convectionCoefficient, double temperature) = 0;
};

// Inline wrappers

inline void AdditiveFEAConvection::append(double convectionCoefficient, double temperature)
{
    append_raw(convectionCoefficient, temperature);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFEACONVECTION_API