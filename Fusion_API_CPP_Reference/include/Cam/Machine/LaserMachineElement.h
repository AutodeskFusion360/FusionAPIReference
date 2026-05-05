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
# ifdef __COMPILING_ADSK_CAM_LASERMACHINEELEMENT_CPP__
# define ADSK_CAM_LASERMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_LASERMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_LASERMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Machine element representing a laser on a MPBF machine.
/// A machine can have multiple lasers and thus multiple LaserMachineElement elements.
class LaserMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Delete this laser element from the machine.
    void deleteMe();

    /// Name of this laser.
    std::string name() const;
    bool name(const std::string& value);

    /// Minimum reachable coordinate of the laser in cm.
    core::Ptr<core::Vector3D> minimumCoordinate() const;
    bool minimumCoordinate(const core::Ptr<core::Vector3D>& value);

    /// Maximum reachable coordinate of the laser in cm.
    core::Ptr<core::Vector3D> maximumCoordinate() const;
    bool maximumCoordinate(const core::Ptr<core::Vector3D>& value);

    ADSK_CAM_LASERMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_LASERMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_LASERMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_LASERMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_LASERMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual void deleteMe_raw() = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Vector3D* minimumCoordinate_raw() const = 0;
    virtual bool minimumCoordinate_raw(core::Vector3D* value) = 0;
    virtual core::Vector3D* maximumCoordinate_raw() const = 0;
    virtual bool maximumCoordinate_raw(core::Vector3D* value) = 0;
};

// Inline wrappers

inline std::string LaserMachineElement::staticTypeId()
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

inline void LaserMachineElement::deleteMe()
{
    deleteMe_raw();
}

inline std::string LaserMachineElement::name() const
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

inline bool LaserMachineElement::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Vector3D> LaserMachineElement::minimumCoordinate() const
{
    core::Ptr<core::Vector3D> res = minimumCoordinate_raw();
    return res;
}

inline bool LaserMachineElement::minimumCoordinate(const core::Ptr<core::Vector3D>& value)
{
    return minimumCoordinate_raw(value.get());
}

inline core::Ptr<core::Vector3D> LaserMachineElement::maximumCoordinate() const
{
    core::Ptr<core::Vector3D> res = maximumCoordinate_raw();
    return res;
}

inline bool LaserMachineElement::maximumCoordinate(const core::Ptr<core::Vector3D>& value)
{
    return maximumCoordinate_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_LASERMACHINEELEMENT_API