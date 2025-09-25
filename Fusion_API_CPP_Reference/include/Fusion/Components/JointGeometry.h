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
# ifdef __COMPILING_ADSK_FUSION_JOINTGEOMETRY_CPP__
# define ADSK_FUSION_JOINTGEOMETRY_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTGEOMETRY_API
# endif
#else
# define ADSK_FUSION_JOINTGEOMETRY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepEdge;
    class BRepFace;
    class Profile;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// A transient object used to define and query the geometric input of a joint and the resulting coordinate
/// system it defines. New JointGeometry objects are created using its various static create methods and
/// are then used as input to the Joints.createInput method.
class JointGeometry : public core::Base {
public:

    /// Creates a new transient JointGeometry object based on a planar BRepFace object. A JointGeometry
    /// object can be used to create a joint or joint origin.
    /// face : The planar BRepFace object
    /// edge : A BRepEdge edge object that is one of the edges of the specified face. This argument can be
    /// null in the case where the keyPointType is CenterKeypoint indicating the center of the face
    /// is to be used. When an edge is used, the keyPointType specifies the position along the edge
    /// for the keypoint.
    /// keyPointType : Specifies the position along the edge where the joint keypoint will be located. For open edges
    /// this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For closed edges (i.e. circles), it
    /// must be CenterKeyPoint. When no edge is specified, it must be CenterKeyPoint indicating the center
    /// of area of the face is to be used.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByPlanarFace(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, JointKeyPointTypes keyPointType);

    /// Creates a new transient JointGeometry object based on a non-planar analytical BRepFace object. This is limited
    /// to cylinders, cones, spheres, and tori. A JointGeometry object can be used to create a joint or joint origin.
    /// face : The cylindrical, conical, spherical, or toroidal BRepFace object.
    /// keyPointType : Specifies the position relative to the input face where the joint keypoint will be located. For cylinders
    /// and cones this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For spheres and tori this must be
    /// CenterKeyPoint.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByNonPlanarFace(const core::Ptr<BRepFace>& face, JointKeyPointTypes keyPointType);

    /// Creates a new transient JointGeometry object based on a planar BRepFace object. A JointGeometry
    /// object can be used to create a joint or joint origin.
    /// profile : The Profile object.
    /// sketchCurve : A sketch curve that is part of the input profile. This argument can be
    /// null in the case where the keyPointType is CenterKeypoint indicating the center of the profile
    /// is to be used. When a curve is used, the keyPointType specifies the position along the curve
    /// for the keypoint.
    /// keyPointType : Specifies the position along the curve where the joint keypoint will be located. For open curves (lines, arcs, elliptical arcs, and open splines)
    /// this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. For closed analytic (circles and ellipses), it
    /// must be CenterKeyPoint. When no curve is specified, it must be CenterKeyPoint indicating the center
    /// of area of the profile is to be used.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByProfile(const core::Ptr<Profile>& profile, const core::Ptr<SketchCurve>& sketchCurve, JointKeyPointTypes keyPointType);

    /// Creates a new transient JointGeometry object using a BRepEdge or SketchCurve as input. A JointGeometry
    /// object can be used to create a joint or joint origin.
    /// curve : Input BRepEdge or SketchCurve.
    /// keyPointType : The position on the curve where to position the joint coordinate system. For any open curves
    /// the valid types are StartKeyPoint, MiddleKeyPoint, CenterKeyPoint and EndKeyPoint. For circular and elliptical
    /// shaped curves the option is CenterKeyPoint. For closed spline curves either StartKeyPoint or
    /// EndKeyPoint can be used and the result is the same.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByCurve(const core::Ptr<core::Base>& curve, JointKeyPointTypes keyPointType);

    /// Creates a new transient JointGeometry object using a ConstructionPoint, SketchPoint or BRepVertex as input.
    /// A JointGeometry object can be used to create a joint or joint origin.
    /// point : The ConstructionPoint, SketchPoint or BRepVertex object.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByPoint(const core::Ptr<core::Base>& point);

    /// Returns the type of geometry this JointGeometry object represents.
    JointGeometryTypes geometryType() const;

    /// Returns the keypoint type this JointGeometry is using.
    JointKeyPointTypes keyPointType() const;

    /// The first entity that's defining this joint geometry. This can be various types of geometry depending
    /// on how this joint geometry is defined. The geometryType property indicates how this joint geometry is
    /// defined a provides a clue about the type of geometry to expect back from this property.
    core::Ptr<core::Base> entityOne() const;

    /// This is the second entity that defines this joint geometry. This isn't used for all joint geometry types
    /// and will return null in the cases where it's not used. A second geometry is used in the case where the geometryType
    /// property returns JointProfileGeometry, JointPlanarBRepFaceGeometry, JointBetweenTwoFacesGeometry or JointByTwoEdgeIntersectionGeometry.
    core::Ptr<core::Base> entityTwo() const;

    /// Returns the origin point that's been calculated for this joint geometry.
    core::Ptr<core::Point3D> origin() const;

    /// Returns the direction of the primary axis that's been calculated for this joint geometry.
    /// Conceptually, this is the Z-axis of the computed coordinate system.
    core::Ptr<core::Vector3D> primaryAxisVector() const;

    /// Returns the direction of the secondary axis that's been calculated for this joint geometry.
    /// Conceptually, this is the X-axis of the computed coordinate system.
    core::Ptr<core::Vector3D> secondaryAxisVector() const;

    /// Returns the direction of the third axis that's been calculated for this joint geometry.
    /// Conceptually, this is the Y-axis of the computed coordinate system.
    core::Ptr<core::Vector3D> thirdAxisVector() const;

    /// Creates a new transient JointGeometry object based on a plane bisecting the two input planes.
    /// planeOne : The first planar entity that the joint origin will be created between. This can be a planar BRepFace
    /// or a ConstructionPlane object.
    /// planeTwo : The second planar entity that the joint origin will be created between. This can be a planar BRepFace
    /// or a ConstructionPlane object.
    /// entityOne : Specifies the entity that is used to define the keypoint. This can be many types of geometry including
    /// edges, planar and non-planar faces, profiles, and sketch geometry.
    /// entityTwo : If the entityOne argument is a planar BRepFace or a Profile, then this argument specifies either
    /// an edge on the face or a sketch curve on the profile. For a planar face this argument is optional in the
    /// case where the keyPointType argument is CenterKeyPoint indicating the center of area of the face is to be used.
    /// keyPointType : Specifies the position on the keyPointGeometry where the keypoint will be defined. This keypoint is then
    /// projected onto the plane to define the position of the joint geometry.
    /// 
    /// The values that are valid for this argument depend on the type of geometry specified for the geometry and edgeOrCurve
    /// arguments.
    /// 
    /// If the geometry argument is a planar face and the edgeOrCurve argument is an open BRepEdge object
    /// then this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. If the geometry argument is a planar face and the edgeOrCurve argument
    /// is a closed BRepEdge object (i.e. circles), it must be CenterKeyPoint. If the geometry argument is a planar face and
    /// the edgeOrCurve argument is null, then this must be CenterKeyPoint indicating the center of area of the face.
    /// 
    /// If the geometry argument is a non-planar face (cylinder, cone, sphere, or torus) this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint
    /// for cylinders and cones but must be CenterKeyPoint for spheres and tori. The edgeOrCurve argument is ignored in this case.
    /// 
    /// If the geometry argument is a profile and the edgeOrCurve argument is null this can be CenterKeyPoint indicating the center of area
    /// of the profile. If the geometry argument is a profile and the edgeOrCurve argument is an open sketch curve on the profile
    /// then this can be StartKeyPoint, MiddleKeyPoint, or EndKeyPoint. If the geometry argument is a profile and the edgeOrCurve argument
    /// is a closed sketch curve (i.e. circles), it must be CenterKeyPoint.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByBetweenTwoPlanes(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& entityOne, const core::Ptr<core::Base>& entityTwo, JointKeyPointTypes keyPointType);

    /// Returns the first plane for joint geometry that is defined between two planes. Returns null in all other cases.
    core::Ptr<core::Base> planeOne() const;

    /// Returns the second plane for joint geometry that is defined between two planes. Returns null in all other cases.
    core::Ptr<core::Base> planeTwo() const;

    /// Creates a new transient JointGeometry object that is positioned at the intersection of the two input linear BRepEdge objects.
    /// edgeOne : The first linear BRepEdge object.
    /// edgeTwo : The second linear BRepEdge object. This edge must exist either on the same body as edgeOne or on a body in the same component as edgeOne.
    /// edgeOne and edgeTwo must also both lie on the same plane and must intersect, they cannot be parallel.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByTwoEdgeIntersection(const core::Ptr<BRepEdge>& edgeOne, const core::Ptr<BRepEdge>& edgeTwo);

    /// Creates a new transient JointGeometry object based on a cylinder or cone BRepFace object.
    /// face : The cylindrical or conical BRepFace object.
    /// angle : Specifies the angle relative to the parameterization of the input face. The zero, or start angle, is where the v parameter of the
    /// cylinder is zero. This can be determined by using the getPointAtParameter method of the SurfaceEvaluator object obtained from the
    /// evaluator property of the BRepFace object. The possible values can be StartJointQuadrantAngleType, QuarterJointQuadrantAngleType,
    /// MiddleJointQuadrantAngleType or ThirdQuarterJointQuadrantAngleType.
    /// height : Specifies the vertical position relative to the bottom of the cylinder at the given angle. The possible values can be StartKeyPoint,
    /// MiddleKeyPoint or EndKeyPoint.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByCylinderOrConeFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes angle, JointKeyPointTypes height);

    /// Creates a new transient JointGeometry object based on a sphere BRepFace object.
    /// face : The sphere BRepFace object.
    /// azimuthAngle : Specifies the azimuth angle relative to the v parameterization of the input face. The zero, or start angle, is where the v parameter
    /// of the sphere is zero. This can be determined by using the getPointAtParameter method of the SurfaceEvaluator object obtained from
    /// the evaluator property of the BRepFace object. The possible values can be StartJointQuadrantAngleType, QuarterJointQuadrantAngleType,
    /// MiddleJointQuadrantAngleType or ThirdQuarterJointQuadrantAngleType.
    /// polarAngle : Specifies the polar angle relative to the u parameterization of the input face. The zero, or start angle, is where the u parameter
    /// of the sphere is zero. This can be determined by using the getPointAtParameter method of the SurfaceEvaluator object obtained from
    /// the evaluator property of the BRepFace object. The possible values can be StartKeyPoint for the north pole, MiddleKeyPoint for
    /// points on the equator, or EndKeyPoint for the south pole.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createBySphereFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes azimuthAngle, JointKeyPointTypes polarAngle);

    /// Creates a new transient JointGeometry object based on a torus BRepFace object.
    /// face : The torus BRepFace object.
    /// azimuthAngle : Specifies the azimuth angle relative to the v parameterization of the input face. The zero, or start angle, is where the v parameter
    /// of the sphere is zero. This can be determined by using the getPointAtParameter method of the SurfaceEvaluator object obtained from
    /// the evaluator property of the BRepFace object. The possible values can be StartJointQuadrantAngleType, QuarterJointQuadrantAngleType,
    /// MiddleJointQuadrantAngleType or ThirdQuarterJointQuadrantAngleType.
    /// sectionAngle : Specifies the angle relative to the start point of the section circle at give azimuth angle. The possible values can be
    /// StartJointQuadrantAngleType, QuarterJointQuadrantAngleType, MiddleJointQuadrantAngleType or ThirdQuarterJointQuadrantAngleType.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByTorusFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes azimuthAngle, JointQuadrantAngleTypes sectionAngle);

    /// Creates a new transient JointGeometry object based on a spline BRepFace object.
    /// face : The spline BRepFace object.
    /// paramU : Specifies the u parameter of the input spline face where the joint keypoint will be located. The possible values
    /// can be StartKeyPoint, MiddleKeyPoint or EndKeyPoint.
    /// paramV : Specifies the v parameter of the input spline face where the joint keypoint will be located. The possible values
    /// can be StartKeyPoint, MiddleKeyPoint or EndKeyPoint.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createBySplineFace(const core::Ptr<BRepFace>& face, JointKeyPointTypes paramU, JointKeyPointTypes paramV);

    /// Creates a new transient JointGeometry object based on a BRepFace object as well as a BRepEdge object which is on the BRepFace.
    /// face : The cylindrical, conical, spherical, toroidal or spline BRepFace object.
    /// edge : A BRepEdge object that is one of the edges on the selected face.
    /// edgePointType : Specifies the position along the edge where the joint keypoint will be located. The possible values depend on whether the
    /// edge is closed or not. For closed edge, the possible values can be StartJointTangentFaceEdgePointType,
    /// QuarterJointTangentFaceEdgePointType, MiddleJointTangentFaceEdgePointType or ThirdQuarterJointTangentFaceEdgePointType.
    /// For open edge, the possible values can be StartJointTangentFaceEdgePointType, MiddleJointTangentFaceEdgePointType,
    /// or EndJointTangentFaceEdgePointType.
    /// Returns the transient JointGeometry object that can be used to create a joint or joint origin or null in the case of a failure.
    static core::Ptr<JointGeometry> createByTangentFaceEdge(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, JointTangentFaceEdgePointTypes edgePointType);

    /// Returns the tangent face type this JointGeometry is using.
    JointTangentFaceTypes tangentFaceType() const;

    /// Returns the first tangent face parameter.
    double tangentFaceParamOne() const;

    /// Returns the second tangent face parameter.
    double tangentFaceParamTwo() const;

    ADSK_FUSION_JOINTGEOMETRY_API static const char* classType();
    ADSK_FUSION_JOINTGEOMETRY_API const char* objectType() const override;
    ADSK_FUSION_JOINTGEOMETRY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTGEOMETRY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByPlanarFace_raw(BRepFace* face, BRepEdge* edge, JointKeyPointTypes keyPointType);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByNonPlanarFace_raw(BRepFace* face, JointKeyPointTypes keyPointType);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByProfile_raw(Profile* profile, SketchCurve* sketchCurve, JointKeyPointTypes keyPointType);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByCurve_raw(core::Base* curve, JointKeyPointTypes keyPointType);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByPoint_raw(core::Base* point);
    virtual JointGeometryTypes geometryType_raw() const = 0;
    virtual JointKeyPointTypes keyPointType_raw() const = 0;
    virtual core::Base* entityOne_raw() const = 0;
    virtual core::Base* entityTwo_raw() const = 0;
    virtual core::Point3D* origin_raw() const = 0;
    virtual core::Vector3D* primaryAxisVector_raw() const = 0;
    virtual core::Vector3D* secondaryAxisVector_raw() const = 0;
    virtual core::Vector3D* thirdAxisVector_raw() const = 0;
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByBetweenTwoPlanes_raw(core::Base* planeOne, core::Base* planeTwo, core::Base* entityOne, core::Base* entityTwo, JointKeyPointTypes keyPointType);
    virtual core::Base* planeOne_raw() const = 0;
    virtual core::Base* planeTwo_raw() const = 0;
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByTwoEdgeIntersection_raw(BRepEdge* edgeOne, BRepEdge* edgeTwo);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByCylinderOrConeFace_raw(BRepFace* face, JointQuadrantAngleTypes angle, JointKeyPointTypes height);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createBySphereFace_raw(BRepFace* face, JointQuadrantAngleTypes azimuthAngle, JointKeyPointTypes polarAngle);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByTorusFace_raw(BRepFace* face, JointQuadrantAngleTypes azimuthAngle, JointQuadrantAngleTypes sectionAngle);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createBySplineFace_raw(BRepFace* face, JointKeyPointTypes paramU, JointKeyPointTypes paramV);
    ADSK_FUSION_JOINTGEOMETRY_API static JointGeometry* createByTangentFaceEdge_raw(BRepFace* face, BRepEdge* edge, JointTangentFaceEdgePointTypes edgePointType);
    virtual JointTangentFaceTypes tangentFaceType_raw() const = 0;
    virtual double tangentFaceParamOne_raw() const = 0;
    virtual double tangentFaceParamTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<JointGeometry> JointGeometry::createByPlanarFace(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, JointKeyPointTypes keyPointType)
{
    core::Ptr<JointGeometry> res = createByPlanarFace_raw(face.get(), edge.get(), keyPointType);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByNonPlanarFace(const core::Ptr<BRepFace>& face, JointKeyPointTypes keyPointType)
{
    core::Ptr<JointGeometry> res = createByNonPlanarFace_raw(face.get(), keyPointType);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByProfile(const core::Ptr<Profile>& profile, const core::Ptr<SketchCurve>& sketchCurve, JointKeyPointTypes keyPointType)
{
    core::Ptr<JointGeometry> res = createByProfile_raw(profile.get(), sketchCurve.get(), keyPointType);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByCurve(const core::Ptr<core::Base>& curve, JointKeyPointTypes keyPointType)
{
    core::Ptr<JointGeometry> res = createByCurve_raw(curve.get(), keyPointType);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByPoint(const core::Ptr<core::Base>& point)
{
    core::Ptr<JointGeometry> res = createByPoint_raw(point.get());
    return res;
}

inline JointGeometryTypes JointGeometry::geometryType() const
{
    JointGeometryTypes res = geometryType_raw();
    return res;
}

inline JointKeyPointTypes JointGeometry::keyPointType() const
{
    JointKeyPointTypes res = keyPointType_raw();
    return res;
}

inline core::Ptr<core::Base> JointGeometry::entityOne() const
{
    core::Ptr<core::Base> res = entityOne_raw();
    return res;
}

inline core::Ptr<core::Base> JointGeometry::entityTwo() const
{
    core::Ptr<core::Base> res = entityTwo_raw();
    return res;
}

inline core::Ptr<core::Point3D> JointGeometry::origin() const
{
    core::Ptr<core::Point3D> res = origin_raw();
    return res;
}

inline core::Ptr<core::Vector3D> JointGeometry::primaryAxisVector() const
{
    core::Ptr<core::Vector3D> res = primaryAxisVector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> JointGeometry::secondaryAxisVector() const
{
    core::Ptr<core::Vector3D> res = secondaryAxisVector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> JointGeometry::thirdAxisVector() const
{
    core::Ptr<core::Vector3D> res = thirdAxisVector_raw();
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByBetweenTwoPlanes(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& entityOne, const core::Ptr<core::Base>& entityTwo, JointKeyPointTypes keyPointType)
{
    core::Ptr<JointGeometry> res = createByBetweenTwoPlanes_raw(planeOne.get(), planeTwo.get(), entityOne.get(), entityTwo.get(), keyPointType);
    return res;
}

inline core::Ptr<core::Base> JointGeometry::planeOne() const
{
    core::Ptr<core::Base> res = planeOne_raw();
    return res;
}

inline core::Ptr<core::Base> JointGeometry::planeTwo() const
{
    core::Ptr<core::Base> res = planeTwo_raw();
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByTwoEdgeIntersection(const core::Ptr<BRepEdge>& edgeOne, const core::Ptr<BRepEdge>& edgeTwo)
{
    core::Ptr<JointGeometry> res = createByTwoEdgeIntersection_raw(edgeOne.get(), edgeTwo.get());
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByCylinderOrConeFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes angle, JointKeyPointTypes height)
{
    core::Ptr<JointGeometry> res = createByCylinderOrConeFace_raw(face.get(), angle, height);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createBySphereFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes azimuthAngle, JointKeyPointTypes polarAngle)
{
    core::Ptr<JointGeometry> res = createBySphereFace_raw(face.get(), azimuthAngle, polarAngle);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByTorusFace(const core::Ptr<BRepFace>& face, JointQuadrantAngleTypes azimuthAngle, JointQuadrantAngleTypes sectionAngle)
{
    core::Ptr<JointGeometry> res = createByTorusFace_raw(face.get(), azimuthAngle, sectionAngle);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createBySplineFace(const core::Ptr<BRepFace>& face, JointKeyPointTypes paramU, JointKeyPointTypes paramV)
{
    core::Ptr<JointGeometry> res = createBySplineFace_raw(face.get(), paramU, paramV);
    return res;
}

inline core::Ptr<JointGeometry> JointGeometry::createByTangentFaceEdge(const core::Ptr<BRepFace>& face, const core::Ptr<BRepEdge>& edge, JointTangentFaceEdgePointTypes edgePointType)
{
    core::Ptr<JointGeometry> res = createByTangentFaceEdge_raw(face.get(), edge.get(), edgePointType);
    return res;
}

inline JointTangentFaceTypes JointGeometry::tangentFaceType() const
{
    JointTangentFaceTypes res = tangentFaceType_raw();
    return res;
}

inline double JointGeometry::tangentFaceParamOne() const
{
    double res = tangentFaceParamOne_raw();
    return res;
}

inline double JointGeometry::tangentFaceParamTwo() const
{
    double res = tangentFaceParamTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTGEOMETRY_API