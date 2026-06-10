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
# ifdef __COMPILING_ADSK_ELECTRON_BUS_CPP__
# define ADSK_ELECTRON_BUS_API XI_EXPORT
# else
# define ADSK_ELECTRON_BUS_API
# endif
#else
# define ADSK_ELECTRON_BUS_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Segments;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Group of related nets in a schematic; wires can be drawn as a bus and named with a pattern to derive net names.
class Bus : public EcadObject {
public:

    /// Assigned name of this bus.
    std::string name() const;

    /// Segments in this bus.
    core::Ptr<Segments> segments() const;

    ADSK_ELECTRON_BUS_API static const char* classType();
    ADSK_ELECTRON_BUS_API const char* objectType() const override;
    ADSK_ELECTRON_BUS_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_BUS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual Segments* segments_raw() const = 0;
};

// Inline wrappers

inline std::string Bus::name() const
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

inline core::Ptr<Segments> Bus::segments() const
{
    core::Ptr<Segments> res = segments_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_BUS_API