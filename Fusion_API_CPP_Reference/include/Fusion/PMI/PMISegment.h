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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMISEGMENT_CPP__
# define ADSK_FUSION_PMISEGMENT_API XI_EXPORT
# else
# define ADSK_FUSION_PMISEGMENT_API
# endif
#else
# define ADSK_FUSION_PMISEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A base class for all the segments used to define the text of a PMI.
class PMISegment : public core::Base {
public:

    /// Returns the PMISegmentTypes associated with this PMISegment.
    PMISegmentTypes type() const;

    ADSK_FUSION_PMISEGMENT_API static const char* classType();
    ADSK_FUSION_PMISEGMENT_API const char* objectType() const override;
    ADSK_FUSION_PMISEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMISEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMISegmentTypes type_raw() const = 0;
    virtual void placeholderPMISegment0() {}
    virtual void placeholderPMISegment1() {}
    virtual void placeholderPMISegment2() {}
    virtual void placeholderPMISegment3() {}
    virtual void placeholderPMISegment4() {}
    virtual void placeholderPMISegment5() {}
    virtual void placeholderPMISegment6() {}
    virtual void placeholderPMISegment7() {}
    virtual void placeholderPMISegment8() {}
    virtual void placeholderPMISegment9() {}
    virtual void placeholderPMISegment10() {}
    virtual void placeholderPMISegment11() {}
    virtual void placeholderPMISegment12() {}
    virtual void placeholderPMISegment13() {}
    virtual void placeholderPMISegment14() {}
    virtual void placeholderPMISegment15() {}
    virtual void placeholderPMISegment16() {}
    virtual void placeholderPMISegment17() {}
    virtual void placeholderPMISegment18() {}
    virtual void placeholderPMISegment19() {}
    virtual void placeholderPMISegment20() {}
    virtual void placeholderPMISegment21() {}
    virtual void placeholderPMISegment22() {}
    virtual void placeholderPMISegment23() {}
    virtual void placeholderPMISegment24() {}
    virtual void placeholderPMISegment25() {}
    virtual void placeholderPMISegment26() {}
    virtual void placeholderPMISegment27() {}
    virtual void placeholderPMISegment28() {}
    virtual void placeholderPMISegment29() {}
    virtual void placeholderPMISegment30() {}
};

// Inline wrappers

inline PMISegmentTypes PMISegment::type() const
{
    PMISegmentTypes res = type_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMISEGMENT_API