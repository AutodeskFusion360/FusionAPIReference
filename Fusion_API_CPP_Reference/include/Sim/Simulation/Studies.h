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
#include "../SimTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_STUDIES_CPP__
# define ADSK_SIM_STUDIES_API XI_EXPORT
# else
# define ADSK_SIM_STUDIES_API
# endif
#else
# define ADSK_SIM_STUDIES_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class Study;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to the Studies in the simulation model.
class Studies : public core::Base {
public:

    /// Function that returns the specified study using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Study> item(size_t index) const;

    /// Function that returns the specified study by name.
    /// name : The name of the study item within the collection to return.
    /// Returns the specified sutdy item or null if the name is not found.
    core::Ptr<Study> itemByName(const std::string& name) const;

    /// The number of studies.
    size_t count() const;

    typedef Study iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_SIM_STUDIES_API static const char* classType();
    ADSK_SIM_STUDIES_API const char* objectType() const override;
    ADSK_SIM_STUDIES_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STUDIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Study* item_raw(size_t index) const = 0;
    virtual Study* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Study> Studies::item(size_t index) const
{
    core::Ptr<Study> res = item_raw(index);
    return res;
}

inline core::Ptr<Study> Studies::itemByName(const std::string& name) const
{
    core::Ptr<Study> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Studies::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Studies::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STUDIES_API