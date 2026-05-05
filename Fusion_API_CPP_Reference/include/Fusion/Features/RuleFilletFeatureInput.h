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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RULEFILLETFEATUREINPUT_CPP__
# define ADSK_FUSION_RULEFILLETFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_RULEFILLETFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_RULEFILLETFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a rule fillet feature.
class RuleFilletFeatureInput : public core::Base {
public:

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

    /// Gets the rule type for the rule fillet.
    RuleFilletRuleTypes ruleType() const;

    /// Gets and sets the radius of the fillet. Setting this will set the fillet to a constant radius fillet and
    /// any asymmetric information will be lost. Returns null in the case the fillet is asymmetric.
    core::Ptr<core::ValueInput> radius() const;
    bool radius(const core::Ptr<core::ValueInput>& value);

    /// Returns the current first offset for an asymmetric fillet. Use setAsymmetricOffsets to set
    /// the offsets. Returns null in the case where the fillet is a constant radius fillet.
    core::Ptr<core::ValueInput> asymmetricOffsetOne() const;

    /// Returns the current second offset for an asymmetric fillet. Use setAsymmetricOffsets to set
    /// the offsets. Returns null in the case where the fillet is a constant radius fillet.
    core::Ptr<core::ValueInput> asymmetricOffsetTwo() const;

    /// Sets the fillet to be an asymmetric fillet and defines the two offsets.
    /// offsetOne : A ValueInput object that defines the offset distance of the fillet in the first direction. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string, then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// offsetTwo : A ValueInput object that defines the offset distance of the fillet in the second direction. If the ValueInput uses
    /// a real, then it is interpreted as centimeters. If it is a string, then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    /// Returns true if successful.
    bool setAsymmetricOffsets(const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo);

    /// Gets and sets the topology type of the rule fillet.
    RuleFilletTopologyTypes topologyType() const;
    bool topologyType(RuleFilletTopologyTypes value);

    /// Gets and sets if a rolling ball or setback solution is to be used in any corners. A value of true will create a rolling ball fillet.
    bool isRollingBallCorner() const;
    bool isRollingBallCorner(bool value);

    /// Gets an array of BRepFace and/or Feature objects that are to have all their edges filleted.
    /// This is applicable only when ruleType is RuleFilletRuleTypes.AllEdgesRuleFilletRuleType.
    /// This is set by the setByAllEdges method.
    std::vector<core::Ptr<core::Base>> facesOrFeatures() const;

    /// Gets the first array of BRepFace and/or Feature objects for between faces/features rule fillet.
    /// This is applicable only when ruleType is RuleFilletRuleTypes.BetweenFacesOrFeaturesRuleFilletRuleType.
    /// This is set by the setByBetweenFacesOrFeatures method.
    std::vector<core::Ptr<core::Base>> facesOrFeaturesOne() const;

    /// Gets the second array of BRepFace and/or Feature objects for between faces/features rule fillet.
    /// This is applicable only when ruleType is RuleFilletRuleTypes.BetweenFacesOrFeaturesRuleFilletRuleType.
    /// This is set by the setByBetweenFacesOrFeatures method.
    std::vector<core::Ptr<core::Base>> facesOrFeaturesTwo() const;

    /// Method that adds an array of BRepFace and/or Feature objects to have all their edges to be filleted.
    /// Calling this method will set ruleType to RuleFilletRuleTypes.AllEdgesRuleFilletRuleType.
    /// facesOrFeatures : Input faces and/or features to have all their edges to be filleted.
    /// Returns true if the operation was successful.
    bool setByAllEdges(const std::vector<core::Ptr<core::Base>>& facesOrFeatures);

    /// Method that adds two sets of BRepFace and/or Feature objects to have the edges between them filleted.
    /// Call this method will set ruleType to RuleFilletRuleTypes.BetweenFacesOrFeaturesRuleFilletRuleType.
    /// facesOrFeaturesOne : Input first array of BRepFace and/or Feature objects.
    /// facesOrFeaturesTwo : Input second array of BRepFace and/or Feature objects.
    /// Returns true if the operation was successful.
    bool setByBetweenFacesOrFeatures(const std::vector<core::Ptr<core::Base>>& facesOrFeaturesOne, const std::vector<core::Ptr<core::Base>>& facesOrFeaturesTwo);

    ADSK_FUSION_RULEFILLETFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_RULEFILLETFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_RULEFILLETFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEFILLETFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual RuleFilletRuleTypes ruleType_raw() const = 0;
    virtual core::ValueInput* radius_raw() const = 0;
    virtual bool radius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* asymmetricOffsetOne_raw() const = 0;
    virtual core::ValueInput* asymmetricOffsetTwo_raw() const = 0;
    virtual bool setAsymmetricOffsets_raw(core::ValueInput* offsetOne, core::ValueInput* offsetTwo) = 0;
    virtual RuleFilletTopologyTypes topologyType_raw() const = 0;
    virtual bool topologyType_raw(RuleFilletTopologyTypes value) = 0;
    virtual bool isRollingBallCorner_raw() const = 0;
    virtual bool isRollingBallCorner_raw(bool value) = 0;
    virtual core::Base** facesOrFeatures_raw(size_t& return_size) const = 0;
    virtual core::Base** facesOrFeaturesOne_raw(size_t& return_size) const = 0;
    virtual core::Base** facesOrFeaturesTwo_raw(size_t& return_size) const = 0;
    virtual bool setByAllEdges_raw(core::Base** facesOrFeatures, size_t facesOrFeatures_size) = 0;
    virtual bool setByBetweenFacesOrFeatures_raw(core::Base** facesOrFeaturesOne, size_t facesOrFeaturesOne_size, core::Base** facesOrFeaturesTwo, size_t facesOrFeaturesTwo_size) = 0;
};

// Inline wrappers

inline core::Ptr<BaseFeature> RuleFilletFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool RuleFilletFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline RuleFilletRuleTypes RuleFilletFeatureInput::ruleType() const
{
    RuleFilletRuleTypes res = ruleType_raw();
    return res;
}

inline core::Ptr<core::ValueInput> RuleFilletFeatureInput::radius() const
{
    core::Ptr<core::ValueInput> res = radius_raw();
    return res;
}

inline bool RuleFilletFeatureInput::radius(const core::Ptr<core::ValueInput>& value)
{
    return radius_raw(value.get());
}

inline core::Ptr<core::ValueInput> RuleFilletFeatureInput::asymmetricOffsetOne() const
{
    core::Ptr<core::ValueInput> res = asymmetricOffsetOne_raw();
    return res;
}

inline core::Ptr<core::ValueInput> RuleFilletFeatureInput::asymmetricOffsetTwo() const
{
    core::Ptr<core::ValueInput> res = asymmetricOffsetTwo_raw();
    return res;
}

inline bool RuleFilletFeatureInput::setAsymmetricOffsets(const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo)
{
    bool res = setAsymmetricOffsets_raw(offsetOne.get(), offsetTwo.get());
    return res;
}

inline RuleFilletTopologyTypes RuleFilletFeatureInput::topologyType() const
{
    RuleFilletTopologyTypes res = topologyType_raw();
    return res;
}

inline bool RuleFilletFeatureInput::topologyType(RuleFilletTopologyTypes value)
{
    return topologyType_raw(value);
}

inline bool RuleFilletFeatureInput::isRollingBallCorner() const
{
    bool res = isRollingBallCorner_raw();
    return res;
}

inline bool RuleFilletFeatureInput::isRollingBallCorner(bool value)
{
    return isRollingBallCorner_raw(value);
}

inline std::vector<core::Ptr<core::Base>> RuleFilletFeatureInput::facesOrFeatures() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= facesOrFeatures_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Base>> RuleFilletFeatureInput::facesOrFeaturesOne() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= facesOrFeaturesOne_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::Base>> RuleFilletFeatureInput::facesOrFeaturesTwo() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= facesOrFeaturesTwo_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool RuleFilletFeatureInput::setByAllEdges(const std::vector<core::Ptr<core::Base>>& facesOrFeatures)
{
    core::Base** facesOrFeatures_ = new core::Base*[facesOrFeatures.size()];
    for(size_t i=0; i<facesOrFeatures.size(); ++i)
        facesOrFeatures_[i] = facesOrFeatures[i].get();

    bool res = setByAllEdges_raw(facesOrFeatures_, facesOrFeatures.size());
    delete[] facesOrFeatures_;
    return res;
}

inline bool RuleFilletFeatureInput::setByBetweenFacesOrFeatures(const std::vector<core::Ptr<core::Base>>& facesOrFeaturesOne, const std::vector<core::Ptr<core::Base>>& facesOrFeaturesTwo)
{
    core::Base** facesOrFeaturesOne_ = new core::Base*[facesOrFeaturesOne.size()];
    for(size_t i=0; i<facesOrFeaturesOne.size(); ++i)
        facesOrFeaturesOne_[i] = facesOrFeaturesOne[i].get();
    core::Base** facesOrFeaturesTwo_ = new core::Base*[facesOrFeaturesTwo.size()];
    for(size_t i=0; i<facesOrFeaturesTwo.size(); ++i)
        facesOrFeaturesTwo_[i] = facesOrFeaturesTwo[i].get();

    bool res = setByBetweenFacesOrFeatures_raw(facesOrFeaturesOne_, facesOrFeaturesOne.size(), facesOrFeaturesTwo_, facesOrFeaturesTwo.size());
    delete[] facesOrFeaturesOne_;
    delete[] facesOrFeaturesTwo_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RULEFILLETFEATUREINPUT_API