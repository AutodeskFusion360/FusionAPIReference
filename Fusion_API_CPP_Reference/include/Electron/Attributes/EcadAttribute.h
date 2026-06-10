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
# ifdef __COMPILING_ADSK_ELECTRON_ECADATTRIBUTE_CPP__
# define ADSK_ELECTRON_ECADATTRIBUTE_API XI_EXPORT
# else
# define ADSK_ELECTRON_ECADATTRIBUTE_API
# endif
#else
# define ADSK_ELECTRON_ECADATTRIBUTE_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Attribute (name-value pair) on an element, instance, or part.
class EcadAttribute : public EcadObject {
public:

    /// Visibility mode for this attribute.
    AttributeDisplayModes display() const;

    /// Attribute name.
    std::string name() const;

    /// Attribute value.
    std::string value() const;

    /// True if this attribute is constant (not variable).
    bool constant() const;

    /// Default value from the device.
    std::string defaultValue() const;

    ADSK_ELECTRON_ECADATTRIBUTE_API static const char* classType();
    ADSK_ELECTRON_ECADATTRIBUTE_API const char* objectType() const override;
    ADSK_ELECTRON_ECADATTRIBUTE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ECADATTRIBUTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AttributeDisplayModes display_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual bool constant_raw() const = 0;
    virtual char* defaultValue_raw() const = 0;
};

// Inline wrappers

inline AttributeDisplayModes EcadAttribute::display() const
{
    AttributeDisplayModes res = display_raw();
    return res;
}

inline std::string EcadAttribute::name() const
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

inline std::string EcadAttribute::value() const
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

inline bool EcadAttribute::constant() const
{
    bool res = constant_raw();
    return res;
}

inline std::string EcadAttribute::defaultValue() const
{
    std::string res;

    char* p= defaultValue_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ECADATTRIBUTE_API