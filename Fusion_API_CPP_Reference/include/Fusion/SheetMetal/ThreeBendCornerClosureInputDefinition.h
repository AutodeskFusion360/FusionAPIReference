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
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_CPP__
# define ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API
# endif
#else
# define ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the input properties required for creating a three-bend corner closure feature.
/// This input definition provides a structured way to organize and validate the parameters before passing them to the
/// setThreeBendCornerClosure method.
class ThreeBendCornerClosureInputDefinition : public CornerClosureInputDefinition {
public:

    /// Gets and sets the relief shape for the three-bend corner.
    /// This defines the geometric shape used to relieve stress at the corner where three bends meet.
    /// This property is ignored when useSheetMetalRuleDefaults is set to true.
    /// The default value is RoundWithRadiusCornerThreeBendReliefShapeType.
    CornerThreeBendReliefShapeTypes threeBendReliefShape() const;
    bool threeBendReliefShape(CornerThreeBendReliefShapeTypes value);

    /// Gets and sets the radius of the three-bend relief.
    /// This parameter is only valid when the threeBendReliefShape is RoundWithRadiusCornerThreeBendReliefShapeType.
    /// For other relief shapes, this value is ignored.
    /// This property is ignored when useSheetMetalRuleDefaults is set to true.
    core::Ptr<core::ValueInput> threeBendReliefRadius() const;
    bool threeBendReliefRadius(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets whether to use default relief values from the Sheet Metal Rule.
    /// When true, all relief parameters (shape and radius) are taken from the active Sheet Metal Rule,
    /// and any values set in threeBendReliefShape and threeBendReliefRadius properties are ignored.
    /// When false (default), the relief parameters must be explicitly set using the respective properties.
    /// The default value is false.
    bool isUseSheetMetalRuleDefaults() const;
    bool isUseSheetMetalRuleDefaults(bool value);

    /// Creates a ThreeBendCornerClosureParameters object that can be used to define parameters for a three-bend corner closure.
    /// Use properties on this object to set the relief shape, relief radius, miter gap, alignment settings,
    /// and bend transition type before passing it to the setThreeBendCornerClosure method.
    /// Returns the newly created ThreeBendCornerClosureParameters object or null if the creation failed.
    static core::Ptr<ThreeBendCornerClosureInputDefinition> create();

    ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API static const char* classType();
    ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CornerThreeBendReliefShapeTypes threeBendReliefShape_raw() const = 0;
    virtual bool threeBendReliefShape_raw(CornerThreeBendReliefShapeTypes value) = 0;
    virtual core::ValueInput* threeBendReliefRadius_raw() const = 0;
    virtual bool threeBendReliefRadius_raw(core::ValueInput* value) = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw() const = 0;
    virtual bool isUseSheetMetalRuleDefaults_raw(bool value) = 0;
    ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API static ThreeBendCornerClosureInputDefinition* create_raw();
};

// Inline wrappers

inline CornerThreeBendReliefShapeTypes ThreeBendCornerClosureInputDefinition::threeBendReliefShape() const
{
    CornerThreeBendReliefShapeTypes res = threeBendReliefShape_raw();
    return res;
}

inline bool ThreeBendCornerClosureInputDefinition::threeBendReliefShape(CornerThreeBendReliefShapeTypes value)
{
    return threeBendReliefShape_raw(value);
}

inline core::Ptr<core::ValueInput> ThreeBendCornerClosureInputDefinition::threeBendReliefRadius() const
{
    core::Ptr<core::ValueInput> res = threeBendReliefRadius_raw();
    return res;
}

inline bool ThreeBendCornerClosureInputDefinition::threeBendReliefRadius(const core::Ptr<core::ValueInput>& value)
{
    return threeBendReliefRadius_raw(value.get());
}

inline bool ThreeBendCornerClosureInputDefinition::isUseSheetMetalRuleDefaults() const
{
    bool res = isUseSheetMetalRuleDefaults_raw();
    return res;
}

inline bool ThreeBendCornerClosureInputDefinition::isUseSheetMetalRuleDefaults(bool value)
{
    return isUseSheetMetalRuleDefaults_raw(value);
}

inline core::Ptr<ThreeBendCornerClosureInputDefinition> ThreeBendCornerClosureInputDefinition::create()
{
    core::Ptr<ThreeBendCornerClosureInputDefinition> res = create_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREEBENDCORNERCLOSUREINPUTDEFINITION_API