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
# ifdef __COMPILING_ADSK_ELECTRON_PINREF_CPP__
# define ADSK_ELECTRON_PINREF_API XI_EXPORT
# else
# define ADSK_ELECTRON_PINREF_API
# endif
#else
# define ADSK_ELECTRON_PINREF_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Instance;
    class Part;
    class Pin;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Reference linking an instance, part, and pin in a net segment.
class PinRef : public EcadObject {
public:

    /// Instance this pin reference belongs to.
    core::Ptr<Instance> instance() const;

    /// Part this pin reference belongs to.
    core::Ptr<Part> part() const;

    /// Pin this reference refers to.
    core::Ptr<Pin> pin() const;

    ADSK_ELECTRON_PINREF_API static const char* classType();
    ADSK_ELECTRON_PINREF_API const char* objectType() const override;
    ADSK_ELECTRON_PINREF_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PINREF_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Instance* instance_raw() const = 0;
    virtual Part* part_raw() const = 0;
    virtual Pin* pin_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Instance> PinRef::instance() const
{
    core::Ptr<Instance> res = instance_raw();
    return res;
}

inline core::Ptr<Part> PinRef::part() const
{
    core::Ptr<Part> res = part_raw();
    return res;
}

inline core::Ptr<Pin> PinRef::pin() const
{
    core::Ptr<Pin> res = pin_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PINREF_API