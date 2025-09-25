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
# ifdef __COMPILING_ADSK_CAM_MACHININGTIME_CPP__
# define ADSK_CAM_MACHININGTIME_API XI_EXPORT
# else
# define ADSK_CAM_MACHININGTIME_API
# endif
#else
# define ADSK_CAM_MACHININGTIME_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object returned when using the getMachiningTime method from the CAM class.
/// Use the properties on this object to get the machining time results.
class MachiningTime : public core::Base {
public:

    /// Gets the feed distance in centimeters.
    double feedDistance() const;

    /// Get the total feed time in seconds.
    double totalFeedTime() const;

    /// Gets the calculated rapid distance in centimeters.
    double rapidDistance() const;

    /// Gets the total rapid feed time in seconds.
    double totalRapidTime() const;

    /// Gets the number of tool changes.
    int toolChangeCount() const;

    /// Gets the total tool change time in seconds.
    double totalToolChangeTime() const;

    /// Gets the machining time in seconds.
    double machiningTime() const;

    ADSK_CAM_MACHININGTIME_API static const char* classType();
    ADSK_CAM_MACHININGTIME_API const char* objectType() const override;
    ADSK_CAM_MACHININGTIME_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHININGTIME_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double feedDistance_raw() const = 0;
    virtual double totalFeedTime_raw() const = 0;
    virtual double rapidDistance_raw() const = 0;
    virtual double totalRapidTime_raw() const = 0;
    virtual int toolChangeCount_raw() const = 0;
    virtual double totalToolChangeTime_raw() const = 0;
    virtual double machiningTime_raw() const = 0;
};

// Inline wrappers

inline double MachiningTime::feedDistance() const
{
    double res = feedDistance_raw();
    return res;
}

inline double MachiningTime::totalFeedTime() const
{
    double res = totalFeedTime_raw();
    return res;
}

inline double MachiningTime::rapidDistance() const
{
    double res = rapidDistance_raw();
    return res;
}

inline double MachiningTime::totalRapidTime() const
{
    double res = totalRapidTime_raw();
    return res;
}

inline int MachiningTime::toolChangeCount() const
{
    int res = toolChangeCount_raw();
    return res;
}

inline double MachiningTime::totalToolChangeTime() const
{
    double res = totalToolChangeTime_raw();
    return res;
}

inline double MachiningTime::machiningTime() const
{
    double res = machiningTime_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHININGTIME_API