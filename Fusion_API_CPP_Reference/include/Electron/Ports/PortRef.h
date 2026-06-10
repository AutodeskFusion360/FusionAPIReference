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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_PORTREF_CPP__
# define ADSK_ELECTRON_PORTREF_API XI_EXPORT
# else
# define ADSK_ELECTRON_PORTREF_API
# endif
#else
# define ADSK_ELECTRON_PORTREF_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class ModuleInstance;
    class Port;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Reference that connects a net to a port on a module instance.
class PortRef : public EcadObject {
public:

    /// Module instance that this reference belongs to.
    core::Ptr<ModuleInstance> moduleInst() const;

    /// Port that this reference connects to.
    core::Ptr<Port> port() const;

    ADSK_ELECTRON_PORTREF_API static const char* classType();
    ADSK_ELECTRON_PORTREF_API const char* objectType() const override;
    ADSK_ELECTRON_PORTREF_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PORTREF_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModuleInstance* moduleInst_raw() const = 0;
    virtual Port* port_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModuleInstance> PortRef::moduleInst() const
{
    core::Ptr<ModuleInstance> res = moduleInst_raw();
    return res;
}

inline core::Ptr<Port> PortRef::port() const
{
    core::Ptr<Port> res = port_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PORTREF_API