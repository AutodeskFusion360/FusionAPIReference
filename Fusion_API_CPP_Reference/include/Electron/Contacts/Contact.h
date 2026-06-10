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
#include "../Core/EcadObject.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_CONTACT_CPP__
# define ADSK_ELECTRON_CONTACT_API XI_EXPORT
# else
# define ADSK_ELECTRON_CONTACT_API
# endif
#else
# define ADSK_ELECTRON_CONTACT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Pad;
    class Smd;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Contact point (pad or SMD) in a package that connects to a signal.
class Contact : public EcadObject {
public:

    /// Contact name.
    std::string name() const;

    /// Pad data if through-hole.
    core::Ptr<Pad> pad() const;

    /// Signal name connected to this contact.
    std::string signal() const;

    /// SMD data if surface mount.
    core::Ptr<Smd> smd() const;

    /// X coordinate of the center point, in internal units.
    int x() const;

    /// Y coordinate of the center point, in internal units.
    int y() const;

    ADSK_ELECTRON_CONTACT_API static const char* classType();
    ADSK_ELECTRON_CONTACT_API const char* objectType() const override;
    ADSK_ELECTRON_CONTACT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_CONTACT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual Pad* pad_raw() const = 0;
    virtual char* signal_raw() const = 0;
    virtual Smd* smd_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline std::string Contact::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Pad> Contact::pad() const
{
    core::Ptr<Pad> res = pad_raw();
    return res;
}

inline std::string Contact::signal() const
{
    std::string res;

    char* p= signal_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Smd> Contact::smd() const
{
    core::Ptr<Smd> res = smd_raw();
    return res;
}

inline int Contact::x() const
{
    int res = x_raw();
    return res;
}

inline int Contact::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_CONTACT_API