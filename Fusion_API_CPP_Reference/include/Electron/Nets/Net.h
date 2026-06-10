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
# ifdef __COMPILING_ADSK_ELECTRON_NET_CPP__
# define ADSK_ELECTRON_NET_API XI_EXPORT
# else
# define ADSK_ELECTRON_NET_API
# endif
#else
# define ADSK_ELECTRON_NET_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Class;
    class PinRefs;
    class PortRefs;
    class Segments;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Logical connection (net) in a schematic; groups pins and ports that are electrically connected.
class Net : public EcadObject {
public:

    /// Assigned name of this net.
    std::string name() const;

    /// Pin references in this net.
    core::Ptr<PinRefs> pinRefs() const;

    /// Port references in this net.
    core::Ptr<PortRefs> portRefs() const;

    /// Segments in this net.
    core::Ptr<Segments> segments() const;

    /// Column range for frame placement; empty if not in a frame.
    std::string columnRange() const;

    /// Row range for frame placement (e.g., ``A C``); empty if not in a frame.
    std::string rowRange() const;

    /// Net class assigned to this net.
    core::Ptr<Class> netClass() const;

    ADSK_ELECTRON_NET_API static const char* classType();
    ADSK_ELECTRON_NET_API const char* objectType() const override;
    ADSK_ELECTRON_NET_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_NET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual PinRefs* pinRefs_raw() const = 0;
    virtual PortRefs* portRefs_raw() const = 0;
    virtual Segments* segments_raw() const = 0;
    virtual char* columnRange_raw() const = 0;
    virtual char* rowRange_raw() const = 0;
    virtual Class* netClass_raw() const = 0;
};

// Inline wrappers

inline std::string Net::name() const
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

inline core::Ptr<PinRefs> Net::pinRefs() const
{
    core::Ptr<PinRefs> res = pinRefs_raw();
    return res;
}

inline core::Ptr<PortRefs> Net::portRefs() const
{
    core::Ptr<PortRefs> res = portRefs_raw();
    return res;
}

inline core::Ptr<Segments> Net::segments() const
{
    core::Ptr<Segments> res = segments_raw();
    return res;
}

inline std::string Net::columnRange() const
{
    std::string res;

    char* p= columnRange_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Net::rowRange() const
{
    std::string res;

    char* p= rowRange_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Class> Net::netClass() const
{
    core::Ptr<Class> res = netClass_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_NET_API