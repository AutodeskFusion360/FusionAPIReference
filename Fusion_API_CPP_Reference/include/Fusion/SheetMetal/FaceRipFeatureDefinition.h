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
#include "RipFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FACERIPFEATUREDEFINITION_CPP__
# define ADSK_FUSION_FACERIPFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_FACERIPFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_FACERIPFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// The definition for a face rip.
class FaceRipFeatureDefinition : public RipFeatureDefinition {
public:

    /// Gets and sets the input face for a face rip.
    core::Ptr<BRepFace> ripFace() const;
    bool ripFace(const core::Ptr<BRepFace>& value);

    ADSK_FUSION_FACERIPFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_FACERIPFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_FACERIPFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FACERIPFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* ripFace_raw() const = 0;
    virtual bool ripFace_raw(BRepFace* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> FaceRipFeatureDefinition::ripFace() const
{
    core::Ptr<BRepFace> res = ripFace_raw();
    return res;
}

inline bool FaceRipFeatureDefinition::ripFace(const core::Ptr<BRepFace>& value)
{
    return ripFace_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FACERIPFEATUREDEFINITION_API