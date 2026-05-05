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
# ifdef __COMPILING_ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_CPP__
# define ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// Settings for multi-axis retract and reconfigure.
class MultiAxisRetractAndReconfigureSettings : public core::Base {
public:

    /// The rewind preferece. See MultiAxisRewindPreference values for more details.
    MultiAxisRewindPreference rewindPreference() const;
    bool rewindPreference(MultiAxisRewindPreference value);

    /// The retract preference. See MultiAxisRetractPreference values for more details.
    MultiAxisRetractPreference retractPreference() const;
    bool retractPreference(MultiAxisRetractPreference value);

    /// Defines the stock expansion for computing retract moves in rewinds.
    core::Ptr<core::Vector3D> stockExpansion() const;
    bool stockExpansion(const core::Ptr<core::Vector3D>& value);

    /// The length of the retract moves along the tool axis, to perform a rewind.
    double safeRetractDistance() const;
    bool safeRetractDistance(double value);

    /// The safe retract feedrate for retract moves.
    /// (cm/min)
    double safeRetractFeedrate() const;
    bool safeRetractFeedrate(double value);

    /// The safe plunge feedrate for plunge moves.
    /// A plunge rate is the speed at which the tool is driven down into the material when starting a cut.
    /// It varies depending on the tool and material. Plunging too fast may damage the tip of the cutter.
    /// (cm/min)
    double safePlungeFeedrate() const;
    bool safePlungeFeedrate(double value);

    ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MultiAxisRewindPreference rewindPreference_raw() const = 0;
    virtual bool rewindPreference_raw(MultiAxisRewindPreference value) = 0;
    virtual MultiAxisRetractPreference retractPreference_raw() const = 0;
    virtual bool retractPreference_raw(MultiAxisRetractPreference value) = 0;
    virtual core::Vector3D* stockExpansion_raw() const = 0;
    virtual bool stockExpansion_raw(core::Vector3D* value) = 0;
    virtual double safeRetractDistance_raw() const = 0;
    virtual bool safeRetractDistance_raw(double value) = 0;
    virtual double safeRetractFeedrate_raw() const = 0;
    virtual bool safeRetractFeedrate_raw(double value) = 0;
    virtual double safePlungeFeedrate_raw() const = 0;
    virtual bool safePlungeFeedrate_raw(double value) = 0;
};

// Inline wrappers

inline MultiAxisRewindPreference MultiAxisRetractAndReconfigureSettings::rewindPreference() const
{
    MultiAxisRewindPreference res = rewindPreference_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::rewindPreference(MultiAxisRewindPreference value)
{
    return rewindPreference_raw(value);
}

inline MultiAxisRetractPreference MultiAxisRetractAndReconfigureSettings::retractPreference() const
{
    MultiAxisRetractPreference res = retractPreference_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::retractPreference(MultiAxisRetractPreference value)
{
    return retractPreference_raw(value);
}

inline core::Ptr<core::Vector3D> MultiAxisRetractAndReconfigureSettings::stockExpansion() const
{
    core::Ptr<core::Vector3D> res = stockExpansion_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::stockExpansion(const core::Ptr<core::Vector3D>& value)
{
    return stockExpansion_raw(value.get());
}

inline double MultiAxisRetractAndReconfigureSettings::safeRetractDistance() const
{
    double res = safeRetractDistance_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::safeRetractDistance(double value)
{
    return safeRetractDistance_raw(value);
}

inline double MultiAxisRetractAndReconfigureSettings::safeRetractFeedrate() const
{
    double res = safeRetractFeedrate_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::safeRetractFeedrate(double value)
{
    return safeRetractFeedrate_raw(value);
}

inline double MultiAxisRetractAndReconfigureSettings::safePlungeFeedrate() const
{
    double res = safePlungeFeedrate_raw();
    return res;
}

inline bool MultiAxisRetractAndReconfigureSettings::safePlungeFeedrate(double value)
{
    return safePlungeFeedrate_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISRETRACTANDRECONFIGURESETTINGS_API