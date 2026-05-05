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
#include "DrawingViewPreferences.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_CPP__
# define ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Drawing view settings for flat patterns. Adds bend extents. Different defaults than base.
class DrawingViewFlatPatternPreferences : public DrawingViewPreferences {
public:

    /// Gets and sets whether bend extent lines are displayed. Default: true.
    bool isShowBendExtents() const;
    bool isShowBendExtents(bool value);

    ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API static const char* classType();
    ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isShowBendExtents_raw() const = 0;
    virtual bool isShowBendExtents_raw(bool value) = 0;
};

// Inline wrappers

inline bool DrawingViewFlatPatternPreferences::isShowBendExtents() const
{
    bool res = isShowBendExtents_raw();
    return res;
}

inline bool DrawingViewFlatPatternPreferences::isShowBendExtents(bool value)
{
    return isShowBendExtents_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGVIEWFLATPATTERNPREFERENCES_API