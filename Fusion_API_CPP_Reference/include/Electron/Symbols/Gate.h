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
# ifdef __COMPILING_ADSK_ELECTRON_GATE_CPP__
# define ADSK_ELECTRON_GATE_API XI_EXPORT
# else
# define ADSK_ELECTRON_GATE_API
# endif
#else
# define ADSK_ELECTRON_GATE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Symbol;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Gate (logical sub-unit) within a device; references a symbol and defines placement and add behavior.
class Gate : public EcadObject {
public:

    /// Add level controlling when this gate is placed (Must, Can, Next, Request, or Always).
    GateAddLevels addLevel() const;

    /// Gate name (e.g., A, B, POWER) within the device.
    std::string name() const;

    /// Swap level for pin swapping; gates with the same swap level can be swapped.
    int swapLevel() const;

    /// Symbol (schematic graphic) associated with this gate.
    core::Ptr<Symbol> symbol() const;

    /// X coordinate of the gate origin (placement point), in internal units.
    int x() const;

    /// Y coordinate of the gate origin (placement point), in internal units.
    int y() const;

    ADSK_ELECTRON_GATE_API static const char* classType();
    ADSK_ELECTRON_GATE_API const char* objectType() const override;
    ADSK_ELECTRON_GATE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_GATE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GateAddLevels addLevel_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int swapLevel_raw() const = 0;
    virtual Symbol* symbol_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
};

// Inline wrappers

inline GateAddLevels Gate::addLevel() const
{
    GateAddLevels res = addLevel_raw();
    return res;
}

inline std::string Gate::name() const
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

inline int Gate::swapLevel() const
{
    int res = swapLevel_raw();
    return res;
}

inline core::Ptr<Symbol> Gate::symbol() const
{
    core::Ptr<Symbol> res = symbol_raw();
    return res;
}

inline int Gate::x() const
{
    int res = x_raw();
    return res;
}

inline int Gate::y() const
{
    int res = y_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_GATE_API