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
#include "../Features/Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FLANGEFEATURE_CPP__
# define ADSK_FUSION_FLANGEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_FLANGEFEATURE_API
# endif
#else
# define ADSK_FUSION_FLANGEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Object that represents an existing flange feature in a design.
class FlangeFeature : public Feature {
public:

    ADSK_FUSION_FLANGEFEATURE_API static const char* classType();
    ADSK_FUSION_FLANGEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_FLANGEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FLANGEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderFlangeFeature0() {}
    virtual void placeholderFlangeFeature1() {}
    virtual void placeholderFlangeFeature2() {}
    virtual void placeholderFlangeFeature3() {}
    virtual void placeholderFlangeFeature4() {}
    virtual void placeholderFlangeFeature5() {}
    virtual void placeholderFlangeFeature6() {}
    virtual void placeholderFlangeFeature7() {}
    virtual void placeholderFlangeFeature8() {}
    virtual void placeholderFlangeFeature9() {}
    virtual void placeholderFlangeFeature10() {}
    virtual void placeholderFlangeFeature11() {}
    virtual void placeholderFlangeFeature12() {}
    virtual void placeholderFlangeFeature13() {}
    virtual void placeholderFlangeFeature14() {}
    virtual void placeholderFlangeFeature15() {}
    virtual void placeholderFlangeFeature16() {}
    virtual void placeholderFlangeFeature17() {}
    virtual void placeholderFlangeFeature18() {}
    virtual void placeholderFlangeFeature19() {}
    virtual void placeholderFlangeFeature20() {}
    virtual void placeholderFlangeFeature21() {}
    virtual void placeholderFlangeFeature22() {}
    virtual void placeholderFlangeFeature23() {}
    virtual void placeholderFlangeFeature24() {}
    virtual void placeholderFlangeFeature25() {}
    virtual void placeholderFlangeFeature26() {}
    virtual void placeholderFlangeFeature27() {}
    virtual void placeholderFlangeFeature28() {}
    virtual void placeholderFlangeFeature29() {}
    virtual void placeholderFlangeFeature30() {}
    virtual void placeholderFlangeFeature31() {}
    virtual void placeholderFlangeFeature32() {}
    virtual void placeholderFlangeFeature33() {}
    virtual void placeholderFlangeFeature34() {}
    virtual void placeholderFlangeFeature35() {}
    virtual void placeholderFlangeFeature36() {}
    virtual void placeholderFlangeFeature37() {}
    virtual void placeholderFlangeFeature38() {}
    virtual void placeholderFlangeFeature39() {}
    virtual void placeholderFlangeFeature40() {}
    virtual void placeholderFlangeFeature41() {}
    virtual void placeholderFlangeFeature42() {}
    virtual void placeholderFlangeFeature43() {}
    virtual void placeholderFlangeFeature44() {}
    virtual void placeholderFlangeFeature45() {}
    virtual void placeholderFlangeFeature46() {}
    virtual void placeholderFlangeFeature47() {}
    virtual void placeholderFlangeFeature48() {}
    virtual void placeholderFlangeFeature49() {}
    virtual void placeholderFlangeFeature50() {}
    virtual void placeholderFlangeFeature51() {}
    virtual void placeholderFlangeFeature52() {}
    virtual void placeholderFlangeFeature53() {}
    virtual void placeholderFlangeFeature54() {}
    virtual void placeholderFlangeFeature55() {}
    virtual void placeholderFlangeFeature56() {}
    virtual void placeholderFlangeFeature57() {}
    virtual void placeholderFlangeFeature58() {}
    virtual void placeholderFlangeFeature59() {}
    virtual void placeholderFlangeFeature60() {}
    virtual void placeholderFlangeFeature61() {}
    virtual void placeholderFlangeFeature62() {}
    virtual void placeholderFlangeFeature63() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FLANGEFEATURE_API