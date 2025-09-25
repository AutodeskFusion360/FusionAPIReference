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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include "../../Core/CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PROFILECURVE_CPP__
# define ADSK_FUSION_PROFILECURVE_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILECURVE_API
# endif
#else
# define ADSK_FUSION_PROFILECURVE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
    class Curve3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class Profile;
    class ProfileLoop;
    class Sketch;
    class SketchEntity;
}}

namespace adsk { namespace fusion {

/// A single curve in a profile.
class ProfileCurve : public core::Base {
public:

    /// Returns the geometric entity of this portion of the profile.
    core::Ptr<core::Curve3D> geometry() const;

    /// Return the geometry type that the Geometry property will return.
    core::Curve3DTypes geometryType() const;

    /// Returns the associated sketch entity that defines this curve.
    core::Ptr<SketchEntity> sketchEntity() const;

    /// Returns the parent ProfileLoop object.
    core::Ptr<ProfileLoop> parentProfileLoop() const;

    /// Returns the parent Profile object.
    core::Ptr<Profile> parentProfile() const;

    /// Returns the parent Profile object.
    core::Ptr<Sketch> parentSketch() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ProfileCurve> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// Returns null if this isn't the NativeObject.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ProfileCurve> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the bounding box of the profile curve in sketch space.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    ADSK_FUSION_PROFILECURVE_API static const char* classType();
    ADSK_FUSION_PROFILECURVE_API const char* objectType() const override;
    ADSK_FUSION_PROFILECURVE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILECURVE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Curve3D* geometry_raw() const = 0;
    virtual core::Curve3DTypes geometryType_raw() const = 0;
    virtual SketchEntity* sketchEntity_raw() const = 0;
    virtual ProfileLoop* parentProfileLoop_raw() const = 0;
    virtual Profile* parentProfile_raw() const = 0;
    virtual Sketch* parentSketch_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual ProfileCurve* nativeObject_raw() const = 0;
    virtual ProfileCurve* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Curve3D> ProfileCurve::geometry() const
{
    core::Ptr<core::Curve3D> res = geometry_raw();
    return res;
}

inline core::Curve3DTypes ProfileCurve::geometryType() const
{
    core::Curve3DTypes res = geometryType_raw();
    return res;
}

inline core::Ptr<SketchEntity> ProfileCurve::sketchEntity() const
{
    core::Ptr<SketchEntity> res = sketchEntity_raw();
    return res;
}

inline core::Ptr<ProfileLoop> ProfileCurve::parentProfileLoop() const
{
    core::Ptr<ProfileLoop> res = parentProfileLoop_raw();
    return res;
}

inline core::Ptr<Profile> ProfileCurve::parentProfile() const
{
    core::Ptr<Profile> res = parentProfile_raw();
    return res;
}

inline core::Ptr<Sketch> ProfileCurve::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline core::Ptr<Occurrence> ProfileCurve::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<ProfileCurve> ProfileCurve::nativeObject() const
{
    core::Ptr<ProfileCurve> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ProfileCurve> ProfileCurve::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ProfileCurve> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::BoundingBox3D> ProfileCurve::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILECURVE_API