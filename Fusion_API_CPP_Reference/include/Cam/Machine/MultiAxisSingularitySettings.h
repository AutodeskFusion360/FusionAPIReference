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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_CPP__
# define ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MultiAxisSingularityLinearizationSettings;
}}

namespace adsk { namespace cam {

/// Base class for multi-axis singularity settings.
class MultiAxisSingularitySettings : public core::Base {
public:

    /// The angular distance range between the tool axis vector and the singularity point before the singularity is adjusted.
    /// Typically, the angular distance is less than 5 degrees.
    /// The further the tool axis is from the singularity, the less visible the fluctuations in the rotary axes are.
    /// Value is in radians.
    double cone() const;
    bool cone(double value);

    /// The minimum angular delta movement for the rotary axes before the singularity is adjusted.
    /// When fluctuations of the rotary axes are insignificant, this limit prevents adjustment of the tool axis vector.
    /// Typically set to 10 degrees or more.
    /// Value is in radians.
    double angle() const;
    bool angle(double value);

    /// The tolerance value for converting simultaneous multi-axis movements to linear movements when the tool axis is near a singularity.
    double tolerance() const;
    bool tolerance(double value);

    /// The settings for linearization of moves around the singularity.
    /// See MultiAxisSingularityLinearizeMethod for more details.
    /// Set this to null to not use linearization.
    /// For changes to to this object to take effect, re-assign them to this property.
    core::Ptr<MultiAxisSingularityLinearizationSettings> linearizationSettings() const;
    bool linearizationSettings(const core::Ptr<MultiAxisSingularityLinearizationSettings>& value);

    /// Creates a MultiAxisSingularityLinearizationSettings object.
    /// Set this object on the linearizationSettings property to apply the changes.
    /// The MultiAxisSingularityLinearizationSettings object created.
    core::Ptr<MultiAxisSingularityLinearizationSettings> createLinearizationSettings();

    ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double cone_raw() const = 0;
    virtual bool cone_raw(double value) = 0;
    virtual double angle_raw() const = 0;
    virtual bool angle_raw(double value) = 0;
    virtual double tolerance_raw() const = 0;
    virtual bool tolerance_raw(double value) = 0;
    virtual MultiAxisSingularityLinearizationSettings* linearizationSettings_raw() const = 0;
    virtual bool linearizationSettings_raw(MultiAxisSingularityLinearizationSettings* value) = 0;
    virtual MultiAxisSingularityLinearizationSettings* createLinearizationSettings_raw() = 0;
};

// Inline wrappers

inline double MultiAxisSingularitySettings::cone() const
{
    double res = cone_raw();
    return res;
}

inline bool MultiAxisSingularitySettings::cone(double value)
{
    return cone_raw(value);
}

inline double MultiAxisSingularitySettings::angle() const
{
    double res = angle_raw();
    return res;
}

inline bool MultiAxisSingularitySettings::angle(double value)
{
    return angle_raw(value);
}

inline double MultiAxisSingularitySettings::tolerance() const
{
    double res = tolerance_raw();
    return res;
}

inline bool MultiAxisSingularitySettings::tolerance(double value)
{
    return tolerance_raw(value);
}

inline core::Ptr<MultiAxisSingularityLinearizationSettings> MultiAxisSingularitySettings::linearizationSettings() const
{
    core::Ptr<MultiAxisSingularityLinearizationSettings> res = linearizationSettings_raw();
    return res;
}

inline bool MultiAxisSingularitySettings::linearizationSettings(const core::Ptr<MultiAxisSingularityLinearizationSettings>& value)
{
    return linearizationSettings_raw(value.get());
}

inline core::Ptr<MultiAxisSingularityLinearizationSettings> MultiAxisSingularitySettings::createLinearizationSettings()
{
    core::Ptr<MultiAxisSingularityLinearizationSettings> res = createLinearizationSettings_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISSINGULARITYSETTINGS_API