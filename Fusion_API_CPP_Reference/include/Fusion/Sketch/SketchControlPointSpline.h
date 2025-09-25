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
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_CPP__
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API
# endif
#else
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CurveEvaluator3D;
    class NurbsCurve3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchLine;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A control point spline in a sketch.
class SketchControlPointSpline : public SketchCurve {
public:

    /// The sketch point at the start of the spline. If the curve is closed the start and end
    /// sketch points will be the same.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// The sketch point at the end of the spline. If the curve is closed the start and end
    /// sketch points will be the same.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Returns the set of sketch points that the control frame of the spline fits through.
    /// The points include the start and end points and are returned in
    /// the same order as the spline fits through them where the first point
    /// in the list is the start point and the last point is the end point.
    /// Editing the position of these sketch points will result in editing the spline.
    /// 
    /// Deleting one of the sketch points will remove that point from the control frame and
    /// the curve will be recomputed.
    std::vector<core::Ptr<SketchPoint>> controlPoints() const;

    /// Adds an additional control point to the control point spline. Inserting a new control
    /// point does not change the shape of the curve, but the control frame will be re-computed
    /// and the control points will be adjusted to maintain the current shape.
    /// 
    /// This method will fail in the case where the control frame is not displayed. You can
    /// check for this by using the is isControlFrameDisplayed.
    /// parameter : The parameter position that defines where to insert the new control point. The parameter
    /// value must be within the parametric range of the curve. This can be determined by using the
    /// getParameterExtents method of the CurveEvaluator3D returned by the evaluator property.
    /// Returns true if adding the control point was successful.
    bool addControlPoint(double parameter);

    /// Returns the transient geometry of the curve which provides geometric
    /// information about the curve. The returned geometry is always in sketch space.
    /// Use the worldGeometry property to get it in the model's design space.
    core::Ptr<core::NurbsCurve3D> geometry() const;

    /// Returns a NurbsCurve3D object that is the equivalent of this sketch curve
    /// but is in the space of the parent component rather than in sketch space.
    core::Ptr<core::NurbsCurve3D> worldGeometry() const;

    /// Returns an evaluator object that lets you perform evaluations
    /// on the precise geometry of the curve.
    core::Ptr<core::CurveEvaluator3D> evaluator() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchControlPointSpline> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchControlPointSpline> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the degree of the spline.
    SplineDegrees degree() const;
    bool degree(SplineDegrees value);

    /// Gets and sets if the control frame of the curve is currently displayed. Using this property
    /// is useful to be able to determine if the controlPoints and controlFrameLines properties will return
    /// useful information or not and if the addControlPoint method will succeed or not.
    bool isControlFrameDisplayed() const;
    bool isControlFrameDisplayed(bool value);

    /// Returns the sketch lines that represent the control frame of the spline.
    /// The lines are in sequential order starting with the line that connects to the
    /// starting control point to the end.
    std::vector<core::Ptr<SketchLine>> controlFrameLines() const;

    ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API static const char* classType();
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual SketchPoint** controlPoints_raw(size_t& return_size) const = 0;
    virtual bool addControlPoint_raw(double parameter) = 0;
    virtual core::NurbsCurve3D* geometry_raw() const = 0;
    virtual core::NurbsCurve3D* worldGeometry_raw() const = 0;
    virtual core::CurveEvaluator3D* evaluator_raw() const = 0;
    virtual SketchControlPointSpline* nativeObject_raw() const = 0;
    virtual SketchControlPointSpline* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual SplineDegrees degree_raw() const = 0;
    virtual bool isControlFrameDisplayed_raw() const = 0;
    virtual bool isControlFrameDisplayed_raw(bool value) = 0;
    virtual SketchLine** controlFrameLines_raw(size_t& return_size) const = 0;
    virtual bool degree__raw(SplineDegrees value) = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchControlPointSpline::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchControlPointSpline::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline std::vector<core::Ptr<SketchPoint>> SketchControlPointSpline::controlPoints() const
{
    std::vector<core::Ptr<SketchPoint>> res;
    size_t s;

    SketchPoint** p= controlPoints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchControlPointSpline::addControlPoint(double parameter)
{
    bool res = addControlPoint_raw(parameter);
    return res;
}

inline core::Ptr<core::NurbsCurve3D> SketchControlPointSpline::geometry() const
{
    core::Ptr<core::NurbsCurve3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::NurbsCurve3D> SketchControlPointSpline::worldGeometry() const
{
    core::Ptr<core::NurbsCurve3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<core::CurveEvaluator3D> SketchControlPointSpline::evaluator() const
{
    core::Ptr<core::CurveEvaluator3D> res = evaluator_raw();
    return res;
}

inline core::Ptr<SketchControlPointSpline> SketchControlPointSpline::nativeObject() const
{
    core::Ptr<SketchControlPointSpline> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchControlPointSpline> SketchControlPointSpline::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchControlPointSpline> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline SplineDegrees SketchControlPointSpline::degree() const
{
    SplineDegrees res = degree_raw();
    return res;
}

inline bool SketchControlPointSpline::degree(SplineDegrees value)
{
    return degree__raw(value);
}

inline bool SketchControlPointSpline::isControlFrameDisplayed() const
{
    bool res = isControlFrameDisplayed_raw();
    return res;
}

inline bool SketchControlPointSpline::isControlFrameDisplayed(bool value)
{
    return isControlFrameDisplayed_raw(value);
}

inline std::vector<core::Ptr<SketchLine>> SketchControlPointSpline::controlFrameLines() const
{
    std::vector<core::Ptr<SketchLine>> res;
    size_t s;

    SketchLine** p= controlFrameLines_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCONTROLPOINTSPLINE_API