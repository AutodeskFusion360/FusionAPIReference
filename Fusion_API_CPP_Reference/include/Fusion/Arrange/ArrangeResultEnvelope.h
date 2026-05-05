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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGERESULTENVELOPE_CPP__
# define ADSK_FUSION_ARRANGERESULTENVELOPE_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGERESULTENVELOPE_API
# endif
#else
# define ADSK_FUSION_ARRANGERESULTENVELOPE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeEnvelopeDefinition;
    class ArrangeFeature;
    class ArrangeOccurrenceResults;
}}

namespace adsk { namespace fusion {

/// The ArrangeResult object represents the results of an arrangement
/// for a single envelope.
class ArrangeResultEnvelope : public core::Base {
public:

    /// Gets and sets the name of the envelope as seen in the browser.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns a collection object of the occurrences in this envelope.
    core::Ptr<ArrangeOccurrenceResults> occurrences() const;

    /// Returns the ArrangeFeature object this result is for.
    core::Ptr<ArrangeFeature> parentFeature() const;

    /// Returns the envelope definition that provides the settings for this envelope.
    /// 
    /// To use this property, you need to position the timeline marker immediately before the Arrange feature.
    /// This can be accomplished using the following code: arrangeFeature.timelineObject.rollTo(True)
    core::Ptr<ArrangeEnvelopeDefinition> envelopeDefinition() const;

    ADSK_FUSION_ARRANGERESULTENVELOPE_API static const char* classType();
    ADSK_FUSION_ARRANGERESULTENVELOPE_API const char* objectType() const override;
    ADSK_FUSION_ARRANGERESULTENVELOPE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGERESULTENVELOPE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual ArrangeOccurrenceResults* occurrences_raw() const = 0;
    virtual ArrangeFeature* parentFeature_raw() const = 0;
    virtual ArrangeEnvelopeDefinition* envelopeDefinition_raw() const = 0;
    virtual void placeholderArrangeResultEnvelope0() {}
    virtual void placeholderArrangeResultEnvelope1() {}
    virtual void placeholderArrangeResultEnvelope2() {}
    virtual void placeholderArrangeResultEnvelope3() {}
    virtual void placeholderArrangeResultEnvelope4() {}
    virtual void placeholderArrangeResultEnvelope5() {}
    virtual void placeholderArrangeResultEnvelope6() {}
    virtual void placeholderArrangeResultEnvelope7() {}
    virtual void placeholderArrangeResultEnvelope8() {}
    virtual void placeholderArrangeResultEnvelope9() {}
    virtual void placeholderArrangeResultEnvelope10() {}
    virtual void placeholderArrangeResultEnvelope11() {}
    virtual void placeholderArrangeResultEnvelope12() {}
    virtual void placeholderArrangeResultEnvelope13() {}
    virtual void placeholderArrangeResultEnvelope14() {}
    virtual void placeholderArrangeResultEnvelope15() {}
    virtual void placeholderArrangeResultEnvelope16() {}
    virtual void placeholderArrangeResultEnvelope17() {}
    virtual void placeholderArrangeResultEnvelope18() {}
    virtual void placeholderArrangeResultEnvelope19() {}
    virtual void placeholderArrangeResultEnvelope20() {}
    virtual void placeholderArrangeResultEnvelope21() {}
    virtual void placeholderArrangeResultEnvelope22() {}
    virtual void placeholderArrangeResultEnvelope23() {}
    virtual void placeholderArrangeResultEnvelope24() {}
    virtual void placeholderArrangeResultEnvelope25() {}
    virtual void placeholderArrangeResultEnvelope26() {}
    virtual void placeholderArrangeResultEnvelope27() {}
    virtual void placeholderArrangeResultEnvelope28() {}
    virtual void placeholderArrangeResultEnvelope29() {}
    virtual void placeholderArrangeResultEnvelope30() {}
    virtual void placeholderArrangeResultEnvelope31() {}
    virtual void placeholderArrangeResultEnvelope32() {}
    virtual void placeholderArrangeResultEnvelope33() {}
    virtual void placeholderArrangeResultEnvelope34() {}
    virtual void placeholderArrangeResultEnvelope35() {}
    virtual void placeholderArrangeResultEnvelope36() {}
    virtual void placeholderArrangeResultEnvelope37() {}
    virtual void placeholderArrangeResultEnvelope38() {}
    virtual void placeholderArrangeResultEnvelope39() {}
    virtual void placeholderArrangeResultEnvelope40() {}
    virtual void placeholderArrangeResultEnvelope41() {}
    virtual void placeholderArrangeResultEnvelope42() {}
    virtual void placeholderArrangeResultEnvelope43() {}
    virtual void placeholderArrangeResultEnvelope44() {}
    virtual void placeholderArrangeResultEnvelope45() {}
    virtual void placeholderArrangeResultEnvelope46() {}
    virtual void placeholderArrangeResultEnvelope47() {}
    virtual void placeholderArrangeResultEnvelope48() {}
    virtual void placeholderArrangeResultEnvelope49() {}
    virtual void placeholderArrangeResultEnvelope50() {}
    virtual void placeholderArrangeResultEnvelope51() {}
    virtual void placeholderArrangeResultEnvelope52() {}
    virtual void placeholderArrangeResultEnvelope53() {}
    virtual void placeholderArrangeResultEnvelope54() {}
    virtual void placeholderArrangeResultEnvelope55() {}
    virtual void placeholderArrangeResultEnvelope56() {}
    virtual void placeholderArrangeResultEnvelope57() {}
    virtual void placeholderArrangeResultEnvelope58() {}
};

// Inline wrappers

inline std::string ArrangeResultEnvelope::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ArrangeResultEnvelope::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<ArrangeOccurrenceResults> ArrangeResultEnvelope::occurrences() const
{
    core::Ptr<ArrangeOccurrenceResults> res = occurrences_raw();
    return res;
}

inline core::Ptr<ArrangeFeature> ArrangeResultEnvelope::parentFeature() const
{
    core::Ptr<ArrangeFeature> res = parentFeature_raw();
    return res;
}

inline core::Ptr<ArrangeEnvelopeDefinition> ArrangeResultEnvelope::envelopeDefinition() const
{
    core::Ptr<ArrangeEnvelopeDefinition> res = envelopeDefinition_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGERESULTENVELOPE_API