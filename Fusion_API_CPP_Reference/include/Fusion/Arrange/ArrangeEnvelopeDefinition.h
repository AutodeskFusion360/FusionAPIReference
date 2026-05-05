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
# ifdef __COMPILING_ADSK_FUSION_ARRANGEENVELOPEDEFINITION_CPP__
# define ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeFeature;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The ArrangeEnvelope object is the base class for the different types of arrangement
/// envelopes and provides access to the information that defines the envelope(s). This
/// defines the settings of the envelope and the EnvelopeResult provides access to the
/// resulting envelope and its contents.
class ArrangeEnvelopeDefinition : public core::Base {
public:

    /// Returns the parameter that controls the width of the envelope frame. This defines the
    /// offset distance of the objects from the edge of the frame. You can modify the value by
    /// using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> frameWidth() const;

    /// Returns the parameter that controls the space between objects in the arrangement.
    /// You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> objectSpacing() const;

    /// Returns the parameter that controls the offset of the objects from the base plane of
    /// the arrangement (the "up" direction). You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> placementClearance() const;

    /// Gets and sets if a partial arrange is allowed for this envelope.
    bool isPartialArrangeAllowed() const;
    bool isPartialArrangeAllowed(bool value);

    /// Returns the parent ArrangeFeature this envelope is associated with.
    core::Ptr<ArrangeFeature> parentArrange() const;

    ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* frameWidth_raw() const = 0;
    virtual ModelParameter* objectSpacing_raw() const = 0;
    virtual ModelParameter* placementClearance_raw() const = 0;
    virtual bool isPartialArrangeAllowed_raw() const = 0;
    virtual bool isPartialArrangeAllowed_raw(bool value) = 0;
    virtual ArrangeFeature* parentArrange_raw() const = 0;
    virtual void placeholderArrangeEnvelopeDefinition0() {}
    virtual void placeholderArrangeEnvelopeDefinition1() {}
    virtual void placeholderArrangeEnvelopeDefinition2() {}
    virtual void placeholderArrangeEnvelopeDefinition3() {}
    virtual void placeholderArrangeEnvelopeDefinition4() {}
    virtual void placeholderArrangeEnvelopeDefinition5() {}
    virtual void placeholderArrangeEnvelopeDefinition6() {}
    virtual void placeholderArrangeEnvelopeDefinition7() {}
    virtual void placeholderArrangeEnvelopeDefinition8() {}
    virtual void placeholderArrangeEnvelopeDefinition9() {}
    virtual void placeholderArrangeEnvelopeDefinition10() {}
    virtual void placeholderArrangeEnvelopeDefinition11() {}
    virtual void placeholderArrangeEnvelopeDefinition12() {}
    virtual void placeholderArrangeEnvelopeDefinition13() {}
    virtual void placeholderArrangeEnvelopeDefinition14() {}
    virtual void placeholderArrangeEnvelopeDefinition15() {}
    virtual void placeholderArrangeEnvelopeDefinition16() {}
    virtual void placeholderArrangeEnvelopeDefinition17() {}
    virtual void placeholderArrangeEnvelopeDefinition18() {}
    virtual void placeholderArrangeEnvelopeDefinition19() {}
    virtual void placeholderArrangeEnvelopeDefinition20() {}
    virtual void placeholderArrangeEnvelopeDefinition21() {}
    virtual void placeholderArrangeEnvelopeDefinition22() {}
    virtual void placeholderArrangeEnvelopeDefinition23() {}
    virtual void placeholderArrangeEnvelopeDefinition24() {}
    virtual void placeholderArrangeEnvelopeDefinition25() {}
    virtual void placeholderArrangeEnvelopeDefinition26() {}
    virtual void placeholderArrangeEnvelopeDefinition27() {}
    virtual void placeholderArrangeEnvelopeDefinition28() {}
    virtual void placeholderArrangeEnvelopeDefinition29() {}
    virtual void placeholderArrangeEnvelopeDefinition30() {}
    virtual void placeholderArrangeEnvelopeDefinition31() {}
    virtual void placeholderArrangeEnvelopeDefinition32() {}
    virtual void placeholderArrangeEnvelopeDefinition33() {}
    virtual void placeholderArrangeEnvelopeDefinition34() {}
    virtual void placeholderArrangeEnvelopeDefinition35() {}
    virtual void placeholderArrangeEnvelopeDefinition36() {}
    virtual void placeholderArrangeEnvelopeDefinition37() {}
    virtual void placeholderArrangeEnvelopeDefinition38() {}
    virtual void placeholderArrangeEnvelopeDefinition39() {}
    virtual void placeholderArrangeEnvelopeDefinition40() {}
    virtual void placeholderArrangeEnvelopeDefinition41() {}
    virtual void placeholderArrangeEnvelopeDefinition42() {}
    virtual void placeholderArrangeEnvelopeDefinition43() {}
    virtual void placeholderArrangeEnvelopeDefinition44() {}
    virtual void placeholderArrangeEnvelopeDefinition45() {}
    virtual void placeholderArrangeEnvelopeDefinition46() {}
    virtual void placeholderArrangeEnvelopeDefinition47() {}
    virtual void placeholderArrangeEnvelopeDefinition48() {}
    virtual void placeholderArrangeEnvelopeDefinition49() {}
    virtual void placeholderArrangeEnvelopeDefinition50() {}
    virtual void placeholderArrangeEnvelopeDefinition51() {}
    virtual void placeholderArrangeEnvelopeDefinition52() {}
    virtual void placeholderArrangeEnvelopeDefinition53() {}
    virtual void placeholderArrangeEnvelopeDefinition54() {}
    virtual void placeholderArrangeEnvelopeDefinition55() {}
    virtual void placeholderArrangeEnvelopeDefinition56() {}
    virtual void placeholderArrangeEnvelopeDefinition57() {}
};

// Inline wrappers

inline core::Ptr<ModelParameter> ArrangeEnvelopeDefinition::frameWidth() const
{
    core::Ptr<ModelParameter> res = frameWidth_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangeEnvelopeDefinition::objectSpacing() const
{
    core::Ptr<ModelParameter> res = objectSpacing_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangeEnvelopeDefinition::placementClearance() const
{
    core::Ptr<ModelParameter> res = placementClearance_raw();
    return res;
}

inline bool ArrangeEnvelopeDefinition::isPartialArrangeAllowed() const
{
    bool res = isPartialArrangeAllowed_raw();
    return res;
}

inline bool ArrangeEnvelopeDefinition::isPartialArrangeAllowed(bool value)
{
    return isPartialArrangeAllowed_raw(value);
}

inline core::Ptr<ArrangeFeature> ArrangeEnvelopeDefinition::parentArrange() const
{
    core::Ptr<ArrangeFeature> res = parentArrange_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEENVELOPEDEFINITION_API