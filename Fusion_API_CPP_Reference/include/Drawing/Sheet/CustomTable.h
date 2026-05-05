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
#include "Table.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_CUSTOMTABLE_CPP__
# define ADSK_DRAWING_CUSTOMTABLE_API XI_EXPORT
# else
# define ADSK_DRAWING_CUSTOMTABLE_API
# endif
#else
# define ADSK_DRAWING_CUSTOMTABLE_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Represents a custom table on a drawing sheet.
class CustomTable : public Table {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Updates the content of a specific cell in the custom table.
    /// rowIndex : The zero-based row index of the cell to update.
    /// columnIndex : The zero-based column index of the cell to update.
    /// data : The string data to set in the specified cell.
    /// Returns true if the content is modified successfully, otherwise returns false.
    bool updateCellData(int rowIndex, int coulmnIndex, const std::string& data);

    ADSK_DRAWING_CUSTOMTABLE_API static const char* classType();
    ADSK_DRAWING_CUSTOMTABLE_API const char* objectType() const override;
    ADSK_DRAWING_CUSTOMTABLE_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_CUSTOMTABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool updateCellData_raw(int rowIndex, int coulmnIndex, const char* data) = 0;
};

// Inline wrappers

inline bool CustomTable::updateCellData(int rowIndex, int coulmnIndex, const std::string& data)
{
    bool res = updateCellData_raw(rowIndex, coulmnIndex, data.c_str());
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_CUSTOMTABLE_API