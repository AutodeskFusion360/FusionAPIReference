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
# ifdef __COMPILING_ADSK_FUSION_SKETCHCIRCLE_CPP__
# define ADSK_FUSION_SKETCHCIRCLE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCIRCLE_API
# endif
#else
# define ADSK_FUSION_SKETCHCIRCLE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Circle3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A circle in a sketch.
class SketchCircle : public SketchCurve {
public:

    /// Returns the sketch point at the center of the circle.
    core::Ptr<SketchPoint> centerSketchPoint() const;

    /// Returns the transient geometry of the circle which provides geometric
    /// information about the circle. The returned geometry is always in sketch space.
    core::Ptr<core::Circle3D> geometry() const;

    /// Returns a Point3D object which provides the position of the sketch point in world space.
    /// The returned coordinate takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the coordinate will be returned in the root
    /// component space.
    core::Ptr<core::Circle3D> worldGeometry() const;

    /// Returns the area of the circle in square centimeters.
    double area() const;

    /// Gets and sets the radius of the circle. Changing the radius is limited
    /// by any constraints that might exist on the circle.
    double radius() const;
    bool radius(double value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchCircle> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchCircle> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHCIRCLE_API static const char* classType();
    ADSK_FUSION_SKETCHCIRCLE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCIRCLE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCIRCLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* centerSketchPoint_raw() const = 0;
    virtual core::Circle3D* geometry_raw() const = 0;
    virtual core::Circle3D* worldGeometry_raw() const = 0;
    virtual double area_raw() const = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual SketchCircle* nativeObject_raw() const = 0;
    virtual SketchCircle* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchCircle::centerSketchPoint() const
{
    core::Ptr<SketchPoint> res = centerSketchPoint_raw();
    return res;
}

inline core::Ptr<core::Circle3D> SketchCircle::geometry() const
{
    core::Ptr<core::Circle3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::Circle3D> SketchCircle::worldGeometry() const
{
    core::Ptr<core::Circle3D> res = worldGeometry_raw();
    return res;
}

inline double SketchCircle::area() const
{
    double res = area_raw();
    return res;
}

inline double SketchCircle::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool SketchCircle::radius(double value)
{
    return radius_raw(value);
}

inline core::Ptr<SketchCircle> SketchCircle::nativeObject() const
{
    core::Ptr<SketchCircle> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchCircle> SketchCircle::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchCircle> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCIRCLE_API