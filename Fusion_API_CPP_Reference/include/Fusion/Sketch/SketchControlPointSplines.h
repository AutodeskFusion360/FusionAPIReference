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
# ifdef __COMPILING_ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_CPP__
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API
# endif
#else
# define ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchControlPointSpline;
}}

namespace adsk { namespace fusion {

/// The collection of control point splines in a sketch.
class SketchControlPointSplines : public core::Base {
public:

    /// Function that returns the specified sketch control point spline using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchControlPointSpline> item(size_t index) const;

    /// Returns the number of control point splines in the sketch.
    size_t count() const;

    /// Creates a new control point spline.
    /// controlPoints : An array of points that define the control points of the curve's polygon. They
    /// can be any combination of existing SketchPoint or Point3D objects.
    /// degree : Specifies the degree of the spline. Only degree 3 and degree 5 can be specified while creating the spline.
    /// Returns the newly created SketchControlPointSpline object if the creation was successful or null if it failed.
    core::Ptr<SketchControlPointSpline> add(const std::vector<core::Ptr<core::Base>>& controlPoints, SplineDegrees degree);

    typedef SketchControlPointSpline iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API static const char* classType();
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchControlPointSpline* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchControlPointSpline* add_raw(core::Base** controlPoints, size_t controlPoints_size, SplineDegrees degree) = 0;
};

// Inline wrappers

inline core::Ptr<SketchControlPointSpline> SketchControlPointSplines::item(size_t index) const
{
    core::Ptr<SketchControlPointSpline> res = item_raw(index);
    return res;
}

inline size_t SketchControlPointSplines::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchControlPointSpline> SketchControlPointSplines::add(const std::vector<core::Ptr<core::Base>>& controlPoints, SplineDegrees degree)
{
    core::Base** controlPoints_ = new core::Base*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    core::Ptr<SketchControlPointSpline> res = add_raw(controlPoints_, controlPoints.size(), degree);
    delete[] controlPoints_;
    return res;
}

template <class OutputIterator> inline void SketchControlPointSplines::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCONTROLPOINTSPLINES_API