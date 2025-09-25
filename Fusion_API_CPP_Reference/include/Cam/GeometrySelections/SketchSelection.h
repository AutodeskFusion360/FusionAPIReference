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
#include "CurveSelection.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SKETCHSELECTION_CPP__
# define ADSK_CAM_SKETCHSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_SKETCHSELECTION_API
# endif
#else
# define ADSK_CAM_SKETCHSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Represents a sketch curve selection. It allows entire sketches for the input geometry.
/// The result of the value property call may contain duplicates.
class SketchSelection : public CurveSelection {
public:

    /// Property to get and set the desired loop type. The default is AllLoops.
    LoopTypes loopType() const;
    bool loopType(LoopTypes value);

    /// Property to get and set the desired side type. The default is StartOutside.
    SideTypes sideType() const;
    bool sideType(SideTypes value);

    ADSK_CAM_SKETCHSELECTION_API static const char* classType();
    ADSK_CAM_SKETCHSELECTION_API const char* objectType() const override;
    ADSK_CAM_SKETCHSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SKETCHSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoopTypes loopType_raw() const = 0;
    virtual bool loopType_raw(LoopTypes value) = 0;
    virtual SideTypes sideType_raw() const = 0;
    virtual bool sideType_raw(SideTypes value) = 0;
};

// Inline wrappers

inline LoopTypes SketchSelection::loopType() const
{
    LoopTypes res = loopType_raw();
    return res;
}

inline bool SketchSelection::loopType(LoopTypes value)
{
    return loopType_raw(value);
}

inline SideTypes SketchSelection::sideType() const
{
    SideTypes res = sideType_raw();
    return res;
}

inline bool SketchSelection::sideType(SideTypes value)
{
    return sideType_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SKETCHSELECTION_API