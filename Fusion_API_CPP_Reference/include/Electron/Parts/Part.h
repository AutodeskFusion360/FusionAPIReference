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
# ifdef __COMPILING_ADSK_ELECTRON_PART_CPP__
# define ADSK_ELECTRON_PART_API XI_EXPORT
# else
# define ADSK_ELECTRON_PART_API
# endif
#else
# define ADSK_ELECTRON_PART_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Device;
    class DeviceSet;
    class EcadAttributes;
    class Instances;
    class Package3d;
    class Variants;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Component definition in a schematic sheet or module; has a name, value, and references a device.
class Part : public EcadObject {
public:

    /// Reference designator of this part.
    std::string name() const;

    /// Value of this part.
    std::string value() const;

    /// Placed instances (component references) of this part on schematic sheets.
    core::Ptr<Instances> instances() const;

    /// Per-assembly-variant configurations of this part (populate, technology, value per variant).
    core::Ptr<Variants> variants() const;

    /// Attributes associated with this part.
    core::Ptr<EcadAttributes> attributes() const;

    /// Device (package and technology combination) associated with this part.
    core::Ptr<Device> device() const;

    /// Device set (component family) associated with this part.
    core::Ptr<DeviceSet> deviceset() const;

    /// 3D package associated with this part (can be null).
    core::Ptr<Package3d> package3d() const;

    ADSK_ELECTRON_PART_API static const char* classType();
    ADSK_ELECTRON_PART_API const char* objectType() const override;
    ADSK_ELECTRON_PART_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_PART_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual Instances* instances_raw() const = 0;
    virtual Variants* variants_raw() const = 0;
    virtual EcadAttributes* attributes_raw() const = 0;
    virtual Device* device_raw() const = 0;
    virtual DeviceSet* deviceset_raw() const = 0;
    virtual Package3d* package3d_raw() const = 0;
};

// Inline wrappers

inline std::string Part::name() const
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

inline std::string Part::value() const
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

inline core::Ptr<Instances> Part::instances() const
{
    core::Ptr<Instances> res = instances_raw();
    return res;
}

inline core::Ptr<Variants> Part::variants() const
{
    core::Ptr<Variants> res = variants_raw();
    return res;
}

inline core::Ptr<EcadAttributes> Part::attributes() const
{
    core::Ptr<EcadAttributes> res = attributes_raw();
    return res;
}

inline core::Ptr<Device> Part::device() const
{
    core::Ptr<Device> res = device_raw();
    return res;
}

inline core::Ptr<DeviceSet> Part::deviceset() const
{
    core::Ptr<DeviceSet> res = deviceset_raw();
    return res;
}

inline core::Ptr<Package3d> Part::package3d() const
{
    core::Ptr<Package3d> res = package3d_raw();
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_PART_API