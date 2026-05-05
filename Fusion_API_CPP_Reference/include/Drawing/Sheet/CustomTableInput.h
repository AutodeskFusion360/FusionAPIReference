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
# ifdef __COMPILING_ADSK_DRAWING_CUSTOMTABLEINPUT_CPP__
# define ADSK_DRAWING_CUSTOMTABLEINPUT_API XI_EXPORT
# else
# define ADSK_DRAWING_CUSTOMTABLEINPUT_API
# endif
#else
# define ADSK_DRAWING_CUSTOMTABLEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The input object that defines the required input to create a Custom table when using the
/// CustomTables.add method. Created using the CustomTables.createInput method.
class CustomTableInput : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the number of columns in the table.
    int columnCount() const;
    bool columnCount(int value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the number of rows in the table. This does not include the header row.
    int rowCount() const;
    bool rowCount(int value);

    ADSK_DRAWING_CUSTOMTABLEINPUT_API static const char* classType();
    ADSK_DRAWING_CUSTOMTABLEINPUT_API const char* objectType() const override;
    ADSK_DRAWING_CUSTOMTABLEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_CUSTOMTABLEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int columnCount_raw() const = 0;
    virtual bool columnCount_raw(int value) = 0;
    virtual int rowCount_raw() const = 0;
    virtual bool rowCount_raw(int value) = 0;
};

// Inline wrappers

inline int CustomTableInput::columnCount() const
{
    int res = columnCount_raw();
    return res;
}

inline bool CustomTableInput::columnCount(int value)
{
    return columnCount_raw(value);
}

inline int CustomTableInput::rowCount() const
{
    int res = rowCount_raw();
    return res;
}

inline bool CustomTableInput::rowCount(int value)
{
    return rowCount_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_CUSTOMTABLEINPUT_API