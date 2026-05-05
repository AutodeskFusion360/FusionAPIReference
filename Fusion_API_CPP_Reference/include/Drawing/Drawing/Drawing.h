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
#include "../../Core/Application/Product.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_DRAWING_CPP__
# define ADSK_DRAWING_DRAWING_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWING_API
# endif
#else
# define ADSK_DRAWING_DRAWING_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class DrawingExportManager;
    class Sheet;
    class Sheets;
}}

namespace adsk { namespace drawing {

/// Object that represents the drawing specific data within a drawing document.
class Drawing : public core::Product {
public:

    /// Returns the DrawingExportManager for this drawing.  You use the ExportManager
    /// to export the drawing in various formats.
    core::Ptr<DrawingExportManager> exportManager() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the Sheets object that provides access to sheets in this drawing.
    core::Ptr<Sheets> sheets() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the current sheet i.e, the active sheet
    core::Ptr<Sheet> activeSheet() const;

    ADSK_DRAWING_DRAWING_API static const char* classType();
    ADSK_DRAWING_DRAWING_API const char* objectType() const override;
    ADSK_DRAWING_DRAWING_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWING_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DrawingExportManager* exportManager_raw() const = 0;
    virtual Sheets* sheets_raw() const = 0;
    virtual Sheet* activeSheet_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<DrawingExportManager> Drawing::exportManager() const
{
    core::Ptr<DrawingExportManager> res = exportManager_raw();
    return res;
}

inline core::Ptr<Sheets> Drawing::sheets() const
{
    core::Ptr<Sheets> res = sheets_raw();
    return res;
}

inline core::Ptr<Sheet> Drawing::activeSheet() const
{
    core::Ptr<Sheet> res = activeSheet_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWING_API