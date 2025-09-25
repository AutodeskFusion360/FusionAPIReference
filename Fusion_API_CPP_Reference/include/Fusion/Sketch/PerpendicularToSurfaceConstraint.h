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
# ifdef __COMPILING_ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_CPP__
# define ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API
# endif
#else
# define ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// A sketch constraint defining that a curve is perpendicular to a face or construction plane. Line and spline curves are supported.
class PerpendicularToSurfaceConstraint : public GeometricConstraint {
public:

    /// Returns the SketchCurve object that is constrained.
    core::Ptr<SketchCurve> curve() const;

    /// Returns the BRepFace or ConstructionPlane the line is constrained to be perpendicular to.
    core::Ptr<core::Base> surface() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PerpendicularToSurfaceConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PerpendicularToSurfaceConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API static const char* classType();
    ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCurve* curve_raw() const = 0;
    virtual core::Base* surface_raw() const = 0;
    virtual PerpendicularToSurfaceConstraint* nativeObject_raw() const = 0;
    virtual PerpendicularToSurfaceConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchCurve> PerpendicularToSurfaceConstraint::curve() const
{
    core::Ptr<SketchCurve> res = curve_raw();
    return res;
}

inline core::Ptr<core::Base> PerpendicularToSurfaceConstraint::surface() const
{
    core::Ptr<core::Base> res = surface_raw();
    return res;
}

inline core::Ptr<PerpendicularToSurfaceConstraint> PerpendicularToSurfaceConstraint::nativeObject() const
{
    core::Ptr<PerpendicularToSurfaceConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PerpendicularToSurfaceConstraint> PerpendicularToSurfaceConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PerpendicularToSurfaceConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PERPENDICULARTOSURFACECONSTRAINT_API