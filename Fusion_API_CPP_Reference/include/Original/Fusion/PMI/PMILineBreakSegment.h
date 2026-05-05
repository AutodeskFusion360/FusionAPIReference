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
#include "PMISegment.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMILINEBREAKSEGMENT_CPP__
# define ADSK_FUSION_PMILINEBREAKSEGMENT_API XI_EXPORT
# else
# define ADSK_FUSION_PMILINEBREAKSEGMENT_API
# endif
#else
# define ADSK_FUSION_PMILINEBREAKSEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a segment defining a new line (or a line break).
/// Used to define the text used by a PMI.
class PMILineBreakSegment : public PMISegment {
public:

    /// Create a transient PMILineBreakSegment object.
    /// The newly created PMILineBreakSegment.
    static core::Ptr<PMILineBreakSegment> create();

    ADSK_FUSION_PMILINEBREAKSEGMENT_API static const char* classType();
    ADSK_FUSION_PMILINEBREAKSEGMENT_API const char* objectType() const override;
    ADSK_FUSION_PMILINEBREAKSEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMILINEBREAKSEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMILINEBREAKSEGMENT_API static PMILineBreakSegment* create_raw();
};

// Inline wrappers

inline core::Ptr<PMILineBreakSegment> PMILineBreakSegment::create()
{
    core::Ptr<PMILineBreakSegment> res = create_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMILINEBREAKSEGMENT_API