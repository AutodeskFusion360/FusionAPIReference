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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_GEOMETRICCONSTRAINTS_CPP__
# define ADSK_FUSION_GEOMETRICCONSTRAINTS_API XI_EXPORT
# else
# define ADSK_FUSION_GEOMETRICCONSTRAINTS_API
# endif
#else
# define ADSK_FUSION_GEOMETRICCONSTRAINTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class CircularPatternConstraint;
    class CircularPatternConstraintInput;
    class CoincidentConstraint;
    class CoincidentToSurfaceConstraint;
    class CollinearConstraint;
    class ConcentricConstraint;
    class EqualConstraint;
    class GeometricConstraint;
    class HorizontalConstraint;
    class HorizontalPointsConstraint;
    class LineOnPlanarSurfaceConstraint;
    class LineParallelToPlanarSurfaceConstraint;
    class MidPointConstraint;
    class OffsetConstraint;
    class OffsetConstraintInput;
    class ParallelConstraint;
    class PerpendicularConstraint;
    class PerpendicularToSurfaceConstraint;
    class PolygonConstraint;
    class RectangularPatternConstraint;
    class RectangularPatternConstraintInput;
    class SketchCurve;
    class SketchEntity;
    class SketchLine;
    class SketchPoint;
    class SmoothConstraint;
    class SymmetryConstraint;
    class TangentConstraint;
    class VerticalConstraint;
    class VerticalPointsConstraint;
}}

namespace adsk { namespace fusion {

/// A collection of all of the geometric constraints in a sketch. This object
/// also supports the methods to create new geometric constraints.
class GeometricConstraints : public core::Base {
public:

    /// Function that returns the specified sketch constraint using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<GeometricConstraint> item(size_t index) const;

    /// Returns the number of constraints in the sketch.
    size_t count() const;

    /// Creates a new coincident constraint between two entities. The first argument
    /// is a sketch point. The second argument is a sketch curve or point.
    /// point : The SketchPoint that will be made coincident.
    /// entity : The SketchPoint or sketch curve that the point will be made coincident to.
    /// Returns the newly created CoincidentConstraint object or null if the creation failed.
    core::Ptr<CoincidentConstraint> addCoincident(const core::Ptr<SketchPoint>& point, const core::Ptr<SketchEntity>& entity);

    /// Creates a new collinear constraint between two lines.
    /// lineOne : The first line to create the constraint on.
    /// lineTwo : The second line to create the constraint on.
    /// Returns the newly created CollinearConstraint object or null if the creation failed.
    core::Ptr<CollinearConstraint> addCollinear(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo);

    /// Creates a new concentric constraint between two circles, arcs, ellipses, or elliptical arcs.
    /// entityOne : The first circle, arc, ellipse or elliptical arc.
    /// entityTwo : The second circle, arc, ellipse or elliptical arc.
    /// Returns the newly created ConcentricConstraint object or null if the creation failed.
    core::Ptr<ConcentricConstraint> addConcentric(const core::Ptr<SketchCurve>& entityOne, const core::Ptr<SketchCurve>& entityTwo);

    /// Creates a new midpoint constraint between a point and a curve.
    /// point : The point to constrain to the midpoint of a curve.
    /// midPointCurve : The curve that defines the midpoint to constraint to.
    /// Returns the newly created MidPointConstraint object or null if the creation failed.
    core::Ptr<MidPointConstraint> addMidPoint(const core::Ptr<SketchPoint>& point, const core::Ptr<SketchCurve>& midPointCurve);

    /// Creates a new parallel constraint between two lines.
    /// lineOne : The first SketchLine.
    /// lineTwo : The second SketchLine.
    /// Returns the newly created ParallelConstraint object or null if the creation failed.
    core::Ptr<ParallelConstraint> addParallel(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo);

    /// Creates a new perpendicular constraint between two lines.
    /// lineOne : The first SketchLine.
    /// lineTwo : The second SketchLine.
    /// Returns the newly created PerpendicularConstraint object or null if the creation failed.
    core::Ptr<PerpendicularConstraint> addPerpendicular(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo);

    /// Creates a new horizontal constraint on a line.
    /// line : The line to constrain horizontally.
    /// Returns the newly created HorizontalConstraint object or null if the creation failed.
    core::Ptr<HorizontalConstraint> addHorizontal(const core::Ptr<SketchLine>& line);

    /// Creates a new horizontal constraint between two points.
    /// pointOne : The first SketchPoint to constrain horizontally.
    /// pointTwo : The second SketchPoint to constrain horizontally.
    /// Returns the newly created HorizontalPointsConstraint object or null if the creation failed.
    core::Ptr<HorizontalPointsConstraint> addHorizontalPoints(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo);

    /// Creates a new vertical constraint on a line.
    /// line : The line to constrain vertically.
    /// Returns the newly created VerticalConstraint object or null if the creation failed.
    core::Ptr<VerticalConstraint> addVertical(const core::Ptr<SketchLine>& line);

    /// Creates a new vertical constraint between two points.
    /// pointOne : The first SketchPoint to constrain vertically.
    /// pointTwo : The second SketchPoint to constrain vertically.
    /// Returns the newly created VerticalPointsConstraint object or null if the creation failed.
    core::Ptr<VerticalPointsConstraint> addVerticalPoints(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo);

    /// Creates a new tangent constraint between two curves.
    /// curveOne : The first curve to be tangent.
    /// curveTwo : The second curve to be tangent.
    /// Returns the newly created TangentConstraint object or null if the creation failed.
    core::Ptr<TangentConstraint> addTangent(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo);

    /// Creates a new smooth constraint between two curves. One of the curves
    /// must be a spline. The other curve can be a spline or any other type of curve.
    /// curveOne : The first curve to be constrained to be smooth to the second curve.
    /// curveTwo : The second curve to be constrained to be smooth to the first curve.
    /// Returns the newly created SmoothConstraint object or null if the creation failed.
    core::Ptr<SmoothConstraint> addSmooth(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo);

    /// Creates a new equal constraint between two lines, or between arcs and circles.
    /// curveOne : The first line, arc, or circle.
    /// curveTwo : The second line, arc, or circle.
    /// Returns the newly created EqualConstraint object or null if the creation failed.
    core::Ptr<EqualConstraint> addEqual(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo);

    /// Creates a new symmetry constraint.
    /// entityOne : The first sketch entity to be symmetric.
    /// entityTwo : The second sketch entity to be symmetric. It must be the same type as the first entity.
    /// symmetryLine : The SketchLine that defines the axis of symmetry.
    /// Returns the newly created SymmetryConstraint object or null if the creation failed.
    core::Ptr<SymmetryConstraint> addSymmetry(const core::Ptr<SketchEntity>& entityOne, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<SketchLine>& symmetryLine);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates an offset constraint, which results in creating a new set of curves that are an offset of
    /// the input curves. The returned offset constraint provides access to the created curves and the
    /// parameter controlling the offset.
    /// 
    /// The offset direction is implied by the flow direction of the provided curves. For example, if
    /// two connected lines are offset, the flow direction is from line 1 to line 2. A positive offset
    /// value creates the offset curve to the "right" of the lines and a negative offset goes to the "left".
    /// Left and right are evaluated with respect to the geometry. If you are standing on line 1 looking
    /// towards line 2 your left and right are the offset left and right. For closed single curves like
    /// circles and ellipses their flow direction is always counterclockwise so a positive offset is
    /// always to the outsides.
    /// curves : A set of end connected curves. The Sketch.FindConnectedCurves method is a convenient way to get
    /// this set of curves.
    /// offset : The value that defines the offset. This is a ValueInput object so it can be a float value to define
    /// the offset in centimeters or it can be a string defining an expression that will be used by the
    /// dimension that controls the offset.
    /// basePoint : The location on one of the curves where the offset dimension will be created.
    /// The created OffsetConstraint. You can use properties on the constraint to get information about the offset.
    core::Ptr<OffsetConstraint> addOffset(const std::vector<core::Ptr<SketchCurve>>& curves, const core::Ptr<core::ValueInput>& offset, const core::Ptr<core::Point3D>& basePoint);

    /// Creates a new RectangularPatternConstraintInput object. Use this object to define the various settings
    /// associated with a rectangular pattern in a sketch. Once the pattern is defined you can call the addRectangularPattern
    /// method and pass in the input object to create the sketch rectangular pattern.
    /// entities : An array of sketch entities to pattern. These can be sketch points and curves.
    /// distanceType : Specifies if the distances defined for the pattern define the overall size of the pattern or the distance between the rows and columns.
    /// Returns the created RectangularPatternsConstraintInput object or null in the case of failure.
    core::Ptr<RectangularPatternConstraintInput> createRectangularPatternInput(const std::vector<core::Ptr<SketchEntity>>& entities, PatternDistanceType distanceType);

    /// Creates a new rectangular pattern in the sketch.
    /// input : A RectangularPatternConstraintInput object that defines all of inputs required to create
    /// the desired rectangular pattern. Use the createRectangularPatternInput method to create the
    /// input object.
    /// 
    core::Ptr<RectangularPatternConstraint> addRectangularPattern(const core::Ptr<RectangularPatternConstraintInput>& input);

    /// Creates a CircularPatternConstraintInput object. Use properties and methods on this object
    /// to define the circular pattern you want to create and then use the Add method, passing in
    /// the CircularPatternConstraintInput object.
    /// inputEntities : An array of sketch entities to be patterned.
    /// All of the entities must be from the current sketch.
    /// centerPoint : A SketchPoint from the same sketch that defines the center of the pattern.
    /// Returns the newly created CircularPatternConstraintInput object or null if the creation failed.
    core::Ptr<CircularPatternConstraintInput> createCircularPatternInput(const std::vector<core::Ptr<SketchEntity>>& inputEntities, const core::Ptr<SketchPoint>& centerPoint) const;

    /// Creates a new circular pattern in the sketch.
    /// input : A CircularPatternConstraintInput object that defines the desired circular pattern. Use the
    /// createCircularPatternInput method to create a new CircularPatternConstraintInput
    /// object and then use methods on it to define the circular pattern.
    /// Returns the newly created CircularPatternConstraint object or null if the creation failed.
    core::Ptr<CircularPatternConstraint> addCircularPattern(const core::Ptr<CircularPatternConstraintInput>& input);

    /// Creates a new coincident constraint between the sketch point and surface. This forces the point to
    /// lie on the surface.
    /// point : The SketchPoint to constrain to the surface.
    /// surface : The BRepFace or ConstructionPlane the point will be coincident to.
    /// Returns the newly created CoincidentToSurfaceConstraint object or null if the creation failed.
    core::Ptr<CoincidentToSurfaceConstraint> addCoincidentToSurface(const core::Ptr<SketchPoint>& point, const core::Ptr<core::Base>& surface);

    /// Creates a new parallel constraint between a sketch line and a planar surface that will constrain
    /// the line to lie on a plane parallel to the specified surface.
    /// line : The SketchLine to constrain to the surface.
    /// planarSurface : The planar BRepFace or CosntructionPlane the sketch line will be parallel to.
    /// Returns the newly created LineParallelToPlanarSurfaceConstraint object or null if the creation failed.
    core::Ptr<LineParallelToPlanarSurfaceConstraint> addLineParallelToPlanarSurface(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface);

    /// Creates a new constraint that forces the sketch line to lie on a planar surface.
    /// line : The SketchLine to constrain to the surface.
    /// planarSurface : The planar BRepFace or CosntructionPlane the sketch line will lie on.
    /// Returns the newly created LineOnPlanarSurfaceConstraint object or null if the creation failed.
    core::Ptr<LineOnPlanarSurfaceConstraint> addLineOnPlanarSurface(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface);

    /// Creates a new perpendicular constraint that forces the sketch curve to be perpendicular to the specified surface. Line and spline curves are supported.
    /// curve : The SketchCurve to constrain to the surface.
    /// surface : The BRepFace or ConstructionPlane the line will be perpendicular to.
    /// Returns the newly created PerpendicularToSurfaceConstraint object or null if the creation failed.
    core::Ptr<PerpendicularToSurfaceConstraint> addPerpendicularToSurface(const core::Ptr<SketchCurve>& curve, const core::Ptr<core::Base>& surface);

    /// Creates an OffsetConstraintInput object. Use properties and methods on this object to define the offset you
    /// want to create and then use the addOffset2 method, passing in the OffsetConstraintInput object, to create the offset.
    /// curves : A set of end connected curves. The Sketch.FindConnectedCurves method is a convenient way to get
    /// this set of curves.
    /// offset : The value that defines the offset. This is a ValueInput object so it can be a float value to define the offset
    /// in centimeters or it can be a string defining an expression that will be used by the parameter controlling the
    /// offset. A positive offset value creates the offset curve to the "right" and a negative offset value goes to the "left".
    /// 
    /// The flow direction of the provided curves implies the offset direction. For example, if two connected lines
    /// are offset, the flow direction is from line 1 to line 2. Left and right are evaluated relative to the input
    /// geometry. If you are standing on line 1 and looking towards line 2, the offset's left side is on your left,
    /// and the right side is to your right. Closed single curves like circles and ellipses always have a counterclockwise
    /// flow, so a positive offset is always to the outside. For closed splines, the positive direction is based on
    /// the spline's parameterization.
    /// Returns an OffsetConstraintInput object or null in the case of invalid input.
    core::Ptr<OffsetConstraintInput> createOffsetInput(const std::vector<core::Ptr<SketchCurve>>& curves, const core::Ptr<core::ValueInput>& offset) const;

    /// Creates an offset constraint, which results in creating a new set of curves that are an offset of
    /// the input curves. The returned offset constraint object provides access to the created curves and the
    /// parameter controlling the offset.
    /// input : The OffsetConstraintInput object that defines the offset to create.
    /// Returns the newly created OffsetConstraint object or null if the creation failed.
    core::Ptr<OffsetConstraint> addOffset2(const core::Ptr<OffsetConstraintInput>& input);

    /// Creates two offset constraints, which results in creating two new sets of curves that are an offset of
    /// the input curves on each side of the original set of curves. The returned offset constraint objects
    /// provide access to the created curves and the parameters controlling the offsets.
    /// input : The OffsetConstraintInput object that defines the offset to create. The same definition applies to
    /// both offsets that are created.
    /// linkOffsets : Defines if the parameter driving the offset of the second side should reference the parameter of
    /// the first side. This sets up the parameters so if the first side is edited, the second side will
    /// automatically update using the same value. A value of true will create the linked parameter.
    /// Returns an array containing the two OffsetConstraint objects or errors if the creation failed.
    std::vector<core::Ptr<OffsetConstraint>> addTwoSidesOffset(const core::Ptr<OffsetConstraintInput>& input, bool linkOffsets);

    /// Creates a polygon constraint on existing lines in the sketch.
    /// lines : An array of existing SketchLine objects in this sketch that define a valid polygon.
    /// They must be the same length, connect at their endpoints, have the same angle between them,
    /// and define a closed shape. The order of the lines within the array does not matter.
    /// Returns the created PolygonConstraint or null if the creation failed.
    core::Ptr<PolygonConstraint> addPolygon(const std::vector<core::Ptr<SketchLine>>& lines);

    typedef GeometricConstraint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_GEOMETRICCONSTRAINTS_API static const char* classType();
    ADSK_FUSION_GEOMETRICCONSTRAINTS_API const char* objectType() const override;
    ADSK_FUSION_GEOMETRICCONSTRAINTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_GEOMETRICCONSTRAINTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeometricConstraint* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CoincidentConstraint* addCoincident_raw(SketchPoint* point, SketchEntity* entity) = 0;
    virtual CollinearConstraint* addCollinear_raw(SketchLine* lineOne, SketchLine* lineTwo) = 0;
    virtual ConcentricConstraint* addConcentric_raw(SketchCurve* entityOne, SketchCurve* entityTwo) = 0;
    virtual MidPointConstraint* addMidPoint_raw(SketchPoint* point, SketchCurve* midPointCurve) = 0;
    virtual ParallelConstraint* addParallel_raw(SketchLine* lineOne, SketchLine* lineTwo) = 0;
    virtual PerpendicularConstraint* addPerpendicular_raw(SketchLine* lineOne, SketchLine* lineTwo) = 0;
    virtual HorizontalConstraint* addHorizontal_raw(SketchLine* line) = 0;
    virtual HorizontalPointsConstraint* addHorizontalPoints_raw(SketchPoint* pointOne, SketchPoint* pointTwo) = 0;
    virtual VerticalConstraint* addVertical_raw(SketchLine* line) = 0;
    virtual VerticalPointsConstraint* addVerticalPoints_raw(SketchPoint* pointOne, SketchPoint* pointTwo) = 0;
    virtual TangentConstraint* addTangent_raw(SketchCurve* curveOne, SketchCurve* curveTwo) = 0;
    virtual SmoothConstraint* addSmooth_raw(SketchCurve* curveOne, SketchCurve* curveTwo) = 0;
    virtual EqualConstraint* addEqual_raw(SketchCurve* curveOne, SketchCurve* curveTwo) = 0;
    virtual SymmetryConstraint* addSymmetry_raw(SketchEntity* entityOne, SketchEntity* entityTwo, SketchLine* symmetryLine) = 0;
    virtual OffsetConstraint* addOffset_raw(SketchCurve** curves, size_t curves_size, core::ValueInput* offset, core::Point3D* basePoint) = 0;
    virtual RectangularPatternConstraintInput* createRectangularPatternInput_raw(SketchEntity** entities, size_t entities_size, PatternDistanceType distanceType) = 0;
    virtual RectangularPatternConstraint* addRectangularPattern_raw(RectangularPatternConstraintInput* input) = 0;
    virtual CircularPatternConstraintInput* createCircularPatternInput_raw(SketchEntity** inputEntities, size_t inputEntities_size, SketchPoint* centerPoint) const = 0;
    virtual CircularPatternConstraint* addCircularPattern_raw(CircularPatternConstraintInput* input) = 0;
    virtual CoincidentToSurfaceConstraint* addCoincidentToSurface_raw(SketchPoint* point, core::Base* surface) = 0;
    virtual LineParallelToPlanarSurfaceConstraint* addLineParallelToPlanarSurface_raw(SketchLine* line, core::Base* planarSurface) = 0;
    virtual LineOnPlanarSurfaceConstraint* addLineOnPlanarSurface_raw(SketchLine* line, core::Base* planarSurface) = 0;
    virtual PerpendicularToSurfaceConstraint* addPerpendicularToSurface_raw(SketchCurve* curve, core::Base* surface) = 0;
    virtual OffsetConstraintInput* createOffsetInput_raw(SketchCurve** curves, size_t curves_size, core::ValueInput* offset) const = 0;
    virtual OffsetConstraint* addOffset2_raw(OffsetConstraintInput* input) = 0;
    virtual OffsetConstraint** addTwoSidesOffset_raw(OffsetConstraintInput* input, bool linkOffsets, size_t& return_size) = 0;
    virtual PolygonConstraint* addPolygon_raw(SketchLine** lines, size_t lines_size) = 0;
};

// Inline wrappers

inline core::Ptr<GeometricConstraint> GeometricConstraints::item(size_t index) const
{
    core::Ptr<GeometricConstraint> res = item_raw(index);
    return res;
}

inline size_t GeometricConstraints::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CoincidentConstraint> GeometricConstraints::addCoincident(const core::Ptr<SketchPoint>& point, const core::Ptr<SketchEntity>& entity)
{
    core::Ptr<CoincidentConstraint> res = addCoincident_raw(point.get(), entity.get());
    return res;
}

inline core::Ptr<CollinearConstraint> GeometricConstraints::addCollinear(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo)
{
    core::Ptr<CollinearConstraint> res = addCollinear_raw(lineOne.get(), lineTwo.get());
    return res;
}

inline core::Ptr<ConcentricConstraint> GeometricConstraints::addConcentric(const core::Ptr<SketchCurve>& entityOne, const core::Ptr<SketchCurve>& entityTwo)
{
    core::Ptr<ConcentricConstraint> res = addConcentric_raw(entityOne.get(), entityTwo.get());
    return res;
}

inline core::Ptr<MidPointConstraint> GeometricConstraints::addMidPoint(const core::Ptr<SketchPoint>& point, const core::Ptr<SketchCurve>& midPointCurve)
{
    core::Ptr<MidPointConstraint> res = addMidPoint_raw(point.get(), midPointCurve.get());
    return res;
}

inline core::Ptr<ParallelConstraint> GeometricConstraints::addParallel(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo)
{
    core::Ptr<ParallelConstraint> res = addParallel_raw(lineOne.get(), lineTwo.get());
    return res;
}

inline core::Ptr<PerpendicularConstraint> GeometricConstraints::addPerpendicular(const core::Ptr<SketchLine>& lineOne, const core::Ptr<SketchLine>& lineTwo)
{
    core::Ptr<PerpendicularConstraint> res = addPerpendicular_raw(lineOne.get(), lineTwo.get());
    return res;
}

inline core::Ptr<HorizontalConstraint> GeometricConstraints::addHorizontal(const core::Ptr<SketchLine>& line)
{
    core::Ptr<HorizontalConstraint> res = addHorizontal_raw(line.get());
    return res;
}

inline core::Ptr<HorizontalPointsConstraint> GeometricConstraints::addHorizontalPoints(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo)
{
    core::Ptr<HorizontalPointsConstraint> res = addHorizontalPoints_raw(pointOne.get(), pointTwo.get());
    return res;
}

inline core::Ptr<VerticalConstraint> GeometricConstraints::addVertical(const core::Ptr<SketchLine>& line)
{
    core::Ptr<VerticalConstraint> res = addVertical_raw(line.get());
    return res;
}

inline core::Ptr<VerticalPointsConstraint> GeometricConstraints::addVerticalPoints(const core::Ptr<SketchPoint>& pointOne, const core::Ptr<SketchPoint>& pointTwo)
{
    core::Ptr<VerticalPointsConstraint> res = addVerticalPoints_raw(pointOne.get(), pointTwo.get());
    return res;
}

inline core::Ptr<TangentConstraint> GeometricConstraints::addTangent(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo)
{
    core::Ptr<TangentConstraint> res = addTangent_raw(curveOne.get(), curveTwo.get());
    return res;
}

inline core::Ptr<SmoothConstraint> GeometricConstraints::addSmooth(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo)
{
    core::Ptr<SmoothConstraint> res = addSmooth_raw(curveOne.get(), curveTwo.get());
    return res;
}

inline core::Ptr<EqualConstraint> GeometricConstraints::addEqual(const core::Ptr<SketchCurve>& curveOne, const core::Ptr<SketchCurve>& curveTwo)
{
    core::Ptr<EqualConstraint> res = addEqual_raw(curveOne.get(), curveTwo.get());
    return res;
}

inline core::Ptr<SymmetryConstraint> GeometricConstraints::addSymmetry(const core::Ptr<SketchEntity>& entityOne, const core::Ptr<SketchEntity>& entityTwo, const core::Ptr<SketchLine>& symmetryLine)
{
    core::Ptr<SymmetryConstraint> res = addSymmetry_raw(entityOne.get(), entityTwo.get(), symmetryLine.get());
    return res;
}

inline core::Ptr<OffsetConstraint> GeometricConstraints::addOffset(const std::vector<core::Ptr<SketchCurve>>& curves, const core::Ptr<core::ValueInput>& offset, const core::Ptr<core::Point3D>& basePoint)
{
    SketchCurve** curves_ = new SketchCurve*[curves.size()];
    for(size_t i=0; i<curves.size(); ++i)
        curves_[i] = curves[i].get();

    core::Ptr<OffsetConstraint> res = addOffset_raw(curves_, curves.size(), offset.get(), basePoint.get());
    delete[] curves_;
    return res;
}

inline core::Ptr<RectangularPatternConstraintInput> GeometricConstraints::createRectangularPatternInput(const std::vector<core::Ptr<SketchEntity>>& entities, PatternDistanceType distanceType)
{
    SketchEntity** entities_ = new SketchEntity*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    core::Ptr<RectangularPatternConstraintInput> res = createRectangularPatternInput_raw(entities_, entities.size(), distanceType);
    delete[] entities_;
    return res;
}

inline core::Ptr<RectangularPatternConstraint> GeometricConstraints::addRectangularPattern(const core::Ptr<RectangularPatternConstraintInput>& input)
{
    core::Ptr<RectangularPatternConstraint> res = addRectangularPattern_raw(input.get());
    return res;
}

inline core::Ptr<CircularPatternConstraintInput> GeometricConstraints::createCircularPatternInput(const std::vector<core::Ptr<SketchEntity>>& inputEntities, const core::Ptr<SketchPoint>& centerPoint) const
{
    SketchEntity** inputEntities_ = new SketchEntity*[inputEntities.size()];
    for(size_t i=0; i<inputEntities.size(); ++i)
        inputEntities_[i] = inputEntities[i].get();

    core::Ptr<CircularPatternConstraintInput> res = createCircularPatternInput_raw(inputEntities_, inputEntities.size(), centerPoint.get());
    delete[] inputEntities_;
    return res;
}

inline core::Ptr<CircularPatternConstraint> GeometricConstraints::addCircularPattern(const core::Ptr<CircularPatternConstraintInput>& input)
{
    core::Ptr<CircularPatternConstraint> res = addCircularPattern_raw(input.get());
    return res;
}

inline core::Ptr<CoincidentToSurfaceConstraint> GeometricConstraints::addCoincidentToSurface(const core::Ptr<SketchPoint>& point, const core::Ptr<core::Base>& surface)
{
    core::Ptr<CoincidentToSurfaceConstraint> res = addCoincidentToSurface_raw(point.get(), surface.get());
    return res;
}

inline core::Ptr<LineParallelToPlanarSurfaceConstraint> GeometricConstraints::addLineParallelToPlanarSurface(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface)
{
    core::Ptr<LineParallelToPlanarSurfaceConstraint> res = addLineParallelToPlanarSurface_raw(line.get(), planarSurface.get());
    return res;
}

inline core::Ptr<LineOnPlanarSurfaceConstraint> GeometricConstraints::addLineOnPlanarSurface(const core::Ptr<SketchLine>& line, const core::Ptr<core::Base>& planarSurface)
{
    core::Ptr<LineOnPlanarSurfaceConstraint> res = addLineOnPlanarSurface_raw(line.get(), planarSurface.get());
    return res;
}

inline core::Ptr<PerpendicularToSurfaceConstraint> GeometricConstraints::addPerpendicularToSurface(const core::Ptr<SketchCurve>& curve, const core::Ptr<core::Base>& surface)
{
    core::Ptr<PerpendicularToSurfaceConstraint> res = addPerpendicularToSurface_raw(curve.get(), surface.get());
    return res;
}

inline core::Ptr<OffsetConstraintInput> GeometricConstraints::createOffsetInput(const std::vector<core::Ptr<SketchCurve>>& curves, const core::Ptr<core::ValueInput>& offset) const
{
    SketchCurve** curves_ = new SketchCurve*[curves.size()];
    for(size_t i=0; i<curves.size(); ++i)
        curves_[i] = curves[i].get();

    core::Ptr<OffsetConstraintInput> res = createOffsetInput_raw(curves_, curves.size(), offset.get());
    delete[] curves_;
    return res;
}

inline core::Ptr<OffsetConstraint> GeometricConstraints::addOffset2(const core::Ptr<OffsetConstraintInput>& input)
{
    core::Ptr<OffsetConstraint> res = addOffset2_raw(input.get());
    return res;
}

inline std::vector<core::Ptr<OffsetConstraint>> GeometricConstraints::addTwoSidesOffset(const core::Ptr<OffsetConstraintInput>& input, bool linkOffsets)
{
    std::vector<core::Ptr<OffsetConstraint>> res;
    size_t s;

    OffsetConstraint** p= addTwoSidesOffset_raw(input.get(), linkOffsets, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PolygonConstraint> GeometricConstraints::addPolygon(const std::vector<core::Ptr<SketchLine>>& lines)
{
    SketchLine** lines_ = new SketchLine*[lines.size()];
    for(size_t i=0; i<lines.size(); ++i)
        lines_[i] = lines[i].get();

    core::Ptr<PolygonConstraint> res = addPolygon_raw(lines_, lines.size());
    delete[] lines_;
    return res;
}

template <class OutputIterator> inline void GeometricConstraints::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_GEOMETRICCONSTRAINTS_API