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
# ifdef __COMPILING_ADSK_FUSION_SKETCHARC_CPP__
# define ADSK_FUSION_SKETCHARC_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHARC_API
# endif
#else
# define ADSK_FUSION_SKETCHARC_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Arc3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// An arc in a sketch.
class SketchArc : public SketchCurve {
public:

    /// The sketch point at the center of the arc. The arc is dependent on this point and moving the
    /// point will cause the arc to adjust.
    core::Ptr<SketchPoint> centerSketchPoint() const;

    /// The sketch point at the start of the arc. The arc is dependent on this point and moving the
    /// point will cause the arc to adjust.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// The sketch point at the end of the arc. The arc is dependent on this point and moving the
    /// point will cause the arc to adjust.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Gets and sets the radius of the arc. Changing the radius is limited
    /// by any constraints that might exist on the circle. Setting the radius
    /// can fail in cases where the radius is fully defined through constraints.
    double radius() const;
    bool radius(double value);

    /// Returns the transient geometry of the arc which provides geometric
    /// information about the arc. The returned geometry is always in sketch space.
    core::Ptr<core::Arc3D> geometry() const;

    /// Returns an Arc3D object which provides geometric information in world space.
    /// The returned geometry takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the geometry will be returned in the root
    /// component space.
    core::Ptr<core::Arc3D> worldGeometry() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchArc> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchArc> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHARC_API static const char* classType();
    ADSK_FUSION_SKETCHARC_API const char* objectType() const override;
    ADSK_FUSION_SKETCHARC_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHARC_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* centerSketchPoint_raw() const = 0;
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual core::Arc3D* geometry_raw() const = 0;
    virtual core::Arc3D* worldGeometry_raw() const = 0;
    virtual SketchArc* nativeObject_raw() const = 0;
    virtual SketchArc* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchArc::centerSketchPoint() const
{
    core::Ptr<SketchPoint> res = centerSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchArc::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchArc::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline double SketchArc::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool SketchArc::radius(double value)
{
    return radius_raw(value);
}

inline core::Ptr<core::Arc3D> SketchArc::geometry() const
{
    core::Ptr<core::Arc3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::Arc3D> SketchArc::worldGeometry() const
{
    core::Ptr<core::Arc3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<SketchArc> SketchArc::nativeObject() const
{
    core::Ptr<SketchArc> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchArc> SketchArc::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchArc> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHARC_API