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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_LOFTSECTION_CPP__
# define ADSK_FUSION_LOFTSECTION_API XI_EXPORT
# else
# define ADSK_FUSION_LOFTSECTION_API
# endif
#else
# define ADSK_FUSION_LOFTSECTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class LoftEndCondition;
}}

namespace adsk { namespace fusion {

/// A single loft section.
class LoftSection : public core::Base {
public:

    /// Get and sets the entity that defines the section of the loft. This can be a BRepFace, Profile, Path, SketchPoint, ConstructionPoint, or an ObjectCollection
    /// of contiguous profiles.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> entity() const;
    bool entity(const core::Ptr<core::Base>& value);

    /// Deletes this LoftSection.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// Returns true if the operation was successful.
    bool deleteMe();

    /// The position of this LoftSection within the collection. The first section has an index
    /// of 0. This is also the order of how the section will be used in the loft. The order
    /// can be modified by using the reorder method.
    int index() const;

    /// Repositions this section so that it has the new index specified.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// newIndex : The new index value. For example, passing in zero as the new index will make this
    /// the first section in the loft and (LoftSections.count - 1) will make it the last section.
    /// All other sections will be maintain their existing order but be shifted to allow space
    /// for this section.
    /// Returns true if the reorder operation was successful.
    bool reorder(int newIndex);

    /// Returns the current end condition. This is only valid for the first and last
    /// section and when the result is not closed. In other cases this will return null.
    /// This returns one of the several objects derived from LoftEndCondition and represents
    /// the current end condition. You can edit the existing condition using properties
    /// on the returned object. You can change the end condition using one of the set methods
    /// on the LoftSection object.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<LoftEndCondition> endCondition() const;

    /// Sets the end condition to be a "Free" end condition. This is the default
    /// end condition when a new section is added.
    /// 
    /// This is valid for sections defined with all curve types.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// Returns true if the operation was successful.
    bool setFreeEndCondition();

    /// Sets the end condition to be defined by a direction and weight.
    /// 
    /// This is valid for sections defined with sketch curves.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// angle : Input ValueInput object that specifies the direction by using an angle. This defaults to an angle of 0.0.
    /// If the ValueInput object is a string it must be an valid expression that can be evaluated as an angle.
    /// If the ValueInput is a value then it is in radians.
    /// weight : Input ValueInput object that defines the weight or the amount of influence of end condition on the loft.
    /// This defaults to a value of 1.0. If the ValueInput object is a string it must be an valid expression that
    /// can be evaluated as a unitless value. In any case, the value must be greater than 0.
    /// Returns true if the operation was successful.
    bool setDirectionEndCondition(const core::Ptr<core::ValueInput>& angle = NULL, const core::Ptr<core::ValueInput>& weight = NULL);

    /// Sets the end condition to be tangent to the adjacent face. If the section is not defined by a BRepEdge,
    /// then this is ignored because there is no face to be tangent to.
    /// 
    /// This is only valid on the first or last profile.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// weight : Input ValueInput object that defines the weight or the amount of influence of end condition on the loft.
    /// This defaults to a value of 1.0. If the ValueInput object is a string it must be an valid expression that
    /// can be evaluated as a unitless value. In any case, the value must be greater than 0.
    /// Returns true if the operation was successful.
    bool setTangentEndCondition(const core::Ptr<core::ValueInput>& weight);

    /// Sets the end condition to be smooth to the adjacent face. If the end profile is not defined by a BRepEdge,
    /// then this is ignored because there is no face to be smooth to.
    /// 
    /// This is only valid on the first or last section.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// weight : Input ValueInput object that defines the weight or the amount of influence of end condition on the loft.
    /// This defaults to a value of 1.0. If the ValueInput object is a string it must be an valid expression that
    /// can be evaluated as a unitless value. In any case, the value must be greater than 0.
    /// Returns true if the operation was successful.
    bool setSmoothEndCondition(const core::Ptr<core::ValueInput>& weight);

    /// Sets the end condition to be sharp where the section is a point. This is the default condition for a point section.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// Returns true if the operation was successful.
    bool setPointSharpEndCondition();

    /// Set the end condition to a tangent condition in the case where the section is a point.
    /// 
    /// If this LoftSection object is associated with a created feature, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// weight : Input ValueInput object that defines the weight or the amount of influence of end condition on the loft.
    /// This defaults to a value of 1.0. If the ValueInput object is a string it must be an valid expression that
    /// can be evaluated as a unitless value. In any case, the value must be greater than 0.
    /// Returns true if the operation was successful.
    bool setPointTangentEndCondition(const core::Ptr<core::ValueInput>& weight);

    ADSK_FUSION_LOFTSECTION_API static const char* classType();
    ADSK_FUSION_LOFTSECTION_API const char* objectType() const override;
    ADSK_FUSION_LOFTSECTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_LOFTSECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* entity_raw() const = 0;
    virtual bool entity_raw(core::Base* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual int index_raw() const = 0;
    virtual bool reorder_raw(int newIndex) = 0;
    virtual LoftEndCondition* endCondition_raw() const = 0;
    virtual bool setFreeEndCondition_raw() = 0;
    virtual bool setDirectionEndCondition_raw(core::ValueInput* angle, core::ValueInput* weight) = 0;
    virtual bool setTangentEndCondition_raw(core::ValueInput* weight) = 0;
    virtual bool setSmoothEndCondition_raw(core::ValueInput* weight) = 0;
    virtual bool setPointSharpEndCondition_raw() = 0;
    virtual bool setPointTangentEndCondition_raw(core::ValueInput* weight) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> LoftSection::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline bool LoftSection::entity(const core::Ptr<core::Base>& value)
{
    return entity_raw(value.get());
}

inline bool LoftSection::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline int LoftSection::index() const
{
    int res = index_raw();
    return res;
}

inline bool LoftSection::reorder(int newIndex)
{
    bool res = reorder_raw(newIndex);
    return res;
}

inline core::Ptr<LoftEndCondition> LoftSection::endCondition() const
{
    core::Ptr<LoftEndCondition> res = endCondition_raw();
    return res;
}

inline bool LoftSection::setFreeEndCondition()
{
    bool res = setFreeEndCondition_raw();
    return res;
}

inline bool LoftSection::setDirectionEndCondition(const core::Ptr<core::ValueInput>& angle, const core::Ptr<core::ValueInput>& weight)
{
    bool res = setDirectionEndCondition_raw(angle.get(), weight.get());
    return res;
}

inline bool LoftSection::setTangentEndCondition(const core::Ptr<core::ValueInput>& weight)
{
    bool res = setTangentEndCondition_raw(weight.get());
    return res;
}

inline bool LoftSection::setSmoothEndCondition(const core::Ptr<core::ValueInput>& weight)
{
    bool res = setSmoothEndCondition_raw(weight.get());
    return res;
}

inline bool LoftSection::setPointSharpEndCondition()
{
    bool res = setPointSharpEndCondition_raw();
    return res;
}

inline bool LoftSection::setPointTangentEndCondition(const core::Ptr<core::ValueInput>& weight)
{
    bool res = setPointTangentEndCondition_raw(weight.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_LOFTSECTION_API