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
# ifdef __COMPILING_ADSK_ELECTRON_DEVICESET_CPP__
# define ADSK_ELECTRON_DEVICESET_API XI_EXPORT
# else
# define ADSK_ELECTRON_DEVICESET_API
# endif
#else
# define ADSK_ELECTRON_DEVICESET_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Area;
    class Devices;
    class Gates;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Definition of a device set in a library. Groups devices with different packages but the same symbol and gate configuration.
class DeviceSet : public EcadObject {
public:

    /// Name of the library where this device set is defined.
    std::string library() const;

    /// Assigned name of this device set.
    std::string name() const;

    /// Human-readable description of this device set.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// Prefix used for part designators (e.g., R for resistors).
    std::string prefix() const;

    /// True if this device set allows user-defined values; false if values are fixed.
    bool userValue() const;

    /// Library URN.
    std::string libraryUrn() const;

    /// Version number of the source library.
    int libraryVersion() const;

    /// True if this device set has been locally modified.
    bool locallyModified() const;

    /// True if the source library has been locally modified.
    bool libraryLocallyModified() const;

    /// DeviceSet URN.
    std::string urn() const;

    /// Bounding area of this device set.
    core::Ptr<Area> area() const;

    /// Gates (logical sub-units) in this device set.
    core::Ptr<Gates> gates() const;

    /// Gets the collection of devices in this deviceset.
    core::Ptr<Devices> devices() const;

    ADSK_ELECTRON_DEVICESET_API static const char* classType();
    ADSK_ELECTRON_DEVICESET_API const char* objectType() const override;
    ADSK_ELECTRON_DEVICESET_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_DEVICESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* library_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual char* prefix_raw() const = 0;
    virtual bool userValue_raw() const = 0;
    virtual char* libraryUrn_raw() const = 0;
    virtual int libraryVersion_raw() const = 0;
    virtual bool locallyModified_raw() const = 0;
    virtual bool libraryLocallyModified_raw() const = 0;
    virtual char* urn_raw() const = 0;
    virtual Area* area_raw() const = 0;
    virtual Gates* gates_raw() const = 0;
    virtual Devices* devices_raw() const = 0;
};

// Inline wrappers

inline std::string DeviceSet::library() const
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

inline std::string DeviceSet::name() const
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

inline std::string DeviceSet::description() const
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

inline std::string DeviceSet::headline() const
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

inline std::string DeviceSet::prefix() const
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

inline bool DeviceSet::userValue() const
{
    bool res = userValue_raw();
    return res;
}

inline std::string DeviceSet::libraryUrn() const
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

inline int DeviceSet::libraryVersion() const
{
    int res = libraryVersion_raw();
    return res;
}

inline bool DeviceSet::locallyModified() const
{
    bool res = locallyModified_raw();
    return res;
}

inline bool DeviceSet::libraryLocallyModified() const
{
    bool res = libraryLocallyModified_raw();
    return res;
}

inline std::string DeviceSet::urn() const
{
    std::string res;

    char* p= urn_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Area> DeviceSet::area() const
{
    core::Ptr<Area> res = area_raw();
    return res;
}

inline core::Ptr<Gates> DeviceSet::gates() const
{
    core::Ptr<Gates> res = gates_raw();
    return res;
}

inline core::Ptr<Devices> DeviceSet::devices() const
{
    core::Ptr<Devices> res = devices_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_DEVICESET_API