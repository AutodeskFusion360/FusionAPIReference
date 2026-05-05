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
# ifdef __COMPILING_ADSK_DRAWING_CUSTOMTABLES_CPP__
# define ADSK_DRAWING_CUSTOMTABLES_API XI_EXPORT
# else
# define ADSK_DRAWING_CUSTOMTABLES_API
# endif
#else
# define ADSK_DRAWING_CUSTOMTABLES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class CustomTable;
    class CustomTableInput;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Collection object that provides access to all custom tables on a sheet and supports creating new tables.
/// Obtained via the Sheet.customTables property.
class CustomTables : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the number of custom tables on the sheet associated with this collection.
    size_t count() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the specified custom table using an index into the collection.
    /// index : The index of the custom table within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified custom table or an error if an invalid index was specified.
    core::Ptr<CustomTable> item(size_t index) const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new CustomTableInput object that is used to define the properties needed to create a custom table.
    /// After configuring the returned input object, pass it to the add method to create the table.
    /// Returns the newly created CustomTableInput object, or null if creation failed.
    core::Ptr<CustomTableInput> createInput();

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a custom table on the sheet based on the provided input settings.
    /// input : A CustomTableInput object created using the CustomTables.createInput method.
    /// Returns the newly created CustomTable object or null in the case of failure.
    core::Ptr<CustomTable> add(const core::Ptr<CustomTableInput>& input);

    typedef CustomTable iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_DRAWING_CUSTOMTABLES_API static const char* classType();
    ADSK_DRAWING_CUSTOMTABLES_API const char* objectType() const override;
    ADSK_DRAWING_CUSTOMTABLES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_CUSTOMTABLES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual CustomTable* item_raw(size_t index) const = 0;
    virtual CustomTableInput* createInput_raw() = 0;
    virtual CustomTable* add_raw(CustomTableInput* input) = 0;
};

// Inline wrappers

inline size_t CustomTables::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CustomTable> CustomTables::item(size_t index) const
{
    core::Ptr<CustomTable> res = item_raw(index);
    return res;
}

inline core::Ptr<CustomTableInput> CustomTables::createInput()
{
    core::Ptr<CustomTableInput> res = createInput_raw();
    return res;
}

inline core::Ptr<CustomTable> CustomTables::add(const core::Ptr<CustomTableInput>& input)
{
    core::Ptr<CustomTable> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void CustomTables::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_CUSTOMTABLES_API