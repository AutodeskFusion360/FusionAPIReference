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
# ifdef __COMPILING_ADSK_FUSION_SKETCHDIMENSIONS_CPP__
# define ADSK_FUSION_SKETCHDIMENSIONS_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHDIMENSIONS_API
# endif
#else
# define ADSK_FUSION_SKETCHDIMENSIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class SketchAngularDimension;
    class SketchConcentricCircleDimension;
    class SketchCurve;
    class SketchDiameterDimension;
    class SketchDimension;
    class SketchDistanceBetweenLineAndPlanarSurfaceDimension;
    class SketchDistanceBetweenPointAndSurfaceDimension;
    class SketchEllipseMajorRadiusDimension;
    class SketchEllipseMinorRadiusDimension;
    class SketchEntity;
    class SketchLine;
    class SketchLinearDiameterDimension;
    class SketchLinearDimension;
    class SketchOffsetDimension;
    class SketchPoint;
    class SketchRadialDimension;
    class SketchTangentDistanceDimension;
}}

namespace adsk { namespace fusion {

/// A collection of the dimensions in a sketch. This object also supports the methods to add
/// new sketch dimensions.
class SketchDimensions : public core::Base {
public:

    /// Function that returns the specified sketch dimension using an index into the
    /// collection.
    /// index : The index of the item within the collection to return. The first item in the
    /// collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchDimension> item(size_t index) const;

    /// Returns the number of sketch dimensions in the sketch.
    size_t count() const;

    /// Creates a new linear dimension constraint between the two input entities.
    /// pointOne : The first SketchPoint to dimension to.
    /// pointTwo : The second SketchPoint to dimension to..
    /// orientation : The orientation of the dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchLinearDimension> addDistanceDimension(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo, DimensionOrientations orientation, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new linear dimension constraint between the two input entities. The first input
    /// entity must be a sketch line. The second entity can be a point or a line that is parallel
    /// to the first. The dimension controls the distance as measured perpendicular to the first
    /// input line.
    /// line : The SketchLine to dimension to.
    /// entityTwo : The parallel SketchLine or SketchPoint to dimension to. If a SketchLine is used it must be
    /// parallel to the first line.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchOffsetDimension> addOffsetDimension(const core::Ptr<SketchLine>& line, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new angular dimension constraint between the two input lines.
    /// The position of the text controls which of the four quadrants will be dimensioned.
    /// lineOne : The first SketchLine to dimension to.
    /// lineTwo : The second SketchLine to dimension to.
    /// textPoint : A Point3D object that defines the position of the dimension text. The position of the
    /// text also defines which quadrant will be dimensioned.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchAngularDimension> addAngularDimension(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new diameter dimension constraint on the arc or circle.
    /// entity : The SketchCircle or SketchArc to dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchDiameterDimension> addDiameterDimension(const core::Ptr<SketchCurve>& entity, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new radial dimension constraint on the arc or circle.
    /// entity : The SketchCircle or SketchArc to dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchRadialDimension> addRadialDimension(const core::Ptr<SketchCurve>& entity, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new dimension constraint on the major radius of an ellipse.
    /// ellipse : The SketchEllipse to dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchEllipseMajorRadiusDimension> addEllipseMajorRadiusDimension(const core::Ptr<SketchCurve>& ellipse, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new dimension constraint on the minor radius of an ellipse.
    /// ellipse : The SketchEllipse to dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchEllipseMinorRadiusDimension> addEllipseMinorRadiusDimension(const core::Ptr<SketchCurve>& ellipse, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new dimension constraint between to concentric circles or arcs.
    /// circleOne : The first SketchCircle or SketchArc to dimension.
    /// circleTwo : The second SketchCircle or SketchArc to dimension.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchConcentricCircleDimension> addConcentricCircleDimension(const core::Ptr<SketchCurve>& circleOne, const core::Ptr<SketchCurve>& circleTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new linear dimension from between a line and circle or arc and a second circle or arc where
    /// the dimension is to the tangent on the edge of the circle or arc.
    /// entityOne : The first entity to dimension to. This can be a SketchPoint, SketchLine, SketchCircle or SketchArc.
    /// If a circle or arc is provided then the tangentSideOne argument must be specified.
    /// isCloseToEnityTwo : If entityOne is a circle or arc this specifies which side of the circle or arc the dimension will be tangent to.
    /// If true, it will be on the side that is closer to entityTwo. If a SketchLine or SketchPoint was input for the
    /// entityOne argument this argument is ignored and any value can be used.
    /// entityTwo : A SketchCircle or SketchArc entity that you will dimension to.
    /// isCloseToEnityOne : Specifies which side of the circle or arc input as the entityTwo argument the dimension will be tangent to.
    /// If true, it will be on the side that is closer to entityOne.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchTangentDistanceDimension> addTangentDistanceDimension(const core::Ptr<SketchEntity>& entityOne, bool isCloseToEnityTwo, const core::Ptr<SketchCurve>& entityTwo, bool isCloseToEnityOne, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new linear dimension showing the diameter where the first line acts as the center line
    /// and the second entity defines the size. The first input entity must be a sketch line. The second entity
    /// can be a point or a line that is parallel to the first. The dimension controls the distance as measured
    /// perpendicular to the first input line.
    /// centerLine : The SketchLine to dimension to which acts as the center line.
    /// entityTwo : The parallel SketchLine or SketchPoint to dimension to. If a SketchLine is used it must be
    /// parallel to the first line.
    /// textPoint : A Point3D object that defines the position of the dimension text.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchLinearDiameterDimension> addLinearDiameterDimension(const core::Ptr<SketchLine>& centerLine, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving = true);

    /// Creates a new linear dimension controlling the distance between a sketch point and the specified surface or point. The text position is
    /// automatically chosen and is positioned so it is midway between the point and surface and the extension lines are a minimum length. You
    /// can modify the position by using functionality on the returned SketchDistanceBetweenPointAndSurfaceDimension object.
    /// point : The SketchPoint being constrained by the dimension.
    /// surface : The BRepFace or ConstructionPlane to which the dimension will anchor. Planar, cylindrical, spherical and conical faces are supported.
    /// If a cylindrical, spherical or conical face is used, the dimension is from the point to the nearest point on the surface.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> addDistanceBetweenPointAndSurfaceDimension(const core::Ptr<SketchPoint>& point, const core::Ptr<core::Base>& surface, bool isDriving = true);

    /// Creates a new linear dimension controlling the distance between a sketch line and the specified planar face or construction plane. The sketch line
    /// must lie on a plane that is parallel to the planar surface. The text position is automatically chosen and is positioned so it is midway between
    /// the line and surface and the extension lines are a minimum length. You can modify the position by using functionality on the returned
    /// SketchDistanceBetweenLineAndPlanarSurfaceDimension object.
    /// line : The SketchLine being constrained by the dimension.
    /// planarSurface : The planar BRepFace or ConstructionPlane that the dimension will anchor to.
    /// isDriving : Optional argument that specifies if a driving (the dimension controls the geometry)
    /// or a driven (the geometry controls the dimension) dimension is created. If not provided
    /// a driving dimension will be created.
    /// Returns the newly created dimension or null if the creation failed.
    core::Ptr<SketchDistanceBetweenLineAndPlanarSurfaceDimension> addDistanceBetweenLineAndPlanarSurfaceDimension(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface, bool isDriving = true);

    typedef SketchDimension iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHDIMENSIONS_API static const char* classType();
    ADSK_FUSION_SKETCHDIMENSIONS_API const char* objectType() const override;
    ADSK_FUSION_SKETCHDIMENSIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHDIMENSIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchDimension* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchLinearDimension* addDistanceDimension_raw(SketchPoint* pointOne, SketchPoint* pointTwo, DimensionOrientations orientation, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchOffsetDimension* addOffsetDimension_raw(SketchLine* line, SketchEntity* entityTwo, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchAngularDimension* addAngularDimension_raw(SketchLine* lineOne, SketchLine* lineTwo, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchDiameterDimension* addDiameterDimension_raw(SketchCurve* entity, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchRadialDimension* addRadialDimension_raw(SketchCurve* entity, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchEllipseMajorRadiusDimension* addEllipseMajorRadiusDimension_raw(SketchCurve* ellipse, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchEllipseMinorRadiusDimension* addEllipseMinorRadiusDimension_raw(SketchCurve* ellipse, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchConcentricCircleDimension* addConcentricCircleDimension_raw(SketchCurve* circleOne, SketchCurve* circleTwo, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchTangentDistanceDimension* addTangentDistanceDimension_raw(SketchEntity* entityOne, bool isCloseToEnityTwo, SketchCurve* entityTwo, bool isCloseToEnityOne, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchLinearDiameterDimension* addLinearDiameterDimension_raw(SketchLine* centerLine, SketchEntity* entityTwo, core::Point3D* textPoint, bool isDriving) = 0;
    virtual SketchDistanceBetweenPointAndSurfaceDimension* addDistanceBetweenPointAndSurfaceDimension_raw(SketchPoint* point, core::Base* surface, bool isDriving) = 0;
    virtual SketchDistanceBetweenLineAndPlanarSurfaceDimension* addDistanceBetweenLineAndPlanarSurfaceDimension_raw(SketchLine* line, core::Base* planarSurface, bool isDriving) = 0;
};

// Inline wrappers

inline core::Ptr<SketchDimension> SketchDimensions::item(size_t index) const
{
    core::Ptr<SketchDimension> res = item_raw(index);
    return res;
}

inline size_t SketchDimensions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchLinearDimension> SketchDimensions::addDistanceDimension(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo, DimensionOrientations orientation, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchLinearDimension> res = addDistanceDimension_raw(pointOne.get(), pointTwo.get(), orientation, textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchOffsetDimension> SketchDimensions::addOffsetDimension(const core::Ptr<SketchLine>& line, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchOffsetDimension> res = addOffsetDimension_raw(line.get(), entityTwo.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchAngularDimension> SketchDimensions::addAngularDimension(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchAngularDimension> res = addAngularDimension_raw(lineOne.get(), lineTwo.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchDiameterDimension> SketchDimensions::addDiameterDimension(const core::Ptr<SketchCurve>& entity, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchDiameterDimension> res = addDiameterDimension_raw(entity.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchRadialDimension> SketchDimensions::addRadialDimension(const core::Ptr<SketchCurve>& entity, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchRadialDimension> res = addRadialDimension_raw(entity.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchEllipseMajorRadiusDimension> SketchDimensions::addEllipseMajorRadiusDimension(const core::Ptr<SketchCurve>& ellipse, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchEllipseMajorRadiusDimension> res = addEllipseMajorRadiusDimension_raw(ellipse.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchEllipseMinorRadiusDimension> SketchDimensions::addEllipseMinorRadiusDimension(const core::Ptr<SketchCurve>& ellipse, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchEllipseMinorRadiusDimension> res = addEllipseMinorRadiusDimension_raw(ellipse.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchConcentricCircleDimension> SketchDimensions::addConcentricCircleDimension(const core::Ptr<SketchCurve>& circleOne, const core::Ptr<SketchCurve>& circleTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchConcentricCircleDimension> res = addConcentricCircleDimension_raw(circleOne.get(), circleTwo.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchTangentDistanceDimension> SketchDimensions::addTangentDistanceDimension(const core::Ptr<SketchEntity>& entityOne, bool isCloseToEnityTwo, const core::Ptr<SketchCurve>& entityTwo, bool isCloseToEnityOne, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchTangentDistanceDimension> res = addTangentDistanceDimension_raw(entityOne.get(), isCloseToEnityTwo, entityTwo.get(), isCloseToEnityOne, textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchLinearDiameterDimension> SketchDimensions::addLinearDiameterDimension(const core::Ptr<SketchLine>& centerLine, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<core::Point3D>& textPoint, bool isDriving)
{
    core::Ptr<SketchLinearDiameterDimension> res = addLinearDiameterDimension_raw(centerLine.get(), entityTwo.get(), textPoint.get(), isDriving);
    return res;
}

inline core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> SketchDimensions::addDistanceBetweenPointAndSurfaceDimension(const core::Ptr<SketchPoint>& point, const core::Ptr<core::Base>& surface, bool isDriving)
{
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> res = addDistanceBetweenPointAndSurfaceDimension_raw(point.get(), surface.get(), isDriving);
    return res;
}

inline core::Ptr<SketchDistanceBetweenLineAndPlanarSurfaceDimension> SketchDimensions::addDistanceBetweenLineAndPlanarSurfaceDimension(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface, bool isDriving)
{
    core::Ptr<SketchDistanceBetweenLineAndPlanarSurfaceDimension> res = addDistanceBetweenLineAndPlanarSurfaceDimension_raw(line.get(), planarSurface.get(), isDriving);
    return res;
}

template <class OutputIterator> inline void SketchDimensions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHDIMENSIONS_API