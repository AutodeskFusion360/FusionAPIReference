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
# ifdef __COMPILING_ADSK_FUSION_SKETCHFIXEDSPLINE_CPP__
# define ADSK_FUSION_SKETCHFIXEDSPLINE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHFIXEDSPLINE_API
# endif
#else
# define ADSK_FUSION_SKETCHFIXEDSPLINE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CurveEvaluator3D;
    class NurbsCurve3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// The SketchFixedSpline class represents splines in a sketch that are
/// not editable. These can result from including splines from other sketches
/// or the spline edges. They can also be created by intersections and
/// projecting splines onto a sketch.
class SketchFixedSpline : public SketchCurve {
public:

    /// The sketch point at the start of the spline.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// The sketch point at the end of the spline.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Returns the transient geometry of the curve which provides geometric
    /// information about the curve. The returned geometry is always in sketch space.
    /// 
    /// Because the fixed spline can be analytically defined, for example it
    /// can be the precise intersection of a surface and the sketch plane,
    /// returning a NURBS curve that represents the spline may be an
    /// approximation of the actual curve. You can use the Evaluator
    /// property of the SketchFixedSpline object to perform evaluations
    /// on the precise curve.
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
    core::Ptr<SketchFixedSpline> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchFixedSpline> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Replaces the underlying NURBS curve that defines the shape of the fixed curve. This
    /// can only be used if the isNative property of the SketchFixedSpline returns false.
    /// nurbsCurve : A NurbsCurve3D object that defines a valid NURBS curve and will be used to replace
    /// the existing geometry definition.
    /// Returns true if the replacement was successful.
    bool replaceGeometry(const core::Ptr<core::NurbsCurve3D>& nurbsCurve);

    ADSK_FUSION_SKETCHFIXEDSPLINE_API static const char* classType();
    ADSK_FUSION_SKETCHFIXEDSPLINE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHFIXEDSPLINE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHFIXEDSPLINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual core::NurbsCurve3D* geometry_raw() const = 0;
    virtual core::NurbsCurve3D* worldGeometry_raw() const = 0;
    virtual core::CurveEvaluator3D* evaluator_raw() const = 0;
    virtual SketchFixedSpline* nativeObject_raw() const = 0;
    virtual SketchFixedSpline* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool replaceGeometry_raw(core::NurbsCurve3D* nurbsCurve) = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchFixedSpline::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchFixedSpline::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline core::Ptr<core::NurbsCurve3D> SketchFixedSpline::geometry() const
{
    core::Ptr<core::NurbsCurve3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::NurbsCurve3D> SketchFixedSpline::worldGeometry() const
{
    core::Ptr<core::NurbsCurve3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<core::CurveEvaluator3D> SketchFixedSpline::evaluator() const
{
    core::Ptr<core::CurveEvaluator3D> res = evaluator_raw();
    return res;
}

inline core::Ptr<SketchFixedSpline> SketchFixedSpline::nativeObject() const
{
    core::Ptr<SketchFixedSpline> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchFixedSpline> SketchFixedSpline::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchFixedSpline> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool SketchFixedSpline::replaceGeometry(const core::Ptr<core::NurbsCurve3D>& nurbsCurve)
{
    bool res = replaceGeometry_raw(nurbsCurve.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHFIXEDSPLINE_API