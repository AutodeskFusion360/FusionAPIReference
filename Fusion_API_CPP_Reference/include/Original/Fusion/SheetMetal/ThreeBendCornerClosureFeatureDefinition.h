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
# ifdef __COMPILING_ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_CPP__
# define ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The definition for a three bend corner closure.
class ThreeBendCornerClosureFeatureDefinition : public CornerClosureFeatureDefinition {
public:

    /// Gets and sets the relief shape for the three-bend corner.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    CornerThreeBendReliefShapeTypes threeBendReliefShape() const;
    bool threeBendReliefShape(CornerThreeBendReliefShapeTypes value);

    /// Gets the radius of the three-bend relief.
    core::Ptr<ModelParameter> threeBendReliefRadius() const;

    /// Gets and sets whether to use default values from the Sheet Metal Rule for all three-bend relief parameters
    /// (shape and radius).
    /// 
    /// When set to true, the relief shape and radius are retrieved from the active Sheet Metal Rule.
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

    ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CornerThreeBendReliefShapeTypes threeBendReliefShape_raw() const = 0;
    virtual bool threeBendReliefShape_raw(CornerThreeBendReliefShapeTypes value) = 0;
    virtual ModelParameter* threeBendReliefRadius_raw() const = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw() const = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw(bool value) = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw() const = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw(bool value) = 0;
};

// Inline wrappers

inline CornerThreeBendReliefShapeTypes ThreeBendCornerClosureFeatureDefinition::threeBendReliefShape() const
{
    CornerThreeBendReliefShapeTypes res = threeBendReliefShape_raw();
    return res;
}

inline bool ThreeBendCornerClosureFeatureDefinition::threeBendReliefShape(CornerThreeBendReliefShapeTypes value)
{
    return threeBendReliefShape_raw(value);
}

inline core::Ptr<ModelParameter> ThreeBendCornerClosureFeatureDefinition::threeBendReliefRadius() const
{
    core::Ptr<ModelParameter> res = threeBendReliefRadius_raw();
    return res;
}

inline bool ThreeBendCornerClosureFeatureDefinition::isUseSheetMetalRuleDefaults() const
{
    bool res = isUseSheetMetalRuleDefaults_raw();
    return res;
}

inline bool ThreeBendCornerClosureFeatureDefinition::isUseSheetMetalRuleDefaults(bool value)
{
    return isUseSheetMetalRuleDefaults_raw(value);
}

inline bool ThreeBendCornerClosureFeatureDefinition::isUseSheetMetalRuleMiterGap() const
{
    bool res = isUseSheetMetalRuleMiterGap_raw();
    return res;
}

inline bool ThreeBendCornerClosureFeatureDefinition::isUseSheetMetalRuleMiterGap(bool value)
{
    return isUseSheetMetalRuleMiterGap_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREEBENDCORNERCLOSUREFEATUREDEFINITION_API