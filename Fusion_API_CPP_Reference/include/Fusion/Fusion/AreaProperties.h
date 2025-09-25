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
# ifdef __COMPILING_ADSK_FUSION_AREAPROPERTIES_CPP__
# define ADSK_FUSION_AREAPROPERTIES_API XI_EXPORT
# else
# define ADSK_FUSION_AREAPROPERTIES_API
# endif
#else
# define ADSK_FUSION_AREAPROPERTIES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// The Area properties of a sketch profile or planar surface.
class AreaProperties : public core::Base {
public:

    /// Gets the area in the square centimeters.
    double area() const;

    /// Gets the centroid where the units are centimeters.
    /// The Location is relative to the sketch origin for a profile or relative to the world coordinate system for a planar face.
    core::Ptr<core::Point3D> centroid() const;

    /// Gets the perimeter in centimeters.
    /// The perimeter is the sum of the length of all the curves or edges of the profile or planar surface
    double perimeter() const;

    /// Gets the angle of rotation of the principal axes.
    double rotationToPrincipal() const;

    /// Returns the accuracy that was used for the calculation.
    CalculationAccuracy accuracy() const;

    /// Method that returns the principal axes.
    /// xAxis : The output Vector3D object that indicates the direction of the x axis.
    /// yAxis : The output Vector3D object that indicates the direction of the y axis.
    /// Returns true if successful
    bool getPrincipalAxes(core::Ptr<core::Vector3D>& xAxis, core::Ptr<core::Vector3D>& yAxis) const;

    /// Method that, for a sketch, returns the moments of inertia about the sketch origin.
    /// For a planar face, this method returns the moments about the world coordinate system origin.
    /// Unit for returned values is kg*cm^2.
    /// ixx : Output Double that returns the XX partial moment.
    /// iyy : Output Double that returns the YY partial moment.
    /// izz : Output Double that returns the ZZ partial moment.
    /// ixy : Output Double that returns the XY partial moment.
    /// iyz : Output Double that returns the YZ partial moment.
    /// ixz : Output Double that returns the XZ partial moment.
    /// Returns true if successful
    bool getMomentsOfInertia(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const;

    /// Method that returns the moments of inertia about the centroid. Unit for returned values is kg*cm^2.
    /// ixx : Output Double that returns the XX partial moment.
    /// iyy : Output Double that returns the YY partial moment.
    /// izz : Output Double that returns the ZZ partial moment.
    /// ixy : Output Double that returns the XY partial moment.
    /// iyz : Output Double that returns the YZ partial moment.
    /// ixz : Output Double that returns the XZ partial moment.
    /// Returns true if successful
    bool getCentroidMomentsOfInertia(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const;

    /// Method that returns the moments of inertia about the principal axes. Unit for returned values is kg*cm^2.
    /// i1 : Output Double that specifies the first moment of inertia.
    /// i2 : Output Double that specifies the second moment of inertia.
    /// i3 : Output Double that specifies the third moment of inertia.
    /// Returns true if successful
    bool getPrincipalMomentsOfInertia(double& i1, double& i2, double& i3) const;

    /// Method that returns the radius of gyration about the principal axes. Unit for returned values is cm.
    /// kxx : Output Double that returns the X partial radius of gyration.
    /// kyy : Output Double that returns the Y partial radius of gyration.
    /// kzz : Output Double that returns the Z partial radius of gyration.
    /// Returns true if successful
    bool getRadiusOfGyration(double& kxx, double& kyy, double& kzz) const;

    ADSK_FUSION_AREAPROPERTIES_API static const char* classType();
    ADSK_FUSION_AREAPROPERTIES_API const char* objectType() const override;
    ADSK_FUSION_AREAPROPERTIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_AREAPROPERTIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double area_raw() const = 0;
    virtual core::Point3D* centroid_raw() const = 0;
    virtual double perimeter_raw() const = 0;
    virtual double rotationToPrincipal_raw() const = 0;
    virtual CalculationAccuracy accuracy_raw() const = 0;
    virtual bool getPrincipalAxes_raw(core::Vector3D*& xAxis, core::Vector3D*& yAxis) const = 0;
    virtual bool getMomentsOfInertia_raw(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const = 0;
    virtual bool getCentroidMomentsOfInertia_raw(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const = 0;
    virtual bool getPrincipalMomentsOfInertia_raw(double& i1, double& i2, double& i3) const = 0;
    virtual bool getRadiusOfGyration_raw(double& kxx, double& kyy, double& kzz) const = 0;
};

// Inline wrappers

inline double AreaProperties::area() const
{
    double res = area_raw();
    return res;
}

inline core::Ptr<core::Point3D> AreaProperties::centroid() const
{
    core::Ptr<core::Point3D> res = centroid_raw();
    return res;
}

inline double AreaProperties::perimeter() const
{
    double res = perimeter_raw();
    return res;
}

inline double AreaProperties::rotationToPrincipal() const
{
    double res = rotationToPrincipal_raw();
    return res;
}

inline CalculationAccuracy AreaProperties::accuracy() const
{
    CalculationAccuracy res = accuracy_raw();
    return res;
}

inline bool AreaProperties::getPrincipalAxes(core::Ptr<core::Vector3D>& xAxis, core::Ptr<core::Vector3D>& yAxis) const
{
    core::Vector3D* xAxis_ = nullptr;
    core::Vector3D* yAxis_ = nullptr;

    bool res = getPrincipalAxes_raw(xAxis_, yAxis_);
    xAxis = xAxis_;
    yAxis = yAxis_;
    return res;
}

inline bool AreaProperties::getMomentsOfInertia(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const
{
    bool res = getMomentsOfInertia_raw(ixx, iyy, izz, ixy, iyz, ixz);
    return res;
}

inline bool AreaProperties::getCentroidMomentsOfInertia(double& ixx, double& iyy, double& izz, double& ixy, double& iyz, double& ixz) const
{
    bool res = getCentroidMomentsOfInertia_raw(ixx, iyy, izz, ixy, iyz, ixz);
    return res;
}

inline bool AreaProperties::getPrincipalMomentsOfInertia(double& i1, double& i2, double& i3) const
{
    bool res = getPrincipalMomentsOfInertia_raw(i1, i2, i3);
    return res;
}

inline bool AreaProperties::getRadiusOfGyration(double& kxx, double& kyy, double& kzz) const
{
    bool res = getRadiusOfGyration_raw(kxx, kyy, kzz);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_AREAPROPERTIES_API