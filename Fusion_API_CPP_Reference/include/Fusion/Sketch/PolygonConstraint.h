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
#include "GeometricConstraint.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_POLYGONCONSTRAINT_CPP__
# define ADSK_FUSION_POLYGONCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_POLYGONCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_POLYGONCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchLine;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A polygon constraint in a sketch.
class PolygonConstraint : public GeometricConstraint {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// This has been retired and you should use the points property instead.
    std::vector<core::Ptr<SketchLine>> lines() const;

    /// Returns the sketch points that define the vertices of the polygon. The
    /// sketch lines that draw the shape of the polygon can be obtained from the points.
    std::vector<core::Ptr<SketchPoint>> points() const;

    /// Returns the SketchPoint that acts as the center point of the polygon.
    core::Ptr<SketchPoint> centerPoint() const;

    ADSK_FUSION_POLYGONCONSTRAINT_API static const char* classType();
    ADSK_FUSION_POLYGONCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_POLYGONCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_POLYGONCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchLine** lines_raw(size_t& return_size) const = 0;
    virtual SketchPoint** points_raw(size_t& return_size) const = 0;
    virtual SketchPoint* centerPoint_raw() const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchLine>> PolygonConstraint::lines() const
{
    std::vector<core::Ptr<SketchLine>> res;
    size_t s;

    SketchLine** p= lines_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<SketchPoint>> PolygonConstraint::points() const
{
    std::vector<core::Ptr<SketchPoint>> res;
    size_t s;

    SketchPoint** p= points_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<SketchPoint> PolygonConstraint::centerPoint() const
{
    core::Ptr<SketchPoint> res = centerPoint_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_POLYGONCONSTRAINT_API