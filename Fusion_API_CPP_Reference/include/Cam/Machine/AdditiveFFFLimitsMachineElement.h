//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_CPP__
# define ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace cam {

/// Machine element representing limits for fused filament fabrication (FFF) machine motion and temperatures.
class AdditiveFFFLimitsMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Position of the machine home location.
    core::Ptr<core::Point3D> homePosition() const;
    bool homePosition(const core::Ptr<core::Point3D>& value);

    /// Position machine moves to when "parked".
    core::Ptr<core::Point3D> parkPosition() const;
    bool parkPosition(const core::Ptr<core::Point3D>& value);

    /// Maximum bed temperature in degrees C.
    double maximumBedTemperature() const;
    bool maximumBedTemperature(double value);

    /// Maximum supported speed for motion in the X or Y axes in cm/s.
    double maximumXYSpeed() const;
    bool maximumXYSpeed(double value);

    /// Maximum supported speed for motion in the Z axis in cm/s.
    double maximumZSpeed() const;
    bool maximumZSpeed(double value);

    /// Maximum supported acceleration for motion in the X or Y axes in cm/s^2.
    double maximumXYAcceleration() const;
    bool maximumXYAcceleration(double value);

    /// Maximum supported acceleration for motion in the Z axis in cm/s^2.
    double maximumZAcceleration() const;
    bool maximumZAcceleration(double value);

    ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual core::Point3D* homePosition_raw() const = 0;
    virtual bool homePosition_raw(core::Point3D* value) = 0;
    virtual core::Point3D* parkPosition_raw() const = 0;
    virtual bool parkPosition_raw(core::Point3D* value) = 0;
    virtual double maximumBedTemperature_raw() const = 0;
    virtual bool maximumBedTemperature_raw(double value) = 0;
    virtual double maximumXYSpeed_raw() const = 0;
    virtual bool maximumXYSpeed_raw(double value) = 0;
    virtual double maximumZSpeed_raw() const = 0;
    virtual bool maximumZSpeed_raw(double value) = 0;
    virtual double maximumXYAcceleration_raw() const = 0;
    virtual bool maximumXYAcceleration_raw(double value) = 0;
    virtual double maximumZAcceleration_raw() const = 0;
    virtual bool maximumZAcceleration_raw(double value) = 0;
};

// Inline wrappers

inline std::string AdditiveFFFLimitsMachineElement::staticTypeId()
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

inline core::Ptr<core::Point3D> AdditiveFFFLimitsMachineElement::homePosition() const
{
    core::Ptr<core::Point3D> res = homePosition_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::homePosition(const core::Ptr<core::Point3D>& value)
{
    return homePosition_raw(value.get());
}

inline core::Ptr<core::Point3D> AdditiveFFFLimitsMachineElement::parkPosition() const
{
    core::Ptr<core::Point3D> res = parkPosition_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::parkPosition(const core::Ptr<core::Point3D>& value)
{
    return parkPosition_raw(value.get());
}

inline double AdditiveFFFLimitsMachineElement::maximumBedTemperature() const
{
    double res = maximumBedTemperature_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::maximumBedTemperature(double value)
{
    return maximumBedTemperature_raw(value);
}

inline double AdditiveFFFLimitsMachineElement::maximumXYSpeed() const
{
    double res = maximumXYSpeed_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::maximumXYSpeed(double value)
{
    return maximumXYSpeed_raw(value);
}

inline double AdditiveFFFLimitsMachineElement::maximumZSpeed() const
{
    double res = maximumZSpeed_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::maximumZSpeed(double value)
{
    return maximumZSpeed_raw(value);
}

inline double AdditiveFFFLimitsMachineElement::maximumXYAcceleration() const
{
    double res = maximumXYAcceleration_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::maximumXYAcceleration(double value)
{
    return maximumXYAcceleration_raw(value);
}

inline double AdditiveFFFLimitsMachineElement::maximumZAcceleration() const
{
    double res = maximumZAcceleration_raw();
    return res;
}

inline bool AdditiveFFFLimitsMachineElement::maximumZAcceleration(double value)
{
    return maximumZAcceleration_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFFFLIMITSMACHINEELEMENT_API