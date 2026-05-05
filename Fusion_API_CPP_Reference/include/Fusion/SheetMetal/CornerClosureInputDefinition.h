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
# ifdef __COMPILING_ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_CPP__
# define ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the common input properties shared by both two-bend and three-bend corner closure features.
/// This class provides the fundamental properties required for any corner closure operation, including miter gap,
/// alignment settings, and bend transition behavior.
class CornerClosureInputDefinition : public core::Base {
public:

    /// Gets and sets the gap distance for the miter in the corner closure.
    /// This value defines the spacing between the sheets at the corner miter joint.
    /// If this property is not set (null) and useSheetMetalRuleMiterGap is false,
    /// the miter gap value will be taken from the Sheet Metal Rule as a fallback.
    core::Ptr<core::ValueInput> miterGap() const;
    bool miterGap(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets a value indicating whether the corner closure extends aligned to the edges.
    /// When true, the corner closure will extend in alignment with the adjacent edges.
    /// When false, the corner closure will use the default extension behavior.
    /// The default value is true.
    bool isExtendAligned() const;
    bool isExtendAligned(bool value);

    /// Gets and sets the bend transition type for the corner closure.
    /// This determines how the bend transitions are handled at the corner intersection.
    /// The default value is TrimToBendCornerBendTransitionType.
    CornerBendTransitionTypes bendTransition() const;
    bool bendTransition(CornerBendTransitionTypes value);

    /// Gets and sets whether to use the miter gap value from the Sheet Metal Rule.
    /// When true, the miter gap value is taken from the active Sheet Metal Rule and any value set in the miterGap property is ignored.
    /// When false (default), the behavior depends on the miterGap property:
    ///   - If miterGap is set: uses the specified value
    ///   - If miterGap is not set (null): uses the value from the Sheet Metal Rule as a fallback
    /// The default value is false.
    bool isUseSheetMetalRuleMiterGap() const;
    bool isUseSheetMetalRuleMiterGap(bool value);

    ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API static const char* classType();
    ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ValueInput* miterGap_raw() const = 0;
    virtual bool miterGap_raw(core::ValueInput* value) = 0;
    virtual bool isExtendAligned_raw() const = 0;
    virtual bool isExtendAligned_raw(bool value) = 0;
    virtual CornerBendTransitionTypes bendTransition_raw() const = 0;
    virtual bool bendTransition_raw(CornerBendTransitionTypes value) = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw() const = 0;
    virtual bool isUseSheetMetalRuleMiterGap_raw(bool value) = 0;
    virtual void placeholderCornerClosureInputDefinition0() {}
    virtual void placeholderCornerClosureInputDefinition1() {}
    virtual void placeholderCornerClosureInputDefinition2() {}
    virtual void placeholderCornerClosureInputDefinition3() {}
    virtual void placeholderCornerClosureInputDefinition4() {}
    virtual void placeholderCornerClosureInputDefinition5() {}
    virtual void placeholderCornerClosureInputDefinition6() {}
    virtual void placeholderCornerClosureInputDefinition7() {}
    virtual void placeholderCornerClosureInputDefinition8() {}
    virtual void placeholderCornerClosureInputDefinition9() {}
    virtual void placeholderCornerClosureInputDefinition10() {}
    virtual void placeholderCornerClosureInputDefinition11() {}
    virtual void placeholderCornerClosureInputDefinition12() {}
    virtual void placeholderCornerClosureInputDefinition13() {}
    virtual void placeholderCornerClosureInputDefinition14() {}
    virtual void placeholderCornerClosureInputDefinition15() {}
    virtual void placeholderCornerClosureInputDefinition16() {}
    virtual void placeholderCornerClosureInputDefinition17() {}
    virtual void placeholderCornerClosureInputDefinition18() {}
    virtual void placeholderCornerClosureInputDefinition19() {}
    virtual void placeholderCornerClosureInputDefinition20() {}
    virtual void placeholderCornerClosureInputDefinition21() {}
    virtual void placeholderCornerClosureInputDefinition22() {}
    virtual void placeholderCornerClosureInputDefinition23() {}
};

// Inline wrappers

inline core::Ptr<core::ValueInput> CornerClosureInputDefinition::miterGap() const
{
    core::Ptr<core::ValueInput> res = miterGap_raw();
    return res;
}

inline bool CornerClosureInputDefinition::miterGap(const core::Ptr<core::ValueInput>& value)
{
    return miterGap_raw(value.get());
}

inline bool CornerClosureInputDefinition::isExtendAligned() const
{
    bool res = isExtendAligned_raw();
    return res;
}

inline bool CornerClosureInputDefinition::isExtendAligned(bool value)
{
    return isExtendAligned_raw(value);
}

inline CornerBendTransitionTypes CornerClosureInputDefinition::bendTransition() const
{
    CornerBendTransitionTypes res = bendTransition_raw();
    return res;
}

inline bool CornerClosureInputDefinition::bendTransition(CornerBendTransitionTypes value)
{
    return bendTransition_raw(value);
}

inline bool CornerClosureInputDefinition::isUseSheetMetalRuleMiterGap() const
{
    bool res = isUseSheetMetalRuleMiterGap_raw();
    return res;
}

inline bool CornerClosureInputDefinition::isUseSheetMetalRuleMiterGap(bool value)
{
    return isUseSheetMetalRuleMiterGap_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CORNERCLOSUREINPUTDEFINITION_API