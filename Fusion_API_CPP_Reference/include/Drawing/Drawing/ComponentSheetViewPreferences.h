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
# ifdef __COMPILING_ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_CPP__
# define ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Preferences for component sheet views. Configure orthographic view creation and optional isometric view.
/// This class provides settings for controlling which views are generated on component sheets, including
/// standard orthographic projections (front, top, right side) and an optional isometric view.
class ComponentSheetViewPreferences : public core::Base {
public:

    /// Gets and sets whether to add orthogonal projection views (front, top, side) for the component.
    /// When true, the system will automatically generate standard orthographic projection views
    /// (front, top, and right side views) arranged on the sheet. Default: true.
    bool isOrthogonalViewAdded() const;
    bool isOrthogonalViewAdded(bool value);

    /// Gets and sets whether to add an isometric view alongside orthogonal views. Default: false.
    /// Applicable only when isOrthogonalViewAdded is true.
    bool isIsometricViewAdded() const;
    bool isIsometricViewAdded(bool value);

    ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API static const char* classType();
    ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isOrthogonalViewAdded_raw() const = 0;
    virtual bool isOrthogonalViewAdded_raw(bool value) = 0;
    virtual bool isIsometricViewAdded_raw() const = 0;
    virtual bool isIsometricViewAdded_raw(bool value) = 0;
};

// Inline wrappers

inline bool ComponentSheetViewPreferences::isOrthogonalViewAdded() const
{
    bool res = isOrthogonalViewAdded_raw();
    return res;
}

inline bool ComponentSheetViewPreferences::isOrthogonalViewAdded(bool value)
{
    return isOrthogonalViewAdded_raw(value);
}

inline bool ComponentSheetViewPreferences::isIsometricViewAdded() const
{
    bool res = isIsometricViewAdded_raw();
    return res;
}

inline bool ComponentSheetViewPreferences::isIsometricViewAdded(bool value)
{
    return isIsometricViewAdded_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_COMPONENTSHEETVIEWPREFERENCES_API