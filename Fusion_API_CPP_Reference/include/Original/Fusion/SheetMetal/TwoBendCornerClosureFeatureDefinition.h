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
#include "CornerClosureFeatureDefinition.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_CPP__
# define ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The definition for a two bend corner closure.
class TwoBendCornerClosureFeatureDefinition : public CornerClosureFeatureDefinition {
public:

    /// Gets and sets the relief shape for the two-bend corner.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    CornerTwoBendReliefShapeTypes twoBendReliefShape() const;
    bool twoBendReliefShape(CornerTwoBendReliefShapeTypes value);

    /// Gets the size of the two-bend relief.
    core::Ptr<ModelParameter> twoBendReliefSize() const;

    /// Gets and sets the placement of the two-bend relief.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    CornerTwoBendReliefPlacementTypes twoBendReliefPlacement() const;
    bool twoBendReliefPlacement(CornerTwoBendReliefPlacementTypes value);

    /// Gets and sets whether to use default values from the Sheet Metal Rule for all two-bend relief parameters
    /// (shape, size, and placement).
    /// 
    /// When set to true, the relief shape, size, and placement are retrieved from the active Sheet Metal Rule.
    /// When set to false (default), the explicitly set values for these parameters are used.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// The default value is false.
    bool isUseSheetMetalRuleDefaults() const;
    bool isUseSheetMetalRuleDefaults(bool value);

    /// Gets and sets whether to use the miter gap value from the Sheet Metal Rule.
    /// 
    /// When set to true, the miter gap value is retrieved from the active Sheet Metal Rule.
    /// When set to false (default), the explicitly set miterGap value is used.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// The default value is false.
    bool isUseSheetMetalRuleMiterGap() const;
    bool isUseSheetMetalRuleMiterGap(bool value);

    ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CornerTwoBendReliefShapeTypes twoBendReliefShape_raw() const = 0;
    virtual bool twoBendReliefShape_raw(CornerTwoBendReliefShapeTypes value) = 0;
    virtual ModelParameter* twoBendReliefSize_raw() const = 0;
    virtual CornerTwoBendReliefPlacementTypes twoBendReliefPlacement_raw() const = 0;
    virtual bool twoBendReliefPlacement_raw(CornerTwoBendReliefPlacementTypes value) = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw() const = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw(bool value) = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw() const = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw(bool value) = 0;
};

// Inline wrappers

inline CornerTwoBendReliefShapeTypes TwoBendCornerClosureFeatureDefinition::twoBendReliefShape() const
{
    CornerTwoBendReliefShapeTypes res = twoBendReliefShape_raw();
    return res;
}

inline bool TwoBendCornerClosureFeatureDefinition::twoBendReliefShape(CornerTwoBendReliefShapeTypes value)
{
    return twoBendReliefShape_raw(value);
}

inline core::Ptr<ModelParameter> TwoBendCornerClosureFeatureDefinition::twoBendReliefSize() const
{
    core::Ptr<ModelParameter> res = twoBendReliefSize_raw();
    return res;
}

inline CornerTwoBendReliefPlacementTypes TwoBendCornerClosureFeatureDefinition::twoBendReliefPlacement() const
{
    CornerTwoBendReliefPlacementTypes res = twoBendReliefPlacement_raw();
    return res;
}

inline bool TwoBendCornerClosureFeatureDefinition::twoBendReliefPlacement(CornerTwoBendReliefPlacementTypes value)
{
    return twoBendReliefPlacement_raw(value);
}

inline bool TwoBendCornerClosureFeatureDefinition::isUseSheetMetalRuleDefaults() const
{
    bool res = isUseSheetMetalRuleDefaults_raw();
    return res;
}

inline bool TwoBendCornerClosureFeatureDefinition::isUseSheetMetalRuleDefaults(bool value)
{
    return isUseSheetMetalRuleDefaults_raw(value);
}

inline bool TwoBendCornerClosureFeatureDefinition::isUseSheetMetalRuleMiterGap() const
{
    bool res = isUseSheetMetalRuleMiterGap_raw();
    return res;
}

inline bool TwoBendCornerClosureFeatureDefinition::isUseSheetMetalRuleMiterGap(bool value)
{
    return isUseSheetMetalRuleMiterGap_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TWOBENDCORNERCLOSUREFEATUREDEFINITION_API