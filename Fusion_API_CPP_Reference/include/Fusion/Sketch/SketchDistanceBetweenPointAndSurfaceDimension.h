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
#include "SketchDimension.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_CPP__
# define ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API
# endif
#else
# define ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A linear dimension in a sketch between a sketch point and a surface.
class SketchDistanceBetweenPointAndSurfaceDimension : public SketchDimension {
public:

    /// The sketch point being constrained.
    core::Ptr<SketchPoint> point() const;

    /// The BRepFace or ConstructionPlane to which the dimension is anchored. Planar, cylindrical, spherical and conical faces are supported.
    core::Ptr<core::Base> surface() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API static const char* classType();
    ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* point_raw() const = 0;
    virtual core::Base* surface_raw() const = 0;
    virtual SketchDistanceBetweenPointAndSurfaceDimension* nativeObject_raw() const = 0;
    virtual SketchDistanceBetweenPointAndSurfaceDimension* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchDistanceBetweenPointAndSurfaceDimension::point() const
{
    core::Ptr<SketchPoint> res = point_raw();
    return res;
}

inline core::Ptr<core::Base> SketchDistanceBetweenPointAndSurfaceDimension::surface() const
{
    core::Ptr<core::Base> res = surface_raw();
    return res;
}

inline core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> SketchDistanceBetweenPointAndSurfaceDimension::nativeObject() const
{
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> SketchDistanceBetweenPointAndSurfaceDimension::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchDistanceBetweenPointAndSurfaceDimension> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHDISTANCEBETWEENPOINTANDSURFACEDIMENSION_API