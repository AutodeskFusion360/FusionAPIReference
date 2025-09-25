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
# ifdef __COMPILING_ADSK_FUSION_SKETCHELLIPTICALARCS_CPP__
# define ADSK_FUSION_SKETCHELLIPTICALARCS_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHELLIPTICALARCS_API
# endif
#else
# define ADSK_FUSION_SKETCHELLIPTICALARCS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class SketchEllipticalArc;
}}

namespace adsk { namespace fusion {

/// The collection of elliptical arcs in a sketch. This provides access to the existing
/// elliptical arcs and supports the methods to create new elliptical arcs.
class SketchEllipticalArcs : public core::Base {
public:

    /// Function that returns the specified sketch elliptical arc using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchEllipticalArc> item(size_t index) const;

    /// Returns the number of elliptical arcs in the sketch.
    size_t count() const;

    /// Creates an elliptical sketch arc where the sweep of the arc is defined by the start and sweep angles.
    /// centerPoint : The center point of the ellipse. This can be either an existing SketchPoint or a Point3D object.
    /// majorAxis : The direction of the major axis. The magnitude of this vector defines the major radius.
    /// minorAxis : The direction of the minor axis. The magnitude of this vector defines the minor radius.
    /// This vector should be perpendicular to the major axis.
    /// startAngle : The start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// sweepAngle : The sweep angle of the elliptical arc in radians, where a positive value is counterclockwise.
    /// Returns the newly created SketchEllipticalArc or null if the creation failed.
    core::Ptr<SketchEllipticalArc> addByAngle(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Vector3D>& majorAxis, const core::Ptr<core::Vector3D>& minorAxis, double startAngle, double sweepAngle);

    /// Creates an elliptical sketch arc where the sweep of the arc is defined by two points.
    /// centerPoint : The center point of the ellipse. This can be either an existing SketchPoint or a Point3D object.
    /// majorAxis : The direction of the major axis. The magnitude of this vector defines the major radius.
    /// minorAxis : The direction of the minor axis. The magnitude of this vector defines the minor radius.
    /// This vector should be perpendicular to the major axis.
    /// startPoint : The start point of the elliptical arc. This can be either an existing SketchPoint or a Point3D object.
    /// The point should lie on the defined ellipse.
    /// endPoint : The end point of the elliptical arc. This can be either an existing SketchPoint or a Point3D object.
    /// The point should lie on the defined ellipse and the elliptical arc is defined by a counterclockwise
    /// sweep from the start point to the end point.
    /// Returns the newly created SketchEllipticalArc or null if the creation failed.
    core::Ptr<SketchEllipticalArc> addByEndPoints(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Vector3D>& majorAxis, const core::Ptr<core::Vector3D>& minorAxis, const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint);

    typedef SketchEllipticalArc iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHELLIPTICALARCS_API static const char* classType();
    ADSK_FUSION_SKETCHELLIPTICALARCS_API const char* objectType() const override;
    ADSK_FUSION_SKETCHELLIPTICALARCS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHELLIPTICALARCS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEllipticalArc* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchEllipticalArc* addByAngle_raw(core::Base* centerPoint, core::Vector3D* majorAxis, core::Vector3D* minorAxis, double startAngle, double sweepAngle) = 0;
    virtual SketchEllipticalArc* addByEndPoints_raw(core::Base* centerPoint, core::Vector3D* majorAxis, core::Vector3D* minorAxis, core::Base* startPoint, core::Base* endPoint) = 0;
};

// Inline wrappers

inline core::Ptr<SketchEllipticalArc> SketchEllipticalArcs::item(size_t index) const
{
    core::Ptr<SketchEllipticalArc> res = item_raw(index);
    return res;
}

inline size_t SketchEllipticalArcs::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchEllipticalArc> SketchEllipticalArcs::addByAngle(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Vector3D>& majorAxis, const core::Ptr<core::Vector3D>& minorAxis, double startAngle, double sweepAngle)
{
    core::Ptr<SketchEllipticalArc> res = addByAngle_raw(centerPoint.get(), majorAxis.get(), minorAxis.get(), startAngle, sweepAngle);
    return res;
}

inline core::Ptr<SketchEllipticalArc> SketchEllipticalArcs::addByEndPoints(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Vector3D>& majorAxis, const core::Ptr<core::Vector3D>& minorAxis, const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint)
{
    core::Ptr<SketchEllipticalArc> res = addByEndPoints_raw(centerPoint.get(), majorAxis.get(), minorAxis.get(), startPoint.get(), endPoint.get());
    return res;
}

template <class OutputIterator> inline void SketchEllipticalArcs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHELLIPTICALARCS_API