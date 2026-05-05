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
#include "../DrawingTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_FOLDEDMODELPREFERENCES_CPP__
# define ADSK_DRAWING_FOLDEDMODELPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_FOLDEDMODELPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_FOLDEDMODELPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class AutoDimensionComponentPreferences;
    class ComponentSheetViewPreferences;
    class DrawingViewPreferences;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Preferences for sheet metal folded model sheets (formed state). Complements flat pattern sheets.
class FoldedModelPreferences : public core::Base {
public:

    /// Gets view generation preferences for folded model sheets. Controls whether orthogonal projection views
    /// (front, top, right side) are added to the sheet, and whether an optional isometric view is included.
    core::Ptr<ComponentSheetViewPreferences> sheetViewPreferences() const;

    /// Gets auto-dimension settings (strategy, origin, patterns). Requires GlobalPreferences.enableAutoDimension.
    core::Ptr<AutoDimensionComponentPreferences> autoDimensionPreferences() const;

    /// Gets view appearance settings (style, edges, center marks, center lines).
    core::Ptr<DrawingViewPreferences> drawingViewPreferences() const;

    ADSK_DRAWING_FOLDEDMODELPREFERENCES_API static const char* classType();
    ADSK_DRAWING_FOLDEDMODELPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_FOLDEDMODELPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_FOLDEDMODELPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ComponentSheetViewPreferences* sheetViewPreferences_raw() const = 0;
    virtual AutoDimensionComponentPreferences* autoDimensionPreferences_raw() const = 0;
    virtual DrawingViewPreferences* drawingViewPreferences_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ComponentSheetViewPreferences> FoldedModelPreferences::sheetViewPreferences() const
{
    core::Ptr<ComponentSheetViewPreferences> res = sheetViewPreferences_raw();
    return res;
}

inline core::Ptr<AutoDimensionComponentPreferences> FoldedModelPreferences::autoDimensionPreferences() const
{
    core::Ptr<AutoDimensionComponentPreferences> res = autoDimensionPreferences_raw();
    return res;
}

inline core::Ptr<DrawingViewPreferences> FoldedModelPreferences::drawingViewPreferences() const
{
    core::Ptr<DrawingViewPreferences> res = drawingViewPreferences_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_FOLDEDMODELPREFERENCES_API