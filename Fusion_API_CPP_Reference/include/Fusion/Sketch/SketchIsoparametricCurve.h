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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHISOPARAMETRICCURVE_CPP__
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API
# endif
#else
# define ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class ModelParameter;
    class Occurrence;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// This object represents the result of creating isoparametric curves. It contains the
/// definition of how the curves are created and the resulting sketch curves.
class SketchIsoparametricCurve : public core::Base {
public:

    /// Gets and sets the BRepFace that the curves are calculated for.
    core::Ptr<BRepFace> face() const;
    bool face(const core::Ptr<BRepFace>& value);

    /// Gets and sets the direction of the isoparametric curve on the surface.
    /// The curve follows the surface in either the U or V parametric direction.
    /// True indicates the U direction, which is also the default when the input
    /// is created.
    bool isUDirection() const;
    bool isUDirection(bool value);

    /// Redefines that a single isoparametric curve will be created and its position
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

    /// Redefines that one or more isoparametric curves will be created along the U or V
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

    /// Gets if a single or distributed curve creation is defined. To change
    /// the type, call either the setSingle or setDistributed methods.
    bool isSingle() const;

    /// Gets how the distance of the single curve from the face edge is defined by a
    /// distance or proportionally. This property only applies when the isSingle property
    /// is True. A value of true indicates it is defined using a physical offset. To change
    /// how the offset is defined use the setSingle method.
    bool isPhysicalOffset() const;

    /// Returns the parameter that controls the quantity or offset distance of the curves.
    /// If the isSingle property returns true, the parameter controls the distance of the curve from the
    /// edge of the face. If the isSingle property is false, the parameter controls the quantity of curves
    /// in the result. To change the values, use the returned ModelParameter object.
    core::Ptr<ModelParameter> quantityOrDistance() const;

    /// Returns the sketch curves that were created as isoparametric curves.
    std::vector<core::Ptr<SketchCurve>> resultCurves() const;

    /// Deletes this SketchIsoparametricCurve object. Deleting this object deletes the definition and the
    /// association the sketch curves have as isoparametric curves so they become regular sketch curves.
    /// Returns true if successful.
    bool deleteMe();

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchIsoparametricCurve> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchIsoparametricCurve> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API static const char* classType();
    ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API static const char* interfaceId() { return classType(); }

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
    virtual ModelParameter* quantityOrDistance_raw() const = 0;
    virtual SketchCurve** resultCurves_raw(size_t& return_size) const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual SketchIsoparametricCurve* nativeObject_raw() const = 0;
    virtual SketchIsoparametricCurve* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> SketchIsoparametricCurve::face() const
{
    core::Ptr<BRepFace> res = face_raw();
    return res;
}

inline bool SketchIsoparametricCurve::face(const core::Ptr<BRepFace>& value)
{
    return face_raw(value.get());
}

inline bool SketchIsoparametricCurve::isUDirection() const
{
    bool res = isUDirection_raw();
    return res;
}

inline bool SketchIsoparametricCurve::isUDirection(bool value)
{
    return isUDirection_raw(value);
}

inline bool SketchIsoparametricCurve::setSingle(bool isPhysical, const core::Ptr<core::ValueInput>& distance)
{
    bool res = setSingle_raw(isPhysical, distance.get());
    return res;
}

inline bool SketchIsoparametricCurve::setDistributed(const core::Ptr<core::ValueInput>& quantity)
{
    bool res = setDistributed_raw(quantity.get());
    return res;
}

inline bool SketchIsoparametricCurve::isSingle() const
{
    bool res = isSingle_raw();
    return res;
}

inline bool SketchIsoparametricCurve::isPhysicalOffset() const
{
    bool res = isPhysicalOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> SketchIsoparametricCurve::quantityOrDistance() const
{
    core::Ptr<ModelParameter> res = quantityOrDistance_raw();
    return res;
}

inline std::vector<core::Ptr<SketchCurve>> SketchIsoparametricCurve::resultCurves() const
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= resultCurves_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SketchIsoparametricCurve::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<Occurrence> SketchIsoparametricCurve::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<SketchIsoparametricCurve> SketchIsoparametricCurve::nativeObject() const
{
    core::Ptr<SketchIsoparametricCurve> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchIsoparametricCurve> SketchIsoparametricCurve::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchIsoparametricCurve> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHISOPARAMETRICCURVE_API