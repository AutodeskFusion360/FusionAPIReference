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
# ifdef __COMPILING_ADSK_FUSION_RIPFEATUREDEFINITION_CPP__
# define ADSK_FUSION_RIPFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_RIPFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_RIPFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// A Base class to return the information used to define the RipFeature.
class RipFeatureDefinition : public core::Base {
public:

    ADSK_FUSION_RIPFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_RIPFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_RIPFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RIPFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderRipFeatureDefinition0() {}
    virtual void placeholderRipFeatureDefinition1() {}
    virtual void placeholderRipFeatureDefinition2() {}
    virtual void placeholderRipFeatureDefinition3() {}
    virtual void placeholderRipFeatureDefinition4() {}
    virtual void placeholderRipFeatureDefinition5() {}
    virtual void placeholderRipFeatureDefinition6() {}
    virtual void placeholderRipFeatureDefinition7() {}
    virtual void placeholderRipFeatureDefinition8() {}
    virtual void placeholderRipFeatureDefinition9() {}
    virtual void placeholderRipFeatureDefinition10() {}
    virtual void placeholderRipFeatureDefinition11() {}
    virtual void placeholderRipFeatureDefinition12() {}
    virtual void placeholderRipFeatureDefinition13() {}
    virtual void placeholderRipFeatureDefinition14() {}
    virtual void placeholderRipFeatureDefinition15() {}
    virtual void placeholderRipFeatureDefinition16() {}
    virtual void placeholderRipFeatureDefinition17() {}
    virtual void placeholderRipFeatureDefinition18() {}
    virtual void placeholderRipFeatureDefinition19() {}
    virtual void placeholderRipFeatureDefinition20() {}
    virtual void placeholderRipFeatureDefinition21() {}
    virtual void placeholderRipFeatureDefinition22() {}
    virtual void placeholderRipFeatureDefinition23() {}
    virtual void placeholderRipFeatureDefinition24() {}
    virtual void placeholderRipFeatureDefinition25() {}
    virtual void placeholderRipFeatureDefinition26() {}
    virtual void placeholderRipFeatureDefinition27() {}
    virtual void placeholderRipFeatureDefinition28() {}
    virtual void placeholderRipFeatureDefinition29() {}
    virtual void placeholderRipFeatureDefinition30() {}
    virtual void placeholderRipFeatureDefinition31() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RIPFEATUREDEFINITION_API