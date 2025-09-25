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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace fusion {

/// Specifies that custom graphics are to be scaled relative to the view (pixels) and not model space.
/// If this is applied to some custom graphics then they will stat the same size on the screen regardless
/// of the user zooming in or out. This is commonly used for glyphs and other interactive widgets so they don't
/// don't get too large or too small.
class CustomGraphicsViewScale : public core::Base {
public:

    /// Creates a new CustomGraphicsViewScale object that can be used when setting the viewScale property
    /// of a custom graphics entity to specify the scaling behavior.
    /// pixelScale : Defines the scale of the custom graphics relative to the view. If a custom graphics line is defined
    /// to be 100 units long it would usually display as 100 cm long. When it is view scaled with a pixel scale of
    /// 1 it will display as 100 pixels long.
    /// anchorPoint : Defines the point in the graphics that defines the origin of the scaling. The graphics will be scaled
    /// up or down relative to that point.
    /// Returns the newly created CustomGraphicsViewScale object or null in the case of failure. This can then
    /// be assigned to any custom graphics entity using its viewScale property.
    static core::Ptr<CustomGraphicsViewScale> create(double pixelScale, const core::Ptr<core::Point3D>& anchorPoint);

    /// Gets and sets the scale of the custom graphics relative to the view. If a custom graphics line is defined
    /// to be 100 units long it would usually display as 100 cm long. When it is view scaled with a pixel scale of
    /// 1 it will display as 100 pixels long.
    double pixelScale() const;
    bool pixelScale(double value);

    /// Gets and sets the point in the graphics that defines the origin of the scaling. The graphics will be scaled
    /// up or down relative to that point.
    core::Ptr<core::Point3D> anchorPoint() const;
    bool anchorPoint(const core::Ptr<core::Point3D>& value);

    ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API static CustomGraphicsViewScale* create_raw(double pixelScale, core::Point3D* anchorPoint);
    virtual double pixelScale_raw() const = 0;
    virtual bool pixelScale_raw(double value) = 0;
    virtual core::Point3D* anchorPoint_raw() const = 0;
    virtual bool anchorPoint_raw(core::Point3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsViewScale> CustomGraphicsViewScale::create(double pixelScale, const core::Ptr<core::Point3D>& anchorPoint)
{
    core::Ptr<CustomGraphicsViewScale> res = create_raw(pixelScale, anchorPoint.get());
    return res;
}

inline double CustomGraphicsViewScale::pixelScale() const
{
    double res = pixelScale_raw();
    return res;
}

inline bool CustomGraphicsViewScale::pixelScale(double value)
{
    return pixelScale_raw(value);
}

inline core::Ptr<core::Point3D> CustomGraphicsViewScale::anchorPoint() const
{
    core::Ptr<core::Point3D> res = anchorPoint_raw();
    return res;
}

inline bool CustomGraphicsViewScale::anchorPoint(const core::Ptr<core::Point3D>& value)
{
    return anchorPoint_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSVIEWSCALE_API