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
#include "GeometricConstraint.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_CPP__
# define ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API
# endif
#else
# define ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A sketch constraint defining that a point is coincident to a surface.
class CoincidentToSurfaceConstraint : public GeometricConstraint {
public:

    /// Returns the sketch point that is constrained.
    core::Ptr<SketchPoint> point() const;

    /// Returns the BRepFace or ConstructionPlane the point is constrained to.
    core::Ptr<core::Base> surface() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<CoincidentToSurfaceConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<CoincidentToSurfaceConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API static const char* classType();
    ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* point_raw() const = 0;
    virtual core::Base* surface_raw() const = 0;
    virtual CoincidentToSurfaceConstraint* nativeObject_raw() const = 0;
    virtual CoincidentToSurfaceConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> CoincidentToSurfaceConstraint::point() const
{
    core::Ptr<SketchPoint> res = point_raw();
    return res;
}

inline core::Ptr<core::Base> CoincidentToSurfaceConstraint::surface() const
{
    core::Ptr<core::Base> res = surface_raw();
    return res;
}

inline core::Ptr<CoincidentToSurfaceConstraint> CoincidentToSurfaceConstraint::nativeObject() const
{
    core::Ptr<CoincidentToSurfaceConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<CoincidentToSurfaceConstraint> CoincidentToSurfaceConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<CoincidentToSurfaceConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COINCIDENTTOSURFACECONSTRAINT_API