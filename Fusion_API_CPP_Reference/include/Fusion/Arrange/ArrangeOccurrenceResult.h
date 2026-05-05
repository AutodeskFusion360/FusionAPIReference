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
# ifdef __COMPILING_ADSK_FUSION_ARRANGEOCCURRENCERESULT_CPP__
# define ADSK_FUSION_ARRANGEOCCURRENCERESULT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEOCCURRENCERESULT_API
# endif
#else
# define ADSK_FUSION_ARRANGEOCCURRENCERESULT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ArrangeComponent;
    class ArrangeResultEnvelope;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// The ArrangeOccurrence object represents a single occurrence within an Arrange
/// envelope.
class ArrangeOccurrenceResult : public core::Base {
public:

    /// The Occurrence object in the Arrange envelope.
    core::Ptr<Occurrence> occurrence() const;

    /// The ArrangeComponent from the Arrange definition that resulted in the
    /// creation of this occurrence.
    core::Ptr<ArrangeComponent> arrangeComponent() const;

    /// The Arrange envelope this occurrence is within.
    core::Ptr<ArrangeResultEnvelope> parentEnvelope() const;

    ADSK_FUSION_ARRANGEOCCURRENCERESULT_API static const char* classType();
    ADSK_FUSION_ARRANGEOCCURRENCERESULT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEOCCURRENCERESULT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEOCCURRENCERESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* occurrence_raw() const = 0;
    virtual ArrangeComponent* arrangeComponent_raw() const = 0;
    virtual ArrangeResultEnvelope* parentEnvelope_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> ArrangeOccurrenceResult::occurrence() const
{
    core::Ptr<Occurrence> res = occurrence_raw();
    return res;
}

inline core::Ptr<ArrangeComponent> ArrangeOccurrenceResult::arrangeComponent() const
{
    core::Ptr<ArrangeComponent> res = arrangeComponent_raw();
    return res;
}

inline core::Ptr<ArrangeResultEnvelope> ArrangeOccurrenceResult::parentEnvelope() const
{
    core::Ptr<ArrangeResultEnvelope> res = parentEnvelope_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEOCCURRENCERESULT_API