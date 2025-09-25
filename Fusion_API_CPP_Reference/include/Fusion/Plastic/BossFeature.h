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
#include "../Features/Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BOSSFEATURE_CPP__
# define ADSK_FUSION_BOSSFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_BOSSFEATURE_API
# endif
#else
# define ADSK_FUSION_BOSSFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BossFeatureInput;
    class BossPositionDefinition;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing boss feature in a design.
/// For history free model this interface has limited functionality.
class BossFeature : public Feature {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BossFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<BossFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Creates object with inputs this feature represents.
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    /// Returns BossFeatureInput this feature represent if successful.
    core::Ptr<BossFeatureInput> createInput() const;

    /// Changes the boss feature (or boss connection) to the input provided.
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    /// input : The object defines inputs the feature will be set to.
    /// Returns true if successful.
    bool update(const core::Ptr<BossFeatureInput>& input);

    /// Returns the direction of the boss feature with respect to selected position point.
    /// For selected sketch point this direction represents a Z-axis of the sketch.
    core::Ptr<core::Vector3D> direction() const;

    /// Gets and sets if the direction of the boss (or boss connection) is flipped.
    bool isDirectionFlipped() const;
    bool isDirectionFlipped(bool value);

    /// Gets if this boss feature instance represents a bottom side where screw thread engages with the part.
    /// If this feature instance represents a geometry where screw head engages it returns false.
    bool isGeometryOpposite() const;

    /// Returns the current boss shape this feature represents.
    BossShapeTypes shapeType() const;

    /// Returns the current boss alignment shape this feature represents.
    BossAlignmentTypes alignmentType() const;

    /// Returns the current type of hole this feature represents.
    HoleTypes holeType() const;

    /// Returns the current type of hole extent this feature represents.
    BossHoleExtentTypes holeExtentType() const;

    /// Returns the current type of ribs shape this feature represents.
    BossRibShapeTypes ribType() const;

    /// Returns a BossPositionDefinition object that provides access to the information used
    /// to define the position of the boss feature.
    core::Ptr<BossPositionDefinition> positionDefinition() const;

    /// Returns the model parameter for thickness - plastic part rule reference.
    core::Ptr<ModelParameter> thickness() const;

    /// Returns the model parameter for taper angle - plastic part rule reference.
    core::Ptr<ModelParameter> taperAngle() const;

    /// Returns the model parameter for inner radius - reference for parametric expressions.
    core::Ptr<ModelParameter> innerRadius() const;

    /// Returns the model parameter for screw diameter - reference for parametric expressions.
    core::Ptr<ModelParameter> screwDiameter() const;

    /// Returns the model parameter for screw head diameter - reference for parametric expressions.
    core::Ptr<ModelParameter> screwHeadDiameter() const;

    /// Returns the model parameter for countersink head angle - reference for parametric expressions.
    core::Ptr<ModelParameter> screwHeadAngle() const;

    /// Returns the model parameter controlling the offset from the selected parting plane.
    core::Ptr<ModelParameter> offset() const;

    /// Returns the model parameter controlling the offset clearance from the selected parting plane and offset.
    core::Ptr<ModelParameter> offsetClearance() const;

    /// Returns the model parameter controlling the shank diameter.
    core::Ptr<ModelParameter> diameter() const;

    /// Returns the model parameter controlling the shank draft angle.
    core::Ptr<ModelParameter> draftAngle() const;

    /// Returns the model parameter controlling the step diameter used for alignment of its counterparts.
    core::Ptr<ModelParameter> alignmentDiameter() const;

    /// Returns the model parameter controlling the step depth used for alignment of its counterparts.
    core::Ptr<ModelParameter> alignmentDepth() const;

    /// Returns the model parameter controlling the step draft angle.
    core::Ptr<ModelParameter> alignmentDraftAngle() const;

    /// Returns the model parameter controlling the hole diameter.
    core::Ptr<ModelParameter> holeDiameter() const;

    /// Returns the model parameter controlling hole draft angle.
    core::Ptr<ModelParameter> holeDraftAngle() const;

    /// Returns the model parameter controlling the hole depth with respect to hole extent type.
    /// If hole extent type is set to BossHoleThrough parameter not used. If hole extent type is BossBlindFull
    /// the parameter is a distance from farthest face. If hole extent type is set to BossBlindDepth the parameter
    /// is a distance from start face of the hole.
    core::Ptr<ModelParameter> holeDepth() const;

    /// Returns the model parameter controlling major hole diameter for counterbore and countersink hole.
    /// If hole type is set to simple hole or boss shape is to BossBlank this parameter is unused.
    core::Ptr<ModelParameter> holeMajorDiameter() const;

    /// Returns the model parameter controlling major hole depth for counterbore and countersink hole.
    /// If hole type is set to simple hole or boss shape is to BossBlank this parameter is unused.
    core::Ptr<ModelParameter> holeMajorDepth() const;

    /// Returns the model parameter controlling major hole draft angle for counterbore and countersink hole.
    /// If hole type is set to simple hole or boss shape is to BossBlank this parameter is unused.
    core::Ptr<ModelParameter> holeMajorDraftAngle() const;

    /// Returns the model parameter controlling countersink angle for countersink hole.
    /// If hole type is not set to countersink hole or boss shape is to BossBlank this parameter is unused.
    core::Ptr<ModelParameter> holeCountersinkAngle() const;

    /// Returns the model parameter controlling blend radius of the boss shank.
    core::Ptr<ModelParameter> rootRadius() const;

    /// Returns the model parameter controlling blend radius of the boss shank top face.
    core::Ptr<ModelParameter> tipRadius() const;

    /// Returns the model parameter controlling blend radius of the boss alignment top face.
    core::Ptr<ModelParameter> alignmentTipRadius() const;

    /// Returns the model parameter controlling blend radius of the boss alignment root.
    core::Ptr<ModelParameter> alignmentRootRadius() const;

    /// Returns the model parameter controlling blend radius of the hole start.
    core::Ptr<ModelParameter> holeStartRadius() const;

    /// Returns the model parameter controlling blend radius of the hole end.
    core::Ptr<ModelParameter> holeEndRadius() const;

    /// Returns the model parameter controlling blend radius of major hole counterbore.
    core::Ptr<ModelParameter> holeMajorTipRadius() const;

    /// Returns the model parameter controlling blend radius of major hole counterbore root.
    core::Ptr<ModelParameter> holeMajorRootRadius() const;

    /// Returns the model parameter controlling ribs length measured from the shank axis.
    core::Ptr<ModelParameter> ribLength() const;

    /// Returns the model parameter controlling ribs offset from the top face or alignment face.
    core::Ptr<ModelParameter> ribOffset() const;

    /// Returns the model parameter controlling ribs thickness.
    core::Ptr<ModelParameter> ribThickness() const;

    /// Returns the model parameter controlling ribs draft angle.
    core::Ptr<ModelParameter> ribDraftAngle() const;

    /// Returns the model parameter controlling size of rib outer draft angle.
    core::Ptr<ModelParameter> ribOuterDraftAngle() const;

    /// Returns the model parameter controlling size of rib chamfer or fillet.
    core::Ptr<ModelParameter> ribCutSize() const;

    /// Returns the model parameter controlling size of rib chamfer angle.
    core::Ptr<ModelParameter> ribChamferAngle() const;

    /// Returns the model parameter controlling size of rib tip blend radius.
    core::Ptr<ModelParameter> ribTipRadius() const;

    /// Returns the model parameter controlling size of rib root blend radius.
    core::Ptr<ModelParameter> ribBlendRadius() const;

    /// Returns the model parameter controlling rotation angle of the first rib from the reference vector.
    /// For selected sketch point(s) the direction of reference vector is X-axis of the parent sketch.
    core::Ptr<ModelParameter> ribRotation() const;

    /// Returns the model parameter controlling total angle for ribs distribution.
    core::Ptr<ModelParameter> ribTotalAngle() const;

    /// Returns the model parameter controlling number of ribs.
    core::Ptr<ModelParameter> ribCount() const;

    ADSK_FUSION_BOSSFEATURE_API static const char* classType();
    ADSK_FUSION_BOSSFEATURE_API const char* objectType() const override;
    ADSK_FUSION_BOSSFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOSSFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BossFeature* nativeObject_raw() const = 0;
    virtual BossFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BossFeatureInput* createInput_raw() const = 0;
    virtual bool update_raw(BossFeatureInput* input) = 0;
    virtual core::Vector3D* direction_raw() const = 0;
    virtual bool isDirectionFlipped_raw() const = 0;
    virtual bool isDirectionFlipped_raw(bool value) = 0;
    virtual bool isGeometryOpposite_raw() const = 0;
    virtual BossShapeTypes shapeType_raw() const = 0;
    virtual BossAlignmentTypes alignmentType_raw() const = 0;
    virtual HoleTypes holeType_raw() const = 0;
    virtual BossHoleExtentTypes holeExtentType_raw() const = 0;
    virtual BossRibShapeTypes ribType_raw() const = 0;
    virtual BossPositionDefinition* positionDefinition_raw() const = 0;
    virtual ModelParameter* thickness_raw() const = 0;
    virtual ModelParameter* taperAngle_raw() const = 0;
    virtual ModelParameter* innerRadius_raw() const = 0;
    virtual ModelParameter* screwDiameter_raw() const = 0;
    virtual ModelParameter* screwHeadDiameter_raw() const = 0;
    virtual ModelParameter* screwHeadAngle_raw() const = 0;
    virtual ModelParameter* offset_raw() const = 0;
    virtual ModelParameter* offsetClearance_raw() const = 0;
    virtual ModelParameter* diameter_raw() const = 0;
    virtual ModelParameter* draftAngle_raw() const = 0;
    virtual ModelParameter* alignmentDiameter_raw() const = 0;
    virtual ModelParameter* alignmentDepth_raw() const = 0;
    virtual ModelParameter* alignmentDraftAngle_raw() const = 0;
    virtual ModelParameter* holeDiameter_raw() const = 0;
    virtual ModelParameter* holeDraftAngle_raw() const = 0;
    virtual ModelParameter* holeDepth_raw() const = 0;
    virtual ModelParameter* holeMajorDiameter_raw() const = 0;
    virtual ModelParameter* holeMajorDepth_raw() const = 0;
    virtual ModelParameter* holeMajorDraftAngle_raw() const = 0;
    virtual ModelParameter* holeCountersinkAngle_raw() const = 0;
    virtual ModelParameter* rootRadius_raw() const = 0;
    virtual ModelParameter* tipRadius_raw() const = 0;
    virtual ModelParameter* alignmentTipRadius_raw() const = 0;
    virtual ModelParameter* alignmentRootRadius_raw() const = 0;
    virtual ModelParameter* holeStartRadius_raw() const = 0;
    virtual ModelParameter* holeEndRadius_raw() const = 0;
    virtual ModelParameter* holeMajorTipRadius_raw() const = 0;
    virtual ModelParameter* holeMajorRootRadius_raw() const = 0;
    virtual ModelParameter* ribLength_raw() const = 0;
    virtual ModelParameter* ribOffset_raw() const = 0;
    virtual ModelParameter* ribThickness_raw() const = 0;
    virtual ModelParameter* ribDraftAngle_raw() const = 0;
    virtual ModelParameter* ribOuterDraftAngle_raw() const = 0;
    virtual ModelParameter* ribCutSize_raw() const = 0;
    virtual ModelParameter* ribChamferAngle_raw() const = 0;
    virtual ModelParameter* ribTipRadius_raw() const = 0;
    virtual ModelParameter* ribBlendRadius_raw() const = 0;
    virtual ModelParameter* ribRotation_raw() const = 0;
    virtual ModelParameter* ribTotalAngle_raw() const = 0;
    virtual ModelParameter* ribCount_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BossFeature> BossFeature::nativeObject() const
{
    core::Ptr<BossFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BossFeature> BossFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BossFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<BossFeatureInput> BossFeature::createInput() const
{
    core::Ptr<BossFeatureInput> res = createInput_raw();
    return res;
}

inline bool BossFeature::update(const core::Ptr<BossFeatureInput>& input)
{
    bool res = update_raw(input.get());
    return res;
}

inline core::Ptr<core::Vector3D> BossFeature::direction() const
{
    core::Ptr<core::Vector3D> res = direction_raw();
    return res;
}

inline bool BossFeature::isDirectionFlipped() const
{
    bool res = isDirectionFlipped_raw();
    return res;
}

inline bool BossFeature::isDirectionFlipped(bool value)
{
    return isDirectionFlipped_raw(value);
}

inline bool BossFeature::isGeometryOpposite() const
{
    bool res = isGeometryOpposite_raw();
    return res;
}

inline BossShapeTypes BossFeature::shapeType() const
{
    BossShapeTypes res = shapeType_raw();
    return res;
}

inline BossAlignmentTypes BossFeature::alignmentType() const
{
    BossAlignmentTypes res = alignmentType_raw();
    return res;
}

inline HoleTypes BossFeature::holeType() const
{
    HoleTypes res = holeType_raw();
    return res;
}

inline BossHoleExtentTypes BossFeature::holeExtentType() const
{
    BossHoleExtentTypes res = holeExtentType_raw();
    return res;
}

inline BossRibShapeTypes BossFeature::ribType() const
{
    BossRibShapeTypes res = ribType_raw();
    return res;
}

inline core::Ptr<BossPositionDefinition> BossFeature::positionDefinition() const
{
    core::Ptr<BossPositionDefinition> res = positionDefinition_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::thickness() const
{
    core::Ptr<ModelParameter> res = thickness_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::taperAngle() const
{
    core::Ptr<ModelParameter> res = taperAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::innerRadius() const
{
    core::Ptr<ModelParameter> res = innerRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::screwDiameter() const
{
    core::Ptr<ModelParameter> res = screwDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::screwHeadDiameter() const
{
    core::Ptr<ModelParameter> res = screwHeadDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::screwHeadAngle() const
{
    core::Ptr<ModelParameter> res = screwHeadAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::offset() const
{
    core::Ptr<ModelParameter> res = offset_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::offsetClearance() const
{
    core::Ptr<ModelParameter> res = offsetClearance_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::diameter() const
{
    core::Ptr<ModelParameter> res = diameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::draftAngle() const
{
    core::Ptr<ModelParameter> res = draftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::alignmentDiameter() const
{
    core::Ptr<ModelParameter> res = alignmentDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::alignmentDepth() const
{
    core::Ptr<ModelParameter> res = alignmentDepth_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::alignmentDraftAngle() const
{
    core::Ptr<ModelParameter> res = alignmentDraftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeDiameter() const
{
    core::Ptr<ModelParameter> res = holeDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeDraftAngle() const
{
    core::Ptr<ModelParameter> res = holeDraftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeDepth() const
{
    core::Ptr<ModelParameter> res = holeDepth_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeMajorDiameter() const
{
    core::Ptr<ModelParameter> res = holeMajorDiameter_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeMajorDepth() const
{
    core::Ptr<ModelParameter> res = holeMajorDepth_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeMajorDraftAngle() const
{
    core::Ptr<ModelParameter> res = holeMajorDraftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeCountersinkAngle() const
{
    core::Ptr<ModelParameter> res = holeCountersinkAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::rootRadius() const
{
    core::Ptr<ModelParameter> res = rootRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::tipRadius() const
{
    core::Ptr<ModelParameter> res = tipRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::alignmentTipRadius() const
{
    core::Ptr<ModelParameter> res = alignmentTipRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::alignmentRootRadius() const
{
    core::Ptr<ModelParameter> res = alignmentRootRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeStartRadius() const
{
    core::Ptr<ModelParameter> res = holeStartRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeEndRadius() const
{
    core::Ptr<ModelParameter> res = holeEndRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeMajorTipRadius() const
{
    core::Ptr<ModelParameter> res = holeMajorTipRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::holeMajorRootRadius() const
{
    core::Ptr<ModelParameter> res = holeMajorRootRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribLength() const
{
    core::Ptr<ModelParameter> res = ribLength_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribOffset() const
{
    core::Ptr<ModelParameter> res = ribOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribThickness() const
{
    core::Ptr<ModelParameter> res = ribThickness_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribDraftAngle() const
{
    core::Ptr<ModelParameter> res = ribDraftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribOuterDraftAngle() const
{
    core::Ptr<ModelParameter> res = ribOuterDraftAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribCutSize() const
{
    core::Ptr<ModelParameter> res = ribCutSize_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribChamferAngle() const
{
    core::Ptr<ModelParameter> res = ribChamferAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribTipRadius() const
{
    core::Ptr<ModelParameter> res = ribTipRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribBlendRadius() const
{
    core::Ptr<ModelParameter> res = ribBlendRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribRotation() const
{
    core::Ptr<ModelParameter> res = ribRotation_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribTotalAngle() const
{
    core::Ptr<ModelParameter> res = ribTotalAngle_raw();
    return res;
}

inline core::Ptr<ModelParameter> BossFeature::ribCount() const
{
    core::Ptr<ModelParameter> res = ribCount_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOSSFEATURE_API