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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TEMPORARYBREPMANAGER_CPP__
# define ADSK_FUSION_TEMPORARYBREPMANAGER_API XI_EXPORT
# else
# define ADSK_FUSION_TEMPORARYBREPMANAGER_API
# endif
#else
# define ADSK_FUSION_TEMPORARYBREPMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class Matrix3D;
    class OrientedBoundingBox3D;
    class Plane;
    class Point3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBodies;
    class BRepBody;
    class BRepEdge;
    class BRepFace;
    class BRepWire;
}}

namespace adsk { namespace fusion {

/// A utility object that provides functionality to create and manipulate B-Rep data outside
/// the context of a document. The provides direct access to the modeling core without the
/// overhead of parametrics, persistence, transactions, or graphics. It also provides a way
/// of directly defining and creating B-Rep data.
class TemporaryBRepManager : public core::Base {
public:

    /// Gets the TempoaryBRepManager object. This object provides access to functionality to
    /// create an manipulate temporary B-Rep data outside the context of a document.
    /// Returns the TemporaryBRepManager object.
    static core::Ptr<TemporaryBRepManager> get();

    /// Creates a temporary copy of the input BRepBody, BRepFace, or BRepEdge object.
    /// bRepEntity : The BRepBody, BRepFace, BRepLoop, or BRepEdge to create a copy of. This can be a parametric
    /// B-Rep entity or a temporary B-Rep entity.
    /// Returns a BRepBody that contains the result. If a BRepBody is input the copy is
    /// of the entire body. If a BRepFace is input, then the result is a BRepBody that
    /// contains a single face. If a BRepLoop is input then the result is a BRepBody that
    /// contains a wire where each edge in the loop will have a corresponding edge in the wire.
    /// If a BRepEdge is input then the result is a BRepBody that contains a wire that contains
    /// the single edge.
    core::Ptr<BRepBody> copy(const core::Ptr<core::Base>& bRepEntity);

    /// Calculates the intersection between the input body and plane and creates a
    /// wire body that represents the intersection curves.
    /// body : The BRepBody to intersection.
    /// plane : The geometry Plane to intersect with the body.
    /// Returns a BRepBody that contains a wire body that represents the intersection.
    core::Ptr<BRepBody> planeIntersection(const core::Ptr<BRepBody>& body, const core::Ptr<core::Plane>& plane);

    /// Creates a new body by creating a ruled surface between the two input wire bodies.
    /// sectionOne : BRepWire that defines the shape of the first section.
    /// sectionTwo : BRepWire that defines the shape of the second section.
    /// Returns the created ruled surface as a BRepBody object.
    core::Ptr<BRepBody> createRuledSurface(const core::Ptr<BRepWire>& sectionOne, const core::Ptr<BRepWire>& sectionTwo);

    /// Calculates the silhouette curve geometry for a given face as viewed from a given direction.
    /// face : Input BRepFace object to calculate the silhouette curve for.
    /// viewDirection : Input Vector3D object that defines the view direction to calculate the silhouette curve relative to.
    /// The silhouette curve(s) will lie along the path where the face normal is perpendicular to the view direction.
    /// returnCoincidentSilhouettes : Input Boolean that specifies if silhouette curves that are coincident to the edges of the face should be
    /// returned or not. If true, these curves will be returned.
    /// Returns a SurfaceBody object that will contain one or more BRepWire objects that represent the silhouette curve(s).
    /// This method can return null in the case where there is not a silhouette curve for the specified face.
    core::Ptr<BRepBody> createSilhouetteCurves(const core::Ptr<BRepFace>& face, const core::Ptr<core::Vector3D>& viewDirection, bool returnCoincidentSilhouettes);

    /// Deletes one or more faces from a temporary BRepBody. The body that will be modified is determined
    /// by getting the parent body of the input faces.
    /// faces : An array of BRepFace objects to delete. If more than one face is provided,
    /// all of the faces must exist within the same body.
    /// deleteSpecifiedFaces : This allows you to either delete the faces that were input or to keep those faces and delete all the
    /// other faces in the body.
    /// Returns true if the operation was successful.
    bool deleteFaces(const std::vector<core::Ptr<BRepFace>>& faces, bool deleteSpecifiedFaces);

    /// Performs the specified Boolean operation between the two input bodies. The input bodies need
    /// not be solid but can be faces that are combined or trimmed.
    /// targetBody : The target body that will be modified as a result of the Boolean operation.
    /// toolBody : The tool body that will be used to operate on the target body.
    /// booleanType : The type of Boolean operation to perform.
    /// Returns true if the operation was successful. If successful, the target body is modified as a result of the
    /// Boolean operation. Because of this the targetBody must always be a temporary BRepBody. The tool body is not
    /// modified. This is analogous to a machining operation where you have the target that is being machined and
    /// the tool that removes material.
    bool booleanOperation(const core::Ptr<BRepBody>& targetBody, const core::Ptr<BRepBody>& toolBody, BooleanTypes booleanType);

    /// Transforms the input body using the specified transformation matrix.
    /// body : The BRepBody object to transform.
    /// transform : The transformation matrix that defines the transform to apply to the body.
    /// Returns true if the specified transform was successfully applied to the body.
    bool transform(const core::Ptr<BRepBody>& body, const core::Ptr<core::Matrix3D>& transform);

    /// Creates new BRepBody objects based on the contents of the specified file.
    /// filename : The full path and name of the file to read in. This can be a SMT, SMB, SAT, or SAB file.
    /// A BRepBodies collection object is returned which can contain multiple BRepBody objects.
    /// null is returned in the case where it was unable to read the file.
    core::Ptr<BRepBodies> createFromFile(const std::string& filename);

    /// Exports the input bodies to the specified file.
    /// bodies : An array of BRepBody objects that you want to export.
    /// filename : The filename to write the BRepBody objects to. The type of file to create
    /// is inferred from the extension of the file. The valid extensions are ".sat" and ".smt".
    /// Returns true if the export was successful.
    bool exportToFile(const std::vector<core::Ptr<BRepBody>>& bodies, const std::string& filename);

    /// Creates a new temporary solid box BRepBody object.
    /// box : The OrientedBoundingBox3D object that defines the position, orientation, and
    /// size of the box to crate.
    /// Returns the newly created temporary BRepBody object or null in the case of failure.
    core::Ptr<BRepBody> createBox(const core::Ptr<core::OrientedBoundingBox3D>& box);

    /// Creates a temporary solid cylinder or cone BRepBody object.
    /// pointOne : A point at one end of the cylinder or cone.
    /// pointOneRadius : The radius of the cylinder or cone at the point one end, in centimeters.
    /// pointTwo : A point at the opposite end of the cylinder or cone.
    /// pointTwoRadius : The radius of the cylinder or cone at the point two end, in centimeters.
    /// For a cylinder the pointTwoRadius should be equal to the pointOneRadius.
    /// Returns the newly created temporary BRepBody object or null in the case of failure.
    core::Ptr<BRepBody> createCylinderOrCone(const core::Ptr<core::Point3D>& pointOne, double pointOneRadius, const core::Ptr<core::Point3D>& pointTwo, double pointTwoRadius);

    /// Creates a temporary elliptical solid cylinder or cone BrepBody object.
    /// pointOne : A point at one end of the cylinder or cone.
    /// pointOneMajorRadius : The major radius of the cylinder or cone at the point one end, in centimeters.
    /// pointOneMinorRadius : The minor radius of the cylinder or cone at the point one end, in centimeters.
    /// pointTwo : A point at the opposite end of the cone.
    /// pointTwoMajorRadius : The major radius of the cylinder or cone at the point two end, in centimeters. The
    /// minor radius is automatically determined using the point one ratio of the minor and major
    /// radii.
    /// majorAxisDirection : A Vector3D object that defines the direction of the major axis.
    /// Returns the newly created temporary BRepBody object or null in the case of failure.
    core::Ptr<BRepBody> createEllipticalCylinderOrCone(const core::Ptr<core::Point3D>& pointOne, double pointOneMajorRadius, double pointOneMinorRadius, const core::Ptr<core::Point3D>& pointTwo, double pointTwoMajorRadius, const core::Ptr<core::Vector3D>& majorAxisDirection);

    /// Creates a temporary spherical BRepBody object.
    /// center : The center point of the sphere.
    /// radius : The radius of the sphere in centimeters.
    /// Returns the newly created temporary BRepBody object or null in the case of failure.
    core::Ptr<BRepBody> createSphere(const core::Ptr<core::Point3D>& center, double radius);

    /// Creates a temporary toroidal BRepBody object.
    /// center : The center point of the torus.
    /// axis : The axis of the torus.
    /// majorRadius : The radius, in centimeters, of the major radius of the torus. If the torus was created
    /// by sweeping a circle around another circle this would be the radius of the path circle.
    /// minorRadius : The radius, in centimeters, of the minor radius of the torus. If the torus was created
    /// by sweeping a circle around another circle this would be the radius of the profile circle.
    /// Returns the newly created temporary BRepBody object or null in the case of failure.
    core::Ptr<BRepBody> createTorus(const core::Ptr<core::Point3D>& center, const core::Ptr<core::Vector3D>& axis, double majorRadius, double minorRadius);

    /// Creates a body from multiple wires that all lie within the same plane. Multiple wires are
    /// used when creating a plane with interior holes. One wire defines the outer shape and the
    /// other wires define the interior loops of the created face.
    /// wireBodies : An array of bodies that contain planar wires. Each wire must be closed, they should not overlap,
    /// and they should all lie on the same plane.
    /// Returns a BRepBody containing the created BRepFace object or null in the case of failure.
    core::Ptr<BRepBody> createFaceFromPlanarWires(const std::vector<core::Ptr<BRepBody>>& wireBodies);

    /// Method that finds regions of faces on two bodies which overlap and creates new bodies where the faces
    /// are split at the edges of the overlaps. This does not modify the original bodies but creates new
    /// temporary bodies that contain the imprints.
    /// bodyOne : Input BRepBody that will participate in the imprint operation. This body can be either a parametric
    /// or temporary body.
    /// bodyTwo : Input BRepBody that will participate in the imprint operation. This body can be either a parametric
    /// or temporary body.
    /// imprintCoincidentEdges : Input Boolean that indicates if overlapping edges should be included in the result. The picture below
    /// shows an example of when this argument will make a difference. The two bodies have overlapping faces
    /// and there is also an overlapping edge. If this argument is true, then the edge shown in red below
    /// will be included in the output as an overlapping edge. If False it will not be included and only
    /// the edges of the overlapping faces will be in the overlapping faces collections.
    /// <br/><br/><center><img src="../images/ImprintOverlappingEdges.png"></center>
    /// 
    /// resultBodyOne : Output temporary BRepBody that contains the imprinted body that corresponds to the body provided through the bodyOne argument.
    /// resultBodyTwo : Output temporary BRepBody that contains the imprinted body that corresponds to the body provided through the bodyTwo argument.
    /// bodyOneOverlappingFaces : Output array of BRepFace objects that represent the overlapping faces that are part of resultBodyOne. Faces at the same index within the
    /// collection returned here and that returned by the bodyTwoOverlappingFaces are overlapping.
    /// bodyTwoOverlappingFaces : Output array of BRepFace objects that represent the overlapping faces that are part of resultBodyTwo. Faces at the same index within the
    /// collection returned here and that returned by the bodyOneOverlappingFaces are overlapping.
    /// bodyOneOverlappingEdges : Output array of BRepEdge objects that represent the overlapping edges that are part of resultBodyOne. Edges at the same index within the
    /// collection returned here and that returned by the bodyTwoOverlappingEdges are overlapping.
    /// bodyTwoOverlappingEdges : Output array of BRepEdge objects that represent the overlapping edges that are part of resultBodyTwo. Edges at the same index within the
    /// collection returned here and that returned by the bodyOneOverlappingEdges are overlapping.
    /// tolerance : Optional Input double that specifies the tolerance, in centimeters, to use when comparing the bodies. If not specified, or a value of zero
    /// is specified, the internal modeling tolerance will be used.
    /// Returns true if the imprint calculation was successful.
    bool imprintOverlapBodies(const core::Ptr<BRepBody>& bodyOne, const core::Ptr<BRepBody>& bodyTwo, bool imprintCoincidentEdges, core::Ptr<BRepBody>& resultBodyOne, core::Ptr<BRepBody>& resultBodyTwo, std::vector<core::Ptr<BRepFace>>& bodyOneOverlappingFaces, std::vector<core::Ptr<BRepFace>>& bodyTwoOverlappingFaces, std::vector<core::Ptr<BRepEdge>>& bodyOneOverlappingEdges, std::vector<core::Ptr<BRepEdge>>& bodyTwoOverlappingEdges, double tolerance = 0.0);

    /// Give an array of curve geometry objects, this method creates a new wire body.
    /// curves : An array containing the input Curve3D objects. These can be Arc3D, Circle3D, Ellipse3D, EllipticalArc3D or Line3D objects.
    /// edgeMap : An array of edges in the returned body. The order that the edges are in this collection is the
    /// same order as the original corresponding Curve3D object is in the input curves array. This allows you to
    /// map between the original input curve and created edge.
    /// allowSelfIntersections : Specifies if you want to allow self-intersection in the input curves or not.
    /// Returns the B-Rep body containing the created wire or null in the case of failure.
    core::Ptr<BRepBody> createWireFromCurves(const std::vector<core::Ptr<core::Curve3D>>& curves, std::vector<core::Ptr<BRepEdge>>& edgeMap, bool allowSelfIntersections = false);

    /// Creates a B-Rep body that contains a wire with a single edge that represents a helical curve.
    /// axisPoint : A Point3D object that defines a point along the axis of the helix.
    /// axisVector : A Vector3D object that defines the direction of the axis of the helix.
    /// startPoint : A Point3D that defines the start point of the helix. This is a point on the helix and defines the starting
    /// point of the helix. The distance of this point to the axis defines the starting radius of the helix.
    /// pitch : The pitch of the helix, or the distance between each of the turns, in centimeters.
    /// turns : The number of turns of the helix.
    /// taperAngle : The taper angle of the helix in radians.
    /// Returns a temporary BRepBody object that contains a wire body that is the shape of the
    /// specified helix. Return null if the creation failed.
    core::Ptr<BRepBody> createHelixWire(const core::Ptr<core::Point3D>& axisPoint, const core::Ptr<core::Vector3D>& axisVector, const core::Ptr<core::Point3D>& startPoint, double pitch, double turns, double taperAngle);

    /// Computes the approximate outline of a body. The outline is the loops formed from projecting the non-occluded
    /// silhouette curves of the body onto a plane. The outline is returned as a temporary BRepBody consisting of
    /// planar BRepFace objects whose boundaries form the outline.
    /// 
    /// The computed outline can be an approximation i.e. not precise. This is to make it useful in cases where robustness
    /// is more important than precision. For most cases, a precise analytical result is computed, but in some cases,
    /// the silhouette of a curved surface may be approximated by a series of straight lines. Even though it's an
    /// approximation you can control the tolerance of the approximation. A tighter tolerance will result in a longer compute time.
    /// body : Input BRepBody object to calculate the projected outline for.
    /// projectionPlane : Input Plane object that defines the position and orientation of the plane to project the body onto. The resulting body will lie on this plane.
    /// tolerance : Input value that specifies the tolerance in centimeters to use when approximating smooth surfaces with line segments. A negative tolerance
    /// uses the default value which is 0.001 times the length of the diagonal of the bounding box of the input body. A positive tolerance must be
    /// greater than the point tolerance (0.000001).
    /// containsApproximation : Output value that indicates if the result contains any silhouette curves that are an approximation of the true silhouette.
    /// Returns a BRepBody object consisting of planar BRepFace objects whose boundaries define the body's outline.
    core::Ptr<BRepBody> createProjectedBodyOutline(const core::Ptr<BRepBody>& body, const core::Ptr<core::Plane>& projectionPlane, double tolerance, bool& containsApproximation);

    ADSK_FUSION_TEMPORARYBREPMANAGER_API static const char* classType();
    ADSK_FUSION_TEMPORARYBREPMANAGER_API const char* objectType() const override;
    ADSK_FUSION_TEMPORARYBREPMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TEMPORARYBREPMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_TEMPORARYBREPMANAGER_API static TemporaryBRepManager* get_raw();
    virtual BRepBody* copy_raw(core::Base* bRepEntity) = 0;
    virtual BRepBody* planeIntersection_raw(BRepBody* body, core::Plane* plane) = 0;
    virtual BRepBody* createRuledSurface_raw(BRepWire* sectionOne, BRepWire* sectionTwo) = 0;
    virtual BRepBody* createSilhouetteCurves_raw(BRepFace* face, core::Vector3D* viewDirection, bool returnCoincidentSilhouettes) = 0;
    virtual bool deleteFaces_raw(BRepFace** faces, size_t faces_size, bool deleteSpecifiedFaces) = 0;
    virtual bool booleanOperation_raw(BRepBody* targetBody, BRepBody* toolBody, BooleanTypes booleanType) = 0;
    virtual bool transform_raw(BRepBody* body, core::Matrix3D* transform) = 0;
    virtual BRepBodies* createFromFile_raw(const char* filename) = 0;
    virtual bool exportToFile_raw(BRepBody** bodies, size_t bodies_size, const char* filename) = 0;
    virtual BRepBody* createBox_raw(core::OrientedBoundingBox3D* box) = 0;
    virtual BRepBody* createCylinderOrCone_raw(core::Point3D* pointOne, double pointOneRadius, core::Point3D* pointTwo, double pointTwoRadius) = 0;
    virtual BRepBody* createEllipticalCylinderOrCone_raw(core::Point3D* pointOne, double pointOneMajorRadius, double pointOneMinorRadius, core::Point3D* pointTwo, double pointTwoMajorRadius, core::Vector3D* majorAxisDirection) = 0;
    virtual BRepBody* createSphere_raw(core::Point3D* center, double radius) = 0;
    virtual BRepBody* createTorus_raw(core::Point3D* center, core::Vector3D* axis, double majorRadius, double minorRadius) = 0;
    virtual BRepBody* createFaceFromPlanarWires_raw(BRepBody** wireBodies, size_t wireBodies_size) = 0;
    virtual bool imprintOverlapBodies_raw(BRepBody* bodyOne, BRepBody* bodyTwo, bool imprintCoincidentEdges, BRepBody*& resultBodyOne, BRepBody*& resultBodyTwo, BRepFace**& bodyOneOverlappingFaces, size_t& bodyOneOverlappingFaces_size, BRepFace**& bodyTwoOverlappingFaces, size_t& bodyTwoOverlappingFaces_size, BRepEdge**& bodyOneOverlappingEdges, size_t& bodyOneOverlappingEdges_size, BRepEdge**& bodyTwoOverlappingEdges, size_t& bodyTwoOverlappingEdges_size, double tolerance) = 0;
    virtual BRepBody* createWireFromCurves_raw(core::Curve3D** curves, size_t curves_size, BRepEdge**& edgeMap, size_t& edgeMap_size, bool allowSelfIntersections) = 0;
    virtual BRepBody* createHelixWire_raw(core::Point3D* axisPoint, core::Vector3D* axisVector, core::Point3D* startPoint, double pitch, double turns, double taperAngle) = 0;
    virtual BRepBody* createProjectedBodyOutline_raw(BRepBody* body, core::Plane* projectionPlane, double tolerance, bool& containsApproximation) = 0;
};

// Inline wrappers

inline core::Ptr<TemporaryBRepManager> TemporaryBRepManager::get()
{
    core::Ptr<TemporaryBRepManager> res = get_raw();
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::copy(const core::Ptr<core::Base>& bRepEntity)
{
    core::Ptr<BRepBody> res = copy_raw(bRepEntity.get());
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::planeIntersection(const core::Ptr<BRepBody>& body, const core::Ptr<core::Plane>& plane)
{
    core::Ptr<BRepBody> res = planeIntersection_raw(body.get(), plane.get());
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createRuledSurface(const core::Ptr<BRepWire>& sectionOne, const core::Ptr<BRepWire>& sectionTwo)
{
    core::Ptr<BRepBody> res = createRuledSurface_raw(sectionOne.get(), sectionTwo.get());
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createSilhouetteCurves(const core::Ptr<BRepFace>& face, const core::Ptr<core::Vector3D>& viewDirection, bool returnCoincidentSilhouettes)
{
    core::Ptr<BRepBody> res = createSilhouetteCurves_raw(face.get(), viewDirection.get(), returnCoincidentSilhouettes);
    return res;
}

inline bool TemporaryBRepManager::deleteFaces(const std::vector<core::Ptr<BRepFace>>& faces, bool deleteSpecifiedFaces)
{
    BRepFace** faces_ = new BRepFace*[faces.size()];
    for(size_t i=0; i<faces.size(); ++i)
        faces_[i] = faces[i].get();

    bool res = deleteFaces_raw(faces_, faces.size(), deleteSpecifiedFaces);
    delete[] faces_;
    return res;
}

inline bool TemporaryBRepManager::booleanOperation(const core::Ptr<BRepBody>& targetBody, const core::Ptr<BRepBody>& toolBody, BooleanTypes booleanType)
{
    bool res = booleanOperation_raw(targetBody.get(), toolBody.get(), booleanType);
    return res;
}

inline bool TemporaryBRepManager::transform(const core::Ptr<BRepBody>& body, const core::Ptr<core::Matrix3D>& transform)
{
    bool res = transform_raw(body.get(), transform.get());
    return res;
}

inline core::Ptr<BRepBodies> TemporaryBRepManager::createFromFile(const std::string& filename)
{
    core::Ptr<BRepBodies> res = createFromFile_raw(filename.c_str());
    return res;
}

inline bool TemporaryBRepManager::exportToFile(const std::vector<core::Ptr<BRepBody>>& bodies, const std::string& filename)
{
    BRepBody** bodies_ = new BRepBody*[bodies.size()];
    for(size_t i=0; i<bodies.size(); ++i)
        bodies_[i] = bodies[i].get();

    bool res = exportToFile_raw(bodies_, bodies.size(), filename.c_str());
    delete[] bodies_;
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createBox(const core::Ptr<core::OrientedBoundingBox3D>& box)
{
    core::Ptr<BRepBody> res = createBox_raw(box.get());
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createCylinderOrCone(const core::Ptr<core::Point3D>& pointOne, double pointOneRadius, const core::Ptr<core::Point3D>& pointTwo, double pointTwoRadius)
{
    core::Ptr<BRepBody> res = createCylinderOrCone_raw(pointOne.get(), pointOneRadius, pointTwo.get(), pointTwoRadius);
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createEllipticalCylinderOrCone(const core::Ptr<core::Point3D>& pointOne, double pointOneMajorRadius, double pointOneMinorRadius, const core::Ptr<core::Point3D>& pointTwo, double pointTwoMajorRadius, const core::Ptr<core::Vector3D>& majorAxisDirection)
{
    core::Ptr<BRepBody> res = createEllipticalCylinderOrCone_raw(pointOne.get(), pointOneMajorRadius, pointOneMinorRadius, pointTwo.get(), pointTwoMajorRadius, majorAxisDirection.get());
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createSphere(const core::Ptr<core::Point3D>& center, double radius)
{
    core::Ptr<BRepBody> res = createSphere_raw(center.get(), radius);
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createTorus(const core::Ptr<core::Point3D>& center, const core::Ptr<core::Vector3D>& axis, double majorRadius, double minorRadius)
{
    core::Ptr<BRepBody> res = createTorus_raw(center.get(), axis.get(), majorRadius, minorRadius);
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createFaceFromPlanarWires(const std::vector<core::Ptr<BRepBody>>& wireBodies)
{
    BRepBody** wireBodies_ = new BRepBody*[wireBodies.size()];
    for(size_t i=0; i<wireBodies.size(); ++i)
        wireBodies_[i] = wireBodies[i].get();

    core::Ptr<BRepBody> res = createFaceFromPlanarWires_raw(wireBodies_, wireBodies.size());
    delete[] wireBodies_;
    return res;
}

inline bool TemporaryBRepManager::imprintOverlapBodies(const core::Ptr<BRepBody>& bodyOne, const core::Ptr<BRepBody>& bodyTwo, bool imprintCoincidentEdges, core::Ptr<BRepBody>& resultBodyOne, core::Ptr<BRepBody>& resultBodyTwo, std::vector<core::Ptr<BRepFace>>& bodyOneOverlappingFaces, std::vector<core::Ptr<BRepFace>>& bodyTwoOverlappingFaces, std::vector<core::Ptr<BRepEdge>>& bodyOneOverlappingEdges, std::vector<core::Ptr<BRepEdge>>& bodyTwoOverlappingEdges, double tolerance)
{
    BRepBody* resultBodyOne_ = nullptr;
    BRepBody* resultBodyTwo_ = nullptr;
    BRepFace** bodyOneOverlappingFaces_ = nullptr;
    size_t bodyOneOverlappingFaces_size;
    BRepFace** bodyTwoOverlappingFaces_ = nullptr;
    size_t bodyTwoOverlappingFaces_size;
    BRepEdge** bodyOneOverlappingEdges_ = nullptr;
    size_t bodyOneOverlappingEdges_size;
    BRepEdge** bodyTwoOverlappingEdges_ = nullptr;
    size_t bodyTwoOverlappingEdges_size;

    bool res = imprintOverlapBodies_raw(bodyOne.get(), bodyTwo.get(), imprintCoincidentEdges, resultBodyOne_, resultBodyTwo_, bodyOneOverlappingFaces_, bodyOneOverlappingFaces_size, bodyTwoOverlappingFaces_, bodyTwoOverlappingFaces_size, bodyOneOverlappingEdges_, bodyOneOverlappingEdges_size, bodyTwoOverlappingEdges_, bodyTwoOverlappingEdges_size, tolerance);
    resultBodyOne = resultBodyOne_;
    resultBodyTwo = resultBodyTwo_;
    if(bodyOneOverlappingFaces_)
    {
        bodyOneOverlappingFaces.assign(bodyOneOverlappingFaces_, bodyOneOverlappingFaces_ + bodyOneOverlappingFaces_size);
        core::DeallocateArray(bodyOneOverlappingFaces_);
    }
    if(bodyTwoOverlappingFaces_)
    {
        bodyTwoOverlappingFaces.assign(bodyTwoOverlappingFaces_, bodyTwoOverlappingFaces_ + bodyTwoOverlappingFaces_size);
        core::DeallocateArray(bodyTwoOverlappingFaces_);
    }
    if(bodyOneOverlappingEdges_)
    {
        bodyOneOverlappingEdges.assign(bodyOneOverlappingEdges_, bodyOneOverlappingEdges_ + bodyOneOverlappingEdges_size);
        core::DeallocateArray(bodyOneOverlappingEdges_);
    }
    if(bodyTwoOverlappingEdges_)
    {
        bodyTwoOverlappingEdges.assign(bodyTwoOverlappingEdges_, bodyTwoOverlappingEdges_ + bodyTwoOverlappingEdges_size);
        core::DeallocateArray(bodyTwoOverlappingEdges_);
    }
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createWireFromCurves(const std::vector<core::Ptr<core::Curve3D>>& curves, std::vector<core::Ptr<BRepEdge>>& edgeMap, bool allowSelfIntersections)
{
    core::Curve3D** curves_ = new core::Curve3D*[curves.size()];
    for(size_t i=0; i<curves.size(); ++i)
        curves_[i] = curves[i].get();
    BRepEdge** edgeMap_ = nullptr;
    size_t edgeMap_size;

    core::Ptr<BRepBody> res = createWireFromCurves_raw(curves_, curves.size(), edgeMap_, edgeMap_size, allowSelfIntersections);
    delete[] curves_;
    if(edgeMap_)
    {
        edgeMap.assign(edgeMap_, edgeMap_ + edgeMap_size);
        core::DeallocateArray(edgeMap_);
    }
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createHelixWire(const core::Ptr<core::Point3D>& axisPoint, const core::Ptr<core::Vector3D>& axisVector, const core::Ptr<core::Point3D>& startPoint, double pitch, double turns, double taperAngle)
{
    core::Ptr<BRepBody> res = createHelixWire_raw(axisPoint.get(), axisVector.get(), startPoint.get(), pitch, turns, taperAngle);
    return res;
}

inline core::Ptr<BRepBody> TemporaryBRepManager::createProjectedBodyOutline(const core::Ptr<BRepBody>& body, const core::Ptr<core::Plane>& projectionPlane, double tolerance, bool& containsApproximation)
{
    core::Ptr<BRepBody> res = createProjectedBodyOutline_raw(body.get(), projectionPlane.get(), tolerance, containsApproximation);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TEMPORARYBREPMANAGER_API