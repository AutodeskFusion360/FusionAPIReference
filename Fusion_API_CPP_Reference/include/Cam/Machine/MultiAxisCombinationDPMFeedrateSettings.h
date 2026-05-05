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
#include "MultiAxisDPMFeedrateSettings.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_CPP__
# define ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Specialization of MultiAxisDPMFeedrateSettings for degrees per minute feedrates that require a combination of linear and rotary movements.
class MultiAxisCombinationDPMFeedrateSettings : public MultiAxisDPMFeedrateSettings {
public:

    /// The pulse weight ratio for the rotary axes when DPM feedrates are output as a combination of linear and rotary movements.
    /// The pulse weight is a scale factor based on the rotary axes accuracy compared to the linear axes accuracy.
    /// For example, it should be set to .1 when the linear axes are output on .0001 increments and the rotary axes on .001 increments.
    double pulseWeight() const;
    bool pulseWeight(double value);

    ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double pulseWeight_raw() const = 0;
    virtual bool pulseWeight_raw(double value) = 0;
};

// Inline wrappers

inline double MultiAxisCombinationDPMFeedrateSettings::pulseWeight() const
{
    double res = pulseWeight_raw();
    return res;
}

inline bool MultiAxisCombinationDPMFeedrateSettings::pulseWeight(double value)
{
    return pulseWeight_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISCOMBINATIONDPMFEEDRATESETTINGS_API