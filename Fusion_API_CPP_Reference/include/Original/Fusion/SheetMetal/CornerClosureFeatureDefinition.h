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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_CPP__
# define ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A Base class to return the information used to define the CornerClosureFeature.
class CornerClosureFeatureDefinition : public core::Base {
public:

    /// Gets the dominant edge for the corner closure.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// After setting the edge, the definitionType property on CornerClosureFeature should be examined
    /// to determine whether the corner is two-bend or three-bend, as after the setting another edge
    /// the type of corner might be altered.
    core::Ptr<BRepEdge> dominantEdge() const;
    bool dominantEdge(const core::Ptr<BRepEdge>& value);

    /// Gets and sets the submissive edge for the corner closure.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// After setting the edge, the definitionType property on CornerClosureFeature should be examined
    /// to determine whether the corner is two-bend or three-bend, as after the setting another edge
    /// the type of corner might be altered.
    core::Ptr<BRepEdge> submissiveEdge() const;
    bool submissiveEdge(const core::Ptr<BRepEdge>& value);

    /// Gets the miter gap for the corner closure.
    core::Ptr<ModelParameter> miterGap() const;

    /// Gets and sets whether the corner closure extends aligned to the edges.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isExtendAligned() const;
    bool isExtendAligned(bool value);

    /// Gets and sets the bend transition type for the corner closure.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    CornerBendTransitionTypes bendTransition() const;
    bool bendTransition(CornerBendTransitionTypes value);

    ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdge* dominantEdge_raw() const = 0;
    virtual bool dominantEdge_raw(BRepEdge* value) = 0;
    virtual BRepEdge* submissiveEdge_raw() const = 0;
    virtual bool submissiveEdge_raw(BRepEdge* value) = 0;
    virtual ModelParameter* miterGap_raw() const = 0;
    virtual bool isExtendAligned_raw() const = 0;
    virtual bool isExtendAligned_raw(bool value) = 0;
    virtual CornerBendTransitionTypes bendTransition_raw() const = 0;
    virtual bool bendTransition_raw(CornerBendTransitionTypes value) = 0;
    virtual void placeholderCornerClosureFeatureDefinition0() {}
    virtual void placeholderCornerClosureFeatureDefinition1() {}
    virtual void placeholderCornerClosureFeatureDefinition2() {}
    virtual void placeholderCornerClosureFeatureDefinition3() {}
    virtual void placeholderCornerClosureFeatureDefinition4() {}
    virtual void placeholderCornerClosureFeatureDefinition5() {}
    virtual void placeholderCornerClosureFeatureDefinition6() {}
    virtual void placeholderCornerClosureFeatureDefinition7() {}
    virtual void placeholderCornerClosureFeatureDefinition8() {}
    virtual void placeholderCornerClosureFeatureDefinition9() {}
    virtual void placeholderCornerClosureFeatureDefinition10() {}
    virtual void placeholderCornerClosureFeatureDefinition11() {}
    virtual void placeholderCornerClosureFeatureDefinition12() {}
    virtual void placeholderCornerClosureFeatureDefinition13() {}
    virtual void placeholderCornerClosureFeatureDefinition14() {}
    virtual void placeholderCornerClosureFeatureDefinition15() {}
    virtual void placeholderCornerClosureFeatureDefinition16() {}
    virtual void placeholderCornerClosureFeatureDefinition17() {}
    virtual void placeholderCornerClosureFeatureDefinition18() {}
    virtual void placeholderCornerClosureFeatureDefinition19() {}
    virtual void placeholderCornerClosureFeatureDefinition20() {}
    virtual void placeholderCornerClosureFeatureDefinition21() {}
    virtual void placeholderCornerClosureFeatureDefinition22() {}
};

// Inline wrappers

inline core::Ptr<BRepEdge> CornerClosureFeatureDefinition::dominantEdge() const
{
    core::Ptr<BRepEdge> res = dominantEdge_raw();
    return res;
}

inline bool CornerClosureFeatureDefinition::dominantEdge(const core::Ptr<BRepEdge>& value)
{
    return dominantEdge_raw(value.get());
}

inline core::Ptr<BRepEdge> CornerClosureFeatureDefinition::submissiveEdge() const
{
    core::Ptr<BRepEdge> res = submissiveEdge_raw();
    return res;
}

inline bool CornerClosureFeatureDefinition::submissiveEdge(const core::Ptr<BRepEdge>& value)
{
    return submissiveEdge_raw(value.get());
}

inline core::Ptr<ModelParameter> CornerClosureFeatureDefinition::miterGap() const
{
    core::Ptr<ModelParameter> res = miterGap_raw();
    return res;
}

inline bool CornerClosureFeatureDefinition::isExtendAligned() const
{
    bool res = isExtendAligned_raw();
    return res;
}

inline bool CornerClosureFeatureDefinition::isExtendAligned(bool value)
{
    return isExtendAligned_raw(value);
}

inline CornerBendTransitionTypes CornerClosureFeatureDefinition::bendTransition() const
{
    CornerBendTransitionTypes res = bendTransition_raw();
    return res;
}

inline bool CornerClosureFeatureDefinition::bendTransition(CornerBendTransitionTypes value)
{
    return bendTransition_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CORNERCLOSUREFEATUREDEFINITION_API