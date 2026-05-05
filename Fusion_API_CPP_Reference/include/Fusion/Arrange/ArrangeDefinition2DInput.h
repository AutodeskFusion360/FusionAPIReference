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
#include "ArrangeDefinitionInput.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEDEFINITION2DINPUT_CPP__
# define ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// This object defines all of the settings associated with a 2D arrangement. This is used
/// for both rectangular and true shape arrangements, but some properties are ignored
/// in some cases.
class ArrangeDefinition2DInput : public ArrangeDefinitionInput {
public:

    /// Gets and sets the global rotation type. This defaults to AllRotationsArrangeRotationType.
    ArrangeRotationTypes globalRotation() const;
    bool globalRotation(ArrangeRotationTypes value);

    /// Gets and sets the global quantity, which is the default quantity value for components. This defaults to 1.
    /// 
    /// This value will become a parameter when the arrangement is created. When created with a real value it must be a whole number.
    /// You can also use a string where it is interpreted the same as when entered in the command dialog. The expression must result
    /// in a unitless whole number. It's also possible to use an equation like "Total / 4" where "Total" is an existing parameter and must be
    /// evenly divided by four.
    core::Ptr<core::ValueInput> globalQuantity() const;
    bool globalQuantity(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the global direction for input faces. When true, the components specified
    /// by selecting a face will be oriented such that the selection face will be oriented upward
    /// in the arrangement. This defaults to true.
    bool isGlobalDirectionFaceUp() const;
    bool isGlobalDirectionFaceUp(bool value);

    /// Gets and sets if parts can be nested within void areas of other parts. This defaults to true.
    /// 
    /// This is only used when the solver type is 2D True Shape and is ignored for 2D Rectangular solutions.
    bool isPartInPartAllowed() const;
    bool isPartInPartAllowed(bool value);

    /// Defines the angle of the grain direction of the envelope. This is only used when the solver type is True Shape.
    /// An angle of 0 is in the X direction of the envelope, and the default value is zero.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in radians. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses degrees as the units. For example, if you specify "45" it will result in a 45 degree grain
    /// direction. Using a string you can also define an equation for the expression, such as "PartAngle / 2" where "PartAngle"
    /// is an existing parameter.
    core::Ptr<core::ValueInput> grainDirection() const;
    bool grainDirection(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeRotationTypes globalRotation_raw() const = 0;
    virtual bool globalRotation_raw(ArrangeRotationTypes value) = 0;
    virtual core::ValueInput* globalQuantity_raw() const = 0;
    virtual bool globalQuantity_raw(core::ValueInput* value) = 0;
    virtual bool isGlobalDirectionFaceUp_raw() const = 0;
    virtual bool isGlobalDirectionFaceUp_raw(bool value) = 0;
    virtual bool isPartInPartAllowed_raw() const = 0;
    virtual bool isPartInPartAllowed_raw(bool value) = 0;
    virtual core::ValueInput* grainDirection_raw() const = 0;
    virtual bool grainDirection_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline ArrangeRotationTypes ArrangeDefinition2DInput::globalRotation() const
{
    ArrangeRotationTypes res = globalRotation_raw();
    return res;
}

inline bool ArrangeDefinition2DInput::globalRotation(ArrangeRotationTypes value)
{
    return globalRotation_raw(value);
}

inline core::Ptr<core::ValueInput> ArrangeDefinition2DInput::globalQuantity() const
{
    core::Ptr<core::ValueInput> res = globalQuantity_raw();
    return res;
}

inline bool ArrangeDefinition2DInput::globalQuantity(const core::Ptr<core::ValueInput>& value)
{
    return globalQuantity_raw(value.get());
}

inline bool ArrangeDefinition2DInput::isGlobalDirectionFaceUp() const
{
    bool res = isGlobalDirectionFaceUp_raw();
    return res;
}

inline bool ArrangeDefinition2DInput::isGlobalDirectionFaceUp(bool value)
{
    return isGlobalDirectionFaceUp_raw(value);
}

inline bool ArrangeDefinition2DInput::isPartInPartAllowed() const
{
    bool res = isPartInPartAllowed_raw();
    return res;
}

inline bool ArrangeDefinition2DInput::isPartInPartAllowed(bool value)
{
    return isPartInPartAllowed_raw(value);
}

inline core::Ptr<core::ValueInput> ArrangeDefinition2DInput::grainDirection() const
{
    core::Ptr<core::ValueInput> res = grainDirection_raw();
    return res;
}

inline bool ArrangeDefinition2DInput::grainDirection(const core::Ptr<core::ValueInput>& value)
{
    return grainDirection_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEDEFINITION2DINPUT_API