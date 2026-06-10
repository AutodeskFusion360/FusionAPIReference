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
# ifdef __COMPILING_ADSK_ELECTRON_PIN_CPP__
# define ADSK_ELECTRON_PIN_API XI_EXPORT
# else
# define ADSK_ELECTRON_PIN_API
# endif
#else
# define ADSK_ELECTRON_PIN_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Contact;
    class Contacts;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Electrical connection point in a symbol; defines position, direction, and display.
class Pin : public EcadObject {
public:

    /// Rotation angle in degrees, counter-clockwise from the positive X axis (0, 90, 180, or 270).
    double angle() const;

    /// Contact (pad or SMD) assigned to this pin through the device connect map.
    core::Ptr<Contact> contact() const;

    /// Electrical direction of this pin.
    PinDirections direction() const;

    /// Graphical symbol (inverter or clock) drawn next to this pin.
    PinFunctions function() const;

    /// Graphical length of the pin wire in the symbol.
    PinLengths length() const;

    /// Contacts (pads or SMDs) assigned to this pin through the device connect map.
    core::Ptr<Contacts> contacts() const;

    /// Pin name as defined in the library.
    std::string name() const;

    /// Net name to which this pin is connected (schematic context only).
    std::string net() const;

    /// Route connection type for this pin (All or Any).
    RouteConnect route() const;

    /// Swap level for pin swapping; pins with the same level can be swapped.
    int swapLevel() const;

    /// Which name is displayed for this pin.
    PinVisibles visible() const;

    /// X coordinate of the connection point, in internal units.
    int x() const;

    /// Y coordinate of the connection point, in internal units.
    int y() const;

    ADSK_ELECTRON_PIN_API static const char* classType();
    ADSK_ELECTRON_PIN_API const char* objectType() const override;
    ADSK_ELECTRON_PIN_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PIN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double angle_raw() const = 0;
    virtual Contact* contact_raw() const = 0;
    virtual PinDirections direction_raw() const = 0;
    virtual PinFunctions function_raw() const = 0;
    virtual PinLengths length_raw() const = 0;
    virtual Contacts* contacts_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* net_raw() const = 0;
    virtual RouteConnect route_raw() const = 0;
    virtual int swapLevel_raw() const = 0;
    virtual PinVisibles visible_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline double Pin::angle() const
{
    double res = angle_raw();
    return res;
}

inline core::Ptr<Contact> Pin::contact() const
{
    core::Ptr<Contact> res = contact_raw();
    return res;
}

inline PinDirections Pin::direction() const
{
    PinDirections res = direction_raw();
    return res;
}

inline PinFunctions Pin::function() const
{
    PinFunctions res = function_raw();
    return res;
}

inline PinLengths Pin::length() const
{
    PinLengths res = length_raw();
    return res;
}

inline core::Ptr<Contacts> Pin::contacts() const
{
    core::Ptr<Contacts> res = contacts_raw();
    return res;
}

inline std::string Pin::name() const
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

inline std::string Pin::net() const
{
    std::string res;

    char* p= net_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline RouteConnect Pin::route() const
{
    RouteConnect res = route_raw();
    return res;
}

inline int Pin::swapLevel() const
{
    int res = swapLevel_raw();
    return res;
}

inline PinVisibles Pin::visible() const
{
    PinVisibles res = visible_raw();
    return res;
}

inline int Pin::x() const
{
    int res = x_raw();
    return res;
}

inline int Pin::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PIN_API