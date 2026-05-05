//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "PMICreatedAnnotation.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMILEADERLINENOTE_CPP__
# define ADSK_FUSION_PMILEADERLINENOTE_API XI_EXPORT
# else
# define ADSK_FUSION_PMILEADERLINENOTE_API
# endif
#else
# define ADSK_FUSION_PMILEADERLINENOTE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines a created PMI which includes data corresponding to Notes.
class PMILeaderLineNote : public PMICreatedAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMILeaderLineNote> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMILeaderLineNote> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// The geometric entity to which the Note PMI is associated.
    /// 
    /// This can be a BRepFace, BRepEdge or BRepVertex object. For BRepEdge objects, only linear, circular
    /// and elliptical edges are supported. The note will be positioned relative to this entity and will
    /// maintain its association with the entity geometry.
    /// 
    /// The geometry obtained is equivalent to referencedEntities[0].
    /// 
    /// Setting the geometry will set a default annotation plane and target point.
    /// Resetting the geometry will reset to default annotation plane and target point.
    /// Native object will be used when setting the geometry.
    core::Ptr<core::Base> geometry() const;
    bool geometry(const core::Ptr<core::Base>& value);

    /// Sets the point on the annotation plane where the leader line meets the annotated geometry.
    /// annotationTargetPoint : The point on the annotated geometry.
    /// Returns true if the annotation target point has been set successfully, false otherwise.
    bool setAnnotationTargetPoint(const core::Ptr<core::Point3D>& annotationTargetPoint);

    /// Sets the annotation plane for Leader Line Note PMI.
    /// planeType : The type of annotation plane to create.
    /// 
    /// Setting Leader Line Note PMI to Unknown plane type is not supported.
    /// face : An optional input face to define the plane.
    /// 
    /// Required if the planeType is NormalToCustomFaceLeaderLineNotePlaneType.
    /// 
    /// Required if the planeType is NormalToFaceLeaderLineNotePlaneType and the face must be an adjacent face to the geometry.
    /// 
    /// For other plane types, this parameter is ignored.
    /// True if the plane has been set successfully, false otherwise.
    bool setAnnotationPlane(LeaderLineNotePlaneTypes planeType, const core::Ptr<BRepFace>& face = NULL);

    /// Gets the LeaderLineNotePlaneTypes that the Leader Line Note PMI is currently using.
    LeaderLineNotePlaneTypes annotationPlaneType() const;

    /// Gets the BRepFace used as the alternate plane for the leader line note, if there's any.
    /// 
    /// Applicable when the planeType is NormalToCustomFaceLeaderLineNotePlaneType or NormalToFaceLeaderLineNotePlaneType.
    core::Ptr<BRepFace> annotationPlaneReferencedFace() const;

    /// Gets the available annotation plane types that can be set on this Leader Line Note PMI.
    std::vector<int> supportedAnnotationPlaneTypes() const;

    /// Gets the adjacent planar faces to the geometry that can be used to define the annotation plane with type NormalToFaceLeaderLineNotePlaneType.
    std::vector<core::Ptr<BRepFace>> adjacentPlanarFaces() const;

    ADSK_FUSION_PMILEADERLINENOTE_API static const char* classType();
    ADSK_FUSION_PMILEADERLINENOTE_API const char* objectType() const override;
    ADSK_FUSION_PMILEADERLINENOTE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMILEADERLINENOTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMILeaderLineNote* nativeObject_raw() const = 0;
    virtual PMILeaderLineNote* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::Base* geometry_raw() const = 0;
    virtual bool geometry_raw(core::Base* value) = 0;
    virtual bool setAnnotationTargetPoint_raw(core::Point3D* annotationTargetPoint) = 0;
    virtual bool setAnnotationPlane_raw(LeaderLineNotePlaneTypes planeType, BRepFace* face) = 0;
    virtual LeaderLineNotePlaneTypes annotationPlaneType_raw() const = 0;
    virtual BRepFace* annotationPlaneReferencedFace_raw() const = 0;
    virtual int* supportedAnnotationPlaneTypes_raw(size_t& return_size) const = 0;
    virtual BRepFace** adjacentPlanarFaces_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<PMILeaderLineNote> PMILeaderLineNote::nativeObject() const
{
    core::Ptr<PMILeaderLineNote> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMILeaderLineNote> PMILeaderLineNote::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMILeaderLineNote> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::Base> PMILeaderLineNote::geometry() const
{
    core::Ptr<core::Base> res = geometry_raw();
    return res;
}

inline bool PMILeaderLineNote::geometry(const core::Ptr<core::Base>& value)
{
    return geometry_raw(value.get());
}

inline bool PMILeaderLineNote::setAnnotationTargetPoint(const core::Ptr<core::Point3D>& annotationTargetPoint)
{
    bool res = setAnnotationTargetPoint_raw(annotationTargetPoint.get());
    return res;
}

inline bool PMILeaderLineNote::setAnnotationPlane(LeaderLineNotePlaneTypes planeType, const core::Ptr<BRepFace>& face)
{
    bool res = setAnnotationPlane_raw(planeType, face.get());
    return res;
}

inline LeaderLineNotePlaneTypes PMILeaderLineNote::annotationPlaneType() const
{
    LeaderLineNotePlaneTypes res = annotationPlaneType_raw();
    return res;
}

inline core::Ptr<BRepFace> PMILeaderLineNote::annotationPlaneReferencedFace() const
{
    core::Ptr<BRepFace> res = annotationPlaneReferencedFace_raw();
    return res;
}

inline std::vector<int> PMILeaderLineNote::supportedAnnotationPlaneTypes() const
{
    std::vector<int> res;
    size_t s;

    int* p= supportedAnnotationPlaneTypes_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<BRepFace>> PMILeaderLineNote::adjacentPlanarFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= adjacentPlanarFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMILEADERLINENOTE_API