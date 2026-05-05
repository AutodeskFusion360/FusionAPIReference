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
# ifdef __COMPILING_ADSK_DRAWING_TABLE_CPP__
# define ADSK_DRAWING_TABLE_API XI_EXPORT
# else
# define ADSK_DRAWING_TABLE_API
# endif
#else
# define ADSK_DRAWING_TABLE_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Base class for all table objects in a drawing.
class Table : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the number of columns in the table.
    int columnCount() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the number of rows in the table. This does not include the header row.
    int rowCount() const;

    ADSK_DRAWING_TABLE_API static const char* classType();
    ADSK_DRAWING_TABLE_API const char* objectType() const override;
    ADSK_DRAWING_TABLE_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_TABLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int columnCount_raw() const = 0;
    virtual int rowCount_raw() const = 0;
    virtual void placeholderTable0() {}
    virtual void placeholderTable1() {}
    virtual void placeholderTable2() {}
    virtual void placeholderTable3() {}
    virtual void placeholderTable4() {}
    virtual void placeholderTable5() {}
    virtual void placeholderTable6() {}
    virtual void placeholderTable7() {}
    virtual void placeholderTable8() {}
    virtual void placeholderTable9() {}
    virtual void placeholderTable10() {}
    virtual void placeholderTable11() {}
    virtual void placeholderTable12() {}
    virtual void placeholderTable13() {}
    virtual void placeholderTable14() {}
    virtual void placeholderTable15() {}
    virtual void placeholderTable16() {}
    virtual void placeholderTable17() {}
    virtual void placeholderTable18() {}
    virtual void placeholderTable19() {}
    virtual void placeholderTable20() {}
    virtual void placeholderTable21() {}
    virtual void placeholderTable22() {}
    virtual void placeholderTable23() {}
    virtual void placeholderTable24() {}
    virtual void placeholderTable25() {}
    virtual void placeholderTable26() {}
    virtual void placeholderTable27() {}
    virtual void placeholderTable28() {}
    virtual void placeholderTable29() {}
    virtual void placeholderTable30() {}
};

// Inline wrappers

inline int Table::columnCount() const
{
    int res = columnCount_raw();
    return res;
}

inline int Table::rowCount() const
{
    int res = rowCount_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_TABLE_API