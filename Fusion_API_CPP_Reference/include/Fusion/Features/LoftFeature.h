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
#include "Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_LOFTFEATURE_CPP__
# define ADSK_FUSION_LOFTFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTFEATURE_API
# endif
#else
# define ADSK_FUSION_LOFTFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class BRepFace;
    class BRepFaces;
    class LoftCenterLineOrRails;
    class LoftSections;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing loft feature in a design.
class LoftFeature : public Feature {
public:

    /// Returns the set of sections that the loft passes through.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<LoftSections> loftSections() const;

    /// Returns the single centerline or the set of rails that define the shape of the loft.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<LoftCenterLineOrRails> centerLineOrRails() const;

    /// Property that returns the face that caps the start of the loft and is coincident
    /// with the first section. In the case where the loft isn't capped and there isn't
    /// a start face, this property will return null.
    core::Ptr<BRepFace> startFace() const;

    /// Property that returns the face that caps the end of the loft and is coincident
    /// with the last section. In the case where the loft isn't capped and there isn't an end face,
    /// this property will return null.
    core::Ptr<BRepFace> endFace() const;

    /// Property that returns all of the side faces (i.e. those running through the sections)
    /// of the feature.
    core::Ptr<BRepFaces> sideFaces() const;

    /// Gets and sets the type of operation performed by the extrusion.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Indicates if this feature was initially created as a solid or a surface.
    bool isSolid() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<LoftFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<LoftFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Specifies if the loft closes back on itself. In other words, the first section is also
    /// used as the last section.
    bool isClosed() const;
    bool isClosed(bool value);

    /// Specifies if the loft will keep or merge tangent edges. These are edges between tangent
    /// faces in the resulting loft surface. If true, the faces will be merged so the connecting
    /// edge no longer exists
    bool isTangentEdgesMerged() const;
    bool isTangentEdgesMerged(bool value);

    /// Specifies the start edge alignment option for the loft feature. The default is Free Edges.
    LoftEdgeAlignments startLoftEdgeAlignment() const;
    bool startLoftEdgeAlignment(LoftEdgeAlignments value);

    /// Specifies the end edge alignment option for the loft feature. The default is Free Edges.
    LoftEdgeAlignments endLoftEdgeAlignment() const;
    bool endLoftEdgeAlignment(LoftEdgeAlignments value);

    ADSK_FUSION_LOFTFEATURE_API static const char* classType();
    ADSK_FUSION_LOFTFEATURE_API const char* objectType() const override;
    ADSK_FUSION_LOFTFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoftSections* loftSections_raw() const = 0;
    virtual LoftCenterLineOrRails* centerLineOrRails_raw() const = 0;
    virtual BRepFace* startFace_raw() const = 0;
    virtual BRepFace* endFace_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual bool isSolid_raw() const = 0;
    virtual LoftFeature* nativeObject_raw() const = 0;
    virtual LoftFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual bool isClosed_raw() const = 0;
    virtual bool isClosed_raw(bool value) = 0;
    virtual bool isTangentEdgesMerged_raw() const = 0;
    virtual bool isTangentEdgesMerged_raw(bool value) = 0;
    virtual LoftEdgeAlignments startLoftEdgeAlignment_raw() const = 0;
    virtual bool startLoftEdgeAlignment_raw(LoftEdgeAlignments value) = 0;
    virtual LoftEdgeAlignments endLoftEdgeAlignment_raw() const = 0;
    virtual bool endLoftEdgeAlignment_raw(LoftEdgeAlignments value) = 0;
};

// Inline wrappers

inline core::Ptr<LoftSections> LoftFeature::loftSections() const
{
    core::Ptr<LoftSections> res = loftSections_raw();
    return res;
}

inline core::Ptr<LoftCenterLineOrRails> LoftFeature::centerLineOrRails() const
{
    core::Ptr<LoftCenterLineOrRails> res = centerLineOrRails_raw();
    return res;
}

inline core::Ptr<BRepFace> LoftFeature::startFace() const
{
    core::Ptr<BRepFace> res = startFace_raw();
    return res;
}

inline core::Ptr<BRepFace> LoftFeature::endFace() const
{
    core::Ptr<BRepFace> res = endFace_raw();
    return res;
}

inline core::Ptr<BRepFaces> LoftFeature::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline FeatureOperations LoftFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool LoftFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline bool LoftFeature::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline core::Ptr<LoftFeature> LoftFeature::nativeObject() const
{
    core::Ptr<LoftFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<LoftFeature> LoftFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<LoftFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::vector<core::Ptr<BRepBody>> LoftFeature::participantBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= participantBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool LoftFeature::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool LoftFeature::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline bool LoftFeature::isClosed(bool value)
{
    return isClosed_raw(value);
}

inline bool LoftFeature::isTangentEdgesMerged() const
{
    bool res = isTangentEdgesMerged_raw();
    return res;
}

inline bool LoftFeature::isTangentEdgesMerged(bool value)
{
    return isTangentEdgesMerged_raw(value);
}

inline LoftEdgeAlignments LoftFeature::startLoftEdgeAlignment() const
{
    LoftEdgeAlignments res = startLoftEdgeAlignment_raw();
    return res;
}

inline bool LoftFeature::startLoftEdgeAlignment(LoftEdgeAlignments value)
{
    return startLoftEdgeAlignment_raw(value);
}

inline LoftEdgeAlignments LoftFeature::endLoftEdgeAlignment() const
{
    LoftEdgeAlignments res = endLoftEdgeAlignment_raw();
    return res;
}

inline bool LoftFeature::endLoftEdgeAlignment(LoftEdgeAlignments value)
{
    return endLoftEdgeAlignment_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTFEATURE_API