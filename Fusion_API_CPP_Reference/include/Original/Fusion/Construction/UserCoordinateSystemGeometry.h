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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_CPP__
# define ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API XI_EXPORT
# else
# define ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API
# endif
#else
# define ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
    class BRepFace;
    class Profile;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A transient object used to define and query the geometric input for a user coordinate system and the resulting coordinate
/// system it defines. New UserCoordinateSystemGeometry objects are created using the static create method and
/// are then used as input to the UserCoordinateSystems.createInput method.
class UserCoordinateSystemGeometry : public core::Base {
public:

    /// Creates a new transient UserCoordinateSystemGeometry object based on a Profile and a curve defining that profile.
    /// A UserCoordinateSystemGeometry object can be used to create a User Coordinate System.
    /// face : The planar BRepFace object.
    /// edge : A BRepEdge edge object that is one of the edges of the specified face. This argument can be
    /// null in the case where the keyPointType is CenterKeypoint indicating the center of the face
    /// is to be used. When an edge is used, the keyPointType specifies the position along the edge
    /// for the keypoint.
    /// keyPointType : Specifies the position along the edge where the joint keypoint will be located. For open edges
    /// this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For closed edges (i.e. circles), it
    /// must be CenterKeyPoint. When no edge is specified, it must be CenterKeyPoint indicating the center
    /// of area of the face is to be used.
    /// Returns the transient UserCoordinateSystemGeometry object that can be used to create a User Coordinate System or null in the case of a failure.
    static core::Ptr<UserCoordinateSystemGeometry> createByPlanarFace(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, UserCoordinateSystemKeyPointTypes keyPointType);

    /// Creates a new transient UserCoordinateSystemGeometry object based on a non-planar analytical BRepFace object. This is limited
    /// to cylinders, cones, spheres, and tori. A UserCoordinateSystemGeometry object can be used to create a User Coordinate System.
    /// face : The cylindrical, conical, spherical, or toroidal BRepFace object.
    /// keyPointType : Specifies the position relative to the input face where the joint keypoint will be located. For cylinders
    /// and cones this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For spheres and tori this must be
    /// CenterKeyPoint.
    /// Returns the transient UserCoordinateSystemGeometry object that can be used to create a User Coordinate System or null in the case of a failure.
    static core::Ptr<UserCoordinateSystemGeometry> createByNonPlanarFace(const core::Ptr<BRepFace>& face, UserCoordinateSystemKeyPointTypes keyPointType);

    /// Creates a new transient UserCoordinateSystemGeometry object based on a Profile and a curve defining that profile. A UserCoordinateSystemGeometry
    /// object can be used to create a User Coordinate System.
    /// profile : The Profile object.
    /// sketchCurve : A sketch curve that is part of the input profile. This argument can be
    /// null in the case where the keyPointType is CenterKeypoint indicating the center of the profile
    /// is to be used. When a curve is used, the keyPointType specifies the position along the curve
    /// for the keypoint.
    /// keyPointType : Specifies the position along the curve where the joint keypoint will be located. For open curves (lines, arcs, elliptical arcs, and open splines)
    /// this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For closed analytic (circles and ellipses), it
    /// must be CenterKeyPoint. When no curve is specified, it must be CenterKeyPoint indicating the center
    /// of area of the profile is to be used.
    /// Returns the transient UserCoordinateSystemGeometry object that can be used to create a User Coordinate System or null in the case of a failure.
    static core::Ptr<UserCoordinateSystemGeometry> createByProfile(const core::Ptr<Profile>& profile, const core::Ptr<SketchCurve>& sketchCurve, UserCoordinateSystemKeyPointTypes keyPointType);

    /// Creates a new transient UserCoordinateSystemGeometry object using a BRepEdge or SketchCurve as input. A UserCoordinateSystemGeometry
    /// object can be used to create a User Coordinate System.
    /// curve : Input BRepEdge or SketchCurve.
    /// keyPointType : The position on the curve where to position the joint coordinate system. For any open curves
    /// the valid types are StartKeyPoint, MiddleKeyPoint, CenterKeyPoint and EndKeyPoint. For circular and elliptical
    /// shaped curves the option is CenterKeyPoint. For closed spline curves either StartKeyPoint or
    /// EndKeyPoint can be used and the result is the same.
    /// Returns the transient UserCoordinateSystemGeometry object that can be used to create a User Coordinate System or null in the case of a failure.
    static core::Ptr<UserCoordinateSystemGeometry> createByCurve(const core::Ptr<core::Base>& curve, UserCoordinateSystemKeyPointTypes keyPointType);

    /// Creates a new transient UserCoordinateSystemGeometry object using a ConstructionPoint, SketchPoint or BRepVertex as input.
    /// A UserCoordinateSystemGeometry object can be used to create a User Coordinate System.
    /// point : The ConstructionPoint, SketchPoint or BRepVertex object.
    /// Returns the transient UserCoordinateSystemGeometry object that can be used to create a User Coordinate System or null in the case of a failure.
    static core::Ptr<UserCoordinateSystemGeometry> createByPoint(const core::Ptr<core::Base>& point);

    /// Returns the type of geometry this UserCoordinateSystemGeometry object represents.
    UserCoordinateSystemGeometryTypes geometryType() const;

    /// Returns the keypoint type this UserCoordinateSystemGeometry is using.
    UserCoordinateSystemKeyPointTypes keyPointType() const;

    /// The entity that's defining this user coordinate system geometry. This can be various types of geometry depending
    /// on how this coordinate system geometry is defined. The geometryType property indicates the type of geometry.
    core::Ptr<core::Base> entity() const;

    /// Returns the origin point that's been calculated for this user coordinate system geometry.
    core::Ptr<core::Point3D> origin() const;

    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static const char* classType();
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API const char* objectType() const override;
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static UserCoordinateSystemGeometry* createByPlanarFace_raw(BRepFace* face, BRepEdge* edge, UserCoordinateSystemKeyPointTypes keyPointType);
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static UserCoordinateSystemGeometry* createByNonPlanarFace_raw(BRepFace* face, UserCoordinateSystemKeyPointTypes keyPointType);
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static UserCoordinateSystemGeometry* createByProfile_raw(Profile* profile, SketchCurve* sketchCurve, UserCoordinateSystemKeyPointTypes keyPointType);
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static UserCoordinateSystemGeometry* createByCurve_raw(core::Base* curve, UserCoordinateSystemKeyPointTypes keyPointType);
    ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API static UserCoordinateSystemGeometry* createByPoint_raw(core::Base* point);
    virtual UserCoordinateSystemGeometryTypes geometryType_raw() const = 0;
    virtual UserCoordinateSystemKeyPointTypes keyPointType_raw() const = 0;
    virtual core::Base* entity_raw() const = 0;
    virtual core::Point3D* origin_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemGeometry::createByPlanarFace(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, UserCoordinateSystemKeyPointTypes keyPointType)
{
    core::Ptr<UserCoordinateSystemGeometry> res = createByPlanarFace_raw(face.get(), edge.get(), keyPointType);
    return res;
}

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemGeometry::createByNonPlanarFace(const core::Ptr<BRepFace>& face, UserCoordinateSystemKeyPointTypes keyPointType)
{
    core::Ptr<UserCoordinateSystemGeometry> res = createByNonPlanarFace_raw(face.get(), keyPointType);
    return res;
}

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemGeometry::createByProfile(const core::Ptr<Profile>& profile, const core::Ptr<SketchCurve>& sketchCurve, UserCoordinateSystemKeyPointTypes keyPointType)
{
    core::Ptr<UserCoordinateSystemGeometry> res = createByProfile_raw(profile.get(), sketchCurve.get(), keyPointType);
    return res;
}

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemGeometry::createByCurve(const core::Ptr<core::Base>& curve, UserCoordinateSystemKeyPointTypes keyPointType)
{
    core::Ptr<UserCoordinateSystemGeometry> res = createByCurve_raw(curve.get(), keyPointType);
    return res;
}

inline core::Ptr<UserCoordinateSystemGeometry> UserCoordinateSystemGeometry::createByPoint(const core::Ptr<core::Base>& point)
{
    core::Ptr<UserCoordinateSystemGeometry> res = createByPoint_raw(point.get());
    return res;
}

inline UserCoordinateSystemGeometryTypes UserCoordinateSystemGeometry::geometryType() const
{
    UserCoordinateSystemGeometryTypes res = geometryType_raw();
    return res;
}

inline UserCoordinateSystemKeyPointTypes UserCoordinateSystemGeometry::keyPointType() const
{
    UserCoordinateSystemKeyPointTypes res = keyPointType_raw();
    return res;
}

inline core::Ptr<core::Base> UserCoordinateSystemGeometry::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline core::Ptr<core::Point3D> UserCoordinateSystemGeometry::origin() const
{
    core::Ptr<core::Point3D> res = origin_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_USERCOORDINATESYSTEMGEOMETRY_API