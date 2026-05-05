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
# ifdef __COMPILING_ADSK_FUSION_RULEFILLETSETTINGS_CPP__
# define ADSK_FUSION_RULEFILLETSETTINGS_API XI_EXPORT
# else
# define ADSK_FUSION_RULEFILLETSETTINGS_API
# endif
#else
# define ADSK_FUSION_RULEFILLETSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The settings for the rule fillet feature.
class RuleFilletSettings : public core::Base {
public:

    /// Gets the rule type for the rule fillet.
    RuleFilletRuleTypes ruleType() const;

    /// Gets and sets if the rule fillet is a constant or asymmetric radius type.
    bool isConstantRadius() const;

    /// Gets the parameter controlling the radius of a constant radius rule fillet.
    /// This property will return null when isConstantRadius is false.
    /// To edit the radius, use properties on the parameter to change the value of the parameter.
    core::Ptr<ModelParameter> radius() const;

    /// Gets the parameter controlling the first offset of this asymmetric rule fillet.
    /// This property will return null when isConstantRadius is true.
    /// To edit the offset, use properties on the parameter to change the value of the parameter.
    core::Ptr<ModelParameter> asymmetricOffsetOne() const;

    /// Gets the parameter controlling the second offset of this asymmetric rule fillet.
    /// This property will return null when isConstantRadius is true.
    /// To edit the offset, use properties on the parameter to change the value of the parameter.
    core::Ptr<ModelParameter> asymmetricOffsetTwo() const;

    /// Changes the radius type to be constant.
    /// radius : Input ValueInput object that defines the radius of the rule fillet. If the ValueInput uses
    /// a real value then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified it is
    /// interpreted using the current document units for length.
    /// 
    bool setToConstantRadius(const core::Ptr<core::ValueInput>& radius);

    /// Changes the radius type to be asymmetric.
    /// offsetOne : Input ValueInput object that defines the first offset of the asymmetric rule fillet. If the ValueInput uses
    /// a real value then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified it is
    /// interpreted using the current document units for length.
    /// offsetTwo : Input ValueInput object that defines the second offset of the asymmetric rule fillet. If the ValueInput uses
    /// a real value then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified it is
    /// interpreted using the current document units for length.
    /// 
    bool setToAsymmetric(const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo);

    /// Gets and sets the topology type of the rule fillet.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    RuleFilletTopologyTypes topologyType() const;
    bool topologyType(RuleFilletTopologyTypes value);

    /// Gets an array of BRepFace and/or Feature objects that have all their edges filleted.
    /// This returns an empty array if ruleType is not RuleFilletRuleTypes.AllEdgesRuleFilletRuleType.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    std::vector<core::Ptr<core::Base>> facesOrFeatures() const;

    /// Gets the first array of BRepFace and/or Feature objects for between faces/features rule fillet.
    /// This returns an empty array if ruleType is not RuleFilletRuleTypes.BetweenFacesOrFeaturesRuleFilletRuleType.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    std::vector<core::Ptr<core::Base>> facesOrFeaturesOne() const;

    /// Gets the second array of BRepFace and/or Feature objects for between faces/features rule fillet.
    /// This returns an empty array if ruleType is not RuleFilletRuleTypes.BetweenFacesOrFeaturesRuleFilletRuleType.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True).
    std::vector<core::Ptr<core::Base>> facesOrFeaturesTwo() const;

    /// Method that adds an array of BRepFace and/or Feature objects to have all their edges filleted.
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

    ADSK_FUSION_RULEFILLETSETTINGS_API static const char* classType();
    ADSK_FUSION_RULEFILLETSETTINGS_API const char* objectType() const override;
    ADSK_FUSION_RULEFILLETSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEFILLETSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RuleFilletRuleTypes ruleType_raw() const = 0;
    virtual bool isConstantRadius_raw() const = 0;
    virtual ModelParameter* radius_raw() const = 0;
    virtual ModelParameter* asymmetricOffsetOne_raw() const = 0;
    virtual ModelParameter* asymmetricOffsetTwo_raw() const = 0;
    virtual bool setToConstantRadius_raw(core::ValueInput* radius) = 0;
    virtual bool setToAsymmetric_raw(core::ValueInput* offsetOne, core::ValueInput* offsetTwo) = 0;
    virtual RuleFilletTopologyTypes topologyType_raw() const = 0;
    virtual bool topologyType_raw(RuleFilletTopologyTypes value) = 0;
    virtual core::Base** facesOrFeatures_raw(size_t& return_size) const = 0;
    virtual core::Base** facesOrFeaturesOne_raw(size_t& return_size) const = 0;
    virtual core::Base** facesOrFeaturesTwo_raw(size_t& return_size) const = 0;
    virtual bool setByAllEdges_raw(core::Base** facesOrFeatures, size_t facesOrFeatures_size) = 0;
    virtual bool setByBetweenFacesOrFeatures_raw(core::Base** facesOrFeaturesOne, size_t facesOrFeaturesOne_size, core::Base** facesOrFeaturesTwo, size_t facesOrFeaturesTwo_size) = 0;
};

// Inline wrappers

inline RuleFilletRuleTypes RuleFilletSettings::ruleType() const
{
    RuleFilletRuleTypes res = ruleType_raw();
    return res;
}

inline bool RuleFilletSettings::isConstantRadius() const
{
    bool res = isConstantRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> RuleFilletSettings::radius() const
{
    core::Ptr<ModelParameter> res = radius_raw();
    return res;
}

inline core::Ptr<ModelParameter> RuleFilletSettings::asymmetricOffsetOne() const
{
    core::Ptr<ModelParameter> res = asymmetricOffsetOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> RuleFilletSettings::asymmetricOffsetTwo() const
{
    core::Ptr<ModelParameter> res = asymmetricOffsetTwo_raw();
    return res;
}

inline bool RuleFilletSettings::setToConstantRadius(const core::Ptr<core::ValueInput>& radius)
{
    bool res = setToConstantRadius_raw(radius.get());
    return res;
}

inline bool RuleFilletSettings::setToAsymmetric(const core::Ptr<core::ValueInput>& offsetOne, const core::Ptr<core::ValueInput>& offsetTwo)
{
    bool res = setToAsymmetric_raw(offsetOne.get(), offsetTwo.get());
    return res;
}

inline RuleFilletTopologyTypes RuleFilletSettings::topologyType() const
{
    RuleFilletTopologyTypes res = topologyType_raw();
    return res;
}

inline bool RuleFilletSettings::topologyType(RuleFilletTopologyTypes value)
{
    return topologyType_raw(value);
}

inline std::vector<core::Ptr<core::Base>> RuleFilletSettings::facesOrFeatures() const
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

inline std::vector<core::Ptr<core::Base>> RuleFilletSettings::facesOrFeaturesOne() const
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

inline std::vector<core::Ptr<core::Base>> RuleFilletSettings::facesOrFeaturesTwo() const
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

inline bool RuleFilletSettings::setByAllEdges(const std::vector<core::Ptr<core::Base>>& facesOrFeatures)
{
    core::Base** facesOrFeatures_ = new core::Base*[facesOrFeatures.size()];
    for(size_t i=0; i<facesOrFeatures.size(); ++i)
        facesOrFeatures_[i] = facesOrFeatures[i].get();

    bool res = setByAllEdges_raw(facesOrFeatures_, facesOrFeatures.size());
    delete[] facesOrFeatures_;
    return res;
}

inline bool RuleFilletSettings::setByBetweenFacesOrFeatures(const std::vector<core::Ptr<core::Base>>& facesOrFeaturesOne, const std::vector<core::Ptr<core::Base>>& facesOrFeaturesTwo)
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

#undef ADSK_FUSION_RULEFILLETSETTINGS_API