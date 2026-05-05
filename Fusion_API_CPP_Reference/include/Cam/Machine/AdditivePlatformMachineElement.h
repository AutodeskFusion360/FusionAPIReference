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
#include "MachineElement.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_CPP__
# define ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace cam {

/// Machine element representing the additive platform settings.
class AdditivePlatformMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Usable platform size.
    /// Units are cm.
    core::Ptr<core::Point3D> size() const;
    bool size(const core::Ptr<core::Point3D>& value);

    /// Origin point specifying the platform coordinates that correspond to the origin of the platform mesh.
    /// Units are cm.
    core::Ptr<core::Point3D> origin() const;
    bool origin(const core::Ptr<core::Point3D>& value);

    /// Clearance height used for automatically arranging parts and suggested height for positioning part on the build platform.
    /// Units are cm.
    double clearance() const;
    bool clearance(double value);

    /// Clearance width used for automatically arranging parts which is the distance from the edges of the build platform.
    /// Units are cm.
    double frameWidth() const;
    bool frameWidth(double value);

    /// Clearance height used for automatically arranging parts which is the distance from the top of the build platform.
    /// Units are cm.
    double ceilingClearance() const;
    bool ceilingClearance(double value);

    /// Radius used to round the corners of the build platform.
    /// Units are cm.
    double cornerRadius() const;
    bool cornerRadius(double value);

    ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual core::Point3D* size_raw() const = 0;
    virtual bool size_raw(core::Point3D* value) = 0;
    virtual core::Point3D* origin_raw() const = 0;
    virtual bool origin_raw(core::Point3D* value) = 0;
    virtual double clearance_raw() const = 0;
    virtual bool clearance_raw(double value) = 0;
    virtual double frameWidth_raw() const = 0;
    virtual bool frameWidth_raw(double value) = 0;
    virtual double ceilingClearance_raw() const = 0;
    virtual bool ceilingClearance_raw(double value) = 0;
    virtual double cornerRadius_raw() const = 0;
    virtual bool cornerRadius_raw(double value) = 0;
};

// Inline wrappers

inline std::string AdditivePlatformMachineElement::staticTypeId()
{
    std::string res;

    char* p= staticTypeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Point3D> AdditivePlatformMachineElement::size() const
{
    core::Ptr<core::Point3D> res = size_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::size(const core::Ptr<core::Point3D>& value)
{
    return size_raw(value.get());
}

inline core::Ptr<core::Point3D> AdditivePlatformMachineElement::origin() const
{
    core::Ptr<core::Point3D> res = origin_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::origin(const core::Ptr<core::Point3D>& value)
{
    return origin_raw(value.get());
}

inline double AdditivePlatformMachineElement::clearance() const
{
    double res = clearance_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::clearance(double value)
{
    return clearance_raw(value);
}

inline double AdditivePlatformMachineElement::frameWidth() const
{
    double res = frameWidth_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::frameWidth(double value)
{
    return frameWidth_raw(value);
}

inline double AdditivePlatformMachineElement::ceilingClearance() const
{
    double res = ceilingClearance_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::ceilingClearance(double value)
{
    return ceilingClearance_raw(value);
}

inline double AdditivePlatformMachineElement::cornerRadius() const
{
    double res = cornerRadius_raw();
    return res;
}

inline bool AdditivePlatformMachineElement::cornerRadius(double value)
{
    return cornerRadius_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEPLATFORMMACHINEELEMENT_API