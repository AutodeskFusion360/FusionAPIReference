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
#include "MultiAxisFeedrateSettings.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_CPP__
# define ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Specialization of MultiAxisFeedrateSettings for inverse time feedrates.
class MultiAxisInverseTimeFeedrateSettings : public MultiAxisFeedrateSettings {
public:

    /// The maximum feedrate value that can be output.
    double maximumFeedrate() const;
    bool maximumFeedrate(double value);

    /// The time units for calculating the inverse from.
    MultiAxisInverseTimeUnit inverseTimeUnit() const;
    bool inverseTimeUnit(MultiAxisInverseTimeUnit value);

    ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double maximumFeedrate_raw() const = 0;
    virtual bool maximumFeedrate_raw(double value) = 0;
    virtual MultiAxisInverseTimeUnit inverseTimeUnit_raw() const = 0;
    virtual bool inverseTimeUnit_raw(MultiAxisInverseTimeUnit value) = 0;
};

// Inline wrappers

inline double MultiAxisInverseTimeFeedrateSettings::maximumFeedrate() const
{
    double res = maximumFeedrate_raw();
    return res;
}

inline bool MultiAxisInverseTimeFeedrateSettings::maximumFeedrate(double value)
{
    return maximumFeedrate_raw(value);
}

inline MultiAxisInverseTimeUnit MultiAxisInverseTimeFeedrateSettings::inverseTimeUnit() const
{
    MultiAxisInverseTimeUnit res = inverseTimeUnit_raw();
    return res;
}

inline bool MultiAxisInverseTimeFeedrateSettings::inverseTimeUnit(MultiAxisInverseTimeUnit value)
{
    return inverseTimeUnit_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISINVERSETIMEFEEDRATESETTINGS_API