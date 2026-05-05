//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_ISOPARAMETRICCURVEINPUT_CPP__
# define ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API
# endif
#else
# define ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// The input object that defines the required input to create an isoparametric curve
/// when using the SketchIsoparametricCurves.add method. This object is created using the
/// SketchIsoparametricCurves.createInput method.
class IsoparametricCurveInput : public core::Base {
public:

    /// Gets and sets the BRepFace on which to create the isoparametric curve.
    core::Ptr<BRepFace> face() const;
    bool face(const core::Ptr<BRepFace>& value);

    /// Gets and sets the direction of the isoparametric curve on the surface.
    /// The curve follows the surface in either the U or V parametric direction.
    /// True indicates the U direction, which is also the default when the input
    /// is created.
    bool isUDirection() const;
    bool isUDirection(bool value);

    /// Defines that a single isoparametric curve will be created and its position
    /// is defined by its distance from the edge of the surface. The direction is
    /// defined using the isUDirection property.
    /// isPhysical : Specifies if the offset of the curve from the edge of the surface is defined
    /// by a physical distance or a proportional distance along the surface where it is defined
    /// as a value from 0 to 1. A value of true indicates it is the physical distance.
    /// distance : The distance of the curve from the edge of the surface. If isPhysical is true
    /// this is a physical distance. If the ValueInput is defined using a real value
    /// this is the offset in centimeters. If the ValueInput is defined using a string
    /// it is used as the expression of the parameter that will be created to control
    /// the offset, and should be able to be evaluated as a distance.
    /// 
    /// If isPhysical is false, this defines the proportional offset of the surface from
    /// the edge where the value can be 0 to 1. If a ValueInput is defined using a real
    /// value it can be 0 to 1. If the ValueInput is defined using a string it is used
    /// as the expression of the parameter that will be created to control the offset and
    /// should be able to be evaluated as a unitless value.
    /// Returns true if successful.
    bool setSingle(bool isPhysical, const core::Ptr<core::ValueInput>& distance);

    /// Defines that one or more isoparametric curves will be created along the U or V
    /// parameter curves of the face. The direction is defined using the isUDirection
    /// property.
    /// quantity : The number of isoparametric curves to create. They are evenly distributed
    /// on the face. If a ValueInput is defined using a real value, it should be
    /// a whole number or it will be rounded to the nearest whole number. If a ValueInput
    /// is defined using a string, it is used as the expression of the parameter that will
    /// be created to control the number of curves and should be able to be evaluated as
    /// a unitless value.
    /// Returns true if successful.
    bool setDistributed(const core::Ptr<core::ValueInput>& quantity);

    /// Gets if a single or distributed curve creation has been specified. To change
    /// the type, call either the setSingle or setDistributed methods.
    bool isSingle() const;

    /// Gets how the distance of the single curve from the face edge is defined by a
    /// distance or proportionally. This property only applies when the isSingle property
    /// is True. A value of true indicates it is defined using a physical offset. To change
    /// how the offset is defined use the setSingle method.
    bool isPhysicalOffset() const;

    /// Gets the quantity or distance value to be used when creating the isoparametric curve.
    /// If the isSingle property returns true, this is the distance of the curve from the
    /// edge of the face. If the isSingle property is false, this is the quantity of curves
    /// in the result. To set this, use either the setDistributed or setSingle methods.
    core::Ptr<core::ValueInput> quantityOrDistance() const;

    ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API static const char* classType();
    ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API const char* objectType() const override;
    ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* face_raw() const = 0;
    virtual bool face_raw(BRepFace* value) = 0;
    virtual bool isUDirection_raw() const = 0;
    virtual bool isUDirection_raw(bool value) = 0;
    virtual bool setSingle_raw(bool isPhysical, core::ValueInput* distance) = 0;
    virtual bool setDistributed_raw(core::ValueInput* quantity) = 0;
    virtual bool isSingle_raw() const = 0;
    virtual bool isPhysicalOffset_raw() const = 0;
    virtual core::ValueInput* quantityOrDistance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> IsoparametricCurveInput::face() const
{
    core::Ptr<BRepFace> res = face_raw();
    return res;
}

inline bool IsoparametricCurveInput::face(const core::Ptr<BRepFace>& value)
{
    return face_raw(value.get());
}

inline bool IsoparametricCurveInput::isUDirection() const
{
    bool res = isUDirection_raw();
    return res;
}

inline bool IsoparametricCurveInput::isUDirection(bool value)
{
    return isUDirection_raw(value);
}

inline bool IsoparametricCurveInput::setSingle(bool isPhysical, const core::Ptr<core::ValueInput>& distance)
{
    bool res = setSingle_raw(isPhysical, distance.get());
    return res;
}

inline bool IsoparametricCurveInput::setDistributed(const core::Ptr<core::ValueInput>& quantity)
{
    bool res = setDistributed_raw(quantity.get());
    return res;
}

inline bool IsoparametricCurveInput::isSingle() const
{
    bool res = isSingle_raw();
    return res;
}

inline bool IsoparametricCurveInput::isPhysicalOffset() const
{
    bool res = isPhysicalOffset_raw();
    return res;
}

inline core::Ptr<core::ValueInput> IsoparametricCurveInput::quantityOrDistance() const
{
    core::Ptr<core::ValueInput> res = quantityOrDistance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ISOPARAMETRICCURVEINPUT_API