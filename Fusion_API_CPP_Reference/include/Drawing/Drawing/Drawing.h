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
}}

namespace adsk { namespace drawing {

/// Object that represents the drawing specific data within a drawing document.
class Drawing : public core::Product {
public:

    /// Returns the DrawingExportManager for this drawing.  You use the ExportManager
    /// to export the drawing in various formats.
    core::Ptr<DrawingExportManager> exportManager() const;

    ADSK_DRAWING_DRAWING_API static const char* classType();
    ADSK_DRAWING_DRAWING_API const char* objectType() const override;
    ADSK_DRAWING_DRAWING_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWING_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DrawingExportManager* exportManager_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<DrawingExportManager> Drawing::exportManager() const
{
    core::Ptr<DrawingExportManager> res = exportManager_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWING_API