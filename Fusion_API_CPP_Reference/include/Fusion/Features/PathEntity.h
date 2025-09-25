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
# ifdef __COMPILING_ADSK_FUSION_PATHENTITY_CPP__
# define ADSK_FUSION_PATHENTITY_API XI_EXPORT
# else
# define ADSK_FUSION_PATHENTITY_API
# endif
#else
# define ADSK_FUSION_PATHENTITY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class Path;
}}

namespace adsk { namespace fusion {

/// The PathEntity object represents a curve within a path
class PathEntity : public core::Base {
public:

    /// Property that returns the geometry of the entity.
    /// This is different from the original path curve if the true start point is not the same as the start point of the original path curve.
    core::Ptr<core::Curve3D> curve() const;

    /// Property that returns the type of the curve referenced by the path entity. This property allows you to determine what type of object will be returned by the Curve property.
    core::Curve3DTypes curveType() const;

    /// Property that gets the sketch curve or edge this entity was derived from.
    core::Ptr<core::Base> entity() const;

    /// Property that returns the parent Path of the entity.
    core::Ptr<Path> parentPath() const;

    /// This property is not supported for a PathEntity object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// This property is not supported for a PathEntity object.
    core::Ptr<PathEntity> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : 
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PathEntity> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Indicates if the orientation of this PathEntity is in the same direction or opposed to the natural direction
    /// of the SketchCurve or BRepEdge object it is derived from.
    bool isOpposedToEntity() const;

    ADSK_FUSION_PATHENTITY_API static const char* classType();
    ADSK_FUSION_PATHENTITY_API const char* objectType() const override;
    ADSK_FUSION_PATHENTITY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATHENTITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Curve3D* curve_raw() const = 0;
    virtual core::Curve3DTypes curveType_raw() const = 0;
    virtual core::Base* entity_raw() const = 0;
    virtual Path* parentPath_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual PathEntity* nativeObject_raw() const = 0;
    virtual PathEntity* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isOpposedToEntity_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Curve3D> PathEntity::curve() const
{
    core::Ptr<core::Curve3D> res = curve_raw();
    return res;
}

inline core::Curve3DTypes PathEntity::curveType() const
{
    core::Curve3DTypes res = curveType_raw();
    return res;
}

inline core::Ptr<core::Base> PathEntity::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline core::Ptr<Path> PathEntity::parentPath() const
{
    core::Ptr<Path> res = parentPath_raw();
    return res;
}

inline core::Ptr<Occurrence> PathEntity::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<PathEntity> PathEntity::nativeObject() const
{
    core::Ptr<PathEntity> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PathEntity> PathEntity::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PathEntity> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool PathEntity::isOpposedToEntity() const
{
    bool res = isOpposedToEntity_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATHENTITY_API