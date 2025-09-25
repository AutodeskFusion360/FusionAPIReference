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
#include "CustomGraphicsEntity.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSCURVE_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSCURVE_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSCURVE_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSCURVE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
}}

namespace adsk { namespace fusion {

/// This represents custom graphics that are based on any object derived from Curve3D (except InfiniteLine3D).
/// This is useful when drawing curved geometry where the alternative is to stroke the smooth curve and draw
/// it as a series of lines. Using this you can directly use the curve and Fusion will automatically take care
/// of creating the correct display for the current level of detail.
class CustomGraphicsCurve : public CustomGraphicsEntity {
public:

    /// Gets and sets the curve associated with this graphics entity. Any of the curve types derived from Curve3D
    /// is valid except for InfiniteLine3D.
    core::Ptr<core::Curve3D> curve() const;
    bool curve(const core::Ptr<core::Curve3D>& value);

    /// Defines the thickness of the curve in pixels.
    double weight() const;
    bool weight(double value);

    /// The line style to apply to the curve. The default is to draw the curve using continuous line style.
    LineStylePatterns lineStylePattern() const;
    bool lineStylePattern(LineStylePatterns value);

    /// Defines the scale as it relates to how the line style is applied. The effect is to
    /// shrink or expand the line style as it is applied to the line. This does not affect the line width.
    double lineStyleScale() const;
    bool lineStyleScale(double value);

    ADSK_FUSION_CUSTOMGRAPHICSCURVE_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSCURVE_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSCURVE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSCURVE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Curve3D* curve_raw() const = 0;
    virtual bool curve_raw(core::Curve3D* value) = 0;
    virtual double weight_raw() const = 0;
    virtual bool weight_raw(double value) = 0;
    virtual LineStylePatterns lineStylePattern_raw() const = 0;
    virtual bool lineStylePattern_raw(LineStylePatterns value) = 0;
    virtual double lineStyleScale_raw() const = 0;
    virtual bool lineStyleScale_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Curve3D> CustomGraphicsCurve::curve() const
{
    core::Ptr<core::Curve3D> res = curve_raw();
    return res;
}

inline bool CustomGraphicsCurve::curve(const core::Ptr<core::Curve3D>& value)
{
    return curve_raw(value.get());
}

inline double CustomGraphicsCurve::weight() const
{
    double res = weight_raw();
    return res;
}

inline bool CustomGraphicsCurve::weight(double value)
{
    return weight_raw(value);
}

inline LineStylePatterns CustomGraphicsCurve::lineStylePattern() const
{
    LineStylePatterns res = lineStylePattern_raw();
    return res;
}

inline bool CustomGraphicsCurve::lineStylePattern(LineStylePatterns value)
{
    return lineStylePattern_raw(value);
}

inline double CustomGraphicsCurve::lineStyleScale() const
{
    double res = lineStyleScale_raw();
    return res;
}

inline bool CustomGraphicsCurve::lineStyleScale(double value)
{
    return lineStyleScale_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSCURVE_API