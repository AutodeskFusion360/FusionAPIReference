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
#include "CornerClosureInputDefinition.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_CPP__
# define ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API
# endif
#else
# define ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the input properties required for creating a two-bend corner closure feature.
/// This input definition provides a structured way to organize and validate the parameters before passing them to the
/// setTwoBendCornerClosure method.
class TwoBendCornerClosureInputDefinition : public CornerClosureInputDefinition {
public:

    /// Gets and sets the relief shape for the two-bend corner.
    /// This defines the geometric shape used to relieve stress at the corner where two bends meet.
    /// This property is ignored when useSheetMetalRuleDefaults is set to true.
    /// The default value is RoundCornerTwoBendReliefShapeType.
    CornerTwoBendReliefShapeTypes twoBendReliefShape() const;
    bool twoBendReliefShape(CornerTwoBendReliefShapeTypes value);

    /// Gets and sets the size of the two-bend relief.
    /// This parameter is only valid when the twoBendReliefShape is RoundCornerTwoBendReliefShapeType
    /// or SquareCornerTwoBendReliefShapeType. For other relief shapes, this value is ignored.
    /// This property is ignored when useSheetMetalRuleDefaults is set to true.
    core::Ptr<core::ValueInput> twoBendReliefSize() const;
    bool twoBendReliefSize(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the placement of the two-bend relief.
    /// This parameter controls where the relief feature is positioned relative to the bend intersection.
    /// This parameter is only valid when the twoBendReliefShape is RoundCornerTwoBendReliefShapeType
    /// or SquareCornerTwoBendReliefShapeType. For other relief shapes, this value is ignored.
    /// This property is ignored when useSheetMetalRuleDefaults is set to true.
    /// The default value is TangentCornerTwoBendReliefPlacementType.
    CornerTwoBendReliefPlacementTypes twoBendReliefPlacement() const;
    bool twoBendReliefPlacement(CornerTwoBendReliefPlacementTypes value);

    /// Gets and sets whether to use default relief values from the Sheet Metal Rule.
    /// When true, all relief parameters (shape, size, and placement) are taken from the active Sheet Metal Rule,
    /// and any values set in twoBendReliefShape, twoBendReliefSize, and twoBendReliefPlacement properties are ignored.
    /// When false (default), the relief parameters must be explicitly set using the respective properties.
    /// The default value is false.
    bool isUseSheetMetalRuleDefaults() const;
    bool isUseSheetMetalRuleDefaults(bool value);

    /// Creates a TwoBendCornerClosureParameters object that can be used to define parameters for a two-bend corner closure.
    /// Use properties on this object to set the relief shape, relief size, relief placement, miter gap, alignment settings,
    /// and bend transition type before passing it to the setTwoBendCornerClosure method.
    /// Returns the newly created TwoBendCornerClosureParameters object or null if the creation failed.
    static core::Ptr<TwoBendCornerClosureInputDefinition> create();

    ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API static const char* classType();
    ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CornerTwoBendReliefShapeTypes twoBendReliefShape_raw() const = 0;
    virtual bool twoBendReliefShape_raw(CornerTwoBendReliefShapeTypes value) = 0;
    virtual core::ValueInput* twoBendReliefSize_raw() const = 0;
    virtual bool twoBendReliefSize_raw(core::ValueInput* value) = 0;
    virtual CornerTwoBendReliefPlacementTypes twoBendReliefPlacement_raw() const = 0;
    virtual bool twoBendReliefPlacement_raw(CornerTwoBendReliefPlacementTypes value) = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw() const = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw(bool value) = 0;
    ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API static TwoBendCornerClosureInputDefinition* create_raw();
};

// Inline wrappers

inline CornerTwoBendReliefShapeTypes TwoBendCornerClosureInputDefinition::twoBendReliefShape() const
{
    CornerTwoBendReliefShapeTypes res = twoBendReliefShape_raw();
    return res;
}

inline bool TwoBendCornerClosureInputDefinition::twoBendReliefShape(CornerTwoBendReliefShapeTypes value)
{
    return twoBendReliefShape_raw(value);
}

inline core::Ptr<core::ValueInput> TwoBendCornerClosureInputDefinition::twoBendReliefSize() const
{
    core::Ptr<core::ValueInput> res = twoBendReliefSize_raw();
    return res;
}

inline bool TwoBendCornerClosureInputDefinition::twoBendReliefSize(const core::Ptr<core::ValueInput>& value)
{
    return twoBendReliefSize_raw(value.get());
}

inline CornerTwoBendReliefPlacementTypes TwoBendCornerClosureInputDefinition::twoBendReliefPlacement() const
{
    CornerTwoBendReliefPlacementTypes res = twoBendReliefPlacement_raw();
    return res;
}

inline bool TwoBendCornerClosureInputDefinition::twoBendReliefPlacement(CornerTwoBendReliefPlacementTypes value)
{
    return twoBendReliefPlacement_raw(value);
}

inline bool TwoBendCornerClosureInputDefinition::isUseSheetMetalRuleDefaults() const
{
    bool res = isUseSheetMetalRuleDefaults_raw();
    return res;
}

inline bool TwoBendCornerClosureInputDefinition::isUseSheetMetalRuleDefaults(bool value)
{
    return isUseSheetMetalRuleDefaults_raw(value);
}

inline core::Ptr<TwoBendCornerClosureInputDefinition> TwoBendCornerClosureInputDefinition::create()
{
    core::Ptr<TwoBendCornerClosureInputDefinition> res = create_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TWOBENDCORNERCLOSUREINPUTDEFINITION_API