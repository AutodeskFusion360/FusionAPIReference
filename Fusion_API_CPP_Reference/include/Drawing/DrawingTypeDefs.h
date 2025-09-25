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

namespace adsk { namespace drawing {

/// The various options that define which sheets to print.
enum PDFSheetsExport
{
    /// Exports all of the sheets in the drawing as a single PDF file.
    AllPDFSheetsExport,
    /// Exports all of the current selected sheets in the drawing. The
    /// active sheet is always selected but the user can also select
    /// additional sheets.
    SelectedPDFSheetsExport,
    /// Exports the current active sheet.
    CurrentPDFSheetExport,
    /// Exports a defined range of sheets.
    RangePDFSheetsExport
};

}// namespace drawing
}// namespace adsk
