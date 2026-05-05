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
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGVIEWPREFERENCES_CPP__
# define ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Drawing view appearance settings: style, edges, center marks, center lines.
class DrawingViewPreferences : public core::Base {
public:

    /// Gets and sets the visual rendering style. Default: VisibleEdgesDrawingViewStyleType.
    DrawingViewStyleTypes style() const;
    bool style(DrawingViewStyleTypes value);

    /// Gets and sets the tangent edge display mode for the drawing view. Controls how tangent edges
    /// (edges where two tangent faces meet) are displayed. Default: OffTangentEdgeDisplayType.
    TangentEdgeDisplayTypes tangentEdgesType() const;
    bool tangentEdgesType(TangentEdgeDisplayTypes value);

    /// Gets and sets whether interference edges are shown in the drawing view. Default: true for standard views, false for flat patterns.
    bool isShowInterferenceEdges() const;
    bool isShowInterferenceEdges(bool value);

    /// Gets and sets whether thread representations are shown in the drawing view. Default: true for standard views, false for flat patterns.
    bool isShowThreadEdges() const;
    bool isShowThreadEdges(bool value);

    /// Gets and sets the center mark display mode for the drawing view. Controls which circular features
    /// (holes, fillets, punches) display center marks. Default: OffCenterMarkDisplayType.
    CenterMarkDisplayTypes centerMarkType() const;
    bool centerMarkType(CenterMarkDisplayTypes value);

    /// Gets and sets the center line display mode for the drawing view. Controls which cylindrical features
    /// (holes, shafts) display center lines. Default: OffCenterLineDisplayType.
    CenterLineDisplayTypes centerLineType() const;
    bool centerLineType(CenterLineDisplayTypes value);

    ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API static const char* classType();
    ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DrawingViewStyleTypes style_raw() const = 0;
    virtual bool style_raw(DrawingViewStyleTypes value) = 0;
    virtual TangentEdgeDisplayTypes tangentEdgesType_raw() const = 0;
    virtual bool tangentEdgesType_raw(TangentEdgeDisplayTypes value) = 0;
    virtual bool isShowInterferenceEdges_raw() const = 0;
    virtual bool isShowInterferenceEdges_raw(bool value) = 0;
    virtual bool isShowThreadEdges_raw() const = 0;
    virtual bool isShowThreadEdges_raw(bool value) = 0;
    virtual CenterMarkDisplayTypes centerMarkType_raw() const = 0;
    virtual bool centerMarkType_raw(CenterMarkDisplayTypes value) = 0;
    virtual CenterLineDisplayTypes centerLineType_raw() const = 0;
    virtual bool centerLineType_raw(CenterLineDisplayTypes value) = 0;
    virtual void placeholderDrawingViewPreferences0() {}
    virtual void placeholderDrawingViewPreferences1() {}
    virtual void placeholderDrawingViewPreferences2() {}
    virtual void placeholderDrawingViewPreferences3() {}
    virtual void placeholderDrawingViewPreferences4() {}
    virtual void placeholderDrawingViewPreferences5() {}
    virtual void placeholderDrawingViewPreferences6() {}
    virtual void placeholderDrawingViewPreferences7() {}
    virtual void placeholderDrawingViewPreferences8() {}
    virtual void placeholderDrawingViewPreferences9() {}
    virtual void placeholderDrawingViewPreferences10() {}
    virtual void placeholderDrawingViewPreferences11() {}
    virtual void placeholderDrawingViewPreferences12() {}
    virtual void placeholderDrawingViewPreferences13() {}
    virtual void placeholderDrawingViewPreferences14() {}
    virtual void placeholderDrawingViewPreferences15() {}
    virtual void placeholderDrawingViewPreferences16() {}
    virtual void placeholderDrawingViewPreferences17() {}
    virtual void placeholderDrawingViewPreferences18() {}
    virtual void placeholderDrawingViewPreferences19() {}
};

// Inline wrappers

inline DrawingViewStyleTypes DrawingViewPreferences::style() const
{
    DrawingViewStyleTypes res = style_raw();
    return res;
}

inline bool DrawingViewPreferences::style(DrawingViewStyleTypes value)
{
    return style_raw(value);
}

inline TangentEdgeDisplayTypes DrawingViewPreferences::tangentEdgesType() const
{
    TangentEdgeDisplayTypes res = tangentEdgesType_raw();
    return res;
}

inline bool DrawingViewPreferences::tangentEdgesType(TangentEdgeDisplayTypes value)
{
    return tangentEdgesType_raw(value);
}

inline bool DrawingViewPreferences::isShowInterferenceEdges() const
{
    bool res = isShowInterferenceEdges_raw();
    return res;
}

inline bool DrawingViewPreferences::isShowInterferenceEdges(bool value)
{
    return isShowInterferenceEdges_raw(value);
}

inline bool DrawingViewPreferences::isShowThreadEdges() const
{
    bool res = isShowThreadEdges_raw();
    return res;
}

inline bool DrawingViewPreferences::isShowThreadEdges(bool value)
{
    return isShowThreadEdges_raw(value);
}

inline CenterMarkDisplayTypes DrawingViewPreferences::centerMarkType() const
{
    CenterMarkDisplayTypes res = centerMarkType_raw();
    return res;
}

inline bool DrawingViewPreferences::centerMarkType(CenterMarkDisplayTypes value)
{
    return centerMarkType_raw(value);
}

inline CenterLineDisplayTypes DrawingViewPreferences::centerLineType() const
{
    CenterLineDisplayTypes res = centerLineType_raw();
    return res;
}

inline bool DrawingViewPreferences::centerLineType(CenterLineDisplayTypes value)
{
    return centerLineType_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGVIEWPREFERENCES_API