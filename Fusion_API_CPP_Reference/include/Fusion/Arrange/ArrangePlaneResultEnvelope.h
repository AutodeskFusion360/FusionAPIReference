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
#include "ArrangeResultEnvelope.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_CPP__
# define ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API
# endif
#else
# define ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox2D;
}}

namespace adsk { namespace fusion {

/// Represents the arrange result of a single envelope that is defined on a plane.
class ArrangePlaneResultEnvelope : public ArrangeResultEnvelope {
public:

    /// The bounding box of this result. The coordinates are defined
    /// using the coordinate system of the construction plane used to
    /// define the envelope.
    core::Ptr<core::BoundingBox2D> boundingBox() const;

    ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API static const char* classType();
    ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::BoundingBox2D* boundingBox_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::BoundingBox2D> ArrangePlaneResultEnvelope::boundingBox() const
{
    core::Ptr<core::BoundingBox2D> res = boundingBox_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEPLANERESULTENVELOPE_API