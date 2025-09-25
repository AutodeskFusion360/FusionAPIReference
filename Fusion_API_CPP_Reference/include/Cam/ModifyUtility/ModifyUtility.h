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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MODIFYUTILITY_CPP__
# define ADSK_CAM_MODIFYUTILITY_API XI_EXPORT
# else
# define ADSK_CAM_MODIFYUTILITY_API
# endif
#else
# define ADSK_CAM_MODIFYUTILITY_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base class for all modify utilities.
class ModifyUtility : public core::Base {
public:

    ADSK_CAM_MODIFYUTILITY_API static const char* classType();
    ADSK_CAM_MODIFYUTILITY_API const char* objectType() const override;
    ADSK_CAM_MODIFYUTILITY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MODIFYUTILITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderModifyUtility0() {}
    virtual void placeholderModifyUtility1() {}
    virtual void placeholderModifyUtility2() {}
    virtual void placeholderModifyUtility3() {}
    virtual void placeholderModifyUtility4() {}
    virtual void placeholderModifyUtility5() {}
    virtual void placeholderModifyUtility6() {}
    virtual void placeholderModifyUtility7() {}
    virtual void placeholderModifyUtility8() {}
    virtual void placeholderModifyUtility9() {}
    virtual void placeholderModifyUtility10() {}
    virtual void placeholderModifyUtility11() {}
    virtual void placeholderModifyUtility12() {}
    virtual void placeholderModifyUtility13() {}
    virtual void placeholderModifyUtility14() {}
    virtual void placeholderModifyUtility15() {}
    virtual void placeholderModifyUtility16() {}
    virtual void placeholderModifyUtility17() {}
    virtual void placeholderModifyUtility18() {}
    virtual void placeholderModifyUtility19() {}
    virtual void placeholderModifyUtility20() {}
    virtual void placeholderModifyUtility21() {}
    virtual void placeholderModifyUtility22() {}
    virtual void placeholderModifyUtility23() {}
    virtual void placeholderModifyUtility24() {}
    virtual void placeholderModifyUtility25() {}
    virtual void placeholderModifyUtility26() {}
    virtual void placeholderModifyUtility27() {}
    virtual void placeholderModifyUtility28() {}
    virtual void placeholderModifyUtility29() {}
    virtual void placeholderModifyUtility30() {}
    virtual void placeholderModifyUtility31() {}
    virtual void placeholderModifyUtility32() {}
    virtual void placeholderModifyUtility33() {}
    virtual void placeholderModifyUtility34() {}
    virtual void placeholderModifyUtility35() {}
    virtual void placeholderModifyUtility36() {}
    virtual void placeholderModifyUtility37() {}
    virtual void placeholderModifyUtility38() {}
    virtual void placeholderModifyUtility39() {}
    virtual void placeholderModifyUtility40() {}
    virtual void placeholderModifyUtility41() {}
    virtual void placeholderModifyUtility42() {}
    virtual void placeholderModifyUtility43() {}
    virtual void placeholderModifyUtility44() {}
    virtual void placeholderModifyUtility45() {}
    virtual void placeholderModifyUtility46() {}
    virtual void placeholderModifyUtility47() {}
    virtual void placeholderModifyUtility48() {}
    virtual void placeholderModifyUtility49() {}
    virtual void placeholderModifyUtility50() {}
    virtual void placeholderModifyUtility51() {}
    virtual void placeholderModifyUtility52() {}
    virtual void placeholderModifyUtility53() {}
    virtual void placeholderModifyUtility54() {}
    virtual void placeholderModifyUtility55() {}
    virtual void placeholderModifyUtility56() {}
    virtual void placeholderModifyUtility57() {}
    virtual void placeholderModifyUtility58() {}
    virtual void placeholderModifyUtility59() {}
    virtual void placeholderModifyUtility60() {}
    virtual void placeholderModifyUtility61() {}
    virtual void placeholderModifyUtility62() {}
    virtual void placeholderModifyUtility63() {}
};

// Inline wrappers


}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MODIFYUTILITY_API