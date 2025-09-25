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
#include "ArrangeEnvelopeInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGE2DENVELOPEINPUT_CPP__
# define ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The Arrange2DEnvelopeInput is a base class used to define the various settings common to
/// the envelopes defined by a plane or by profiles and planar faces.
class Arrange2DEnvelopeInput : public ArrangeEnvelopeInput {
public:

    /// Specifies if the arrangement of objects is so they are above or X-Y plane of the envelope.
    /// Defaults to false so the objects are above the construction plane, profile or face.
    bool isFlipped() const;
    bool isFlipped(bool value);

    ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
    virtual void placeholderArrange2DEnvelopeInput0() {}
    virtual void placeholderArrange2DEnvelopeInput1() {}
    virtual void placeholderArrange2DEnvelopeInput2() {}
    virtual void placeholderArrange2DEnvelopeInput3() {}
    virtual void placeholderArrange2DEnvelopeInput4() {}
    virtual void placeholderArrange2DEnvelopeInput5() {}
    virtual void placeholderArrange2DEnvelopeInput6() {}
    virtual void placeholderArrange2DEnvelopeInput7() {}
    virtual void placeholderArrange2DEnvelopeInput8() {}
    virtual void placeholderArrange2DEnvelopeInput9() {}
    virtual void placeholderArrange2DEnvelopeInput10() {}
    virtual void placeholderArrange2DEnvelopeInput11() {}
    virtual void placeholderArrange2DEnvelopeInput12() {}
    virtual void placeholderArrange2DEnvelopeInput13() {}
    virtual void placeholderArrange2DEnvelopeInput14() {}
    virtual void placeholderArrange2DEnvelopeInput15() {}
    virtual void placeholderArrange2DEnvelopeInput16() {}
    virtual void placeholderArrange2DEnvelopeInput17() {}
    virtual void placeholderArrange2DEnvelopeInput18() {}
    virtual void placeholderArrange2DEnvelopeInput19() {}
    virtual void placeholderArrange2DEnvelopeInput20() {}
    virtual void placeholderArrange2DEnvelopeInput21() {}
    virtual void placeholderArrange2DEnvelopeInput22() {}
    virtual void placeholderArrange2DEnvelopeInput23() {}
    virtual void placeholderArrange2DEnvelopeInput24() {}
    virtual void placeholderArrange2DEnvelopeInput25() {}
    virtual void placeholderArrange2DEnvelopeInput26() {}
    virtual void placeholderArrange2DEnvelopeInput27() {}
    virtual void placeholderArrange2DEnvelopeInput28() {}
    virtual void placeholderArrange2DEnvelopeInput29() {}
    virtual void placeholderArrange2DEnvelopeInput30() {}
    virtual void placeholderArrange2DEnvelopeInput31() {}
    virtual void placeholderArrange2DEnvelopeInput32() {}
    virtual void placeholderArrange2DEnvelopeInput33() {}
    virtual void placeholderArrange2DEnvelopeInput34() {}
    virtual void placeholderArrange2DEnvelopeInput35() {}
    virtual void placeholderArrange2DEnvelopeInput36() {}
    virtual void placeholderArrange2DEnvelopeInput37() {}
    virtual void placeholderArrange2DEnvelopeInput38() {}
    virtual void placeholderArrange2DEnvelopeInput39() {}
    virtual void placeholderArrange2DEnvelopeInput40() {}
    virtual void placeholderArrange2DEnvelopeInput41() {}
    virtual void placeholderArrange2DEnvelopeInput42() {}
    virtual void placeholderArrange2DEnvelopeInput43() {}
    virtual void placeholderArrange2DEnvelopeInput44() {}
    virtual void placeholderArrange2DEnvelopeInput45() {}
    virtual void placeholderArrange2DEnvelopeInput46() {}
    virtual void placeholderArrange2DEnvelopeInput47() {}
    virtual void placeholderArrange2DEnvelopeInput48() {}
    virtual void placeholderArrange2DEnvelopeInput49() {}
    virtual void placeholderArrange2DEnvelopeInput50() {}
    virtual void placeholderArrange2DEnvelopeInput51() {}
    virtual void placeholderArrange2DEnvelopeInput52() {}
    virtual void placeholderArrange2DEnvelopeInput53() {}
    virtual void placeholderArrange2DEnvelopeInput54() {}
    virtual void placeholderArrange2DEnvelopeInput55() {}
    virtual void placeholderArrange2DEnvelopeInput56() {}
    virtual void placeholderArrange2DEnvelopeInput57() {}
    virtual void placeholderArrange2DEnvelopeInput58() {}
    virtual void placeholderArrange2DEnvelopeInput59() {}
    virtual void placeholderArrange2DEnvelopeInput60() {}
    virtual void placeholderArrange2DEnvelopeInput61() {}
};

// Inline wrappers

inline bool Arrange2DEnvelopeInput::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool Arrange2DEnvelopeInput::isFlipped(bool value)
{
    return isFlipped_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE2DENVELOPEINPUT_API