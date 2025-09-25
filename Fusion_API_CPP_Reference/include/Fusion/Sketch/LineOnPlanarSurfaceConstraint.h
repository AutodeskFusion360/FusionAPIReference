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
# ifdef __COMPILING_ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_CPP__
# define ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API
# endif
#else
# define ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// A sketch constraint defining that a line that lies on a planar face or construction plane.
class LineOnPlanarSurfaceConstraint : public GeometricConstraint {
public:

    /// Returns the SketchLine object that is constrained.
    core::Ptr<SketchLine> line() const;

    /// Returns the planar BRepFace or ConstructionPlane the line is constrained to lie on.
    core::Ptr<core::Base> planarSurface() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<LineOnPlanarSurfaceConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<LineOnPlanarSurfaceConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API static const char* classType();
    ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchLine* line_raw() const = 0;
    virtual core::Base* planarSurface_raw() const = 0;
    virtual LineOnPlanarSurfaceConstraint* nativeObject_raw() const = 0;
    virtual LineOnPlanarSurfaceConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchLine> LineOnPlanarSurfaceConstraint::line() const
{
    core::Ptr<SketchLine> res = line_raw();
    return res;
}

inline core::Ptr<core::Base> LineOnPlanarSurfaceConstraint::planarSurface() const
{
    core::Ptr<core::Base> res = planarSurface_raw();
    return res;
}

inline core::Ptr<LineOnPlanarSurfaceConstraint> LineOnPlanarSurfaceConstraint::nativeObject() const
{
    core::Ptr<LineOnPlanarSurfaceConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<LineOnPlanarSurfaceConstraint> LineOnPlanarSurfaceConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<LineOnPlanarSurfaceConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LINEONPLANARSURFACECONSTRAINT_API