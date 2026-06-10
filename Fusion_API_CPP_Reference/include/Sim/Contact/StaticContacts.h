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
# ifdef __COMPILING_ADSK_SIM_STATICCONTACTS_CPP__
# define ADSK_SIM_STATICCONTACTS_API XI_EXPORT
# else
# define ADSK_SIM_STATICCONTACTS_API
# endif
#else
# define ADSK_SIM_STATICCONTACTS_API XI_IMPORT
#endif

namespace adsk { namespace sim {
    class StaticContact;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to contacts in non event simulation studies:
/// Linear Static Stress, Nonlinear Static Stress, Modal Frequencies, Thermal,
/// Thermal Stress, Structural Buckling, Shape Optimization.
class StaticContacts : public Contacts {
public:

    /// Returns the contact at the specified index.
    core::Ptr<StaticContact> item(size_t index) const;

    /// Runs automatic contact generation for this study.
    /// Uses contact detection tolerance for autodetection of contacts.
    /// For supported study types, its value can be changed in study general settings.
    bool autoGenerate();

    ADSK_SIM_STATICCONTACTS_API static const char* classType();
    ADSK_SIM_STATICCONTACTS_API const char* objectType() const override;
    ADSK_SIM_STATICCONTACTS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STATICCONTACTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual StaticContact* item_raw(size_t index) const = 0;
    virtual bool autoGenerate_raw() = 0;
};

// Inline wrappers

inline core::Ptr<StaticContact> StaticContacts::item(size_t index) const
{
    core::Ptr<StaticContact> res = item_raw(index);
    return res;
}

inline bool StaticContacts::autoGenerate()
{
    bool res = autoGenerate_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STATICCONTACTS_API