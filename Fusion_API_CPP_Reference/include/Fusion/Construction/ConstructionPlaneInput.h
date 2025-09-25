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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEINPUT_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Plane;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// A ConstructionPlaneInput is a throwaway object used to create a ConstructionPlane
/// The usage pattern is:
/// a. create a ConstructionPlaneInput (ConstructionPlanes.CreateInput)
/// b. call one of the member functions to specify how the ConstructionPlane is created
/// c. create the ConstructionPlane (call ConstructionPlanes.Add)
/// d. stop referencing the ConstructionPlaneInput (so it gets deleted).
class ConstructionPlaneInput : public core::Base {
public:

    /// This input method is for creating a non-parametric construction plane positioned in
    /// space as defined by the input Plane object.
    /// 
    /// This method of defining a construction plane is only valid when working in the direct modeling mode.
    /// This is not valid when working in the parametric modeling mode and will fail.
    /// plane : A transient plane object
    /// Returns true if the construction plane definition is successful.
    bool setByPlane(const core::Ptr<core::Plane>& plane);

    /// This input method is for creating a construction plane that is offset from a planar
    /// face or construction plane at a specified distance. This can result in
    /// a parametric or non-parametric construction plane depending on whether the parent
    /// component is parametric or is a direct edit component.
    /// planarEntity : A plane, planar face or construction plane from which to create the offset plane
    /// offset : ValueInput object that specifies the offset distance for the plane
    /// Returns true if the construction plane definition is successful.
    bool setByOffset(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::ValueInput>& offset);

    /// This input method is for creating a construction plane through an edge, axis or line
    /// at a specified angle. This can result in a parametric or non-parametric construction
    /// plane depending on whether the parent component is parametric or is a direct edit
    /// component.
    /// linearEntity : The axis about which to rotate the plane
    /// angle : The angle at which to create the plane
    /// planarEntity : The planar face or construction plane the angle is measured from.
    /// Returns true if the construction plane definition is successful.
    bool setByAngle(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& planarEntity);

    /// This input method is for creating a construction plane tangent to a cylindrical or
    /// conical face at a specified point. This can result in a parametric or non-parametric construction
    /// plane depending on whether the parent component is parametric or is a direct edit
    /// component.
    /// tangentFace : A cylindrical or conical face to create the plane tangent to
    /// angle : The angle relative to the planarEntity input at which to create the tangent plane
    /// planarEntity : The planar face or construction plane the tangent is measured from.
    /// Returns true if the construction plane definition is successful.
    bool setByTangent(const core::Ptr<BRepFace>& tangentFace, const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& planarEntity);

    /// This input method is for creating a construction plane at the midpoint between
    /// two planar faces or construction planes. This can result in a parametric or
    /// non-parametric construction plane depending on whether the parent component is
    /// parametric or is a direct edit component.
    /// planarEntityOne : The first planar face or construction plane to create a bisecting plane between
    /// planarEntityTwo : The second planar face or construction plane to create a bisecting plane between
    /// Returns true if the construction plane definition is successful.
    /// This will fail if the two planes are co-planar.
    bool setByTwoPlanes(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo);

    /// This input method is for creating a construction plane that passes through two
    /// coplanar linear entities or axes.
    /// Defines a plane by specifying two coplanar linear entities. This can result in a
    /// parametric or non-parametric construction plane depending on whether the parent
    /// component is parametric or is a direct edit component.
    /// linearEntityOne : The first of two coplanar linear entities to define the plane
    /// linearEntityTwo : The second of two coplanar linear entities to define the plane
    /// Returns true if the construction plane definition is successful.
    /// This will fail if the two linear entities are not coplanar.
    bool setByTwoEdges(const core::Ptr<core::Base>& linearEntityOne, const core::Ptr<core::Base>& linearEntityTwo);

    /// This input method is for creating a construction plane through three points that
    /// define a triangle. This can result in a parametric or non-parametric construction
    /// plane depending on whether the parent component is parametric or is a direct edit
    /// component.
    /// pointEntityOne : The first construction point, sketch point or vertex in the triangle
    /// pointEntityTwo : The second construction point, sketch point or vertex in the triangle
    /// pointEntityThree : The third construction point, sketch point or vertex in the triangle
    /// Returns true if the construction plane definition is successful.
    /// This will fail if the points do not form a triangle (no two
    /// points can be coincident and all three cannot be collinear).
    bool setByThreePoints(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo, const core::Ptr<core::Base>& pointEntityThree);

    /// This input method is for creating a construction plane tangent to a face
    /// and aligned to a point. This can result in a parametric or non-parametric
    /// construction plane depending on whether the parent component is parametric or is a
    /// direct edit component.
    /// tangentFace : A face to create the plane tangent to
    /// pointEntity : A construction point, sketch point or vertex the tangent plane aligns to.
    /// This point need not lie on the tangent face.
    /// Returns true if the construction plane definition is successful.
    bool setByTangentAtPoint(const core::Ptr<BRepFace>& tangentFace, const core::Ptr<core::Base>& pointEntity);

    /// This input method is for creating a construction plane normal to, and at
    /// specified distance along, a path defined by an edge or sketch profile.
    /// This can result in a parametric or non-parametric
    /// construction plane depending on whether the parent component is parametric or is a
    /// direct edit component.
    /// pathEntity : The path can be an edge, sketch curve, or a path of multiple entities.
    /// distance : The distance is a value from 0 to 1 indicating the position along the path where 0
    /// is at the start and 1 is at the end.
    /// Returns true if the construction plane definition is successful.
    bool setByDistanceOnPath(const core::Ptr<core::Base>& pathEntity, const core::Ptr<core::ValueInput>& distance);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the ConstructionPlane is created based on geometry (e.g. a planarEntity)
    /// in another component AND (the ConstructionPlane) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// When creating a construction plane that is owned by a base or form feature, set this property to the
    /// base or form feature you want to associate the new construction plane with. By default, this is null,
    /// meaning it will not be associated with a base or form feature.
    /// 
    /// Because of a current limitation, if you want to create a construction plane associated with a base
    /// or form feature, you must set this property AND call the startEdit method of the base or form feature,
    /// create the feature, and then call the finishEdit method of the base or form feature. The base or form
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<core::Base> targetBaseOrFormFeature() const;
    bool targetBaseOrFormFeature(const core::Ptr<core::Base>& value);

    /// Defines a construction plane that is offset from a planar face or construction plane
    /// and whose offset distance is defined by a vertex, sketch point, or construction point where
    /// the plane passes through the point.
    /// planarEntity : A planar BRepFace, ConstructionPlane, or Plane object that the new construction plane will be
    /// offset from. A Plane object is only valid in a direct-edit design or a base feature. In that case
    /// a non-parametric result is created.
    /// point : A BRepVertex, SketchPoint, ConstructionPoint, or Point3D that defines the offset distance.
    /// A Point3D is only valid in a direct-edit design. In that case a non-parametric result is created.
    /// Returns true if construction plane definition is successful.
    bool setByOffsetThroughPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point);

    ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setByPlane_raw(core::Plane* plane) = 0;
    virtual bool setByOffset_raw(core::Base* planarEntity, core::ValueInput* offset) = 0;
    virtual bool setByAngle_raw(core::Base* linearEntity, core::ValueInput* angle, core::Base* planarEntity) = 0;
    virtual bool setByTangent_raw(BRepFace* tangentFace, core::ValueInput* angle, core::Base* planarEntity) = 0;
    virtual bool setByTwoPlanes_raw(core::Base* planarEntityOne, core::Base* planarEntityTwo) = 0;
    virtual bool setByTwoEdges_raw(core::Base* linearEntityOne, core::Base* linearEntityTwo) = 0;
    virtual bool setByThreePoints_raw(core::Base* pointEntityOne, core::Base* pointEntityTwo, core::Base* pointEntityThree) = 0;
    virtual bool setByTangentAtPoint_raw(BRepFace* tangentFace, core::Base* pointEntity) = 0;
    virtual bool setByDistanceOnPath_raw(core::Base* pathEntity, core::ValueInput* distance) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual core::Base* targetBaseOrFormFeature_raw() const = 0;
    virtual bool targetBaseOrFormFeature_raw(core::Base* value) = 0;
    virtual bool setByOffsetThroughPoint_raw(core::Base* planarEntity, core::Base* point) = 0;
};

// Inline wrappers

inline bool ConstructionPlaneInput::setByPlane(const core::Ptr<core::Plane>& plane)
{
    bool res = setByPlane_raw(plane.get());
    return res;
}

inline bool ConstructionPlaneInput::setByOffset(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::ValueInput>& offset)
{
    bool res = setByOffset_raw(planarEntity.get(), offset.get());
    return res;
}

inline bool ConstructionPlaneInput::setByAngle(const core::Ptr<core::Base>& linearEntity, const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& planarEntity)
{
    bool res = setByAngle_raw(linearEntity.get(), angle.get(), planarEntity.get());
    return res;
}

inline bool ConstructionPlaneInput::setByTangent(const core::Ptr<BRepFace>& tangentFace, const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::Base>& planarEntity)
{
    bool res = setByTangent_raw(tangentFace.get(), angle.get(), planarEntity.get());
    return res;
}

inline bool ConstructionPlaneInput::setByTwoPlanes(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo)
{
    bool res = setByTwoPlanes_raw(planarEntityOne.get(), planarEntityTwo.get());
    return res;
}

inline bool ConstructionPlaneInput::setByTwoEdges(const core::Ptr<core::Base>& linearEntityOne, const core::Ptr<core::Base>& linearEntityTwo)
{
    bool res = setByTwoEdges_raw(linearEntityOne.get(), linearEntityTwo.get());
    return res;
}

inline bool ConstructionPlaneInput::setByThreePoints(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo, const core::Ptr<core::Base>& pointEntityThree)
{
    bool res = setByThreePoints_raw(pointEntityOne.get(), pointEntityTwo.get(), pointEntityThree.get());
    return res;
}

inline bool ConstructionPlaneInput::setByTangentAtPoint(const core::Ptr<BRepFace>& tangentFace, const core::Ptr<core::Base>& pointEntity)
{
    bool res = setByTangentAtPoint_raw(tangentFace.get(), pointEntity.get());
    return res;
}

inline bool ConstructionPlaneInput::setByDistanceOnPath(const core::Ptr<core::Base>& pathEntity, const core::Ptr<core::ValueInput>& distance)
{
    bool res = setByDistanceOnPath_raw(pathEntity.get(), distance.get());
    return res;
}

inline core::Ptr<Occurrence> ConstructionPlaneInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool ConstructionPlaneInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::Base> ConstructionPlaneInput::targetBaseOrFormFeature() const
{
    core::Ptr<core::Base> res = targetBaseOrFormFeature_raw();
    return res;
}

inline bool ConstructionPlaneInput::targetBaseOrFormFeature(const core::Ptr<core::Base>& value)
{
    return targetBaseOrFormFeature_raw(value.get());
}

inline bool ConstructionPlaneInput::setByOffsetThroughPoint(const core::Ptr<core::Base>& planarEntity, const core::Ptr<core::Base>& point)
{
    bool res = setByOffsetThroughPoint_raw(planarEntity.get(), point.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEINPUT_API