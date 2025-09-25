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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_LOFTFEATUREINPUT_CPP__
# define ADSK_FUSION_LOFTFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_LOFTFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
    class LoftCenterLineOrRails;
    class LoftSections;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This object defines the all of the input necessary to create a loft feature. It is the
/// programming equivalent to the Loft command dialog. Through this object you provide
/// the input needed to fully define a loft. To create the loft feature you pass
/// this object the LoftFeatures.add method.
class LoftFeatureInput : public core::Base {
public:

    /// The set of sections, (or profiles as they're referred to in the user-interface), that the loft will pass through. Use the add method on the LoftSections
    /// object to specify new sections.
    core::Ptr<LoftSections> loftSections() const;

    /// The single centerline or set of rails that define the shape of the loft. Use methods on the
    /// returned LoftCenterLineOrRails object to define the centerline or rails.
    core::Ptr<LoftCenterLineOrRails> centerLineOrRails() const;

    /// Gets and sets the type of operation performed by the loft.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the loft is created based on geometry (e.g. a profile and/or face(s))
    /// when the loft is being created in another component AND the loft is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Specifies if the loft should be created as a solid or surface. This is
    /// initialized to true so a solid will attempt to be created if it's not changed.
    bool isSolid() const;
    bool isSolid(bool value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// If this property has not been set, the default behavior is that all bodies that are intersected by the
    /// feature will participate.
    /// 
    /// This property can return null in the case where the feature has not been fully defined so that
    /// possible intersecting bodies can be computed.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Specifies if the loft closes back on itself. In other words, the first section is also
    /// used as the last section and the connection is smooth. This property defaults to false.
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

    ADSK_FUSION_LOFTFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_LOFTFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_LOFTFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoftSections* loftSections_raw() const = 0;
    virtual LoftCenterLineOrRails* centerLineOrRails_raw() const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual bool isSolid_raw() const = 0;
    virtual bool isSolid_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
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

inline core::Ptr<LoftSections> LoftFeatureInput::loftSections() const
{
    core::Ptr<LoftSections> res = loftSections_raw();
    return res;
}

inline core::Ptr<LoftCenterLineOrRails> LoftFeatureInput::centerLineOrRails() const
{
    core::Ptr<LoftCenterLineOrRails> res = centerLineOrRails_raw();
    return res;
}

inline FeatureOperations LoftFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool LoftFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<Occurrence> LoftFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool LoftFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline bool LoftFeatureInput::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline bool LoftFeatureInput::isSolid(bool value)
{
    return isSolid_raw(value);
}

inline core::Ptr<BaseFeature> LoftFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool LoftFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline std::vector<core::Ptr<BRepBody>> LoftFeatureInput::participantBodies() const
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

inline bool LoftFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool LoftFeatureInput::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline bool LoftFeatureInput::isClosed(bool value)
{
    return isClosed_raw(value);
}

inline bool LoftFeatureInput::isTangentEdgesMerged() const
{
    bool res = isTangentEdgesMerged_raw();
    return res;
}

inline bool LoftFeatureInput::isTangentEdgesMerged(bool value)
{
    return isTangentEdgesMerged_raw(value);
}

inline LoftEdgeAlignments LoftFeatureInput::startLoftEdgeAlignment() const
{
    LoftEdgeAlignments res = startLoftEdgeAlignment_raw();
    return res;
}

inline bool LoftFeatureInput::startLoftEdgeAlignment(LoftEdgeAlignments value)
{
    return startLoftEdgeAlignment_raw(value);
}

inline LoftEdgeAlignments LoftFeatureInput::endLoftEdgeAlignment() const
{
    LoftEdgeAlignments res = endLoftEdgeAlignment_raw();
    return res;
}

inline bool LoftFeatureInput::endLoftEdgeAlignment(LoftEdgeAlignments value)
{
    return endLoftEdgeAlignment_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTFEATUREINPUT_API