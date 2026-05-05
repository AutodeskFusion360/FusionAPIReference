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
#include "PMIInput.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMILEADERLINENOTEINPUT_CPP__
# define ADSK_FUSION_PMILEADERLINENOTEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PMILEADERLINENOTEINPUT_API
# endif
#else
# define ADSK_FUSION_PMILEADERLINENOTEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A class that defines the input used to create a Note PMI.
class PMILeaderLineNoteInput : public PMIInput {
public:

    /// The geometric entity to which the Note PMI will be associated.
    /// 
    /// This can be a BRepFace, BRepEdge, or BRepVertex object. For BRepEdge objects, only linear, circular
    /// and elliptical edges are supported. The note will be positioned relative to this entity and will
    /// maintain its association with the entity geometry.
    /// 
    /// Setting the geometry will set a default annotation plane and target point.
    /// Resetting the geometry will reset to default annotation plane and target point.
    /// Native object will be used when setting the geometry.
    core::Ptr<core::Base> geometry() const;
    bool geometry(const core::Ptr<core::Base>& value);

    /// Gets and sets the annotation point on the geometry that the leader line note is associated with.
    /// 
    /// This can be a point on the BRepFace, BRepEdge or BRepVertex, depending on the geometry.
    /// The point is relative to the geometry's component space where the PMI is being created.
    core::Ptr<core::Point3D> annotationTargetPoint() const;
    bool annotationTargetPoint(const core::Ptr<core::Point3D>& value);

    /// Sets the annotation plane for Leader Line Note PMI.
    /// planeType : The type of annotation plane to create.
    /// 
    /// Creation of Leader Line Note PMI on Unknown plane type is not supported.
    /// face : An optional input face to define the plane.
    /// 
    /// Required if the planeType is NormalToCustomFaceLeaderLineNotePlaneType.
    /// 
    /// Required if the planeType is NormalToFaceLeaderLineNotePlaneType and the face must be an adjacent face to the geometry.
    /// 
    /// For other plane types, this parameter is ignored.
    /// True if the plane has been set successfully.
    bool setAnnotationPlane(LeaderLineNotePlaneTypes planeType, const core::Ptr<BRepFace>& face = core::Ptr<BRepFace>());

    /// Get the LeaderLineNotePlaneTypes that the Leader Line Note PMI is currently using.
    LeaderLineNotePlaneTypes annotationPlaneType() const;

    /// The BRepFace used as the alternate plane for the leader line note, if there's any.
    /// 
    /// Applicable when the planeType is NormalToCustomFaceLeaderLineNotePlaneType or NormalToFaceLeaderLineNotePlaneType
    core::Ptr<BRepFace> annotationPlaneReferencedFace() const;

    /// A helper method to get all available annotation plane types that can be set on this Leader Line Note PMI.
    std::vector<int> supportedAnnotationPlaneTypes() const;

    /// Adjacent planar faces to the geometry that can be used to define the annotation plane with type NormalToFaceLeaderLineNotePlaneType.
    std::vector<core::Ptr<BRepFace>> adjacentPlanarFaces() const;

    ADSK_FUSION_PMILEADERLINENOTEINPUT_API static const char* classType();
    ADSK_FUSION_PMILEADERLINENOTEINPUT_API const char* objectType() const override;
    ADSK_FUSION_PMILEADERLINENOTEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMILEADERLINENOTEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* geometry_raw() const = 0;
    virtual bool geometry_raw(core::Base* value) = 0;
    virtual core::Point3D* annotationTargetPoint_raw() const = 0;
    virtual bool annotationTargetPoint_raw(core::Point3D* value) = 0;
    virtual bool setAnnotationPlane_raw(LeaderLineNotePlaneTypes planeType, BRepFace* face) = 0;
    virtual LeaderLineNotePlaneTypes annotationPlaneType_raw() const = 0;
    virtual BRepFace* annotationPlaneReferencedFace_raw() const = 0;
    virtual int* supportedAnnotationPlaneTypes_raw(size_t& return_size) const = 0;
    virtual BRepFace** adjacentPlanarFaces_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> PMILeaderLineNoteInput::geometry() const
{
    core::Ptr<core::Base> res = geometry_raw();
    return res;
}

inline bool PMILeaderLineNoteInput::geometry(const core::Ptr<core::Base>& value)
{
    return geometry_raw(value.get());
}

inline core::Ptr<core::Point3D> PMILeaderLineNoteInput::annotationTargetPoint() const
{
    core::Ptr<core::Point3D> res = annotationTargetPoint_raw();
    return res;
}

inline bool PMILeaderLineNoteInput::annotationTargetPoint(const core::Ptr<core::Point3D>& value)
{
    return annotationTargetPoint_raw(value.get());
}

inline bool PMILeaderLineNoteInput::setAnnotationPlane(LeaderLineNotePlaneTypes planeType, const core::Ptr<BRepFace>& face)
{
    bool res = setAnnotationPlane_raw(planeType, face.get());
    return res;
}

inline LeaderLineNotePlaneTypes PMILeaderLineNoteInput::annotationPlaneType() const
{
    LeaderLineNotePlaneTypes res = annotationPlaneType_raw();
    return res;
}

inline core::Ptr<BRepFace> PMILeaderLineNoteInput::annotationPlaneReferencedFace() const
{
    core::Ptr<BRepFace> res = annotationPlaneReferencedFace_raw();
    return res;
}

inline std::vector<int> PMILeaderLineNoteInput::supportedAnnotationPlaneTypes() const
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

inline std::vector<core::Ptr<BRepFace>> PMILeaderLineNoteInput::adjacentPlanarFaces() const
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

#undef ADSK_FUSION_PMILEADERLINENOTEINPUT_API