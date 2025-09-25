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
# ifdef __COMPILING_ADSK_FUSION_SKETCHELLIPSE_CPP__
# define ADSK_FUSION_SKETCHELLIPSE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHELLIPSE_API
# endif
#else
# define ADSK_FUSION_SKETCHELLIPSE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Ellipse3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchLine;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// An ellipse in a sketch.
class SketchEllipse : public SketchCurve {
public:

    /// Returns the sketch point that defines the center of the ellipse. You can
    /// reposition the ellipse by moving the sketch point, assuming any existing
    /// constraints allow the desired change.
    core::Ptr<SketchPoint> centerSketchPoint() const;

    /// Gets and sets the major axis direction of the ellipse. Changing the axis is
    /// limited by any constraints that might exist on the ellipse. Setting the axis
    /// can fail in cases where the direction is fully defined through constraints.
    core::Ptr<core::Vector3D> majorAxis() const;
    bool majorAxis(const core::Ptr<core::Vector3D>& value);

    /// Gets and sets the major axis radius of the ellipse. Changing the radius is
    /// limited by any constraints that might exist on the ellipse. Setting the radius
    /// can fail in cases where the radius is fully defined through constraints.
    double majorAxisRadius() const;
    bool majorAxisRadius(double value);

    /// Gets and sets the minor axis radius of the ellipse. Changing the radius is
    /// limited by any constraints that might exist on the ellipse. Setting the radius
    /// can fail in cases where the radius is fully defined through constraints.
    double minorAxisRadius() const;
    bool minorAxisRadius(double value);

    /// Returns the transient geometry of the ellipse which provides geometric
    /// information about the ellipse. The returned geometry is always in sketch space.
    core::Ptr<core::Ellipse3D> geometry() const;

    /// Returns an Ellipse3D object which provides geometric information in world space.
    /// The returned geometry takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the geometry will be returned in the root
    /// component space.
    core::Ptr<core::Ellipse3D> worldGeometry() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchEllipse> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchEllipse> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the sketch line associated with the ellipse that lies along the major axis.
    /// This can return null in the case where the line has been deleted.
    core::Ptr<SketchLine> majorAxisLine() const;

    /// Returns the sketch line associated with the ellipse that lies along the minor axis.
    /// This can return null in the case where the line has been deleted.
    core::Ptr<SketchLine> minorAxisLine() const;

    ADSK_FUSION_SKETCHELLIPSE_API static const char* classType();
    ADSK_FUSION_SKETCHELLIPSE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHELLIPSE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHELLIPSE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* centerSketchPoint_raw() const = 0;
    virtual core::Vector3D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(core::Vector3D* value) = 0;
    virtual double majorAxisRadius_raw() const = 0;
    virtual bool majorAxisRadius_raw(double value) = 0;
    virtual double minorAxisRadius_raw() const = 0;
    virtual bool minorAxisRadius_raw(double value) = 0;
    virtual core::Ellipse3D* geometry_raw() const = 0;
    virtual core::Ellipse3D* worldGeometry_raw() const = 0;
    virtual SketchEllipse* nativeObject_raw() const = 0;
    virtual SketchEllipse* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual SketchLine* majorAxisLine_raw() const = 0;
    virtual SketchLine* minorAxisLine_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchEllipse::centerSketchPoint() const
{
    core::Ptr<SketchPoint> res = centerSketchPoint_raw();
    return res;
}

inline core::Ptr<core::Vector3D> SketchEllipse::majorAxis() const
{
    core::Ptr<core::Vector3D> res = majorAxis_raw();
    return res;
}

inline bool SketchEllipse::majorAxis(const core::Ptr<core::Vector3D>& value)
{
    return majorAxis_raw(value.get());
}

inline double SketchEllipse::majorAxisRadius() const
{
    double res = majorAxisRadius_raw();
    return res;
}

inline bool SketchEllipse::majorAxisRadius(double value)
{
    return majorAxisRadius_raw(value);
}

inline double SketchEllipse::minorAxisRadius() const
{
    double res = minorAxisRadius_raw();
    return res;
}

inline bool SketchEllipse::minorAxisRadius(double value)
{
    return minorAxisRadius_raw(value);
}

inline core::Ptr<core::Ellipse3D> SketchEllipse::geometry() const
{
    core::Ptr<core::Ellipse3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::Ellipse3D> SketchEllipse::worldGeometry() const
{
    core::Ptr<core::Ellipse3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<SketchEllipse> SketchEllipse::nativeObject() const
{
    core::Ptr<SketchEllipse> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchEllipse> SketchEllipse::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchEllipse> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<SketchLine> SketchEllipse::majorAxisLine() const
{
    core::Ptr<SketchLine> res = majorAxisLine_raw();
    return res;
}

inline core::Ptr<SketchLine> SketchEllipse::minorAxisLine() const
{
    core::Ptr<SketchLine> res = minorAxisLine_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHELLIPSE_API