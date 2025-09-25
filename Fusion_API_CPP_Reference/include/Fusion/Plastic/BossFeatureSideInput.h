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
# ifdef __COMPILING_ADSK_FUSION_BOSSFEATURESIDEINPUT_CPP__
# define ADSK_FUSION_BOSSFEATURESIDEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_BOSSFEATURESIDEINPUT_API
# endif
#else
# define ADSK_FUSION_BOSSFEATURESIDEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a single side of boss feature
class BossFeatureSideInput : public core::Base {
public:

    /// Set boss shape into blank constant diameter shank with no hole.
    /// diameter : The outside diameter for the boss feature shank.
    /// 
    void setBlank(const core::Ptr<core::ValueInput>& diameter);

    /// Set boss shape into constant diameter shank with simple hole.
    /// diameter : The outside diameter for the boss feature shank.
    /// holeDiameter : The hole diameter.
    /// 
    void setSimple(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter);

    /// Set boss shape into constant diameter shank with counterbore hole.
    /// diameter : The outside diameter for the boss feature shank.
    /// holeDiameter : The hole diameter.
    /// holeMajorDiameter : The hole major (or counterbore) diameter.
    /// depth : With respect to hole orientation in the boss feature the parameter is either the counterbore depth or thickness of the material
    /// under the screw head.
    /// 
    void setCounterbore(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& holeMajorDiameter, const core::Ptr<core::ValueInput>& depth);

    /// Set boss shape into constant diameter shank with countersink hole.
    /// diameter : The outside diameter for the boss feature shank.
    /// holeDiameter : The hole diameter.
    /// holeMajorDiameter : The hole major (or countersink) diameter.
    /// depth : With respect to hole orientation in the boss feature the parameter is either the counterbore depth or thickness of the material
    /// under the screw head.
    /// countersinkAngle : Optional parameter for hole countersink angle. If not specified it is set to 90 deg.
    /// 
    void setCountersink(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& holeMajorDiameter, const core::Ptr<core::ValueInput>& depth, const core::Ptr<core::ValueInput>& countersinkAngle = NULL);

    /// Get or set boss alignment shape. This usually corresponds to the alignment shape of the boss counterpart.
    BossAlignmentTypes alignmentType() const;
    bool alignmentType(BossAlignmentTypes value);

    /// Get or set hole extent this feature represents. For top side only through hole extent is accepted.
    BossHoleExtentTypes holeExtentType() const;
    bool holeExtentType(BossHoleExtentTypes value);

    /// Type of boss ribs this feature represents.
    BossRibShapeTypes ribType() const;
    bool ribType(BossRibShapeTypes value);

    /// Set rib extent type for particular rib for position point provided.
    /// position : Position point object for the rib extent types provided
    /// ribExtentTypes : Vector of BossRibExtentTypes for individual rib based on rib count input.
    /// 
    void setRibExtent(const core::Ptr<core::Base>& position, const std::vector<int>& ribExtentTypes);

    /// Clears rib extent types for all position points.
    /// 
    void clearRibExtent();

    /// Get or set offset clearance as additional small offset from the selected parting plane and position point.
    core::Ptr<core::ValueInput> offsetClearance() const;
    bool offsetClearance(const core::Ptr<core::ValueInput>& value);

    /// Get or set boss shank diameter.
    core::Ptr<core::ValueInput> diameter() const;
    bool diameter(const core::Ptr<core::ValueInput>& value);

    /// Get or set shank draft angle.
    core::Ptr<core::ValueInput> draftAngle() const;
    bool draftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set alignment diameter.
    core::Ptr<core::ValueInput> alignmentDiameter() const;
    bool alignmentDiameter(const core::Ptr<core::ValueInput>& value);

    /// Get or set alignment depth.
    core::Ptr<core::ValueInput> alignmentDepth() const;
    bool alignmentDepth(const core::Ptr<core::ValueInput>& value);

    /// Get or set alignment draft angle.
    core::Ptr<core::ValueInput> alignmentDraftAngle() const;
    bool alignmentDraftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set hole diameter.
    core::Ptr<core::ValueInput> holeDiameter() const;
    bool holeDiameter(const core::Ptr<core::ValueInput>& value);

    /// Get or set hole draft angle.
    core::Ptr<core::ValueInput> holeDraftAngle() const;
    bool holeDraftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set hole depth with respect to hole extent type.
    /// If hole extent type is set to BossHoleThrough parameter is ignored. If hole extent type is BossBlindFull
    /// the parameter is a distance from farthest face. If hole extent type is set to BossBlindDepth the parameter
    /// is a distance from start face of the hole.
    core::Ptr<core::ValueInput> holeDepth() const;
    bool holeDepth(const core::Ptr<core::ValueInput>& value);

    /// Get or set major hole diameter for counterbore or countersink hole.
    /// This input is ignored for blank boss or boss with simple hole.
    core::Ptr<core::ValueInput> holeMajorDiameter() const;
    bool holeMajorDiameter(const core::Ptr<core::ValueInput>& value);

    /// Get or set major hole depth for counterbore and countersink hole or material thickness under screw head
    /// based on hole orientation in a boss feature. This input is ignored for blank boss or boss with simple hole.
    core::Ptr<core::ValueInput> holeMajorDepth() const;
    bool holeMajorDepth(const core::Ptr<core::ValueInput>& value);

    /// Get or set major hole draft angle for counterbore and countersink hole.
    /// This input is ignored for blank boss or boss with simple hole.
    core::Ptr<core::ValueInput> holeMajorDraftAngle() const;
    bool holeMajorDraftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set countersink angle for countersink hole. This input is used only for countersink hole.
    core::Ptr<core::ValueInput> holeCountersinkAngle() const;
    bool holeCountersinkAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the boss shank and participant body.
    core::Ptr<core::ValueInput> rootRadius() const;
    bool rootRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the boss shank top parting face.
    core::Ptr<core::ValueInput> tipRadius() const;
    bool tipRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the boss alignment tip.
    core::Ptr<core::ValueInput> alignmentTipRadius() const;
    bool alignmentTipRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the boss alignment root.
    core::Ptr<core::ValueInput> alignmentRootRadius() const;
    bool alignmentRootRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the hole start.
    core::Ptr<core::ValueInput> holeStartRadius() const;
    bool holeStartRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of the hole end.
    core::Ptr<core::ValueInput> holeEndRadius() const;
    bool holeEndRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of major hole counterbore.
    core::Ptr<core::ValueInput> holeMajorTipRadius() const;
    bool holeMajorTipRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set blend radius of major hole counterbore root.
    core::Ptr<core::ValueInput> holeMajorRootRadius() const;
    bool holeMajorRootRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set ribs length measured from the shank axis.
    core::Ptr<core::ValueInput> ribLength() const;
    bool ribLength(const core::Ptr<core::ValueInput>& value);

    /// Get or set ribs offset from the top face or alignment face.
    core::Ptr<core::ValueInput> ribOffset() const;
    bool ribOffset(const core::Ptr<core::ValueInput>& value);

    /// Get or set ribs thickness.
    core::Ptr<core::ValueInput> ribThickness() const;
    bool ribThickness(const core::Ptr<core::ValueInput>& value);

    /// Get or set ribs draft angle.
    core::Ptr<core::ValueInput> ribDraftAngle() const;
    bool ribDraftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set rib outer draft angle.
    core::Ptr<core::ValueInput> ribOuterDraftAngle() const;
    bool ribOuterDraftAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set size of rib chamfer or fillet.
    core::Ptr<core::ValueInput> ribCutSize() const;
    bool ribCutSize(const core::Ptr<core::ValueInput>& value);

    /// Get or set rib chamfer angle. This input is used only for rib with chamfer.
    core::Ptr<core::ValueInput> ribChamferAngle() const;
    bool ribChamferAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set rib outer tip blend radius.
    core::Ptr<core::ValueInput> ribTipRadius() const;
    bool ribTipRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set rib base root blend radius.
    core::Ptr<core::ValueInput> ribRootRadius() const;
    bool ribRootRadius(const core::Ptr<core::ValueInput>& value);

    /// Get or set rotation angle of the first rib from the reference vector.
    /// Reference vector is X-axis of the parent sketch from selected sketch point(s).
    core::Ptr<core::ValueInput> ribRotation() const;
    bool ribRotation(const core::Ptr<core::ValueInput>& value);

    /// Get or set total angle for ribs distribution. Default is 360 deg.
    core::Ptr<core::ValueInput> ribTotalAngle() const;
    bool ribTotalAngle(const core::Ptr<core::ValueInput>& value);

    /// Get or set number of ribs.
    core::Ptr<core::ValueInput> ribCount() const;
    bool ribCount(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_BOSSFEATURESIDEINPUT_API static const char* classType();
    ADSK_FUSION_BOSSFEATURESIDEINPUT_API const char* objectType() const override;
    ADSK_FUSION_BOSSFEATURESIDEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOSSFEATURESIDEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void setBlank_raw(core::ValueInput* diameter) = 0;
    virtual void setSimple_raw(core::ValueInput* diameter, core::ValueInput* holeDiameter) = 0;
    virtual void setCounterbore_raw(core::ValueInput* diameter, core::ValueInput* holeDiameter, core::ValueInput* holeMajorDiameter, core::ValueInput* depth) = 0;
    virtual void setCountersink_raw(core::ValueInput* diameter, core::ValueInput* holeDiameter, core::ValueInput* holeMajorDiameter, core::ValueInput* depth, core::ValueInput* countersinkAngle) = 0;
    virtual BossAlignmentTypes alignmentType_raw() const = 0;
    virtual bool alignmentType_raw(BossAlignmentTypes value) = 0;
    virtual BossHoleExtentTypes holeExtentType_raw() const = 0;
    virtual bool holeExtentType_raw(BossHoleExtentTypes value) = 0;
    virtual BossRibShapeTypes ribType_raw() const = 0;
    virtual bool ribType_raw(BossRibShapeTypes value) = 0;
    virtual void setRibExtent_raw(core::Base* position, const int* ribExtentTypes, size_t ribExtentTypes_size) = 0;
    virtual void clearRibExtent_raw() = 0;
    virtual core::ValueInput* offsetClearance_raw() const = 0;
    virtual bool offsetClearance_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* diameter_raw() const = 0;
    virtual bool diameter_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* draftAngle_raw() const = 0;
    virtual bool draftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* alignmentDiameter_raw() const = 0;
    virtual bool alignmentDiameter_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* alignmentDepth_raw() const = 0;
    virtual bool alignmentDepth_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* alignmentDraftAngle_raw() const = 0;
    virtual bool alignmentDraftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeDiameter_raw() const = 0;
    virtual bool holeDiameter_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeDraftAngle_raw() const = 0;
    virtual bool holeDraftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeDepth_raw() const = 0;
    virtual bool holeDepth_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeMajorDiameter_raw() const = 0;
    virtual bool holeMajorDiameter_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeMajorDepth_raw() const = 0;
    virtual bool holeMajorDepth_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeMajorDraftAngle_raw() const = 0;
    virtual bool holeMajorDraftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeCountersinkAngle_raw() const = 0;
    virtual bool holeCountersinkAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* rootRadius_raw() const = 0;
    virtual bool rootRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* tipRadius_raw() const = 0;
    virtual bool tipRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* alignmentTipRadius_raw() const = 0;
    virtual bool alignmentTipRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* alignmentRootRadius_raw() const = 0;
    virtual bool alignmentRootRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeStartRadius_raw() const = 0;
    virtual bool holeStartRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeEndRadius_raw() const = 0;
    virtual bool holeEndRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeMajorTipRadius_raw() const = 0;
    virtual bool holeMajorTipRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* holeMajorRootRadius_raw() const = 0;
    virtual bool holeMajorRootRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribLength_raw() const = 0;
    virtual bool ribLength_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribOffset_raw() const = 0;
    virtual bool ribOffset_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribThickness_raw() const = 0;
    virtual bool ribThickness_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribDraftAngle_raw() const = 0;
    virtual bool ribDraftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribOuterDraftAngle_raw() const = 0;
    virtual bool ribOuterDraftAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribCutSize_raw() const = 0;
    virtual bool ribCutSize_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribChamferAngle_raw() const = 0;
    virtual bool ribChamferAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribTipRadius_raw() const = 0;
    virtual bool ribTipRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribRootRadius_raw() const = 0;
    virtual bool ribRootRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribRotation_raw() const = 0;
    virtual bool ribRotation_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribTotalAngle_raw() const = 0;
    virtual bool ribTotalAngle_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* ribCount_raw() const = 0;
    virtual bool ribCount_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline void BossFeatureSideInput::setBlank(const core::Ptr<core::ValueInput>& diameter)
{
    setBlank_raw(diameter.get());
}

inline void BossFeatureSideInput::setSimple(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter)
{
    setSimple_raw(diameter.get(), holeDiameter.get());
}

inline void BossFeatureSideInput::setCounterbore(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& holeMajorDiameter, const core::Ptr<core::ValueInput>& depth)
{
    setCounterbore_raw(diameter.get(), holeDiameter.get(), holeMajorDiameter.get(), depth.get());
}

inline void BossFeatureSideInput::setCountersink(const core::Ptr<core::ValueInput>& diameter, const core::Ptr<core::ValueInput>& holeDiameter, const core::Ptr<core::ValueInput>& holeMajorDiameter, const core::Ptr<core::ValueInput>& depth, const core::Ptr<core::ValueInput>& countersinkAngle)
{
    setCountersink_raw(diameter.get(), holeDiameter.get(), holeMajorDiameter.get(), depth.get(), countersinkAngle.get());
}

inline BossAlignmentTypes BossFeatureSideInput::alignmentType() const
{
    BossAlignmentTypes res = alignmentType_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentType(BossAlignmentTypes value)
{
    return alignmentType_raw(value);
}

inline BossHoleExtentTypes BossFeatureSideInput::holeExtentType() const
{
    BossHoleExtentTypes res = holeExtentType_raw();
    return res;
}

inline bool BossFeatureSideInput::holeExtentType(BossHoleExtentTypes value)
{
    return holeExtentType_raw(value);
}

inline BossRibShapeTypes BossFeatureSideInput::ribType() const
{
    BossRibShapeTypes res = ribType_raw();
    return res;
}

inline bool BossFeatureSideInput::ribType(BossRibShapeTypes value)
{
    return ribType_raw(value);
}

inline void BossFeatureSideInput::setRibExtent(const core::Ptr<core::Base>& position, const std::vector<int>& ribExtentTypes)
{
    setRibExtent_raw(position.get(), ribExtentTypes.empty() ? nullptr : &ribExtentTypes[0], ribExtentTypes.size());
}

inline void BossFeatureSideInput::clearRibExtent()
{
    clearRibExtent_raw();
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::offsetClearance() const
{
    core::Ptr<core::ValueInput> res = offsetClearance_raw();
    return res;
}

inline bool BossFeatureSideInput::offsetClearance(const core::Ptr<core::ValueInput>& value)
{
    return offsetClearance_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::diameter() const
{
    core::Ptr<core::ValueInput> res = diameter_raw();
    return res;
}

inline bool BossFeatureSideInput::diameter(const core::Ptr<core::ValueInput>& value)
{
    return diameter_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::draftAngle() const
{
    core::Ptr<core::ValueInput> res = draftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::draftAngle(const core::Ptr<core::ValueInput>& value)
{
    return draftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::alignmentDiameter() const
{
    core::Ptr<core::ValueInput> res = alignmentDiameter_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentDiameter(const core::Ptr<core::ValueInput>& value)
{
    return alignmentDiameter_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::alignmentDepth() const
{
    core::Ptr<core::ValueInput> res = alignmentDepth_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentDepth(const core::Ptr<core::ValueInput>& value)
{
    return alignmentDepth_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::alignmentDraftAngle() const
{
    core::Ptr<core::ValueInput> res = alignmentDraftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentDraftAngle(const core::Ptr<core::ValueInput>& value)
{
    return alignmentDraftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeDiameter() const
{
    core::Ptr<core::ValueInput> res = holeDiameter_raw();
    return res;
}

inline bool BossFeatureSideInput::holeDiameter(const core::Ptr<core::ValueInput>& value)
{
    return holeDiameter_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeDraftAngle() const
{
    core::Ptr<core::ValueInput> res = holeDraftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::holeDraftAngle(const core::Ptr<core::ValueInput>& value)
{
    return holeDraftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeDepth() const
{
    core::Ptr<core::ValueInput> res = holeDepth_raw();
    return res;
}

inline bool BossFeatureSideInput::holeDepth(const core::Ptr<core::ValueInput>& value)
{
    return holeDepth_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeMajorDiameter() const
{
    core::Ptr<core::ValueInput> res = holeMajorDiameter_raw();
    return res;
}

inline bool BossFeatureSideInput::holeMajorDiameter(const core::Ptr<core::ValueInput>& value)
{
    return holeMajorDiameter_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeMajorDepth() const
{
    core::Ptr<core::ValueInput> res = holeMajorDepth_raw();
    return res;
}

inline bool BossFeatureSideInput::holeMajorDepth(const core::Ptr<core::ValueInput>& value)
{
    return holeMajorDepth_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeMajorDraftAngle() const
{
    core::Ptr<core::ValueInput> res = holeMajorDraftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::holeMajorDraftAngle(const core::Ptr<core::ValueInput>& value)
{
    return holeMajorDraftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeCountersinkAngle() const
{
    core::Ptr<core::ValueInput> res = holeCountersinkAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::holeCountersinkAngle(const core::Ptr<core::ValueInput>& value)
{
    return holeCountersinkAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::rootRadius() const
{
    core::Ptr<core::ValueInput> res = rootRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::rootRadius(const core::Ptr<core::ValueInput>& value)
{
    return rootRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::tipRadius() const
{
    core::Ptr<core::ValueInput> res = tipRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::tipRadius(const core::Ptr<core::ValueInput>& value)
{
    return tipRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::alignmentTipRadius() const
{
    core::Ptr<core::ValueInput> res = alignmentTipRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentTipRadius(const core::Ptr<core::ValueInput>& value)
{
    return alignmentTipRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::alignmentRootRadius() const
{
    core::Ptr<core::ValueInput> res = alignmentRootRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::alignmentRootRadius(const core::Ptr<core::ValueInput>& value)
{
    return alignmentRootRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeStartRadius() const
{
    core::Ptr<core::ValueInput> res = holeStartRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::holeStartRadius(const core::Ptr<core::ValueInput>& value)
{
    return holeStartRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeEndRadius() const
{
    core::Ptr<core::ValueInput> res = holeEndRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::holeEndRadius(const core::Ptr<core::ValueInput>& value)
{
    return holeEndRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeMajorTipRadius() const
{
    core::Ptr<core::ValueInput> res = holeMajorTipRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::holeMajorTipRadius(const core::Ptr<core::ValueInput>& value)
{
    return holeMajorTipRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::holeMajorRootRadius() const
{
    core::Ptr<core::ValueInput> res = holeMajorRootRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::holeMajorRootRadius(const core::Ptr<core::ValueInput>& value)
{
    return holeMajorRootRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribLength() const
{
    core::Ptr<core::ValueInput> res = ribLength_raw();
    return res;
}

inline bool BossFeatureSideInput::ribLength(const core::Ptr<core::ValueInput>& value)
{
    return ribLength_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribOffset() const
{
    core::Ptr<core::ValueInput> res = ribOffset_raw();
    return res;
}

inline bool BossFeatureSideInput::ribOffset(const core::Ptr<core::ValueInput>& value)
{
    return ribOffset_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribThickness() const
{
    core::Ptr<core::ValueInput> res = ribThickness_raw();
    return res;
}

inline bool BossFeatureSideInput::ribThickness(const core::Ptr<core::ValueInput>& value)
{
    return ribThickness_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribDraftAngle() const
{
    core::Ptr<core::ValueInput> res = ribDraftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::ribDraftAngle(const core::Ptr<core::ValueInput>& value)
{
    return ribDraftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribOuterDraftAngle() const
{
    core::Ptr<core::ValueInput> res = ribOuterDraftAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::ribOuterDraftAngle(const core::Ptr<core::ValueInput>& value)
{
    return ribOuterDraftAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribCutSize() const
{
    core::Ptr<core::ValueInput> res = ribCutSize_raw();
    return res;
}

inline bool BossFeatureSideInput::ribCutSize(const core::Ptr<core::ValueInput>& value)
{
    return ribCutSize_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribChamferAngle() const
{
    core::Ptr<core::ValueInput> res = ribChamferAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::ribChamferAngle(const core::Ptr<core::ValueInput>& value)
{
    return ribChamferAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribTipRadius() const
{
    core::Ptr<core::ValueInput> res = ribTipRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::ribTipRadius(const core::Ptr<core::ValueInput>& value)
{
    return ribTipRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribRootRadius() const
{
    core::Ptr<core::ValueInput> res = ribRootRadius_raw();
    return res;
}

inline bool BossFeatureSideInput::ribRootRadius(const core::Ptr<core::ValueInput>& value)
{
    return ribRootRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribRotation() const
{
    core::Ptr<core::ValueInput> res = ribRotation_raw();
    return res;
}

inline bool BossFeatureSideInput::ribRotation(const core::Ptr<core::ValueInput>& value)
{
    return ribRotation_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribTotalAngle() const
{
    core::Ptr<core::ValueInput> res = ribTotalAngle_raw();
    return res;
}

inline bool BossFeatureSideInput::ribTotalAngle(const core::Ptr<core::ValueInput>& value)
{
    return ribTotalAngle_raw(value.get());
}

inline core::Ptr<core::ValueInput> BossFeatureSideInput::ribCount() const
{
    core::Ptr<core::ValueInput> res = ribCount_raw();
    return res;
}

inline bool BossFeatureSideInput::ribCount(const core::Ptr<core::ValueInput>& value)
{
    return ribCount_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOSSFEATURESIDEINPUT_API