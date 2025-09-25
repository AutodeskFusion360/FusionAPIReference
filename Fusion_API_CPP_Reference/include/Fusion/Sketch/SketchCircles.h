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
# ifdef __COMPILING_ADSK_FUSION_SKETCHCIRCLES_CPP__
# define ADSK_FUSION_SKETCHCIRCLES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCIRCLES_API
# endif
#else
# define ADSK_FUSION_SKETCHCIRCLES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class SketchCircle;
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// The collection of circles in a sketch. This provides access to the existing
/// circles and supports the methods to create new circles.
class SketchCircles : public core::Base {
public:

    /// Function that returns the specified sketch circle using an index into the collection.
    /// index : The index of the item within the collection to return.
    /// The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchCircle> item(size_t index) const;

    /// Returns the number of circles in the sketch.
    size_t count() const;

    /// Creates a sketch circle that is always parallel to the x-y plane of the sketch
    /// and is centered at the specified point.
    /// centerPoint : The center point of the circle. It can be an existing SketchPoint or a Point3D object.
    /// radius : The radius of the circle in centimeters.
    /// Returns the newly created SketchCircle object or null if the creation failed.
    core::Ptr<SketchCircle> addByCenterRadius(const core::Ptr<core::Base>& centerPoint, double radius);

    /// Creates a sketch circle where the circle passes through the two points and the
    /// distance between the two points is the diameter of the circle.
    /// pointOne : A Point3D object that defines a point is sketch space and lies on the x-y plane of the sketch.
    /// pointTwo : A Point3D object that defines a point is sketch space and lies on the x-y plane of the sketch.
    /// Returns the newly created SketchCircle object or null if the creation failed.
    core::Ptr<SketchCircle> addByTwoPoints(const core::Ptr<core::Point3D>& pointOne, const core::Ptr<core::Point3D>& pointTwo);

    /// Creates a sketch circle that passes through the three points. The three points must
    /// lie on the x-y plane of the sketch.
    /// pointOne : The first point that the circle will pass through. The z component must be zero.
    /// pointTwo : The second point that the circle will pass through. The z component must be zero.
    /// pointThree : The third point that the circle will pass through. The z component must be zero.
    /// Returns the newly created SketchCircle object or null if the creation failed.
    core::Ptr<SketchCircle> addByThreePoints(const core::Ptr<core::Point3D>& pointOne, const core::Ptr<core::Point3D>& pointTwo, const core::Ptr<core::Point3D>& pointThree);

    /// Creates a sketch circle that is tangent to the two input lines.
    /// The two lines must lie on the x-y plane of the sketch.
    /// tangentOne : The first line that the circle will be tangent to.
    /// The line must lie on the x-y plane of the sketch.
    /// tangentTwo : The second line that the circle will be tangent to.
    /// The line must lie on the x-y plane of the sketch and cannot
    /// be parallel to the first line.
    /// radius : The radius of the circle in centimeters.
    /// hintPoint : A point that specifies which of the possible four solutions to use
    /// when creating the circle. If you consider the two input lines to be infinite
    /// they create four quadrants which results in four possible solutions for the
    /// creation of the circle. The hint point is a point anywhere within the quadrant
    /// where you want the circle created.
    /// Returns the newly created SketchCircle object or null if the creation failed.
    core::Ptr<SketchCircle> addByTwoTangents(const core::Ptr<SketchLine>& tangentOne, const core::Ptr<SketchLine>& tangentTwo, double radius, const core::Ptr<core::Point3D>& hintPoint);

    /// Creates a sketch circle that is tangent to the three input lines.
    /// The three lines must lie on the x-y plane of the sketch.
    /// tangentOne : The first line that the circle will be tangent to.
    /// The line must lie on the x-y plane of the sketch and cannot be parallel
    /// to the second or third line.
    /// tangentTwo : The second line that the circle will be tangent to.
    /// The line must lie on the x-y plane of the sketch and cannot be parallel
    /// to the first or third line.
    /// tangentThree : The third line that the circle will be tangent to.
    /// The line must lie on the x-y plane of the sketch and cannot be parallel
    /// to the first or second line.
    /// hintPoint : A point that specifies which of the possible multiple solutions to use
    /// when creating the circle. If you consider the three input lines to be infinite
    /// there are many possible solutions when creating a circle that is tangent to all
    /// three lines. The hint point is a point anywhere within the area defined by the
    /// three lines where the circle is to be created.
    /// Returns the newly created SketchCircle object or null if the creation failed.
    core::Ptr<SketchCircle> addByThreeTangents(const core::Ptr<SketchLine>& tangentOne, const core::Ptr<SketchLine>& tangentTwo, const core::Ptr<SketchLine>& tangentThree, const core::Ptr<core::Point3D>& hintPoint);

    typedef SketchCircle iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHCIRCLES_API static const char* classType();
    ADSK_FUSION_SKETCHCIRCLES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCIRCLES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCIRCLES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCircle* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchCircle* addByCenterRadius_raw(core::Base* centerPoint, double radius) = 0;
    virtual SketchCircle* addByTwoPoints_raw(core::Point3D* pointOne, core::Point3D* pointTwo) = 0;
    virtual SketchCircle* addByThreePoints_raw(core::Point3D* pointOne, core::Point3D* pointTwo, core::Point3D* pointThree) = 0;
    virtual SketchCircle* addByTwoTangents_raw(SketchLine* tangentOne, SketchLine* tangentTwo, double radius, core::Point3D* hintPoint) = 0;
    virtual SketchCircle* addByThreeTangents_raw(SketchLine* tangentOne, SketchLine* tangentTwo, SketchLine* tangentThree, core::Point3D* hintPoint) = 0;
};

// Inline wrappers

inline core::Ptr<SketchCircle> SketchCircles::item(size_t index) const
{
    core::Ptr<SketchCircle> res = item_raw(index);
    return res;
}

inline size_t SketchCircles::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchCircle> SketchCircles::addByCenterRadius(const core::Ptr<core::Base>& centerPoint, double radius)
{
    core::Ptr<SketchCircle> res = addByCenterRadius_raw(centerPoint.get(), radius);
    return res;
}

inline core::Ptr<SketchCircle> SketchCircles::addByTwoPoints(const core::Ptr<core::Point3D>& pointOne, const core::Ptr<core::Point3D>& pointTwo)
{
    core::Ptr<SketchCircle> res = addByTwoPoints_raw(pointOne.get(), pointTwo.get());
    return res;
}

inline core::Ptr<SketchCircle> SketchCircles::addByThreePoints(const core::Ptr<core::Point3D>& pointOne, const core::Ptr<core::Point3D>& pointTwo, const core::Ptr<core::Point3D>& pointThree)
{
    core::Ptr<SketchCircle> res = addByThreePoints_raw(pointOne.get(), pointTwo.get(), pointThree.get());
    return res;
}

inline core::Ptr<SketchCircle> SketchCircles::addByTwoTangents(const core::Ptr<SketchLine>& tangentOne, const core::Ptr<SketchLine>& tangentTwo, double radius, const core::Ptr<core::Point3D>& hintPoint)
{
    core::Ptr<SketchCircle> res = addByTwoTangents_raw(tangentOne.get(), tangentTwo.get(), radius, hintPoint.get());
    return res;
}

inline core::Ptr<SketchCircle> SketchCircles::addByThreeTangents(const core::Ptr<SketchLine>& tangentOne, const core::Ptr<SketchLine>& tangentTwo, const core::Ptr<SketchLine>& tangentThree, const core::Ptr<core::Point3D>& hintPoint)
{
    core::Ptr<SketchCircle> res = addByThreeTangents_raw(tangentOne.get(), tangentTwo.get(), tangentThree.get(), hintPoint.get());
    return res;
}

template <class OutputIterator> inline void SketchCircles::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCIRCLES_API