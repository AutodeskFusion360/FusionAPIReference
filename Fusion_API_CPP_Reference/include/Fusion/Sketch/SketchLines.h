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
# ifdef __COMPILING_ADSK_FUSION_SKETCHLINES_CPP__
# define ADSK_FUSION_SKETCHLINES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHLINES_API
# endif
#else
# define ADSK_FUSION_SKETCHLINES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class SketchLine;
    class SketchLineList;
}}

namespace adsk { namespace fusion {

/// The collection of lines in a sketch. This provides access to the existing
/// lines and supports the methods to create new lines.
class SketchLines : public core::Base {
public:

    /// Function that returns the specified sketch line using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchLine> item(size_t index) const;

    /// Returns the number of lines in the sketch.
    size_t count() const;

    /// Creates a sketch line between the two input points. The input points
    /// can be either existing SketchPoints or Point3D objects. If a SketchPoint
    /// is used the new line will be based on that sketch point and update if the
    /// sketch point is modified.
    /// startPoint : The start point of the line. It can be a SketchPoint or Point3D object.
    /// endPoint : The end point of the line. It can be a SketchPoint or Point3D object.
    /// Returns the newly created SketchLine object or null if the creation failed.
    core::Ptr<SketchLine> addByTwoPoints(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint);

    /// Creates four sketch lines representing a rectangle where the two points are the opposing corners
    /// of the rectangle. The input points can be either existing SketchPoints or Point3D objects.
    /// If a SketchPoint is used the new lines will be based on that sketch point and update if the
    /// sketch point is modified.
    /// pointOne : The first corner of the rectangle. It can be a SketchPoint or Point3D object.
    /// pointTwo : The second corner of the rectangle. It can be a SketchPoint or Point3D object.
    /// Returns the four new sketch lines or null if the creation failed.
    core::Ptr<SketchLineList> addTwoPointRectangle(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo);

    /// Creates four sketch lines representing a rectangle where the first two points are the base corners
    /// of the rectangle and the third point defines the height.
    /// pointOne : The first corner of the rectangle. It can be a SketchPoint or Point3D object.
    /// pointTwo : The first corner of the rectangle. It can be a SketchPoint or Point3D object.
    /// pointThree : The first corner of the rectangle. a Point3D object defining the height of the rectangle.
    /// Returns the four new sketch lines or null if the creation failed.
    core::Ptr<SketchLineList> addThreePointRectangle(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo, const core::Ptr<core::Point3D>& pointThree);

    /// Creates four sketch lines representing a rectangle where the first point represents the center of
    /// the rectangle. The second point is the corner of the rectangle and can be either an existing
    /// SketchPoint or Point3D object. The four sketch lines are returned.
    /// centerPoint : The center point of the rectangle
    /// cornerPoint : The corner of the rectangle. It can be a SketchPoint or Point3D object.
    /// Returns the four new sketch lines or null if the creation failed.
    core::Ptr<SketchLineList> addCenterPointRectangle(const core::Ptr<core::Point3D>& centerPoint, const core::Ptr<core::Base>& cornerPoint);

    /// Creates a chamfer between two sketch lines. In the case where the two input lines cross each other creating
    /// an "X" shape, this results in four quadrants where the chamfer can be placed. The point arguments are used
    /// to define which of the four quadrants the chamfer should be created in. The two points define which side of
    /// the two lines should be kept and the other end will be trimmed by the chamfer. The easiest way to use this is
    /// to use the end points of the lines on the side you want to keep.
    /// In the case where the lines don't intersect or connect at the end points, there is only one valid quadrant
    /// for the chamfer so the points are ignored.
    /// firstLine : The first line you want to chamfer.
    /// firstLinePoint : A point on the first line that is on the side of the intersection with the second line that you want to keep.
    /// secondLine : The second line you want to chamfer.
    /// secondLinePoint : A point on the second line that is on the side of the intersection with the first line that you want to keep.
    /// distanceOne : Defines the distance of the start point of the chamfer line from the intersection point of the two lines along the first line.
    /// The distance is defined in centimeters.
    /// distanceTwo : Defines the distance of the start point of the chamfer line from the intersection point of the two lines along the second line.
    /// The distance is defined in centimeters.
    /// Returns the newly created SketchLine object that represents the chamfer or null if the creation failed.
    core::Ptr<SketchLine> addDistanceChamfer(const core::Ptr<SketchLine>& firstLine, const core::Ptr<core::Point3D>& firstLinePoint, const core::Ptr<SketchLine>& secondLine, const core::Ptr<core::Point3D>& secondLinePoint, double distanceOne, double distanceTwo);

    /// Creates a chamfer between two sketch lines. In the case where the two input lines cross each other creating
    /// an "X" shape, this results in four quadrants where the chamfer can be placed. The point arguments are used
    /// to define which of the four quadrants the chamfer should be created in. The two points define which side of
    /// the two lines should be kept and the other end will be trimmed by the chamfer. The easiest way to use this is
    /// to use the end points of the lines on the side you want to keep.
    /// In the case where the lines don't intersect or connect at the end points, there is only one valid quadrant
    /// for the chamfer so the points are ignored.
    /// firstLine : The first line you want to chamfer.
    /// firstLinePoint : A point on the first line that is on the side of the intersection with the second line that you want to keep.
    /// secondLine : The second line you want to chamfer.
    /// secondLinePoint : A point on the second line that is on the side of the intersection with the first line that you want to keep.
    /// distance : Defines the distance of the start point of the chamfer from the intersection point of the two lines along the first line.
    /// The distance is defined in centimeters.
    /// angle : Defines the angle of the chamfer as measured from the first line.
    /// The angle is defined in radians.
    /// Returns the newly created SketchLine object that represents the chamfer or null if the creation failed.
    core::Ptr<SketchLine> addAngleChamfer(const core::Ptr<SketchLine>& firstLine, const core::Ptr<core::Point3D>& firstLinePoint, const core::Ptr<SketchLine>& secondLine, const core::Ptr<core::Point3D>& secondLinePoint, double distance, double angle);

    /// Creates either an inscribed or circumscribed n-sided polygon.
    /// centerPoint : Either an existing SketchPoint or a Point3D object that defines the center point of the polygon. If a SketchPoint object
    /// is provided the point will continue to control the center of the polygon.
    /// edgeCount : The number of edges in the resulting polygon.
    /// angle : Controls the rotation of the polygon around the center point. For a circumscribed polygon, this defines where the center
    /// of one of the edges will be positioned. For an inscribed polygon, this defines where one of the corners of the polygon
    /// will be positioned.
    /// radius : The radius of the circle in centimeters that the polygon goes to, either outside (circumscribed) or inside (inscribed) the circle.
    /// isInscribed : Specifies if a circumscribed or inscribed polygon should be created.
    /// Returns a list of the sketch lines that were created to represent the polygon or null in the case of bad input.
    core::Ptr<SketchLineList> addScribedPolygon(const core::Ptr<core::Base>& centerPoint, int edgeCount, double angle, double radius, bool isInscribed);

    /// Creates a polygon where two points specify an edge of the polygon. By specifying an edge, the size and position of
    /// the polygon is also defined.
    /// pointOne : The first point of the edge.
    /// pointTwo : The second point of the edge.
    /// isRight : After defining points one and two, a polygon can be created on either side of the line defined by the two points.
    /// This argument specifies which side of the line the polygon will be created on. If this is true, the polygon will
    /// be created to the right of the line from the perspective of looking from point one to point two. If false,
    /// it will be to the left of the line.
    /// edgeCount : The number of edges in the resulting polygon.
    /// Returns a list of the sketch lines that were created to represent the polygon or null in the case of bad input.
    core::Ptr<SketchLineList> addEdgePolygon(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo, bool isRight, int edgeCount);

    typedef SketchLine iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHLINES_API static const char* classType();
    ADSK_FUSION_SKETCHLINES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHLINES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHLINES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchLine* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchLine* addByTwoPoints_raw(core::Base* startPoint, core::Base* endPoint) = 0;
    virtual SketchLineList* addTwoPointRectangle_raw(core::Base* pointOne, core::Base* pointTwo) = 0;
    virtual SketchLineList* addThreePointRectangle_raw(core::Base* pointOne, core::Base* pointTwo, core::Point3D* pointThree) = 0;
    virtual SketchLineList* addCenterPointRectangle_raw(core::Point3D* centerPoint, core::Base* cornerPoint) = 0;
    virtual SketchLine* addDistanceChamfer_raw(SketchLine* firstLine, core::Point3D* firstLinePoint, SketchLine* secondLine, core::Point3D* secondLinePoint, double distanceOne, double distanceTwo) = 0;
    virtual SketchLine* addAngleChamfer_raw(SketchLine* firstLine, core::Point3D* firstLinePoint, SketchLine* secondLine, core::Point3D* secondLinePoint, double distance, double angle) = 0;
    virtual SketchLineList* addScribedPolygon_raw(core::Base* centerPoint, int edgeCount, double angle, double radius, bool isInscribed) = 0;
    virtual SketchLineList* addEdgePolygon_raw(core::Base* pointOne, core::Base* pointTwo, bool isRight, int edgeCount) = 0;
};

// Inline wrappers

inline core::Ptr<SketchLine> SketchLines::item(size_t index) const
{
    core::Ptr<SketchLine> res = item_raw(index);
    return res;
}

inline size_t SketchLines::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchLine> SketchLines::addByTwoPoints(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint)
{
    core::Ptr<SketchLine> res = addByTwoPoints_raw(startPoint.get(), endPoint.get());
    return res;
}

inline core::Ptr<SketchLineList> SketchLines::addTwoPointRectangle(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo)
{
    core::Ptr<SketchLineList> res = addTwoPointRectangle_raw(pointOne.get(), pointTwo.get());
    return res;
}

inline core::Ptr<SketchLineList> SketchLines::addThreePointRectangle(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo, const core::Ptr<core::Point3D>& pointThree)
{
    core::Ptr<SketchLineList> res = addThreePointRectangle_raw(pointOne.get(), pointTwo.get(), pointThree.get());
    return res;
}

inline core::Ptr<SketchLineList> SketchLines::addCenterPointRectangle(const core::Ptr<core::Point3D>& centerPoint, const core::Ptr<core::Base>& cornerPoint)
{
    core::Ptr<SketchLineList> res = addCenterPointRectangle_raw(centerPoint.get(), cornerPoint.get());
    return res;
}

inline core::Ptr<SketchLine> SketchLines::addDistanceChamfer(const core::Ptr<SketchLine>& firstLine, const core::Ptr<core::Point3D>& firstLinePoint, const core::Ptr<SketchLine>& secondLine, const core::Ptr<core::Point3D>& secondLinePoint, double distanceOne, double distanceTwo)
{
    core::Ptr<SketchLine> res = addDistanceChamfer_raw(firstLine.get(), firstLinePoint.get(), secondLine.get(), secondLinePoint.get(), distanceOne, distanceTwo);
    return res;
}

inline core::Ptr<SketchLine> SketchLines::addAngleChamfer(const core::Ptr<SketchLine>& firstLine, const core::Ptr<core::Point3D>& firstLinePoint, const core::Ptr<SketchLine>& secondLine, const core::Ptr<core::Point3D>& secondLinePoint, double distance, double angle)
{
    core::Ptr<SketchLine> res = addAngleChamfer_raw(firstLine.get(), firstLinePoint.get(), secondLine.get(), secondLinePoint.get(), distance, angle);
    return res;
}

inline core::Ptr<SketchLineList> SketchLines::addScribedPolygon(const core::Ptr<core::Base>& centerPoint, int edgeCount, double angle, double radius, bool isInscribed)
{
    core::Ptr<SketchLineList> res = addScribedPolygon_raw(centerPoint.get(), edgeCount, angle, radius, isInscribed);
    return res;
}

inline core::Ptr<SketchLineList> SketchLines::addEdgePolygon(const core::Ptr<core::Base>& pointOne, const core::Ptr<core::Base>& pointTwo, bool isRight, int edgeCount)
{
    core::Ptr<SketchLineList> res = addEdgePolygon_raw(pointOne.get(), pointTwo.get(), isRight, edgeCount);
    return res;
}

template <class OutputIterator> inline void SketchLines::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHLINES_API