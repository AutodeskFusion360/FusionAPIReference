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
# ifdef __COMPILING_ADSK_FUSION_OFFSETCONSTRAINTINPUT_CPP__
# define ADSK_FUSION_OFFSETCONSTRAINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETCONSTRAINTINPUT_API
# endif
#else
# define ADSK_FUSION_OFFSETCONSTRAINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// Used to define the inputs needed to create an offset constraint.
class OffsetConstraintInput : public core::Base {
public:

    /// Gets and sets an array of SketchCurve objects that defines the connected curves that will be offset.
    /// The Sketch.FindConnectedCurves method is a convenient way to get this set of curves.
    std::vector<core::Ptr<SketchCurve>> curves() const;
    bool curves(const std::vector<core::Ptr<SketchCurve>>& value);

    /// Gets and sets the value that defines the offset. This is a ValueInput object so it can be a float value to
    /// define the offset in centimeters or it can be a string defining an expression that will be used by the parameter
    /// controlling the offset. A positive offset value creates the offset curve to the "right" and a negative offset
    /// value goes to the "left".
    /// 
    /// The flow direction of the provided curves implies the offset direction. For example, if two connected lines
    /// are offset, the flow direction is from line 1 to line 2. Left and right are evaluated relative to the input
    /// geometry. If you are standing on line 1 and looking towards line 2, the offset's left side is on your left,
    /// and the right side is to your right. Closed single curves like circles and ellipses always have a counterclockwise
    /// flow, so a positive offset is always to the outside. For closed splines, the positive direction is based on
    /// the spline's parameterization.
    core::Ptr<core::ValueInput> offset() const;
    bool offset(const core::Ptr<core::ValueInput>& value);

    /// A location on one of the curves where the offset dimension will be created. A value of null can be used to indicate
    /// that a default location should be used.
    /// 
    /// When the OffsetContraintInput is created this property defaults to null.
    core::Ptr<core::Point3D> dimensionPoint() const;
    bool dimensionPoint(const core::Ptr<core::Point3D>& value);

    /// Specifies if the offset curves must match the topology of the original curves. For example, if you have a sketch
    /// containing two lines with a fillet (arc) connecting them and offset them inward more than the arc radius, the
    /// resulting offset will be two lines. This is a change in topology because the original curves were line-arc-line,
    /// and the offset is line-line. An offset of less than the radius still results in a line-arc-line result. If this
    /// property is true, indicating the topology must match, creating the offset with a value greater than the arc radius
    /// will fail because the result will not have a matching topology.
    /// 
    /// When the OffsetConstraintInput is created, this property default to true.
    bool isTopologyMatched() const;
    bool isTopologyMatched(bool value);

    ADSK_FUSION_OFFSETCONSTRAINTINPUT_API static const char* classType();
    ADSK_FUSION_OFFSETCONSTRAINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_OFFSETCONSTRAINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETCONSTRAINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCurve** curves_raw(size_t& return_size) const = 0;
    virtual bool curves_raw(SketchCurve** value, size_t value_size) = 0;
    virtual core::ValueInput* offset_raw() const = 0;
    virtual bool offset_raw(core::ValueInput* value) = 0;
    virtual core::Point3D* dimensionPoint_raw() const = 0;
    virtual bool dimensionPoint_raw(core::Point3D* value) = 0;
    virtual bool isTopologyMatched_raw() const = 0;
    virtual bool isTopologyMatched_raw(bool value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchCurve>> OffsetConstraintInput::curves() const
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= curves_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OffsetConstraintInput::curves(const std::vector<core::Ptr<SketchCurve>>& value)
{
    SketchCurve** value_ = new SketchCurve*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = curves_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<core::ValueInput> OffsetConstraintInput::offset() const
{
    core::Ptr<core::ValueInput> res = offset_raw();
    return res;
}

inline bool OffsetConstraintInput::offset(const core::Ptr<core::ValueInput>& value)
{
    return offset_raw(value.get());
}

inline core::Ptr<core::Point3D> OffsetConstraintInput::dimensionPoint() const
{
    core::Ptr<core::Point3D> res = dimensionPoint_raw();
    return res;
}

inline bool OffsetConstraintInput::dimensionPoint(const core::Ptr<core::Point3D>& value)
{
    return dimensionPoint_raw(value.get());
}

inline bool OffsetConstraintInput::isTopologyMatched() const
{
    bool res = isTopologyMatched_raw();
    return res;
}

inline bool OffsetConstraintInput::isTopologyMatched(bool value)
{
    return isTopologyMatched_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETCONSTRAINTINPUT_API