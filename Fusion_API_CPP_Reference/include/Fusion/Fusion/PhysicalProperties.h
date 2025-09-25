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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PHYSICALPROPERTIES_CPP__
# define ADSK_FUSION_PHYSICALPROPERTIES_API XI_EXPORT
# else
# define ADSK_FUSION_PHYSICALPROPERTIES_API
# endif
#else
# define ADSK_FUSION_PHYSICALPROPERTIES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// The physical properties of a Component, Occurrence or BRepBody
class PhysicalProperties : public core::Base {
public:

    /// Gets the area in square centimeters.
    double area() const;

    /// Gets the density in kilograms per cubic centimeter.
    double density() const;

    /// Gets the mass in kilograms.
    double mass() const;

    /// Gets the volume in the cubic centimeters.
    double volume() const;

    /// Returns the accuracy that was used for the calculation.
    CalculationAccuracy accuracy() const;

    /// Returns the center of mass position
    core::Ptr<core::Point3D> centerOfMass() const;

    /// Method that returns the principal axes.
    /// xAxis : The output Vector3D object that indicates the direction of the x axis.
    /// yAxis : The output Vector3D object that indicates the direction of the y axis.
    /// zAxis : The output Vector3D object that indicates the direction of the z axis.
    /// Returns true if successful
    bool getPrincipalAxes(core::Ptr<core::Vector3D>& xAxis, core::Ptr<core::Vector3D>& yAxis, core::Ptr<core::Vector3D>& zAxis) const;

    /// Method that returns the moments of inertia about the principal axes. Unit for returned values is kg*cm^2.
    /// i1 : Output Double that specifies the first moment of inertia.
    /// i2 : Output Double that specifies the second moment of inertia.
    /// i3 : Output Double that specifies the third moment of inertia.
    /// Returns true if successful
    bool getPrincipalMomentsOfInertia(double& i1, double& i2, double& i3) const;

    /// Method that returns the radius of gyration about the principal axes. Unit for returned values is cm.
    /// kx : Output Double that returns the X partial radius of gyration.
    /// ky : Output Double that returns the Y partial radius of gyration.
    /// kz : Output Double that returns the Z partial radius of gyration.
    /// Returns true if successful
    bool getRadiusOfGyration(double& kx, double& ky, double& kz) const;

    /// Gets the rotation from the world coordinate system of the target to the principal coordinate system.
    /// rx : 
    /// ry : 
    /// rz : 
    /// Returns true if successful
    bool getRotationToPrincipal(double& rx, double& ry, double& rz) const;

    /// Method that gets the moment of inertia about the world coordinate system.
    /// Unit for returned values is kg*cm^2.
    /// xx : Output Double that returns the XX partial moment.
    /// yy : Output Double that returns the YY partial moment.
    /// zz : Output Double that returns the ZZ partial moment.
    /// xy : Output Double that returns the XY partial moment.
    /// yz : Output Double that returns the YZ partial moment.
    /// xz : Output Double that returns the XZ partial moment.
    /// Returns true if successful
    bool getXYZMomentsOfInertia(double& xx, double& yy, double& zz, double& xy, double& yz, double& xz) const;

    ADSK_FUSION_PHYSICALPROPERTIES_API static const char* classType();
    ADSK_FUSION_PHYSICALPROPERTIES_API const char* objectType() const override;
    ADSK_FUSION_PHYSICALPROPERTIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PHYSICALPROPERTIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double area_raw() const = 0;
    virtual double density_raw() const = 0;
    virtual double mass_raw() const = 0;
    virtual double volume_raw() const = 0;
    virtual CalculationAccuracy accuracy_raw() const = 0;
    virtual core::Point3D* centerOfMass_raw() const = 0;
    virtual bool getPrincipalAxes_raw(core::Vector3D*& xAxis, core::Vector3D*& yAxis, core::Vector3D*& zAxis) const = 0;
    virtual bool getPrincipalMomentsOfInertia_raw(double& i1, double& i2, double& i3) const = 0;
    virtual bool getRadiusOfGyration_raw(double& kx, double& ky, double& kz) const = 0;
    virtual bool getRotationToPrincipal_raw(double& rx, double& ry, double& rz) const = 0;
    virtual bool getXYZMomentsOfInertia_raw(double& xx, double& yy, double& zz, double& xy, double& yz, double& xz) const = 0;
};

// Inline wrappers

inline double PhysicalProperties::area() const
{
    double res = area_raw();
    return res;
}

inline double PhysicalProperties::density() const
{
    double res = density_raw();
    return res;
}

inline double PhysicalProperties::mass() const
{
    double res = mass_raw();
    return res;
}

inline double PhysicalProperties::volume() const
{
    double res = volume_raw();
    return res;
}

inline CalculationAccuracy PhysicalProperties::accuracy() const
{
    CalculationAccuracy res = accuracy_raw();
    return res;
}

inline core::Ptr<core::Point3D> PhysicalProperties::centerOfMass() const
{
    core::Ptr<core::Point3D> res = centerOfMass_raw();
    return res;
}

inline bool PhysicalProperties::getPrincipalAxes(core::Ptr<core::Vector3D>& xAxis, core::Ptr<core::Vector3D>& yAxis, core::Ptr<core::Vector3D>& zAxis) const
{
    core::Vector3D* xAxis_ = nullptr;
    core::Vector3D* yAxis_ = nullptr;
    core::Vector3D* zAxis_ = nullptr;

    bool res = getPrincipalAxes_raw(xAxis_, yAxis_, zAxis_);
    xAxis = xAxis_;
    yAxis = yAxis_;
    zAxis = zAxis_;
    return res;
}

inline bool PhysicalProperties::getPrincipalMomentsOfInertia(double& i1, double& i2, double& i3) const
{
    bool res = getPrincipalMomentsOfInertia_raw(i1, i2, i3);
    return res;
}

inline bool PhysicalProperties::getRadiusOfGyration(double& kx, double& ky, double& kz) const
{
    bool res = getRadiusOfGyration_raw(kx, ky, kz);
    return res;
}

inline bool PhysicalProperties::getRotationToPrincipal(double& rx, double& ry, double& rz) const
{
    bool res = getRotationToPrincipal_raw(rx, ry, rz);
    return res;
}

inline bool PhysicalProperties::getXYZMomentsOfInertia(double& xx, double& yy, double& zz, double& xy, double& yz, double& xz) const
{
    bool res = getXYZMomentsOfInertia_raw(xx, yy, zz, xy, yz, xz);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PHYSICALPROPERTIES_API