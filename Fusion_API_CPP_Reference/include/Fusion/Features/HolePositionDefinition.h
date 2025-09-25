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
# ifdef __COMPILING_ADSK_FUSION_HOLEPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_HOLEPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_HOLEPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_HOLEPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for the classes that define how a hole can be positioned.
class HolePositionDefinition : public core::Base {
public:

    ADSK_FUSION_HOLEPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_HOLEPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_HOLEPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HOLEPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderHolePositionDefinition0() {}
    virtual void placeholderHolePositionDefinition1() {}
    virtual void placeholderHolePositionDefinition2() {}
    virtual void placeholderHolePositionDefinition3() {}
    virtual void placeholderHolePositionDefinition4() {}
    virtual void placeholderHolePositionDefinition5() {}
    virtual void placeholderHolePositionDefinition6() {}
    virtual void placeholderHolePositionDefinition7() {}
    virtual void placeholderHolePositionDefinition8() {}
    virtual void placeholderHolePositionDefinition9() {}
    virtual void placeholderHolePositionDefinition10() {}
    virtual void placeholderHolePositionDefinition11() {}
    virtual void placeholderHolePositionDefinition12() {}
    virtual void placeholderHolePositionDefinition13() {}
    virtual void placeholderHolePositionDefinition14() {}
    virtual void placeholderHolePositionDefinition15() {}
    virtual void placeholderHolePositionDefinition16() {}
    virtual void placeholderHolePositionDefinition17() {}
    virtual void placeholderHolePositionDefinition18() {}
    virtual void placeholderHolePositionDefinition19() {}
    virtual void placeholderHolePositionDefinition20() {}
    virtual void placeholderHolePositionDefinition21() {}
    virtual void placeholderHolePositionDefinition22() {}
    virtual void placeholderHolePositionDefinition23() {}
    virtual void placeholderHolePositionDefinition24() {}
    virtual void placeholderHolePositionDefinition25() {}
    virtual void placeholderHolePositionDefinition26() {}
    virtual void placeholderHolePositionDefinition27() {}
    virtual void placeholderHolePositionDefinition28() {}
    virtual void placeholderHolePositionDefinition29() {}
    virtual void placeholderHolePositionDefinition30() {}
    virtual void placeholderHolePositionDefinition31() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HOLEPOSITIONDEFINITION_API