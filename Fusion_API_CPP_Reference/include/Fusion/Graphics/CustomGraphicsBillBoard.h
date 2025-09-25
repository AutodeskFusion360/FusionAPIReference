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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// Used to specify if the orientation of custom graphics are defined relative to the screen instead of model space.
/// This is commonly used for legends and symbols that you want to always face the user, even as the
/// camera is rotated.
class CustomGraphicsBillBoard : public core::Base {
public:

    /// Creates a new CustomGraphicsBillBoard object that can be used when calling the billBoarding property
    /// of the CustomGraphicsEntity object to specify the billboarding behavior of some custom graphics. Once
    /// created you can assign it to a custom graphics entity using its billBoarding property.
    /// anchorPoint : The parameter must be input and can be null but the value is ignored. Use of the anchor point has been retired and it is no longer used.
    /// Returns the newly created CustomGraphicsBillBoard object or null in the case of failure. This can be assigned
    /// to a custom graphics entity using its billBoarding property.
    static core::Ptr<CustomGraphicsBillBoard> create(const core::Ptr<core::Point3D>& anchorPoint);

    /// 
    /// <mark>RETIRED - This property has been retired. It is not needed since the matrix defined for the CustomGraphicsText
    /// object defines the position and anchor for the billboarded text. Getting the value of this property will return a
    /// point at the origin. Setting this property will be ignored.
    /// </mark>
    /// 
    /// Specifies the coordinate in model or view space that the graphics will anchor to. For graphics that
    /// represent a label, this will typically be the point where the label attaches to the model. A
    /// CustomGraphicsAnchorPoint can be created using the static create method on the CustomGraphicsAnchorPoint
    /// object.
    /// 
    core::Ptr<core::Point3D> anchorPoint() const;
    bool anchorPoint(const core::Ptr<core::Point3D>& value);

    /// Specifies the type of billboarding to use. When a new CustomGraphicsBillBoard object is created
    /// this defaults to ScreenBillBoardStyle so the graphics will all be facing the view plane. It can also
    /// be set to an arbitrary plane by setting this to AxialBillBoardStyle and can be defined so that it never
    /// appear backwards by setting it to RightReadingBillBoardStyle.
    CustomGraphicsBillBoardStyles billBoardStyle() const;
    bool billBoardStyle(CustomGraphicsBillBoardStyles value);

    /// When the billBoardStyle property is set to AxialBillBoardStyle, this is used to control the direction
    /// of the graphics. Otherwise it uses the x axis of the view.
    core::Ptr<core::Vector3D> axis() const;
    bool axis(const core::Ptr<core::Vector3D>& value);

    ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API static CustomGraphicsBillBoard* create_raw(core::Point3D* anchorPoint);
    virtual core::Point3D* anchorPoint_raw() const = 0;
    virtual bool anchorPoint_raw(core::Point3D* value) = 0;
    virtual CustomGraphicsBillBoardStyles billBoardStyle_raw() const = 0;
    virtual bool billBoardStyle_raw(CustomGraphicsBillBoardStyles value) = 0;
    virtual core::Vector3D* axis_raw() const = 0;
    virtual bool axis_raw(core::Vector3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsBillBoard> CustomGraphicsBillBoard::create(const core::Ptr<core::Point3D>& anchorPoint)
{
    core::Ptr<CustomGraphicsBillBoard> res = create_raw(anchorPoint.get());
    return res;
}

inline core::Ptr<core::Point3D> CustomGraphicsBillBoard::anchorPoint() const
{
    core::Ptr<core::Point3D> res = anchorPoint_raw();
    return res;
}

inline bool CustomGraphicsBillBoard::anchorPoint(const core::Ptr<core::Point3D>& value)
{
    return anchorPoint_raw(value.get());
}

inline CustomGraphicsBillBoardStyles CustomGraphicsBillBoard::billBoardStyle() const
{
    CustomGraphicsBillBoardStyles res = billBoardStyle_raw();
    return res;
}

inline bool CustomGraphicsBillBoard::billBoardStyle(CustomGraphicsBillBoardStyles value)
{
    return billBoardStyle_raw(value);
}

inline core::Ptr<core::Vector3D> CustomGraphicsBillBoard::axis() const
{
    core::Ptr<core::Vector3D> res = axis_raw();
    return res;
}

inline bool CustomGraphicsBillBoard::axis(const core::Ptr<core::Vector3D>& value)
{
    return axis_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSBILLBOARD_API