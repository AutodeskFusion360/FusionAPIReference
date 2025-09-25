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
#include "../../Core/Base.h"
#include "../DrawingTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGEXPORTMANAGER_CPP__
# define ADSK_DRAWING_DRAWINGEXPORTMANAGER_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGEXPORTMANAGER_API
# endif
#else
# define ADSK_DRAWING_DRAWINGEXPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class DrawingExportOptions;
    class PDFExportOptions;
}}

namespace adsk { namespace drawing {

/// Provides support to export the drawing in various formats.
class DrawingExportManager : public core::Base {
public:

    /// Defines the various settings for a STEP export.
    /// filename : The name of the file to export to. Use settings on the returned PDFExportOptions
    /// object to change other settings.
    /// Returns a PDFExportOptions object if successful and null if it should fail.
    core::Ptr<PDFExportOptions> createPDFExportOptions(const std::string& filename);

    /// Executes the export operation to create the file in the format specified by the input ExportOptions object.
    /// exportOptions : A DrawingExportOptions object that is created using one of the create methods on the DrawingExportManager object.
    /// This defines the type of export and defines the options supported for that file type.
    /// Returns true if the export was successful.
    bool execute(const core::Ptr<DrawingExportOptions>& exportOptions);

    ADSK_DRAWING_DRAWINGEXPORTMANAGER_API static const char* classType();
    ADSK_DRAWING_DRAWINGEXPORTMANAGER_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGEXPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGEXPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PDFExportOptions* createPDFExportOptions_raw(const char* filename) = 0;
    virtual bool execute_raw(DrawingExportOptions* exportOptions) = 0;
};

// Inline wrappers

inline core::Ptr<PDFExportOptions> DrawingExportManager::createPDFExportOptions(const std::string& filename)
{
    core::Ptr<PDFExportOptions> res = createPDFExportOptions_raw(filename.c_str());
    return res;
}

inline bool DrawingExportManager::execute(const core::Ptr<DrawingExportOptions>& exportOptions)
{
    bool res = execute_raw(exportOptions.get());
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGEXPORTMANAGER_API