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
# ifdef __COMPILING_ADSK_ELECTRON_VARIANT_CPP__
# define ADSK_ELECTRON_VARIANT_API XI_EXPORT
# else
# define ADSK_ELECTRON_VARIANT_API
# endif
#else
# define ADSK_ELECTRON_VARIANT_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class VariantDef;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Per-assembly-variant configuration of a part; specifies populate, technology, and value for one variant definition.
class Variant : public EcadObject {
public:

    /// True if this part is populated in this assembly variant.
    bool populate() const;

    /// Technology variant name for this part in this assembly variant; empty string for default.
    std::string technology() const;

    /// Value of this part in this assembly variant.
    std::string value() const;

    /// Assembly variant definition this variant belongs to.
    core::Ptr<VariantDef> variantDef() const;

    ADSK_ELECTRON_VARIANT_API static const char* classType();
    ADSK_ELECTRON_VARIANT_API const char* objectType() const override;
    ADSK_ELECTRON_VARIANT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_VARIANT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool populate_raw() const = 0;
    virtual char* technology_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual VariantDef* variantDef_raw() const = 0;
};

// Inline wrappers

inline bool Variant::populate() const
{
    bool res = populate_raw();
    return res;
}

inline std::string Variant::technology() const
{
    std::string res;

    char* p= technology_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Variant::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<VariantDef> Variant::variantDef() const
{
    core::Ptr<VariantDef> res = variantDef_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_VARIANT_API