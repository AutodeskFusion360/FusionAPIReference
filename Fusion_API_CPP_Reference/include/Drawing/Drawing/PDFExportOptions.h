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
#include "DrawingExportOptions.h"
#include "../DrawingTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_PDFEXPORTOPTIONS_CPP__
# define ADSK_DRAWING_PDFEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_DRAWING_PDFEXPORTOPTIONS_API
# endif
#else
# define ADSK_DRAWING_PDFEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// Defines the inputs needed to export the drawing as PDF.
class PDFExportOptions : public DrawingExportOptions {
public:

    /// Defines which sheets to export.  Defaults to AllPDFSheets which
    /// will create a single PDF file containing all sheets in the drawing.
    /// 
    /// the SelectedPDFSheets and CurrentPDFSheet options are dependent on
    /// the current selections in the user interface.
    /// 
    /// To set this to RangePDFSheets, use the sheetRange property to define
    /// the range of sheets to print.
    PDFSheetsExport sheetsToExport() const;
    bool sheetsToExport(PDFSheetsExport value);

    /// Defines the range of sheets to export. This can be a string like
    /// "1-3" or "1-2,5" where you can define a range of sheets and also
    /// specific sheets. Setting this property will automatically set
    /// the sheetsToExport setting to SelectedPDFSheets.
    std::string sheetRange() const;
    bool sheetRange(const std::string& value);

    /// Specifies that the PDF file will be opened after export.
    bool openPDF() const;
    bool openPDF(bool value);

    /// Specifies if line weights should be used in the exported PDF file.
    bool useLineWeights() const;
    bool useLineWeights(bool value);

    ADSK_DRAWING_PDFEXPORTOPTIONS_API static const char* classType();
    ADSK_DRAWING_PDFEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_DRAWING_PDFEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_PDFEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PDFSheetsExport sheetsToExport_raw() const = 0;
    virtual bool sheetsToExport_raw(PDFSheetsExport value) = 0;
    virtual char* sheetRange_raw() const = 0;
    virtual bool sheetRange_raw(const char* value) = 0;
    virtual bool openPDF_raw() const = 0;
    virtual bool openPDF_raw(bool value) = 0;
    virtual bool useLineWeights_raw() const = 0;
    virtual bool useLineWeights_raw(bool value) = 0;
};

// Inline wrappers

inline PDFSheetsExport PDFExportOptions::sheetsToExport() const
{
    PDFSheetsExport res = sheetsToExport_raw();
    return res;
}

inline bool PDFExportOptions::sheetsToExport(PDFSheetsExport value)
{
    return sheetsToExport_raw(value);
}

inline std::string PDFExportOptions::sheetRange() const
{
    std::string res;

    char* p= sheetRange_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PDFExportOptions::sheetRange(const std::string& value)
{
    return sheetRange_raw(value.c_str());
}

inline bool PDFExportOptions::openPDF() const
{
    bool res = openPDF_raw();
    return res;
}

inline bool PDFExportOptions::openPDF(bool value)
{
    return openPDF_raw(value);
}

inline bool PDFExportOptions::useLineWeights() const
{
    bool res = useLineWeights_raw();
    return res;
}

inline bool PDFExportOptions::useLineWeights(bool value)
{
    return useLineWeights_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_PDFEXPORTOPTIONS_API