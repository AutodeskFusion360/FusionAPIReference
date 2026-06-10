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

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to contacts in a study.
class Contacts : public core::Base {
public:

    /// The number of contacts.
    size_t count() const;

    ADSK_SIM_CONTACTS_API static const char* classType();
    ADSK_SIM_CONTACTS_API const char* objectType() const override;
    ADSK_SIM_CONTACTS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_CONTACTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual void placeholderContacts0() {}
    virtual void placeholderContacts1() {}
    virtual void placeholderContacts2() {}
    virtual void placeholderContacts3() {}
    virtual void placeholderContacts4() {}
    virtual void placeholderContacts5() {}
    virtual void placeholderContacts6() {}
    virtual void placeholderContacts7() {}
    virtual void placeholderContacts8() {}
    virtual void placeholderContacts9() {}
    virtual void placeholderContacts10() {}
    virtual void placeholderContacts11() {}
    virtual void placeholderContacts12() {}
    virtual void placeholderContacts13() {}
    virtual void placeholderContacts14() {}
};

// Inline wrappers

inline size_t Contacts::count() const
{
    size_t res = count_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_CONTACTS_API