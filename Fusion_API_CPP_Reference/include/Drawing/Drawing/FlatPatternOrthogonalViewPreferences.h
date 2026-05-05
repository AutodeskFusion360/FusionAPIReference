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
# ifdef __COMPILING_ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_CPP__
# define ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Preferences for flat pattern orthogonal view sheets. Configure folded model view, bend table.
class FlatPatternOrthogonalViewPreferences : public core::Base {
public:

    /// Gets and sets whether to add a folded model isometric view for reference on the flat pattern sheet. Default: false.
    bool isFoldedModelIsometricViewAdded() const;
    bool isFoldedModelIsometricViewAdded(bool value);

    /// Gets and sets whether to include a bend table with manufacturing data on the flat pattern sheet. Default: true.
    bool isBendTableIncluded() const;
    bool isBendTableIncluded(bool value);

    /// Gets and sets the corner location for the bend table. Only applies when isBendTableIncluded is true. Default: TopLeftTableLocationType.
    TableLocationTypes bendTableLocation() const;
    bool bendTableLocation(TableLocationTypes value);

    ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API static const char* classType();
    ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isFoldedModelIsometricViewAdded_raw() const = 0;
    virtual bool isFoldedModelIsometricViewAdded_raw(bool value) = 0;
    virtual bool isBendTableIncluded_raw() const = 0;
    virtual bool isBendTableIncluded_raw(bool value) = 0;
    virtual TableLocationTypes bendTableLocation_raw() const = 0;
    virtual bool bendTableLocation_raw(TableLocationTypes value) = 0;
};

// Inline wrappers

inline bool FlatPatternOrthogonalViewPreferences::isFoldedModelIsometricViewAdded() const
{
    bool res = isFoldedModelIsometricViewAdded_raw();
    return res;
}

inline bool FlatPatternOrthogonalViewPreferences::isFoldedModelIsometricViewAdded(bool value)
{
    return isFoldedModelIsometricViewAdded_raw(value);
}

inline bool FlatPatternOrthogonalViewPreferences::isBendTableIncluded() const
{
    bool res = isBendTableIncluded_raw();
    return res;
}

inline bool FlatPatternOrthogonalViewPreferences::isBendTableIncluded(bool value)
{
    return isBendTableIncluded_raw(value);
}

inline TableLocationTypes FlatPatternOrthogonalViewPreferences::bendTableLocation() const
{
    TableLocationTypes res = bendTableLocation_raw();
    return res;
}

inline bool FlatPatternOrthogonalViewPreferences::bendTableLocation(TableLocationTypes value)
{
    return bendTableLocation_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_FLATPATTERNORTHOGONALVIEWPREFERENCES_API