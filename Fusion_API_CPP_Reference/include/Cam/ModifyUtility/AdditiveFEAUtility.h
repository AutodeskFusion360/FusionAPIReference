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
#include "ModifyUtility.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFEAUTILITY_CPP__
# define ADSK_CAM_ADDITIVEFEAUTILITY_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFEAUTILITY_API
# endif
#else
# define ADSK_CAM_ADDITIVEFEAUTILITY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class AdditiveFEADeckBuilder;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// AdditiveFEAUtility provides functionality for additive FEA simulation operations.
class AdditiveFEAUtility : public ModifyUtility {
public:

    /// Generates a warped or compensated mesh from a completed mechanical FEA operation
    /// and inserts it into the design. The direction of the warp (warpage vs. compensation)
    /// is controlled by the sign of the WarpCard value in the deck.
    /// deck : An AdditiveFEADeckBuilder containing the warp parameters. The WarpCard value's
    /// sign determines the warp direction: use a positive value (e.g. +1.0) for warpage,
    /// or a negative value (e.g. -1.0) for unrelaxed compensation. The magnitude acts
    /// as a magnification factor.
    /// True on success, false on failure.
    bool warpTriangleMesh(const core::Ptr<AdditiveFEADeckBuilder>& deck);

    ADSK_CAM_ADDITIVEFEAUTILITY_API static const char* classType();
    ADSK_CAM_ADDITIVEFEAUTILITY_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFEAUTILITY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFEAUTILITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool warpTriangleMesh_raw(AdditiveFEADeckBuilder* deck) = 0;
};

// Inline wrappers

inline bool AdditiveFEAUtility::warpTriangleMesh(const core::Ptr<AdditiveFEADeckBuilder>& deck)
{
    bool res = warpTriangleMesh_raw(deck.get());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFEAUTILITY_API