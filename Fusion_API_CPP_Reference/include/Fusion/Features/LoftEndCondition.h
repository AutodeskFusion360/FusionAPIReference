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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_LOFTENDCONDITION_CPP__
# define ADSK_FUSION_LOFTENDCONDITION_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTENDCONDITION_API
# endif
#else
# define ADSK_FUSION_LOFTENDCONDITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class LoftSection;
}}

namespace adsk { namespace fusion {

/// The base class for all loft end conditions.
class LoftEndCondition : public core::Base {
public:

    /// Returns the parent loft section.
    core::Ptr<LoftSection> parentLoftSection() const;

    ADSK_FUSION_LOFTENDCONDITION_API static const char* classType();
    ADSK_FUSION_LOFTENDCONDITION_API const char* objectType() const override;
    ADSK_FUSION_LOFTENDCONDITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTENDCONDITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoftSection* parentLoftSection_raw() const = 0;
    virtual void placeholderLoftEndCondition0() {}
    virtual void placeholderLoftEndCondition1() {}
    virtual void placeholderLoftEndCondition2() {}
    virtual void placeholderLoftEndCondition3() {}
    virtual void placeholderLoftEndCondition4() {}
    virtual void placeholderLoftEndCondition5() {}
    virtual void placeholderLoftEndCondition6() {}
    virtual void placeholderLoftEndCondition7() {}
    virtual void placeholderLoftEndCondition8() {}
    virtual void placeholderLoftEndCondition9() {}
    virtual void placeholderLoftEndCondition10() {}
    virtual void placeholderLoftEndCondition11() {}
    virtual void placeholderLoftEndCondition12() {}
    virtual void placeholderLoftEndCondition13() {}
    virtual void placeholderLoftEndCondition14() {}
};

// Inline wrappers

inline core::Ptr<LoftSection> LoftEndCondition::parentLoftSection() const
{
    core::Ptr<LoftSection> res = parentLoftSection_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTENDCONDITION_API