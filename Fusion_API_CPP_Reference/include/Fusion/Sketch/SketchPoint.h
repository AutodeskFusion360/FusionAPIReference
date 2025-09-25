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
#include "SketchEntity.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHPOINT_CPP__
# define ADSK_FUSION_SKETCHPOINT_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHPOINT_API
# endif
#else
# define ADSK_FUSION_SKETCHPOINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
    class SketchEntityList;
}}

namespace adsk { namespace fusion {

/// A point within a sketch.
class SketchPoint : public SketchEntity {
public:

    /// Returns a Point3D object which provides the position of the sketch point.
    /// The returned geometry is always in sketch space.
    core::Ptr<core::Point3D> geometry() const;

    /// Returns a Point3D object which provides the position of the sketch point in world space.
    /// The returned coordinate takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the coordinate will be returned in the root
    /// component space.
    core::Ptr<core::Point3D> worldGeometry() const;

    /// Moves the sketch geometry using the specified transform.
    /// Move respects any constraints that would normally prohibit the move.
    /// This will fail in the case where the IsReference property is true.
    /// translation : The vector that defines the distance and direction to move.
    /// Returns true if moving the sketch point was successful.
    bool move(const core::Ptr<core::Vector3D>& translation);

    /// Merges the input sketch point into this sketch point. This effectively
    /// deletes the other sketch point and changes all entities that referenced
    /// that sketch point to reference this sketch point.
    /// 
    /// This is the equivalent of dragging a sketch point on top of another
    /// sketch point in the user interface.
    /// point : The point to merge with this point.
    /// Returns true if the merge was successful.
    bool merge(const core::Ptr<SketchPoint>& point);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchPoint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchPoint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the set of sketch entities that are directly connected to this point. For
    /// example any entities that use this point as their start point or end point will be returned
    /// and any circle, arc or ellipse who have this point as a center point will be returned. This
    /// does not include entities that are related to the point through a constraint.
    core::Ptr<SketchEntityList> connectedEntities() const;

    /// This method disconnects the specified curve from the sketch point. The specified curve must
    /// use this point as one of its endpoints, and at least one other sketch curve must also use
    /// the point as its endpoint. Detaching the curve creates a new sketch point, which becomes
    /// the curve's end point. All other curves using the original sketch point will remain unaffected.
    /// curve : The sketch curve to detach from the sketch point. One of its end points must be the
    /// sketch point.
    /// If successful, the newly created sketch point that the curve was moved to is returned.
    /// Null is returned in the case of failure. Typical failure cases are if the specified curve
    /// is the only curve connected to the point or if the curve is not connected to the point.
    core::Ptr<SketchPoint> detach(const core::Ptr<SketchCurve>& curve);

    ADSK_FUSION_SKETCHPOINT_API static const char* classType();
    ADSK_FUSION_SKETCHPOINT_API const char* objectType() const override;
    ADSK_FUSION_SKETCHPOINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHPOINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* geometry_raw() const = 0;
    virtual core::Point3D* worldGeometry_raw() const = 0;
    virtual bool move_raw(core::Vector3D* translation) = 0;
    virtual bool merge_raw(SketchPoint* point) = 0;
    virtual SketchPoint* nativeObject_raw() const = 0;
    virtual SketchPoint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual SketchEntityList* connectedEntities_raw() const = 0;
    virtual SketchPoint* detach_raw(SketchCurve* curve) = 0;
};

// Inline wrappers

inline core::Ptr<core::Point3D> SketchPoint::geometry() const
{
    core::Ptr<core::Point3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::Point3D> SketchPoint::worldGeometry() const
{
    core::Ptr<core::Point3D> res = worldGeometry_raw();
    return res;
}

inline bool SketchPoint::move(const core::Ptr<core::Vector3D>& translation)
{
    bool res = move_raw(translation.get());
    return res;
}

inline bool SketchPoint::merge(const core::Ptr<SketchPoint>& point)
{
    bool res = merge_raw(point.get());
    return res;
}

inline core::Ptr<SketchPoint> SketchPoint::nativeObject() const
{
    core::Ptr<SketchPoint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchPoint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchPoint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<SketchEntityList> SketchPoint::connectedEntities() const
{
    core::Ptr<SketchEntityList> res = connectedEntities_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchPoint::detach(const core::Ptr<SketchCurve>& curve)
{
    core::Ptr<SketchPoint> res = detach_raw(curve.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHPOINT_API