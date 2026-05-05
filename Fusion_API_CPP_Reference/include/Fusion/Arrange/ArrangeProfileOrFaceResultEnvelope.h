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
# ifdef __COMPILING_ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_CPP__
# define ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API
# endif
#else
# define ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Represents the arrange envelope result of a profile or face defined arrange feature.
class ArrangeProfileOrFaceResultEnvelope : public ArrangeResultEnvelope {
public:

    /// Returns the Profile or BRepFace object that defines the shape of this result envelope.
    core::Ptr<core::Base> profileOrFace() const;

    ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API static const char* classType();
    ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profileOrFace_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ArrangeProfileOrFaceResultEnvelope::profileOrFace() const
{
    core::Ptr<core::Base> res = profileOrFace_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEPROFILEORFACERESULTENVELOPE_API