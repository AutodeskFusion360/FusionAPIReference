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
# ifdef __COMPILING_ADSK_FUSION_ARRANGEENVELOPEINPUT_CPP__
# define ADSK_FUSION_ARRANGEENVELOPEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEENVELOPEINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGEENVELOPEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The base class used to define the arrange envelope when creating an Arrange feature.
class ArrangeEnvelopeInput : public core::Base {
public:

    /// Gets and sets if a partial arrange is allowed. If true, it will still create a result when there is not
    /// enough space on the envelope to fit all of the components. Components are arranged until all the
    /// available space is used up. The components that were not included in the partial arrangement are
    /// highlighted in the components list. If the envelope size increases, the arrangement recalculates
    /// to include the components that did not previously fit in the arrangement.
    bool isPartialArrangeAllowed() const;
    bool isPartialArrangeAllowed(bool value);

    /// Specifies the distance of the components and the bottom of the envelope. This raises the components
    /// above the X-Y plane of the specified construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created
    /// using a real number it is in centimeters. If you use a string, it is evaluated the same as a value
    /// would be in the command dialog and uses the current document units. For example, if the document
    /// units are inch and you specific "0.25" it will result in 1/4 inch clearance. You can also specify
    /// the units as part of the expression, such as "0.25 in + 2 mm". And you can define equations like
    /// "ToolDia + 2 mm" where "ToolDia" is an existing parameter.
    core::Ptr<core::ValueInput> placementClearance() const;
    bool placementClearance(const core::Ptr<core::ValueInput>& value);

    /// Specifies the minimum distance between the components in the arrangement and the envelope frame.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created
    /// using a real number it is in centimeters. If you use a string, it is evaluated the same as a value
    /// would be in the command dialog and uses the current document units. For example, if the document
    /// units are inch and you specific "0.25" it will result in 1/4 inch clearance. You can also specify
    /// the units as part of the expression, such as "0.25 in + 2 mm". And you can define equations like
    /// "ToolDia + 2 mm" where "ToolDia" is an existing parameter.
    core::Ptr<core::ValueInput> frameWidth() const;
    bool frameWidth(const core::Ptr<core::ValueInput>& value);

    /// Specifies the minimum clearance between components in the arrangement. for a 3D layout this
    /// also specified the distance between the components in the Z direction.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created
    /// using a real number it is in centimeters. If you use a string, it is evaluated the same as a value
    /// would be in the command dialog and uses the current document units. For example, if the document
    /// units are inch and you specific "0.25" it will result in 1/4 inch clearance. You can also specify
    /// the units as part of the expression, such as "0.25 in + 2 mm". And you can define equations like
    /// "ToolDia + 2 mm" where "ToolDia" is an existing parameter.
    core::Ptr<core::ValueInput> objectSpacing() const;
    bool objectSpacing(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_ARRANGEENVELOPEINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGEENVELOPEINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEENVELOPEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEENVELOPEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isPartialArrangeAllowed_raw() const = 0;
    virtual bool isPartialArrangeAllowed_raw(bool value) = 0;
    virtual core::ValueInput* placementClearance_raw() const = 0;
    virtual bool placementClearance_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* frameWidth_raw() const = 0;
    virtual bool frameWidth_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* objectSpacing_raw() const = 0;
    virtual bool objectSpacing_raw(core::ValueInput* value) = 0;
    virtual void placeholderArrangeEnvelopeInput0() {}
    virtual void placeholderArrangeEnvelopeInput1() {}
    virtual void placeholderArrangeEnvelopeInput2() {}
    virtual void placeholderArrangeEnvelopeInput3() {}
    virtual void placeholderArrangeEnvelopeInput4() {}
    virtual void placeholderArrangeEnvelopeInput5() {}
    virtual void placeholderArrangeEnvelopeInput6() {}
    virtual void placeholderArrangeEnvelopeInput7() {}
    virtual void placeholderArrangeEnvelopeInput8() {}
    virtual void placeholderArrangeEnvelopeInput9() {}
    virtual void placeholderArrangeEnvelopeInput10() {}
    virtual void placeholderArrangeEnvelopeInput11() {}
    virtual void placeholderArrangeEnvelopeInput12() {}
    virtual void placeholderArrangeEnvelopeInput13() {}
    virtual void placeholderArrangeEnvelopeInput14() {}
    virtual void placeholderArrangeEnvelopeInput15() {}
    virtual void placeholderArrangeEnvelopeInput16() {}
    virtual void placeholderArrangeEnvelopeInput17() {}
    virtual void placeholderArrangeEnvelopeInput18() {}
    virtual void placeholderArrangeEnvelopeInput19() {}
    virtual void placeholderArrangeEnvelopeInput20() {}
    virtual void placeholderArrangeEnvelopeInput21() {}
    virtual void placeholderArrangeEnvelopeInput22() {}
    virtual void placeholderArrangeEnvelopeInput23() {}
    virtual void placeholderArrangeEnvelopeInput24() {}
    virtual void placeholderArrangeEnvelopeInput25() {}
    virtual void placeholderArrangeEnvelopeInput26() {}
    virtual void placeholderArrangeEnvelopeInput27() {}
    virtual void placeholderArrangeEnvelopeInput28() {}
    virtual void placeholderArrangeEnvelopeInput29() {}
    virtual void placeholderArrangeEnvelopeInput30() {}
    virtual void placeholderArrangeEnvelopeInput31() {}
    virtual void placeholderArrangeEnvelopeInput32() {}
    virtual void placeholderArrangeEnvelopeInput33() {}
    virtual void placeholderArrangeEnvelopeInput34() {}
    virtual void placeholderArrangeEnvelopeInput35() {}
    virtual void placeholderArrangeEnvelopeInput36() {}
    virtual void placeholderArrangeEnvelopeInput37() {}
    virtual void placeholderArrangeEnvelopeInput38() {}
    virtual void placeholderArrangeEnvelopeInput39() {}
    virtual void placeholderArrangeEnvelopeInput40() {}
    virtual void placeholderArrangeEnvelopeInput41() {}
    virtual void placeholderArrangeEnvelopeInput42() {}
    virtual void placeholderArrangeEnvelopeInput43() {}
    virtual void placeholderArrangeEnvelopeInput44() {}
    virtual void placeholderArrangeEnvelopeInput45() {}
    virtual void placeholderArrangeEnvelopeInput46() {}
    virtual void placeholderArrangeEnvelopeInput47() {}
    virtual void placeholderArrangeEnvelopeInput48() {}
    virtual void placeholderArrangeEnvelopeInput49() {}
    virtual void placeholderArrangeEnvelopeInput50() {}
    virtual void placeholderArrangeEnvelopeInput51() {}
    virtual void placeholderArrangeEnvelopeInput52() {}
    virtual void placeholderArrangeEnvelopeInput53() {}
    virtual void placeholderArrangeEnvelopeInput54() {}
    virtual void placeholderArrangeEnvelopeInput55() {}
};

// Inline wrappers

inline bool ArrangeEnvelopeInput::isPartialArrangeAllowed() const
{
    bool res = isPartialArrangeAllowed_raw();
    return res;
}

inline bool ArrangeEnvelopeInput::isPartialArrangeAllowed(bool value)
{
    return isPartialArrangeAllowed_raw(value);
}

inline core::Ptr<core::ValueInput> ArrangeEnvelopeInput::placementClearance() const
{
    core::Ptr<core::ValueInput> res = placementClearance_raw();
    return res;
}

inline bool ArrangeEnvelopeInput::placementClearance(const core::Ptr<core::ValueInput>& value)
{
    return placementClearance_raw(value.get());
}

inline core::Ptr<core::ValueInput> ArrangeEnvelopeInput::frameWidth() const
{
    core::Ptr<core::ValueInput> res = frameWidth_raw();
    return res;
}

inline bool ArrangeEnvelopeInput::frameWidth(const core::Ptr<core::ValueInput>& value)
{
    return frameWidth_raw(value.get());
}

inline core::Ptr<core::ValueInput> ArrangeEnvelopeInput::objectSpacing() const
{
    core::Ptr<core::ValueInput> res = objectSpacing_raw();
    return res;
}

inline bool ArrangeEnvelopeInput::objectSpacing(const core::Ptr<core::ValueInput>& value)
{
    return objectSpacing_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEENVELOPEINPUT_API