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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
    class Point3D;
}}

namespace adsk { namespace fusion {

/// Positions custom graphics relative to one of the four corners of the view. Graphics positioned
/// this way will always appear on top of the model graphics. This is typically used to display
/// legends are small interactive tools.
class CustomGraphicsViewPlacement : public core::Base {
public:

    /// Creates a new CustomGraphicsViewPlacement object that can be used when setting the viewPlacement property
    /// of a custom graphics entity to specify the billboarding behavior.
    /// anchorPoint : The position within the defined graphics that will serve as the anchor. This is the location
    /// on the graphics that will be positioned at the specified view point.
    /// viewCorner : Defines which of the four corners of the view the graphics are drawn relative to.
    /// viewPoint : A 2D point in the view that defines the position of the graphics. This is relative to the corner
    /// and is in pixels. The x and y directions vary for each of the corners. These directions are only
    /// used to position the 2D point and do not affect the standard coordinate system the graphics were
    /// drawn in.
    /// 
    /// upperLeftViewCorner - The x direction is to the right and y is down.
    /// 
    /// upperRightViewCorner - The x direction is to the left and y is down.
    /// 
    /// lowerLeftViewCorner - The x direction is to the right and y is up.
    /// 
    /// lowerRightViewCorner - The x direction is to the left and y is up.
    /// Returns the newly created CustomGraphicsViewPlacement object or null in the case of failure. This can then
    /// be assigned to any custom graphics entity using its viewPlacement property.
    static core::Ptr<CustomGraphicsViewPlacement> create(const core::Ptr<core::Point3D>& anchorPoint, ViewCorners viewCorner, const core::Ptr<core::Point2D>& viewPoint);

    /// Gets and sets the position within the defined graphics that serves as the anchor. This is the location
    /// on the graphics that is positioned at the specified view point.
    core::Ptr<core::Point3D> anchorPoint() const;
    bool anchorPoint(const core::Ptr<core::Point3D>& value);

    /// A 2D point in the view that defines the position of the graphics. This is relative to the corner
    /// and is in pixels. The x and y directions vary for each of the corners. These directions are only
    /// used to position the 2D point and do not affect the standard coordinate system the graphics were
    /// drawn in.
    /// 
    /// upperLeftViewCorner - The x direction is to the right and y is down.
    /// 
    /// upperRightViewCorner - The x direction is to the left and y is down.
    /// 
    /// lowerLeftViewCorner - The x direction is to the right and y is up.
    /// 
    /// lowerRightViewCorner - The x direction is to the left and y is up.
    core::Ptr<core::Point2D> viewPoint() const;
    bool viewPoint(const core::Ptr<core::Point2D>& value);

    /// Gets and sets which corner the graphics are positioned relative to.
    ViewCorners viewCorner() const;
    bool viewCorner(ViewCorners value);

    ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API static CustomGraphicsViewPlacement* create_raw(core::Point3D* anchorPoint, ViewCorners viewCorner, core::Point2D* viewPoint);
    virtual core::Point3D* anchorPoint_raw() const = 0;
    virtual bool anchorPoint_raw(core::Point3D* value) = 0;
    virtual core::Point2D* viewPoint_raw() const = 0;
    virtual bool viewPoint_raw(core::Point2D* value) = 0;
    virtual ViewCorners viewCorner_raw() const = 0;
    virtual bool viewCorner_raw(ViewCorners value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsViewPlacement> CustomGraphicsViewPlacement::create(const core::Ptr<core::Point3D>& anchorPoint, ViewCorners viewCorner, const core::Ptr<core::Point2D>& viewPoint)
{
    core::Ptr<CustomGraphicsViewPlacement> res = create_raw(anchorPoint.get(), viewCorner, viewPoint.get());
    return res;
}

inline core::Ptr<core::Point3D> CustomGraphicsViewPlacement::anchorPoint() const
{
    core::Ptr<core::Point3D> res = anchorPoint_raw();
    return res;
}

inline bool CustomGraphicsViewPlacement::anchorPoint(const core::Ptr<core::Point3D>& value)
{
    return anchorPoint_raw(value.get());
}

inline core::Ptr<core::Point2D> CustomGraphicsViewPlacement::viewPoint() const
{
    core::Ptr<core::Point2D> res = viewPoint_raw();
    return res;
}

inline bool CustomGraphicsViewPlacement::viewPoint(const core::Ptr<core::Point2D>& value)
{
    return viewPoint_raw(value.get());
}

inline ViewCorners CustomGraphicsViewPlacement::viewCorner() const
{
    ViewCorners res = viewCorner_raw();
    return res;
}

inline bool CustomGraphicsViewPlacement::viewCorner(ViewCorners value)
{
    return viewCorner_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSVIEWPLACEMENT_API