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
#include "SketchCurve.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHELLIPTICALARC_CPP__
# define ADSK_FUSION_SKETCHELLIPTICALARC_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHELLIPTICALARC_API
# endif
#else
# define ADSK_FUSION_SKETCHELLIPTICALARC_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class EllipticalArc3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// An elliptical arc in a sketch.
class SketchEllipticalArc : public SketchCurve {
public:

    /// Gets the sketch point that defines the center of the elliptical arc. You can
    /// reposition the elliptical arc by moving the sketch point, assuming any existing
    /// constraints allow the desired change.
    core::Ptr<SketchPoint> centerSketchPoint() const;

    /// Gets the sketch point that defines the start of the elliptical arc. You can
    /// reposition the sketch point, assuming any existing constraints allow the
    /// desired change.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// Gets the sketch point that defines the end of the elliptical arc. You can
    /// reposition the sketch point, assuming any existing constraints allow the
    /// desired change.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Gets and sets the major axis direction of the elliptical arc. Changing the axis is
    /// limited by any constraints that might exist on the elliptical arc. Setting the axis
    /// can fail in cases where the direction is fully defined through constraints.
    core::Ptr<core::Vector3D> majorAxis() const;
    bool majorAxis(const core::Ptr<core::Vector3D>& value);

    /// Gets and sets the major axis radius of the elliptical arc. Changing the radius is
    /// limited by any constraints that might exist on the elliptical arc. Setting the radius
    /// can fail in cases where the radius is fully defined through constraints.
    double majorAxisRadius() const;
    bool majorAxisRadius(double value);

    /// Gets and sets the minor axis radius of the elliptical arc. Changing the radius is
    /// limited by any constraints that might exist on the elliptical arc. Setting the radius
    /// can fail in cases where the radius is fully defined through constraints.
    double minorAxisRadius() const;
    bool minorAxisRadius(double value);

    /// Returns the transient geometry of the elliptical arc which provides geometric
    /// information about the elliptical arc. The returned geometry is always in sketch space.
    core::Ptr<core::EllipticalArc3D> geometry() const;

    /// Returns an EllipticalArc3D object which provides geometric information in world space.
    /// The returned geometry takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the geometry will be returned in the root
    /// component space.
    core::Ptr<core::EllipticalArc3D> worldGeometry() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchEllipticalArc> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchEllipticalArc> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHELLIPTICALARC_API static const char* classType();
    ADSK_FUSION_SKETCHELLIPTICALARC_API const char* objectType() const override;
    ADSK_FUSION_SKETCHELLIPTICALARC_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHELLIPTICALARC_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* centerSketchPoint_raw() const = 0;
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual core::Vector3D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(core::Vector3D* value) = 0;
    virtual double majorAxisRadius_raw() const = 0;
    virtual bool majorAxisRadius_raw(double value) = 0;
    virtual double minorAxisRadius_raw() const = 0;
    virtual bool minorAxisRadius_raw(double value) = 0;
    virtual core::EllipticalArc3D* geometry_raw() const = 0;
    virtual core::EllipticalArc3D* worldGeometry_raw() const = 0;
    virtual SketchEllipticalArc* nativeObject_raw() const = 0;
    virtual SketchEllipticalArc* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchEllipticalArc::centerSketchPoint() const
{
    core::Ptr<SketchPoint> res = centerSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchEllipticalArc::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchEllipticalArc::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline core::Ptr<core::Vector3D> SketchEllipticalArc::majorAxis() const
{
    core::Ptr<core::Vector3D> res = majorAxis_raw();
    return res;
}

inline bool SketchEllipticalArc::majorAxis(const core::Ptr<core::Vector3D>& value)
{
    return majorAxis_raw(value.get());
}

inline double SketchEllipticalArc::majorAxisRadius() const
{
    double res = majorAxisRadius_raw();
    return res;
}

inline bool SketchEllipticalArc::majorAxisRadius(double value)
{
    return majorAxisRadius_raw(value);
}

inline double SketchEllipticalArc::minorAxisRadius() const
{
    double res = minorAxisRadius_raw();
    return res;
}

inline bool SketchEllipticalArc::minorAxisRadius(double value)
{
    return minorAxisRadius_raw(value);
}

inline core::Ptr<core::EllipticalArc3D> SketchEllipticalArc::geometry() const
{
    core::Ptr<core::EllipticalArc3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::EllipticalArc3D> SketchEllipticalArc::worldGeometry() const
{
    core::Ptr<core::EllipticalArc3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<SketchEllipticalArc> SketchEllipticalArc::nativeObject() const
{
    core::Ptr<SketchEllipticalArc> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchEllipticalArc> SketchEllipticalArc::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchEllipticalArc> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHELLIPTICALARC_API