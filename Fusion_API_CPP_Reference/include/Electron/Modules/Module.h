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
# ifdef __COMPILING_ADSK_ELECTRON_MODULE_CPP__
# define ADSK_ELECTRON_MODULE_API XI_EXPORT
# else
# define ADSK_ELECTRON_MODULE_API
# endif
#else
# define ADSK_ELECTRON_MODULE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Parts;
    class Ports;
    class Sheets;
    class VariantDefs;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Reusable block in a hierarchical schematic, containing parts, ports, and nested sheets.
class Module : public EcadObject {
public:

    /// Module width, in internal units.
    int dx() const;

    /// Module height, in internal units.
    int dy() const;

    /// Human-readable description of this module.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Assigned name of this module.
    std::string name() const;

    /// Prefix used when generating names for module instances and parts.
    std::string prefix() const;

    /// Parts (component definitions) within this module.
    core::Ptr<Parts> parts() const;

    /// Ports (connection points) within this module.
    core::Ptr<Ports> ports() const;

    /// Sheets within this module.
    core::Ptr<Sheets> sheets() const;

    /// Assembly variant definitions within this module.
    core::Ptr<VariantDefs> variantDefs() const;

    ADSK_ELECTRON_MODULE_API static const char* classType();
    ADSK_ELECTRON_MODULE_API const char* objectType() const override;
    ADSK_ELECTRON_MODULE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_MODULE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int dx_raw() const = 0;
    virtual int dy_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* prefix_raw() const = 0;
    virtual Parts* parts_raw() const = 0;
    virtual Ports* ports_raw() const = 0;
    virtual Sheets* sheets_raw() const = 0;
    virtual VariantDefs* variantDefs_raw() const = 0;
};

// Inline wrappers

inline int Module::dx() const
{
    int res = dx_raw();
    return res;
}

inline int Module::dy() const
{
    int res = dy_raw();
    return res;
}

inline std::string Module::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Module::headline() const
{
    std::string res;

    char* p= headline_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Module::name() const
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

inline std::string Module::prefix() const
{
    std::string res;

    char* p= prefix_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Parts> Module::parts() const
{
    core::Ptr<Parts> res = parts_raw();
    return res;
}

inline core::Ptr<Ports> Module::ports() const
{
    core::Ptr<Ports> res = ports_raw();
    return res;
}

inline core::Ptr<Sheets> Module::sheets() const
{
    core::Ptr<Sheets> res = sheets_raw();
    return res;
}

inline core::Ptr<VariantDefs> Module::variantDefs() const
{
    core::Ptr<VariantDefs> res = variantDefs_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_MODULE_API