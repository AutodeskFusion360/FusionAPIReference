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
# ifdef __COMPILING_ADSK_ELECTRON_MODULEINSTANCE_CPP__
# define ADSK_ELECTRON_MODULEINSTANCE_API XI_EXPORT
# else
# define ADSK_ELECTRON_MODULEINSTANCE_API
# endif
#else
# define ADSK_ELECTRON_MODULEINSTANCE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Module;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Placed reference to a module on a schematic sheet.
class ModuleInstance : public EcadObject {
public:

    /// Module definition that this instance references.
    core::Ptr<Module> module() const;

    /// Name of the assembly variant applied to this instance; empty if using the default.
    std::string moduleVariant() const;

    /// Rotation angle in degrees, counter-clockwise from the positive X axis.
    double angle() const;

    /// True if this instance is mirrored about the Y axis.
    bool mirror() const;

    /// Assigned name of this module instance.
    std::string name() const;

    /// Numeric offset added to part designators within this instance (e.g., R17 with offset 100 becomes R117).
    int offset() const;

    /// Sheet number (1-based) where this instance is placed.
    int sheet() const;

    /// X coordinate of the placement origin, in internal units.
    int x() const;

    /// Y coordinate of the placement origin, in internal units.
    int y() const;

    /// Frame column position (1-based), or ? if outside a frame or frame locations are not set.
    std::string column() const;

    /// Frame row position (A, B, C...), or ? if outside a frame or frame locations are not set.
    std::string row() const;

    ADSK_ELECTRON_MODULEINSTANCE_API static const char* classType();
    ADSK_ELECTRON_MODULEINSTANCE_API const char* objectType() const override;
    ADSK_ELECTRON_MODULEINSTANCE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_MODULEINSTANCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Module* module_raw() const = 0;
    virtual char* moduleVariant_raw() const = 0;
    virtual double angle_raw() const = 0;
    virtual bool mirror_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual int offset_raw() const = 0;
    virtual int sheet_raw() const = 0;
    virtual int x_raw() const = 0;
    virtual int y_raw() const = 0;
    virtual char* column_raw() const = 0;
    virtual char* row_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Module> ModuleInstance::module() const
{
    core::Ptr<Module> res = module_raw();
    return res;
}

inline std::string ModuleInstance::moduleVariant() const
{
    std::string res;

    char* p= moduleVariant_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline double ModuleInstance::angle() const
{
    double res = angle_raw();
    return res;
}

inline bool ModuleInstance::mirror() const
{
    bool res = mirror_raw();
    return res;
}

inline std::string ModuleInstance::name() const
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

inline int ModuleInstance::offset() const
{
    int res = offset_raw();
    return res;
}

inline int ModuleInstance::sheet() const
{
    int res = sheet_raw();
    return res;
}

inline int ModuleInstance::x() const
{
    int res = x_raw();
    return res;
}

inline int ModuleInstance::y() const
{
    int res = y_raw();
    return res;
}

inline std::string ModuleInstance::column() const
{
    std::string res;

    char* p= column_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ModuleInstance::row() const
{
    std::string res;

    char* p= row_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_MODULEINSTANCE_API