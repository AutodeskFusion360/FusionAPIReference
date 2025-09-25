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
# ifdef __COMPILING_ADSK_FUSION_BOSSPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_BOSSPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BOSSPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_BOSSPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for the classes that define how a boss feature can be positioned.
class BossPositionDefinition : public core::Base {
public:

    ADSK_FUSION_BOSSPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_BOSSPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BOSSPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOSSPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderBossPositionDefinition0() {}
    virtual void placeholderBossPositionDefinition1() {}
    virtual void placeholderBossPositionDefinition2() {}
    virtual void placeholderBossPositionDefinition3() {}
    virtual void placeholderBossPositionDefinition4() {}
    virtual void placeholderBossPositionDefinition5() {}
    virtual void placeholderBossPositionDefinition6() {}
    virtual void placeholderBossPositionDefinition7() {}
    virtual void placeholderBossPositionDefinition8() {}
    virtual void placeholderBossPositionDefinition9() {}
    virtual void placeholderBossPositionDefinition10() {}
    virtual void placeholderBossPositionDefinition11() {}
    virtual void placeholderBossPositionDefinition12() {}
    virtual void placeholderBossPositionDefinition13() {}
    virtual void placeholderBossPositionDefinition14() {}
    virtual void placeholderBossPositionDefinition15() {}
    virtual void placeholderBossPositionDefinition16() {}
    virtual void placeholderBossPositionDefinition17() {}
    virtual void placeholderBossPositionDefinition18() {}
    virtual void placeholderBossPositionDefinition19() {}
    virtual void placeholderBossPositionDefinition20() {}
    virtual void placeholderBossPositionDefinition21() {}
    virtual void placeholderBossPositionDefinition22() {}
    virtual void placeholderBossPositionDefinition23() {}
    virtual void placeholderBossPositionDefinition24() {}
    virtual void placeholderBossPositionDefinition25() {}
    virtual void placeholderBossPositionDefinition26() {}
    virtual void placeholderBossPositionDefinition27() {}
    virtual void placeholderBossPositionDefinition28() {}
    virtual void placeholderBossPositionDefinition29() {}
    virtual void placeholderBossPositionDefinition30() {}
    virtual void placeholderBossPositionDefinition31() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOSSPOSITIONDEFINITION_API