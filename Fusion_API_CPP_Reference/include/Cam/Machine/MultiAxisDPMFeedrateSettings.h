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
# ifdef __COMPILING_ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_CPP__
# define ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Specialization of MultiAxisFeedrateSettings for standard degrees per minute feedrates.
class MultiAxisDPMFeedrateSettings : public MultiAxisFeedrateSettings {
public:

    /// The DPM settings type
    MultiAxisDegreesPerMinuteType dpmType() const;

    /// The maximum feedrate value that can be output.
    double maximumFeedrate() const;
    bool maximumFeedrate(double value);

    /// The tolerance for deciding whether to output a feedrate value or not. It helps to minimize the output of multi-axis feedrate numbers.
    /// If the feedrate value is within this tolerance of the previous feedrate value, then it is set to the previous value.
    /// Value is in deg/min.
    double outputTolerance() const;
    bool outputTolerance(double value);

    ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MultiAxisDegreesPerMinuteType dpmType_raw() const = 0;
    virtual double maximumFeedrate_raw() const = 0;
    virtual bool maximumFeedrate_raw(double value) = 0;
    virtual double outputTolerance_raw() const = 0;
    virtual bool outputTolerance_raw(double value) = 0;
    virtual void placeholderMultiAxisDPMFeedrateSettings0() {}
    virtual void placeholderMultiAxisDPMFeedrateSettings1() {}
    virtual void placeholderMultiAxisDPMFeedrateSettings2() {}
};

// Inline wrappers

inline MultiAxisDegreesPerMinuteType MultiAxisDPMFeedrateSettings::dpmType() const
{
    MultiAxisDegreesPerMinuteType res = dpmType_raw();
    return res;
}

inline double MultiAxisDPMFeedrateSettings::maximumFeedrate() const
{
    double res = maximumFeedrate_raw();
    return res;
}

inline bool MultiAxisDPMFeedrateSettings::maximumFeedrate(double value)
{
    return maximumFeedrate_raw(value);
}

inline double MultiAxisDPMFeedrateSettings::outputTolerance() const
{
    double res = outputTolerance_raw();
    return res;
}

inline bool MultiAxisDPMFeedrateSettings::outputTolerance(double value)
{
    return outputTolerance_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISDPMFEEDRATESETTINGS_API