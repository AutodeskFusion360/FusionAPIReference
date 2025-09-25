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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class MoveFeature;
}}

namespace adsk { namespace fusion {

/// A Base class to return the information used to define a Move feature.
class MoveFeatureDefinition : public core::Base {
public:

    /// Returns the parent MoveFeature object
    core::Ptr<MoveFeature> parentMoveFeature() const;

    ADSK_FUSION_MOVEFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MoveFeature* parentMoveFeature_raw() const = 0;
    virtual void placeholderMoveFeatureDefinition0() {}
    virtual void placeholderMoveFeatureDefinition1() {}
    virtual void placeholderMoveFeatureDefinition2() {}
    virtual void placeholderMoveFeatureDefinition3() {}
    virtual void placeholderMoveFeatureDefinition4() {}
    virtual void placeholderMoveFeatureDefinition5() {}
    virtual void placeholderMoveFeatureDefinition6() {}
    virtual void placeholderMoveFeatureDefinition7() {}
    virtual void placeholderMoveFeatureDefinition8() {}
    virtual void placeholderMoveFeatureDefinition9() {}
    virtual void placeholderMoveFeatureDefinition10() {}
    virtual void placeholderMoveFeatureDefinition11() {}
    virtual void placeholderMoveFeatureDefinition12() {}
    virtual void placeholderMoveFeatureDefinition13() {}
    virtual void placeholderMoveFeatureDefinition14() {}
    virtual void placeholderMoveFeatureDefinition15() {}
    virtual void placeholderMoveFeatureDefinition16() {}
    virtual void placeholderMoveFeatureDefinition17() {}
    virtual void placeholderMoveFeatureDefinition18() {}
    virtual void placeholderMoveFeatureDefinition19() {}
    virtual void placeholderMoveFeatureDefinition20() {}
    virtual void placeholderMoveFeatureDefinition21() {}
    virtual void placeholderMoveFeatureDefinition22() {}
    virtual void placeholderMoveFeatureDefinition23() {}
    virtual void placeholderMoveFeatureDefinition24() {}
    virtual void placeholderMoveFeatureDefinition25() {}
    virtual void placeholderMoveFeatureDefinition26() {}
    virtual void placeholderMoveFeatureDefinition27() {}
    virtual void placeholderMoveFeatureDefinition28() {}
    virtual void placeholderMoveFeatureDefinition29() {}
    virtual void placeholderMoveFeatureDefinition30() {}
};

// Inline wrappers

inline core::Ptr<MoveFeature> MoveFeatureDefinition::parentMoveFeature() const
{
    core::Ptr<MoveFeature> res = parentMoveFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREDEFINITION_API