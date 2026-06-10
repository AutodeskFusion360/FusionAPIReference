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
# ifdef __COMPILING_ADSK_ELECTRON_SIGNAL_CPP__
# define ADSK_ELECTRON_SIGNAL_API XI_EXPORT
# else
# define ADSK_ELECTRON_SIGNAL_API
# endif
#else
# define ADSK_ELECTRON_SIGNAL_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Class;
    class ContactRefs;
    class PolyPours;
    class Vias;
    class Wires;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Copper trace network in a PCB board; connects pads and vias through wires and polygon pours.
class Signal : public EcadObject {
public:

    /// Assigned name of this signal (e.g., GND, VCC).
    std::string name() const;

    /// True if air wires (unrouted connections) are hidden for this signal.
    bool airWiresHidden() const;

    /// Net class assigned to this signal.
    core::Ptr<Class> netClass() const;

    /// Wires (copper traces) in this signal.
    core::Ptr<Wires> wires() const;

    /// Polygon pours in this signal.
    core::Ptr<PolyPours> polyPours() const;

    /// Vias in this signal.
    core::Ptr<Vias> vias() const;

    /// Contact references (connections to pads or SMDs) in this signal.
    core::Ptr<ContactRefs> contactRefs() const;

    ADSK_ELECTRON_SIGNAL_API static const char* classType();
    ADSK_ELECTRON_SIGNAL_API const char* objectType() const override;
    ADSK_ELECTRON_SIGNAL_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SIGNAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool airWiresHidden_raw() const = 0;
    virtual Class* netClass_raw() const = 0;
    virtual Wires* wires_raw() const = 0;
    virtual PolyPours* polyPours_raw() const = 0;
    virtual Vias* vias_raw() const = 0;
    virtual ContactRefs* contactRefs_raw() const = 0;
};

// Inline wrappers

inline std::string Signal::name() const
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

inline bool Signal::airWiresHidden() const
{
    bool res = airWiresHidden_raw();
    return res;
}

inline core::Ptr<Class> Signal::netClass() const
{
    core::Ptr<Class> res = netClass_raw();
    return res;
}

inline core::Ptr<Wires> Signal::wires() const
{
    core::Ptr<Wires> res = wires_raw();
    return res;
}

inline core::Ptr<PolyPours> Signal::polyPours() const
{
    core::Ptr<PolyPours> res = polyPours_raw();
    return res;
}

inline core::Ptr<Vias> Signal::vias() const
{
    core::Ptr<Vias> res = vias_raw();
    return res;
}

inline core::Ptr<ContactRefs> Signal::contactRefs() const
{
    core::Ptr<ContactRefs> res = contactRefs_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SIGNAL_API