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
# ifdef __COMPILING_ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_CPP__
# define ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Preferences for assembly sheet views (both ISO and orthogonal). Configure parts list and view sheet creation.
/// Used for both isometric and orthogonal projection sheet configurations.
/// Default: Parts list IS included for ISO views, NOT included for orthogonal views.
class AssemblySheetPreferences : public core::Base {
public:

    /// Gets and sets whether to include a parts list (BOM) on the sheet. Default: true for ISO views, false for orthogonal views.
    /// Applicable only when isSheetCreated is true.
    bool isPartsListIncluded() const;
    bool isPartsListIncluded(bool value);

    /// Gets and sets the corner location for the parts list table. Only applies when isPartsListIncluded is true.
    /// Default: TopRightTableLocationType for ISO views, TopLeftTableLocationType for orthogonal views.
    TableLocationTypes partsListLocationType() const;
    bool partsListLocationType(TableLocationTypes value);

    /// Gets and sets whether to create the view sheet (ISO or orthogonal). Default: true.
    bool isSheetCreated() const;
    bool isSheetCreated(bool value);

    ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API static const char* classType();
    ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isPartsListIncluded_raw() const = 0;
    virtual bool isPartsListIncluded_raw(bool value) = 0;
    virtual TableLocationTypes partsListLocationType_raw() const = 0;
    virtual bool partsListLocationType_raw(TableLocationTypes value) = 0;
    virtual bool isSheetCreated_raw() const = 0;
    virtual bool isSheetCreated_raw(bool value) = 0;
};

// Inline wrappers

inline bool AssemblySheetPreferences::isPartsListIncluded() const
{
    bool res = isPartsListIncluded_raw();
    return res;
}

inline bool AssemblySheetPreferences::isPartsListIncluded(bool value)
{
    return isPartsListIncluded_raw(value);
}

inline TableLocationTypes AssemblySheetPreferences::partsListLocationType() const
{
    TableLocationTypes res = partsListLocationType_raw();
    return res;
}

inline bool AssemblySheetPreferences::partsListLocationType(TableLocationTypes value)
{
    return partsListLocationType_raw(value);
}

inline bool AssemblySheetPreferences::isSheetCreated() const
{
    bool res = isSheetCreated_raw();
    return res;
}

inline bool AssemblySheetPreferences::isSheetCreated(bool value)
{
    return isSheetCreated_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_ASSEMBLYSHEETPREFERENCES_API