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
# ifdef __COMPILING_ADSK_CAM_GENERATEDDATA_CPP__
# define ADSK_CAM_GENERATEDDATA_API XI_EXPORT
# else
# define ADSK_CAM_GENERATEDDATA_API
# endif
#else
# define ADSK_CAM_GENERATEDDATA_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Parent class of all generated data classes. Acts like a void pointer for the entries in the OperationBase.GeneratedDataCollection property.
class GeneratedData : public core::Base {
public:

    ADSK_CAM_GENERATEDDATA_API static const char* classType();
    ADSK_CAM_GENERATEDDATA_API const char* objectType() const override;
    ADSK_CAM_GENERATEDDATA_API void* queryInterface(const char* id) const override;
    ADSK_CAM_GENERATEDDATA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderGeneratedData0() {}
    virtual void placeholderGeneratedData1() {}
    virtual void placeholderGeneratedData2() {}
    virtual void placeholderGeneratedData3() {}
    virtual void placeholderGeneratedData4() {}
    virtual void placeholderGeneratedData5() {}
    virtual void placeholderGeneratedData6() {}
    virtual void placeholderGeneratedData7() {}
    virtual void placeholderGeneratedData8() {}
    virtual void placeholderGeneratedData9() {}
    virtual void placeholderGeneratedData10() {}
    virtual void placeholderGeneratedData11() {}
    virtual void placeholderGeneratedData12() {}
    virtual void placeholderGeneratedData13() {}
    virtual void placeholderGeneratedData14() {}
    virtual void placeholderGeneratedData15() {}
    virtual void placeholderGeneratedData16() {}
    virtual void placeholderGeneratedData17() {}
    virtual void placeholderGeneratedData18() {}
    virtual void placeholderGeneratedData19() {}
    virtual void placeholderGeneratedData20() {}
    virtual void placeholderGeneratedData21() {}
    virtual void placeholderGeneratedData22() {}
    virtual void placeholderGeneratedData23() {}
    virtual void placeholderGeneratedData24() {}
    virtual void placeholderGeneratedData25() {}
    virtual void placeholderGeneratedData26() {}
    virtual void placeholderGeneratedData27() {}
    virtual void placeholderGeneratedData28() {}
    virtual void placeholderGeneratedData29() {}
    virtual void placeholderGeneratedData30() {}
    virtual void placeholderGeneratedData31() {}
    virtual void placeholderGeneratedData32() {}
    virtual void placeholderGeneratedData33() {}
    virtual void placeholderGeneratedData34() {}
    virtual void placeholderGeneratedData35() {}
    virtual void placeholderGeneratedData36() {}
    virtual void placeholderGeneratedData37() {}
    virtual void placeholderGeneratedData38() {}
    virtual void placeholderGeneratedData39() {}
    virtual void placeholderGeneratedData40() {}
    virtual void placeholderGeneratedData41() {}
    virtual void placeholderGeneratedData42() {}
    virtual void placeholderGeneratedData43() {}
    virtual void placeholderGeneratedData44() {}
    virtual void placeholderGeneratedData45() {}
    virtual void placeholderGeneratedData46() {}
    virtual void placeholderGeneratedData47() {}
    virtual void placeholderGeneratedData48() {}
    virtual void placeholderGeneratedData49() {}
    virtual void placeholderGeneratedData50() {}
    virtual void placeholderGeneratedData51() {}
    virtual void placeholderGeneratedData52() {}
    virtual void placeholderGeneratedData53() {}
    virtual void placeholderGeneratedData54() {}
    virtual void placeholderGeneratedData55() {}
    virtual void placeholderGeneratedData56() {}
    virtual void placeholderGeneratedData57() {}
    virtual void placeholderGeneratedData58() {}
    virtual void placeholderGeneratedData59() {}
    virtual void placeholderGeneratedData60() {}
    virtual void placeholderGeneratedData61() {}
    virtual void placeholderGeneratedData62() {}
    virtual void placeholderGeneratedData63() {}
};

// Inline wrappers


}// namespace cam
}// namespace adsk

#undef ADSK_CAM_GENERATEDDATA_API