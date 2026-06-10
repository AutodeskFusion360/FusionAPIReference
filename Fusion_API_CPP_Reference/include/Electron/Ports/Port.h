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
# ifdef __COMPILING_ADSK_ELECTRON_PORT_CPP__
# define ADSK_ELECTRON_PORT_API XI_EXPORT
# else
# define ADSK_ELECTRON_PORT_API
# endif
#else
# define ADSK_ELECTRON_PORT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Nets;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Connection point that exports a net from a module to the outside; defines the interface for hierarchical schematics.
class Port : public EcadObject {
public:

    /// Name of this port (matches the net or bus name within the module).
    std::string name() const;

    /// Signal flow direction.
    PortDirections direction() const;

    /// Nets connected to this port.
    core::Ptr<Nets> nets() const;

    /// Side of the module symbol where this port is placed.
    PortBorderSides border() const;

    /// X coordinate of the port origin, in internal units.
    int x() const;

    /// Y coordinate of the port origin, in internal units.
    int y() const;

    ADSK_ELECTRON_PORT_API static const char* classType();
    ADSK_ELECTRON_PORT_API const char* objectType() const override;
    ADSK_ELECTRON_PORT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PORT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual PortDirections direction_raw() const = 0;
    virtual Nets* nets_raw() const = 0;
    virtual PortBorderSides border_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline std::string Port::name() const
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

inline PortDirections Port::direction() const
{
    PortDirections res = direction_raw();
    return res;
}

inline core::Ptr<Nets> Port::nets() const
{
    core::Ptr<Nets> res = nets_raw();
    return res;
}

inline PortBorderSides Port::border() const
{
    PortBorderSides res = border_raw();
    return res;
}

inline int Port::x() const
{
    int res = x_raw();
    return res;
}

inline int Port::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PORT_API