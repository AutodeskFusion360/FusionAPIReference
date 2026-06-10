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
#include "../ElectronTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_CONTACTREF_CPP__
# define ADSK_ELECTRON_CONTACTREF_API XI_EXPORT
# else
# define ADSK_ELECTRON_CONTACTREF_API
# endif
#else
# define ADSK_ELECTRON_CONTACTREF_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Contact;
    class Element;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Reference connecting a signal to a pad or SMD on a placed component.
class ContactRef : public EcadObject {
public:

    /// Contact (pad or SMD) referenced by this contact reference.
    core::Ptr<Contact> contact() const;

    /// Placed component instance (element) that this contact reference belongs to.
    core::Ptr<Element> element() const;

    /// Route connection type (all gates or specific gate).
    RouteConnect route() const;

    /// Gate and pin identifier (gate.pin format) when route is Any; empty when route is All.
    std::string routetag() const;

    ADSK_ELECTRON_CONTACTREF_API static const char* classType();
    ADSK_ELECTRON_CONTACTREF_API const char* objectType() const override;
    ADSK_ELECTRON_CONTACTREF_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_CONTACTREF_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Contact* contact_raw() const = 0;
    virtual Element* element_raw() const = 0;
    virtual RouteConnect route_raw() const = 0;
    virtual char* routetag_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Contact> ContactRef::contact() const
{
    core::Ptr<Contact> res = contact_raw();
    return res;
}

inline core::Ptr<Element> ContactRef::element() const
{
    core::Ptr<Element> res = element_raw();
    return res;
}

inline RouteConnect ContactRef::route() const
{
    RouteConnect res = route_raw();
    return res;
}

inline std::string ContactRef::routetag() const
{
    std::string res;

    char* p= routetag_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_CONTACTREF_API