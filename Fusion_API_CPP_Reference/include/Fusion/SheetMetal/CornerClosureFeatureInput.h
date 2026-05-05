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
# ifdef __COMPILING_ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_CPP__
# define ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepEdge;
    class ThreeBendCornerClosureInputDefinition;
    class TwoBendCornerClosureInputDefinition;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a corner closure feature.
class CornerClosureFeatureInput : public core::Base {
public:

    /// Sets the corner closure input with the values to be used to create a two-bend corner closure feature.
    /// Before using this method, the definitionType property should be examined
    /// to determine whether the corner is two-bend or three-bend, as this method is only applicable
    /// for two-bend corner closures.
    /// parameters : A TwoBendCornerClosureParameters object that encapsulates all the required parameters for creating
    /// a two-bend corner closure feature. This includes miter gap, alignment settings, bend transition type,
    /// relief shape, relief size, and relief placement options.
    /// Returns true if defining the corner closure is successful.
    bool setTwoBendCornerClosure(const core::Ptr<TwoBendCornerClosureInputDefinition>& parameters);

    /// Sets the corner closure input with the values to be used to create a three-bend corner closure feature.
    /// Before using this method, the definitionType property should be examined
    /// to determine whether the corner is two-bend or three-bend, as this method is only applicable
    /// for three-bend corner closures.
    /// parameters : A ThreeBendCornerClosureParameters object that encapsulates all the required parameters for creating
    /// a three-bend corner closure feature. This includes miter gap, alignment settings, bend transition type,
    /// relief shape, and relief radius options.
    /// Returns true if defining the corner closure is successful.
    bool setThreeBendCornerClosure(const core::Ptr<ThreeBendCornerClosureInputDefinition>& parameters);

    /// Gets the type of corner closure defined.
    CornerClosureFeatureDefinitionTypes definitionType() const;

    /// Gets and sets the dominant edge for the corner closure
    /// 
    /// After setting the edge, the definitionType property should be examined
    /// to determine whether the corner is two-bend or three-bend, as after the setting another edge
    /// the type of corner might be altered.
    core::Ptr<BRepEdge> dominantEdge() const;
    bool dominantEdge(const core::Ptr<BRepEdge>& value);

    /// Gets and sets the submissive edge for the corner closure
    /// 
    /// After setting the edge, the definitionType property should be examined
    /// to determine whether the corner is two-bend or three-bend, as after the setting another edge
    /// the type of corner might be altered.
    core::Ptr<BRepEdge> submissiveEdge() const;
    bool submissiveEdge(const core::Ptr<BRepEdge>& value);

    ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setTwoBendCornerClosure_raw(TwoBendCornerClosureInputDefinition* parameters) = 0;
    virtual bool setThreeBendCornerClosure_raw(ThreeBendCornerClosureInputDefinition* parameters) = 0;
    virtual CornerClosureFeatureDefinitionTypes definitionType_raw() const = 0;
    virtual BRepEdge* dominantEdge_raw() const = 0;
    virtual bool dominantEdge_raw(BRepEdge* value) = 0;
    virtual BRepEdge* submissiveEdge_raw() const = 0;
    virtual bool submissiveEdge_raw(BRepEdge* value) = 0;
};

// Inline wrappers

inline bool CornerClosureFeatureInput::setTwoBendCornerClosure(const core::Ptr<TwoBendCornerClosureInputDefinition>& parameters)
{
    bool res = setTwoBendCornerClosure_raw(parameters.get());
    return res;
}

inline bool CornerClosureFeatureInput::setThreeBendCornerClosure(const core::Ptr<ThreeBendCornerClosureInputDefinition>& parameters)
{
    bool res = setThreeBendCornerClosure_raw(parameters.get());
    return res;
}

inline CornerClosureFeatureDefinitionTypes CornerClosureFeatureInput::definitionType() const
{
    CornerClosureFeatureDefinitionTypes res = definitionType_raw();
    return res;
}

inline core::Ptr<BRepEdge> CornerClosureFeatureInput::dominantEdge() const
{
    core::Ptr<BRepEdge> res = dominantEdge_raw();
    return res;
}

inline bool CornerClosureFeatureInput::dominantEdge(const core::Ptr<BRepEdge>& value)
{
    return dominantEdge_raw(value.get());
}

inline core::Ptr<BRepEdge> CornerClosureFeatureInput::submissiveEdge() const
{
    core::Ptr<BRepEdge> res = submissiveEdge_raw();
    return res;
}

inline bool CornerClosureFeatureInput::submissiveEdge(const core::Ptr<BRepEdge>& value)
{
    return submissiveEdge_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CORNERCLOSUREFEATUREINPUT_API