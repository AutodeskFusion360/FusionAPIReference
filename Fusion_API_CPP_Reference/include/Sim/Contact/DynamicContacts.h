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
#include "Contacts.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_DYNAMICCONTACTS_CPP__
# define ADSK_SIM_DYNAMICCONTACTS_API XI_EXPORT
# else
# define ADSK_SIM_DYNAMICCONTACTS_API
# endif
#else
# define ADSK_SIM_DYNAMICCONTACTS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class DynamicContact;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to contacts in event simulation studies:
/// Dynamic Event Simulation, Quasi-Static Event Simulation.
class DynamicContacts : public Contacts {
public:

    /// Returns the contact at the specified index.
    core::Ptr<DynamicContact> item(size_t index) const;

    ADSK_SIM_DYNAMICCONTACTS_API static const char* classType();
    ADSK_SIM_DYNAMICCONTACTS_API const char* objectType() const override;
    ADSK_SIM_DYNAMICCONTACTS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_DYNAMICCONTACTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DynamicContact* item_raw(size_t index) const = 0;
};

// Inline wrappers

inline core::Ptr<DynamicContact> DynamicContacts::item(size_t index) const
{
    core::Ptr<DynamicContact> res = item_raw(index);
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_DYNAMICCONTACTS_API