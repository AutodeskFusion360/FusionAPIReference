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
#include "SketchCurve.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHFITTEDSPLINE_CPP__
# define ADSK_FUSION_SKETCHFITTEDSPLINE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHFITTEDSPLINE_API
# endif
#else
# define ADSK_FUSION_SKETCHFITTEDSPLINE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchArc;
    class SketchLine;
    class SketchPoint;
    class SketchPointList;
}}

namespace adsk { namespace fusion {

/// A fitted spline in a sketch.
class SketchFittedSpline : public SketchCurve {
public:

    /// Returns the sketch point that defines the starting position
    /// of the spline. Editing the position of this sketch point
    /// will result in editing the spline.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// Returns the sketch point that defines the ending position
    /// of the spline. Editing the position of this sketch point
    /// will result in editing the spline.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Returns the set of sketch points that the spline fits through.
    /// The points include the start and end points and are returned in
    /// the same order as the spline fits through them where the first point
    /// in the list is the start point and the last point is the end point.
    /// Editing the position of these sketch points will result in
    /// editing the spline.
    core::Ptr<SketchPointList> fitPoints() const;

    /// Gets and sets if this spline is closed. A closed spline
    /// is also periodic. This property can return false even in
    /// the case where the spline is physically closed. It's possible
    /// that the start and end points of a spline can be the same point
    /// but the curve is still not considered closed. This can happen
    /// when the start and end points of an open curve are merged. The
    /// curve is physically closed but is not periodic and can have a
    /// discontinuity at the joint. Setting it to closed will cause it
    /// to be periodic and to always remain closed even as fit points
    /// are deleted.
    bool isClosed() const;
    bool isClosed(bool value);

    /// Returns the transient geometry of the curve which provides geometric
    /// information about the curve. The returned geometry is always in sketch space.
    core::Ptr<core::NurbsCurve3D> geometry() const;

    /// Returns an NurbsCurve3D object which provides geometric information in world space.
    /// The returned geometry takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the geometry will be returned in the root
    /// component space.
    core::Ptr<core::NurbsCurve3D> worldGeometry() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchFittedSpline> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchFittedSpline> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Activates the tangent handle for the specified fit point and returns the sketch line
    /// that acts as the handle to control the tangency. You can use the getTangentHandle
    /// property to determine if the tangent handle has already been activated. If this method
    /// is called for a handle that already exists, nothing changes and the existing sketch line
    /// that acts as the tangent handle is returned.
    /// 
    /// The getTangentHandle method can be used to determine if the handle has already been
    /// activated.
    /// 
    /// To deactivate a sketch handle you can delete the sketch line.
    /// fitPoint : The fit point on the curve where you want to activate the tangent handle.
    /// The fit points can be obtained by using the fitPoints property of the SketchFittedSpline object.
    /// Returns the sketch line that acts as the tangent handle at the specified fit point.
    core::Ptr<SketchLine> activateTangentHandle(const core::Ptr<SketchPoint>& fitPoint);

    /// Returns the sketch line that acts as the handle to control the tangency at the specified fit
    /// point. Returns null in the case where the tangent handle has not been activated at that sketch point.
    /// Deleting the returned line will deactivate the tangent handle. Use the activateTangentHandle method
    /// to activate the tangent handle.
    /// fitPoint : The fit point on the curve where you want to get the tangent handle.
    /// The fit points can be obtained by using the fitPoints property of the SketchFittedSpline object.
    /// Returns the sketch line that acts as the handle to control the tangency at the specified point or
    /// returns null in the case where the tangency handle has not been activated at the specified sketch point.
    core::Ptr<SketchLine> getTangentHandle(const core::Ptr<SketchPoint>& fitPoint);

    /// Activates the curvature handle for the specified fit point and returns the sketch arc
    /// that acts as the handle to control the curvature. You can use the getCurvatureHandle
    /// property to determine if the curvature handle has already been activated. If this method
    /// is called for a handle that already exists, nothing changes and the existing sketch arc
    /// that acts as the curvature handle is returned.
    /// 
    /// The getCurvatureHandle method can be used to determine if the handle has already been
    /// activated.
    /// 
    /// To deactivate a sketch handle you can delete the sketch arc.
    /// fitPoint : The fit point on the curve where you want to activate the curvature handle.
    /// The fit points can be obtained by using the fitPoints property of the SketchFittedSpline object.
    /// Returns the sketch arc that acts as the curvature handle at the specified fit point.
    core::Ptr<SketchArc> activateCurvatureHandle(const core::Ptr<SketchPoint>& fitPoint);

    /// Returns the sketch arc that acts as the handle to control the curvature at the specified fit
    /// point. Returns null in the case where the curvature handle has not been activated at that sketch point.
    /// Deleting the returned arc will deactivate the curvature handle. Use the activateCurvatureHandle method
    /// to activate the curvature handle.
    /// fitPoint : The fit point on the curve where you want to get the curvature handle.
    /// The fit points can be obtained by using the fitPoints property of the SketchFittedSpline object.
    /// Returns the sketch arc that acts as the handle to control the curvature at the specified point or
    /// returns null in the case where the curvature handle has not been activated at the specified sketch point.
    core::Ptr<SketchArc> getCurvatureHandle(const core::Ptr<SketchPoint>& fitPoint);

    /// Creates a new fit point at the specified parameter value.
    /// parameter : The parameter value at the position along the curve where you want to add the new fit point. The
    /// CurveEvaluator3D object provides utilities that support going from a 3D coordinate to a parameter
    /// value on the curve.
    /// Returns the newly created SketchPoint that acts as the fit point. Fails in the case where an invalid
    /// parameter is specified.
    core::Ptr<SketchPoint> addFitPoint(double parameter);

    ADSK_FUSION_SKETCHFITTEDSPLINE_API static const char* classType();
    ADSK_FUSION_SKETCHFITTEDSPLINE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHFITTEDSPLINE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHFITTEDSPLINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual SketchPointList* fitPoints_raw() const = 0;
    virtual bool isClosed_raw() const = 0;
    virtual bool isClosed_raw(bool value) = 0;
    virtual core::NurbsCurve3D* geometry_raw() const = 0;
    virtual core::NurbsCurve3D* worldGeometry_raw() const = 0;
    virtual SketchFittedSpline* nativeObject_raw() const = 0;
    virtual SketchFittedSpline* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual SketchLine* activateTangentHandle_raw(SketchPoint* fitPoint) = 0;
    virtual SketchLine* getTangentHandle_raw(SketchPoint* fitPoint) = 0;
    virtual SketchArc* activateCurvatureHandle_raw(SketchPoint* fitPoint) = 0;
    virtual SketchArc* getCurvatureHandle_raw(SketchPoint* fitPoint) = 0;
    virtual SketchPoint* addFitPoint_raw(double parameter) = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchFittedSpline::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchFittedSpline::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPointList> SketchFittedSpline::fitPoints() const
{
    core::Ptr<SketchPointList> res = fitPoints_raw();
    return res;
}

inline bool SketchFittedSpline::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline bool SketchFittedSpline::isClosed(bool value)
{
    return isClosed_raw(value);
}

inline core::Ptr<core::NurbsCurve3D> SketchFittedSpline::geometry() const
{
    core::Ptr<core::NurbsCurve3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::NurbsCurve3D> SketchFittedSpline::worldGeometry() const
{
    core::Ptr<core::NurbsCurve3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<SketchFittedSpline> SketchFittedSpline::nativeObject() const
{
    core::Ptr<SketchFittedSpline> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchFittedSpline> SketchFittedSpline::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchFittedSpline> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<SketchLine> SketchFittedSpline::activateTangentHandle(const core::Ptr<SketchPoint>& fitPoint)
{
    core::Ptr<SketchLine> res = activateTangentHandle_raw(fitPoint.get());
    return res;
}

inline core::Ptr<SketchLine> SketchFittedSpline::getTangentHandle(const core::Ptr<SketchPoint>& fitPoint)
{
    core::Ptr<SketchLine> res = getTangentHandle_raw(fitPoint.get());
    return res;
}

inline core::Ptr<SketchArc> SketchFittedSpline::activateCurvatureHandle(const core::Ptr<SketchPoint>& fitPoint)
{
    core::Ptr<SketchArc> res = activateCurvatureHandle_raw(fitPoint.get());
    return res;
}

inline core::Ptr<SketchArc> SketchFittedSpline::getCurvatureHandle(const core::Ptr<SketchPoint>& fitPoint)
{
    core::Ptr<SketchArc> res = getCurvatureHandle_raw(fitPoint.get());
    return res;
}

inline core::Ptr<SketchPoint> SketchFittedSpline::addFitPoint(double parameter)
{
    core::Ptr<SketchPoint> res = addFitPoint_raw(parameter);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHFITTEDSPLINE_API