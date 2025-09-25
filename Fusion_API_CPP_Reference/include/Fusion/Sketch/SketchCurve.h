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
#include "SketchEntity.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHCURVE_CPP__
# define ADSK_FUSION_SKETCHCURVE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCURVE_API
# endif
#else
# define ADSK_FUSION_SKETCHCURVE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Point3D;
}}

namespace adsk { namespace fusion {

/// A single sketch curve. This is the base class for the specific curve types.
class SketchCurve : public SketchEntity {
public:

    /// Returns the length of the curve in centimeters.
    double length() const;

    /// Gets and sets whether this curve is construction geometry.
    bool isConstruction() const;
    bool isConstruction(bool value);

    /// Split a curve at a position specified along the curve
    /// splitPoint : A position (transient Point3D) on the curve that defines the point at which to split the curve
    /// createConstraints : Constraints are created by default. Specify false to create no constraints.
    /// Returns the resulting 2 curves; the original curve + the newly created curve
    /// When split spline the original is deleted and two new curves returned.
    /// Empty collection returned if curve is closed.
    core::Ptr<core::ObjectCollection> split(const core::Ptr<core::Point3D>& splitPoint, bool createConstraints = true);

    /// Trim a curve by specifying a point that determines the segment of the curve to trim away
    /// segmentPoint : A point (transient Point3D) on or closest to the segment of the curve to remove. (start, end or middle)
    /// The segment of the curve closest to the segmentPoint gets removed
    /// createConstraints : Constraints are created by default. Specify false to not create constraints.
    /// When trimming the start or end side of a line, unclosed circular or elliptical arc, the original entity is modified and returned
    /// When trimming the middle of a line, unclosed circular or elliptical arc the original entity is deleted and two new entities are returned
    /// When trimming the start or end of any type of closed curve, the original is deleted and a new curve is returned
    /// Any trimming of a spline (open or closed) deletes the original and new spline/s are returned
    /// Trimming a curve having no intersections deletes the original and returns an empty collection
    core::Ptr<core::ObjectCollection> trim(const core::Ptr<core::Point3D>& segmentPoint, bool createConstraints = true);

    /// Breaks a curve into two or three pieces by finding intersections of this curve with all other curves in the
    /// sketch and splitting this curve at the nearest intersections to a specified point on the curve.
    /// segmentPoint : A point that specifies the segment of the curve that is to be split from the rest of the curve. The nearest
    /// intersection(s) to this point define the break location(s).
    /// createConstraints : Optional argument that specifies if constraints should be created between the new curve segments. A value of
    /// true indicates constraints will be created.
    /// All of the curves resulting from the break are returned in an ObjectCollection. In the case where no intersections
    /// are found and as a result the curve is not broken, an empty ObjectCollection is returned.
    core::Ptr<core::ObjectCollection> breakCurve(const core::Ptr<core::Point3D>& segmentPoint, bool createConstraints = true);

    /// Extend a curve by specifying a point that determines the end of the curve to extend
    /// endPoint : A point (transient Point3D) on or closest to the end of the curve to extend. (start or end)
    /// The end of the curve closest to the endPoint gets extended
    /// createConstraints : Constraints are created by default. Specify false to not create constraints.
    /// Returns the modified original curve if the start or end of the curve is extended
    /// If the extend joins a curve to another, the two original curves are deleted and a new curve is returned
    /// If an arc is extended so as to become a circle, the original arc is deleted and a new circle is returned
    core::Ptr<core::ObjectCollection> extend(const core::Ptr<core::Point3D>& endPoint, bool createConstraints = true);

    /// Get the curves that intersect this curve along with the intersection points (Point3D)
    /// sketchCurves : A collection of curves to attempt to find intersections with.
    /// Set the value of this parameter to null to use all curves in the sketch for the calculation.
    /// intersectingCurves : A collection of the actual intersecting curves
    /// intersectionPoints : A collection of intersection points (Point3D)
    /// Item numbers in this collection correspond to the item numbers in the intersectingCurves collection.
    /// Returns true if the method was successful. It can be successful regardless of whether intersections were found or not.
    bool intersections(const core::Ptr<core::ObjectCollection>& sketchCurves, core::Ptr<core::ObjectCollection>& intersectingCurves, core::Ptr<core::ObjectCollection>& intersectionPoints);

    ADSK_FUSION_SKETCHCURVE_API static const char* classType();
    ADSK_FUSION_SKETCHCURVE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCURVE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCURVE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double length_raw() const = 0;
    virtual bool isConstruction_raw() const = 0;
    virtual bool isConstruction_raw(bool value) = 0;
    virtual core::ObjectCollection* split_raw(core::Point3D* splitPoint, bool createConstraints) = 0;
    virtual core::ObjectCollection* trim_raw(core::Point3D* segmentPoint, bool createConstraints) = 0;
    virtual core::ObjectCollection* breakCurve_raw(core::Point3D* segmentPoint, bool createConstraints) = 0;
    virtual core::ObjectCollection* extend_raw(core::Point3D* endPoint, bool createConstraints) = 0;
    virtual bool intersections_raw(core::ObjectCollection* sketchCurves, core::ObjectCollection*& intersectingCurves, core::ObjectCollection*& intersectionPoints) = 0;
    virtual void placeholderSketchCurve0() {}
    virtual void placeholderSketchCurve1() {}
    virtual void placeholderSketchCurve2() {}
    virtual void placeholderSketchCurve3() {}
    virtual void placeholderSketchCurve4() {}
    virtual void placeholderSketchCurve5() {}
    virtual void placeholderSketchCurve6() {}
    virtual void placeholderSketchCurve7() {}
    virtual void placeholderSketchCurve8() {}
    virtual void placeholderSketchCurve9() {}
    virtual void placeholderSketchCurve10() {}
    virtual void placeholderSketchCurve11() {}
    virtual void placeholderSketchCurve12() {}
    virtual void placeholderSketchCurve13() {}
    virtual void placeholderSketchCurve14() {}
    virtual void placeholderSketchCurve15() {}
    virtual void placeholderSketchCurve16() {}
    virtual void placeholderSketchCurve17() {}
    virtual void placeholderSketchCurve18() {}
    virtual void placeholderSketchCurve19() {}
    virtual void placeholderSketchCurve20() {}
    virtual void placeholderSketchCurve21() {}
    virtual void placeholderSketchCurve22() {}
    virtual void placeholderSketchCurve23() {}
};

// Inline wrappers

inline double SketchCurve::length() const
{
    double res = length_raw();
    return res;
}

inline bool SketchCurve::isConstruction() const
{
    bool res = isConstruction_raw();
    return res;
}

inline bool SketchCurve::isConstruction(bool value)
{
    return isConstruction_raw(value);
}

inline core::Ptr<core::ObjectCollection> SketchCurve::split(const core::Ptr<core::Point3D>& splitPoint, bool createConstraints)
{
    core::Ptr<core::ObjectCollection> res = split_raw(splitPoint.get(), createConstraints);
    return res;
}

inline core::Ptr<core::ObjectCollection> SketchCurve::trim(const core::Ptr<core::Point3D>& segmentPoint, bool createConstraints)
{
    core::Ptr<core::ObjectCollection> res = trim_raw(segmentPoint.get(), createConstraints);
    return res;
}

inline core::Ptr<core::ObjectCollection> SketchCurve::breakCurve(const core::Ptr<core::Point3D>& segmentPoint, bool createConstraints)
{
    core::Ptr<core::ObjectCollection> res = breakCurve_raw(segmentPoint.get(), createConstraints);
    return res;
}

inline core::Ptr<core::ObjectCollection> SketchCurve::extend(const core::Ptr<core::Point3D>& endPoint, bool createConstraints)
{
    core::Ptr<core::ObjectCollection> res = extend_raw(endPoint.get(), createConstraints);
    return res;
}

inline bool SketchCurve::intersections(const core::Ptr<core::ObjectCollection>& sketchCurves, core::Ptr<core::ObjectCollection>& intersectingCurves, core::Ptr<core::ObjectCollection>& intersectionPoints)
{
    core::ObjectCollection* intersectingCurves_ = nullptr;
    core::ObjectCollection* intersectionPoints_ = nullptr;

    bool res = intersections_raw(sketchCurves.get(), intersectingCurves_, intersectionPoints_);
    intersectingCurves = intersectingCurves_;
    intersectionPoints = intersectionPoints_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCURVE_API