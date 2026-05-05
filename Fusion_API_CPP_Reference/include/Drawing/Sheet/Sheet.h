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
# ifdef __COMPILING_ADSK_DRAWING_SHEET_CPP__
# define ADSK_DRAWING_SHEET_API XI_EXPORT
# else
# define ADSK_DRAWING_SHEET_API
# endif
#else
# define ADSK_DRAWING_SHEET_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class CustomTables;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents the sheet specific data within a drawing document.
class Sheet : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the CustomTables collection for this sheet. Use this collection
    /// to access existing custom tables or create new ones.
    core::Ptr<CustomTables> customTables() const;

    ADSK_DRAWING_SHEET_API static const char* classType();
    ADSK_DRAWING_SHEET_API const char* objectType() const override;
    ADSK_DRAWING_SHEET_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_SHEET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomTables* customTables_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CustomTables> Sheet::customTables() const
{
    core::Ptr<CustomTables> res = customTables_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_SHEET_API