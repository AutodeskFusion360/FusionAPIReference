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
# ifdef __COMPILING_ADSK_FUSION_ARRANGE3DRESULTENVELOPE_CPP__
# define ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API
# endif
#else
# define ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
}}

namespace adsk { namespace fusion {

/// Represents the arrange envelope result of a 3D arrange feature.
class Arrange3DResultEnvelope : public ArrangeResultEnvelope {
public:

    /// The bounding box of this result. The coordinates are defined with respect
    /// to the root component base coordinate system.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API static const char* classType();
    ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::BoundingBox3D> Arrange3DResultEnvelope::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE3DRESULTENVELOPE_API