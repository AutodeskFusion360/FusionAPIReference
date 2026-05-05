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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_HEMFEATUREDEFINITION_CPP__
# define ADSK_FUSION_HEMFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_HEMFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_HEMFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A Base class to return the information used to define the HemFeature.
class HemFeatureDefinition : public core::Base {
public:

    /// Gets and sets the input edge for a hem
    core::Ptr<BRepEdge> hemEdge() const;
    bool hemEdge(const core::Ptr<BRepEdge>& value);

    /// Gets the flip direction for an open hem.
    bool isFlipped() const;
    bool isFlipped(bool value);

    /// Gets the bend position type for a hem.
    BendPositionTypes bendPositionType() const;
    bool bendPositionType(BendPositionTypes value);

    ADSK_FUSION_HEMFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_HEMFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_HEMFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_HEMFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepEdge* hemEdge_raw() const = 0;
    virtual bool hemEdge_raw(BRepEdge* value) = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
    virtual BendPositionTypes bendPositionType_raw() const = 0;
    virtual bool bendPositionType_raw(BendPositionTypes value) = 0;
    virtual void placeholderHemFeatureDefinition0() {}
    virtual void placeholderHemFeatureDefinition1() {}
    virtual void placeholderHemFeatureDefinition2() {}
    virtual void placeholderHemFeatureDefinition3() {}
    virtual void placeholderHemFeatureDefinition4() {}
    virtual void placeholderHemFeatureDefinition5() {}
    virtual void placeholderHemFeatureDefinition6() {}
    virtual void placeholderHemFeatureDefinition7() {}
    virtual void placeholderHemFeatureDefinition8() {}
    virtual void placeholderHemFeatureDefinition9() {}
    virtual void placeholderHemFeatureDefinition10() {}
    virtual void placeholderHemFeatureDefinition11() {}
    virtual void placeholderHemFeatureDefinition12() {}
    virtual void placeholderHemFeatureDefinition13() {}
    virtual void placeholderHemFeatureDefinition14() {}
    virtual void placeholderHemFeatureDefinition15() {}
    virtual void placeholderHemFeatureDefinition16() {}
    virtual void placeholderHemFeatureDefinition17() {}
    virtual void placeholderHemFeatureDefinition18() {}
    virtual void placeholderHemFeatureDefinition19() {}
    virtual void placeholderHemFeatureDefinition20() {}
    virtual void placeholderHemFeatureDefinition21() {}
    virtual void placeholderHemFeatureDefinition22() {}
    virtual void placeholderHemFeatureDefinition23() {}
    virtual void placeholderHemFeatureDefinition24() {}
    virtual void placeholderHemFeatureDefinition25() {}
};

// Inline wrappers

inline core::Ptr<BRepEdge> HemFeatureDefinition::hemEdge() const
{
    core::Ptr<BRepEdge> res = hemEdge_raw();
    return res;
}

inline bool HemFeatureDefinition::hemEdge(const core::Ptr<BRepEdge>& value)
{
    return hemEdge_raw(value.get());
}

inline bool HemFeatureDefinition::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool HemFeatureDefinition::isFlipped(bool value)
{
    return isFlipped_raw(value);
}

inline BendPositionTypes HemFeatureDefinition::bendPositionType() const
{
    BendPositionTypes res = bendPositionType_raw();
    return res;
}

inline bool HemFeatureDefinition::bendPositionType(BendPositionTypes value)
{
    return bendPositionType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_HEMFEATUREDEFINITION_API