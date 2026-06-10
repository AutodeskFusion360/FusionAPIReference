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
# ifdef __COMPILING_ADSK_ELECTRON_TECHNOLOGY_CPP__
# define ADSK_ELECTRON_TECHNOLOGY_API XI_EXPORT
# else
# define ADSK_ELECTRON_TECHNOLOGY_API
# endif
#else
# define ADSK_ELECTRON_TECHNOLOGY_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class EcadAttributes;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Technology variant of a device; each variant has a name and technology-specific attributes.
class Technology : public EcadObject {
public:

    /// Assigned name of this technology variant (e.g., ``L``, ``LS``); empty string for default technology.
    std::string name() const;

    /// Attributes associated with this technology variant.
    core::Ptr<EcadAttributes> attributes() const;

    ADSK_ELECTRON_TECHNOLOGY_API static const char* classType();
    ADSK_ELECTRON_TECHNOLOGY_API const char* objectType() const override;
    ADSK_ELECTRON_TECHNOLOGY_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_TECHNOLOGY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual EcadAttributes* attributes_raw() const = 0;
};

// Inline wrappers

inline std::string Technology::name() const
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

inline core::Ptr<EcadAttributes> Technology::attributes() const
{
    core::Ptr<EcadAttributes> res = attributes_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_TECHNOLOGY_API