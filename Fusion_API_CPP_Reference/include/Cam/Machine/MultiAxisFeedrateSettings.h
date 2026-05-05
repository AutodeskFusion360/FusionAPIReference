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
# ifdef __COMPILING_ADSK_CAM_MULTIAXISFEEDRATESETTINGS_CPP__
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API
# endif
#else
# define ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base class for the multi-axis feedrate settings
class MultiAxisFeedrateSettings : public core::Base {
public:

    /// The feedmode to use for the multi axis.
    MultiAxisFeedMode feedMode() const;

    ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API static const char* classType();
    ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MultiAxisFeedMode feedMode_raw() const = 0;
    virtual void placeholderMultiAxisFeedrateSettings0() {}
    virtual void placeholderMultiAxisFeedrateSettings1() {}
    virtual void placeholderMultiAxisFeedrateSettings2() {}
    virtual void placeholderMultiAxisFeedrateSettings3() {}
    virtual void placeholderMultiAxisFeedrateSettings4() {}
    virtual void placeholderMultiAxisFeedrateSettings5() {}
    virtual void placeholderMultiAxisFeedrateSettings6() {}
    virtual void placeholderMultiAxisFeedrateSettings7() {}
    virtual void placeholderMultiAxisFeedrateSettings8() {}
    virtual void placeholderMultiAxisFeedrateSettings9() {}
    virtual void placeholderMultiAxisFeedrateSettings10() {}
    virtual void placeholderMultiAxisFeedrateSettings11() {}
    virtual void placeholderMultiAxisFeedrateSettings12() {}
    virtual void placeholderMultiAxisFeedrateSettings13() {}
    virtual void placeholderMultiAxisFeedrateSettings14() {}
};

// Inline wrappers

inline MultiAxisFeedMode MultiAxisFeedrateSettings::feedMode() const
{
    MultiAxisFeedMode res = feedMode_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISFEEDRATESETTINGS_API