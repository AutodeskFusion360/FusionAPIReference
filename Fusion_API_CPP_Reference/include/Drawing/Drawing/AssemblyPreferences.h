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
# ifdef __COMPILING_ADSK_DRAWING_ASSEMBLYPREFERENCES_CPP__
# define ADSK_DRAWING_ASSEMBLYPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_ASSEMBLYPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_ASSEMBLYPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class AssemblySheetPreferences;
    class AutoDimensionBasePreferences;
    class DrawingViewPreferences;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Preferences for assembly sheets (main and sub-assembly). Includes ISO view, orthogonal views, and parts list options.
/// The same AssemblyPreferences class is used for both main assembly and sub-assembly configurations.
class AssemblyPreferences : public core::Base {
public:

    /// Gets settings for the isometric view sheet. Configure parts list inclusion and location.
    core::Ptr<AssemblySheetPreferences> isoViewSheetPreferences() const;

    /// Gets settings for the orthogonal views sheet. Configure parts list inclusion and location.
    core::Ptr<AssemblySheetPreferences> orthogonalViewSheetPreferences() const;

    /// Gets auto-dimension settings (strategy, hole preferences). Requires GlobalPreferences.enableAutoDimension.
    core::Ptr<AutoDimensionBasePreferences> autoDimensionPreferences() const;

    /// Gets view appearance settings (style, edges, center marks, center lines).
    core::Ptr<DrawingViewPreferences> drawingViewPreferences() const;

    ADSK_DRAWING_ASSEMBLYPREFERENCES_API static const char* classType();
    ADSK_DRAWING_ASSEMBLYPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_ASSEMBLYPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_ASSEMBLYPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AssemblySheetPreferences* isoViewSheetPreferences_raw() const = 0;
    virtual AssemblySheetPreferences* orthogonalViewSheetPreferences_raw() const = 0;
    virtual AutoDimensionBasePreferences* autoDimensionPreferences_raw() const = 0;
    virtual DrawingViewPreferences* drawingViewPreferences_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<AssemblySheetPreferences> AssemblyPreferences::isoViewSheetPreferences() const
{
    core::Ptr<AssemblySheetPreferences> res = isoViewSheetPreferences_raw();
    return res;
}

inline core::Ptr<AssemblySheetPreferences> AssemblyPreferences::orthogonalViewSheetPreferences() const
{
    core::Ptr<AssemblySheetPreferences> res = orthogonalViewSheetPreferences_raw();
    return res;
}

inline core::Ptr<AutoDimensionBasePreferences> AssemblyPreferences::autoDimensionPreferences() const
{
    core::Ptr<AutoDimensionBasePreferences> res = autoDimensionPreferences_raw();
    return res;
}

inline core::Ptr<DrawingViewPreferences> AssemblyPreferences::drawingViewPreferences() const
{
    core::Ptr<DrawingViewPreferences> res = drawingViewPreferences_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_ASSEMBLYPREFERENCES_API