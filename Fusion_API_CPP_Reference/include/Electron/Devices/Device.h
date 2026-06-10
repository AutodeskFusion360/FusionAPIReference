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
# ifdef __COMPILING_ADSK_ELECTRON_DEVICE_CPP__
# define ADSK_ELECTRON_DEVICE_API XI_EXPORT
# else
# define ADSK_ELECTRON_DEVICE_API
# endif
#else
# define ADSK_ELECTRON_DEVICE_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Area;
    class Gates;
    class Package;
    class Packages3d;
    class Technologies;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Package variant within a device set; combines a symbol configuration with a specific package.
class Device : public EcadObject {
public:

    /// User-assigned name of this device.
    std::string name() const;

    /// Collection of technologies for this device.
    core::Ptr<Technologies> technologies() const;

    /// Human-readable description of this device.
    std::string description() const;

    /// First line of description (headline).
    std::string headline() const;

    /// Name of the library where this device is defined.
    std::string library() const;

    /// Library URN identifier.
    std::string libraryUrn() const;

    /// Version number of the source library.
    int libraryVersion() const;

    /// Prefix used for part designators.
    std::string prefix() const;

    /// User value setting ("On" or "Off").
    std::string value() const;

    /// Package associated with this device (can be null).
    core::Ptr<Package> package() const;

    /// Bounding area of this device.
    core::Ptr<Area> area() const;

    /// Collection of gates in this device.
    core::Ptr<Gates> gates() const;

    /// 3D packages associated with this device.
    core::Ptr<Packages3d> packages3d() const;

    ADSK_ELECTRON_DEVICE_API static const char* classType();
    ADSK_ELECTRON_DEVICE_API const char* objectType() const override;
    ADSK_ELECTRON_DEVICE_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_DEVICE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual Technologies* technologies_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* library_raw() const = 0;
    virtual char* libraryUrn_raw() const = 0;
    virtual int libraryVersion_raw() const = 0;
    virtual char* prefix_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual Package* package_raw() const = 0;
    virtual Area* area_raw() const = 0;
    virtual Gates* gates_raw() const = 0;
    virtual Packages3d* packages3d_raw() const = 0;
};

// Inline wrappers

inline std::string Device::name() const
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

inline core::Ptr<Technologies> Device::technologies() const
{
    core::Ptr<Technologies> res = technologies_raw();
    return res;
}

inline std::string Device::description() const
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

inline std::string Device::headline() const
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

inline std::string Device::library() const
{
    std::string res;

    char* p= library_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Device::libraryUrn() const
{
    std::string res;

    char* p= libraryUrn_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Device::libraryVersion() const
{
    int res = libraryVersion_raw();
    return res;
}

inline std::string Device::prefix() const
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

inline std::string Device::value() const
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

inline core::Ptr<Package> Device::package() const
{
    core::Ptr<Package> res = package_raw();
    return res;
}

inline core::Ptr<Area> Device::area() const
{
    core::Ptr<Area> res = area_raw();
    return res;
}

inline core::Ptr<Gates> Device::gates() const
{
    core::Ptr<Gates> res = gates_raw();
    return res;
}

inline core::Ptr<Packages3d> Device::packages3d() const
{
    core::Ptr<Packages3d> res = packages3d_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_DEVICE_API