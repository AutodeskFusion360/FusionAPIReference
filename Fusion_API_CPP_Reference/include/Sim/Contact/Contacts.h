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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_CONTACTS_CPP__
# define ADSK_SIM_CONTACTS_API XI_EXPORT
# else
# define ADSK_SIM_CONTACTS_API
# endif
#else
# define ADSK_SIM_CONTACTS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class Contact;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to contacts in a study.
class Contacts : public core::Base {
public:

    /// Returns the contact at the specified index.
    core::Ptr<Contact> item(size_t index) const;

    /// The number of contacts.
    size_t count() const;

    typedef Contact iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_SIM_CONTACTS_API static const char* classType();
    ADSK_SIM_CONTACTS_API const char* objectType() const override;
    ADSK_SIM_CONTACTS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_CONTACTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Contact* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Contact> Contacts::item(size_t index) const
{
    core::Ptr<Contact> res = item_raw(index);
    return res;
}

inline size_t Contacts::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Contacts::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_CONTACTS_API