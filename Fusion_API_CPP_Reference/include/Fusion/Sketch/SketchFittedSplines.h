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
# ifdef __COMPILING_ADSK_FUSION_SKETCHFITTEDSPLINES_CPP__
# define ADSK_FUSION_SKETCHFITTEDSPLINES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHFITTEDSPLINES_API
# endif
#else
# define ADSK_FUSION_SKETCHFITTEDSPLINES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve3D;
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class SketchFittedSpline;
}}

namespace adsk { namespace fusion {

/// The collection of fitted splines in a sketch. This provides access to the existing
/// fitted splines and supports the methods to create new fitted splines.
class SketchFittedSplines : public core::Base {
public:

    /// Function that returns the specified sketch fitted spline using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchFittedSpline> item(size_t index) const;

    /// Returns the number of fitted splines in the sketch.
    size_t count() const;

    /// Creates a new fitted spline through the specified points.
    /// fitPoints : A collection of points that the curve will fit through. They
    /// can be any combination of existing SketchPoint or Point3D objects.
    /// Returns the newly created SketchFittedSpline object if the creation was successful or null if it failed.
    core::Ptr<SketchFittedSpline> add(const core::Ptr<core::ObjectCollection>& fitPoints);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new fitted spline using the input NurbsCurve3D to define the shape. Fit points are created
    /// to create a curve that exactly matches the input curve.
    /// nurbsCurve : A NurbsCurve3D object that defines a valid NURBS curve.
    /// Returns the newly created SketchFittedSpline object if the creation was successful or null if it failed.
    core::Ptr<SketchFittedSpline> addByNurbsCurve(const core::Ptr<core::NurbsCurve3D>& nurbsCurve);

    typedef SketchFittedSpline iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHFITTEDSPLINES_API static const char* classType();
    ADSK_FUSION_SKETCHFITTEDSPLINES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHFITTEDSPLINES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHFITTEDSPLINES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchFittedSpline* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchFittedSpline* add_raw(core::ObjectCollection* fitPoints) = 0;
    virtual SketchFittedSpline* addByNurbsCurve_raw(core::NurbsCurve3D* nurbsCurve) = 0;
};

// Inline wrappers

inline core::Ptr<SketchFittedSpline> SketchFittedSplines::item(size_t index) const
{
    core::Ptr<SketchFittedSpline> res = item_raw(index);
    return res;
}

inline size_t SketchFittedSplines::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchFittedSpline> SketchFittedSplines::add(const core::Ptr<core::ObjectCollection>& fitPoints)
{
    core::Ptr<SketchFittedSpline> res = add_raw(fitPoints.get());
    return res;
}

inline core::Ptr<SketchFittedSpline> SketchFittedSplines::addByNurbsCurve(const core::Ptr<core::NurbsCurve3D>& nurbsCurve)
{
    core::Ptr<SketchFittedSpline> res = addByNurbsCurve_raw(nurbsCurve.get());
    return res;
}

template <class OutputIterator> inline void SketchFittedSplines::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHFITTEDSPLINES_API