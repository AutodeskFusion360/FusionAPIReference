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
# ifdef __COMPILING_ADSK_FUSION_SKETCHARCS_CPP__
# define ADSK_FUSION_SKETCHARCS_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHARCS_API
# endif
#else
# define ADSK_FUSION_SKETCHARCS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class SketchArc;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// The collection of arcs in a sketch. This provides access to the existing
/// arcs and supports the methods to create new arcs.
class SketchArcs : public core::Base {
public:

    /// Function that returns the specified sketch arc using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchArc> item(size_t index) const;

    /// Returns the number of arcs in the sketch.
    size_t count() const;

    /// Creates a sketch arc that is always parallel to the x-y plane of the sketch
    /// and is centered at the specified point.
    /// centerPoint : The center point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// startPoint : The start point of the arc. The distance between this point and the center defines the radius
    /// of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// sweepAngle : The sweep of the arc. This is defined in radians and a positive value defines a counter-clockwise sweep.
    /// Returns the newly created SketchArc object or null if the creation failed.
    core::Ptr<SketchArc> addByCenterStartSweep(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Base>& startPoint, double sweepAngle);

    /// Creates a sketch arc that passes through the three points.
    /// startPoint : The start point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// point : A point along the arc. This is a Point3D object.
    /// endPoint : The end point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// Returns the newly created SketchArc or null in the case of a failure.
    core::Ptr<SketchArc> addByThreePoints(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Point3D>& point, const core::Ptr<core::Base>& endPoint);

    /// Creates a fillet between two sketch entities
    /// The side (quadrant) the fillet is created on is determined by the points specified.
    /// The point for each entity can be its startSketchPoint or endSketchPoint
    /// firstEntity : The first curve for the fillet definition. The curve must be open.
    /// firstEntityPoint : A point on or closer to one end of the first curve that indicates the side to create the fillet on
    /// secondEnitity : The second curve for the fillet definition. The curve must be open.
    /// secondEntityPoint : A point on or closer to one end of the second curve that indicates the side to create the fillet on
    /// radius : radius of the arc in centimeters
    /// Returns the newly created SketchArc object (fillet) if the operation was successful or null if it failed.
    core::Ptr<SketchArc> addFillet(const core::Ptr<SketchCurve>& firstEntity, const core::Ptr<core::Point3D>& firstEntityPoint, const core::Ptr<SketchCurve>& secondEnitity, const core::Ptr<core::Point3D>& secondEntityPoint, double radius);

    /// Creates a sketch arc that is centered at the specified point and between the two input points.
    /// centerPoint : The center point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// startPoint : The start point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// endPoint : The end point of the arc. This can be either an existing SketchPoint or a Point3D object.
    /// If the end point does not lie on the arc, a new point would be created such that it lies on the arc.
    /// normal : An optional argument that specifies the normal of the plane the arc will be created on. If not supplied, a vector
    /// in the positive Z direction will be used, which results in the creation of an arc that is parallel to the X-Y plane of the sketch.
    /// However, you can specify a normal vector to orient the arc in any orientation. The normal also helps to control the sweep direction of the arc,
    /// where the sweep direction is always counterclockwise from the start to the end point, where counterclockwise is defined using
    /// the right-hand rule around the normal vector.
    /// Returns the newly created SketchArc or null in the case of a failure.
    core::Ptr<SketchArc> addByCenterStartEnd(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint, const core::Ptr<core::Vector3D>& normal = NULL);

    typedef SketchArc iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHARCS_API static const char* classType();
    ADSK_FUSION_SKETCHARCS_API const char* objectType() const override;
    ADSK_FUSION_SKETCHARCS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHARCS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchArc* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchArc* addByCenterStartSweep_raw(core::Base* centerPoint, core::Base* startPoint, double sweepAngle) = 0;
    virtual SketchArc* addByThreePoints_raw(core::Base* startPoint, core::Point3D* point, core::Base* endPoint) = 0;
    virtual SketchArc* addFillet_raw(SketchCurve* firstEntity, core::Point3D* firstEntityPoint, SketchCurve* secondEnitity, core::Point3D* secondEntityPoint, double radius) = 0;
    virtual SketchArc* addByCenterStartEnd_raw(core::Base* centerPoint, core::Base* startPoint, core::Base* endPoint, core::Vector3D* normal) = 0;
};

// Inline wrappers

inline core::Ptr<SketchArc> SketchArcs::item(size_t index) const
{
    core::Ptr<SketchArc> res = item_raw(index);
    return res;
}

inline size_t SketchArcs::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchArc> SketchArcs::addByCenterStartSweep(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Base>& startPoint, double sweepAngle)
{
    core::Ptr<SketchArc> res = addByCenterStartSweep_raw(centerPoint.get(), startPoint.get(), sweepAngle);
    return res;
}

inline core::Ptr<SketchArc> SketchArcs::addByThreePoints(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Point3D>& point, const core::Ptr<core::Base>& endPoint)
{
    core::Ptr<SketchArc> res = addByThreePoints_raw(startPoint.get(), point.get(), endPoint.get());
    return res;
}

inline core::Ptr<SketchArc> SketchArcs::addFillet(const core::Ptr<SketchCurve>& firstEntity, const core::Ptr<core::Point3D>& firstEntityPoint, const core::Ptr<SketchCurve>& secondEnitity, const core::Ptr<core::Point3D>& secondEntityPoint, double radius)
{
    core::Ptr<SketchArc> res = addFillet_raw(firstEntity.get(), firstEntityPoint.get(), secondEnitity.get(), secondEntityPoint.get(), radius);
    return res;
}

inline core::Ptr<SketchArc> SketchArcs::addByCenterStartEnd(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint, const core::Ptr<core::Vector3D>& normal)
{
    core::Ptr<SketchArc> res = addByCenterStartEnd_raw(centerPoint.get(), startPoint.get(), endPoint.get(), normal.get());
    return res;
}

template <class OutputIterator> inline void SketchArcs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHARCS_API