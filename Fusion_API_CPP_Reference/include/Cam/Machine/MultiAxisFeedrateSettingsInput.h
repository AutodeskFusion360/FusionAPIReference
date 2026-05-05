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
# ifdef __COMPILING_ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_CPP__
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API
# endif
#else
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Input class for creating MultiAxisFeedrateSettings objects.
class MultiAxisFeedrateSettingsInput : public core::Base {
public:

    /// The feed mode to use for the multi-axis feedrate settings.
    /// Determines the type of MultiAxisFeedrateSettings that will be created.
    MultiAxisFeedMode feedMode() const;
    bool feedMode(MultiAxisFeedMode value);

    /// If the feedMode is MultiAxisFeedMode.MultiAxisFeedMode_DegreesPerMinute,
    /// determines what type of MultiAxisCombinationDPMFeedrateSettings will create.
    MultiAxisDegreesPerMinuteType dpmType() const;
    bool dpmType(MultiAxisDegreesPerMinuteType value);

    ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API static const char* classType();
    ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MultiAxisFeedMode feedMode_raw() const = 0;
    virtual bool feedMode_raw(MultiAxisFeedMode value) = 0;
    virtual MultiAxisDegreesPerMinuteType dpmType_raw() const = 0;
    virtual bool dpmType_raw(MultiAxisDegreesPerMinuteType value) = 0;
};

// Inline wrappers

inline MultiAxisFeedMode MultiAxisFeedrateSettingsInput::feedMode() const
{
    MultiAxisFeedMode res = feedMode_raw();
    return res;
}

inline bool MultiAxisFeedrateSettingsInput::feedMode(MultiAxisFeedMode value)
{
    return feedMode_raw(value);
}

inline MultiAxisDegreesPerMinuteType MultiAxisFeedrateSettingsInput::dpmType() const
{
    MultiAxisDegreesPerMinuteType res = dpmType_raw();
    return res;
}

inline bool MultiAxisFeedrateSettingsInput::dpmType(MultiAxisDegreesPerMinuteType value)
{
    return dpmType_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISFEEDRATESETTINGSINPUT_API