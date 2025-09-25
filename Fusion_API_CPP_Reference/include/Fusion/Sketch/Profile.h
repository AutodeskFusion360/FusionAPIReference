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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PROFILE_CPP__
# define ADSK_FUSION_PROFILE_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILE_API
# endif
#else
# define ADSK_FUSION_PROFILE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
    class Plane;
}}
namespace adsk { namespace fusion {
    class AreaProperties;
    class BRepFace;
    class Occurrence;
    class ProfileLoops;
    class Sketch;
}}

namespace adsk { namespace fusion {

/// Represents a profile in a sketch. Profiles are automatically computed by Fusion and
/// represent closed areas within the sketch.
class Profile : public core::Base {
public:

    /// Returns the 3D bounding box of the profile in sketch space.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns the plane the profile is defined in. Profiles are always planar and exist within
    /// a single plane.
    core::Ptr<core::Plane> plane() const;

    /// The loops or closed areas within this profile. There is always a single outer loop
    /// but there can be zero to many inner loops defining voids in the profile.
    core::Ptr<ProfileLoops> profileLoops() const;

    /// Returns the parent sketch of the profile.
    core::Ptr<Sketch> parentSketch() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<Profile> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// Returns null if this isn't the NativeObject.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<Profile> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Calculates the area properties for the profile.
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    /// Returns the AreaProperties object that has properties for getting the area, perimeter, centroid, etc
    /// of this profile.
    core::Ptr<AreaProperties> areaProperties(CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// Returns a token for the Profile object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same profile.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns a temporary BRepFace object that is the same shape as the profile. The geometry
    /// of the returned face is defined in the 3D space of the parent sketch of the profile.
    /// 
    /// This can be useful when wanting to use a profile in conjunction with the
    /// TemporaryBRepManager object to create B-Rep objects.
    core::Ptr<BRepFace> face() const;

    ADSK_FUSION_PROFILE_API static const char* classType();
    ADSK_FUSION_PROFILE_API const char* objectType() const override;
    ADSK_FUSION_PROFILE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual core::Plane* plane_raw() const = 0;
    virtual ProfileLoops* profileLoops_raw() const = 0;
    virtual Sketch* parentSketch_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual Profile* nativeObject_raw() const = 0;
    virtual Profile* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual AreaProperties* areaProperties_raw(CalculationAccuracy accuracy) const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual BRepFace* face_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::BoundingBox3D> Profile::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<core::Plane> Profile::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline core::Ptr<ProfileLoops> Profile::profileLoops() const
{
    core::Ptr<ProfileLoops> res = profileLoops_raw();
    return res;
}

inline core::Ptr<Sketch> Profile::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline core::Ptr<Occurrence> Profile::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<Profile> Profile::nativeObject() const
{
    core::Ptr<Profile> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Profile> Profile::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Profile> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<AreaProperties> Profile::areaProperties(CalculationAccuracy accuracy) const
{
    core::Ptr<AreaProperties> res = areaProperties_raw(accuracy);
    return res;
}

inline std::string Profile::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<BRepFace> Profile::face() const
{
    core::Ptr<BRepFace> res = face_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILE_API