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
#include "FilletEdgeSetInput.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_CPP__
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API
# endif
#else
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameters associated with a variable radius fillet.
class VariableRadiusFilletEdgeSetInput : public FilletEdgeSetInput {
public:

    /// Gets and sets a ValueInput object that defines the starting radius of the fillet.
    /// If a single edge is being filleted, the start radius is at the start end of the edge.
    /// If multiple tangent edges are being filleted the start radius is the start end of the
    /// first edge in the collection.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    core::Ptr<core::ValueInput> startRadius() const;
    bool startRadius(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets a ValueInput object that defines the ending radius of the fillet.
    /// If a single edge is being filleted, the end radius is at the end of the edge.
    /// If multiple tangent edges are being filleted the end radius is the open end of the
    /// last edge in the collection.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then
    /// the units can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    core::Ptr<core::ValueInput> endRadius() const;
    bool endRadius(const core::Ptr<core::ValueInput>& value);

    /// Defines any additional points along the fillet where a radius is specified.
    /// radii : An array of ValueInput objects that define the radii at positions along the edge(s).
    /// This array must have the same number of values as the positions argument.
    /// 
    /// If the ValueInput uses a real then it is interpreted as centimeters. If it is a string then the
    /// the units can be defined as part of the string (i.e. "2 in"). If no units are specified it will
    /// be interpreted using the current default units for length.
    /// positions : An array of ValueInput objects that defines the positions of any additional radii
    /// along the edge(s). The value must be between 0 and 1 and defines the percentage along the curve
    /// where a radius is defined. This array must have the same number of values as the radii argument.
    /// 
    /// If the ValueInput uses a real then it is interpreted as a unitless number. If it is a string then the
    /// the string must evaluate to a unitless number.
    /// Returns true if successful.
    bool setMidRadii(const std::vector<core::Ptr<core::ValueInput>>& radii, const std::vector<core::Ptr<core::ValueInput>>& positions);

    ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API static const char* classType();
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API const char* objectType() const override;
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ValueInput* startRadius_raw() const = 0;
    virtual bool startRadius_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* endRadius_raw() const = 0;
    virtual bool endRadius_raw(core::ValueInput* value) = 0;
    virtual bool setMidRadii_raw(core::ValueInput** radii, size_t radii_size, core::ValueInput** positions, size_t positions_size) = 0;
};

// Inline wrappers

inline core::Ptr<core::ValueInput> VariableRadiusFilletEdgeSetInput::startRadius() const
{
    core::Ptr<core::ValueInput> res = startRadius_raw();
    return res;
}

inline bool VariableRadiusFilletEdgeSetInput::startRadius(const core::Ptr<core::ValueInput>& value)
{
    return startRadius_raw(value.get());
}

inline core::Ptr<core::ValueInput> VariableRadiusFilletEdgeSetInput::endRadius() const
{
    core::Ptr<core::ValueInput> res = endRadius_raw();
    return res;
}

inline bool VariableRadiusFilletEdgeSetInput::endRadius(const core::Ptr<core::ValueInput>& value)
{
    return endRadius_raw(value.get());
}

inline bool VariableRadiusFilletEdgeSetInput::setMidRadii(const std::vector<core::Ptr<core::ValueInput>>& radii, const std::vector<core::Ptr<core::ValueInput>>& positions)
{
    core::ValueInput** radii_ = new core::ValueInput*[radii.size()];
    for(size_t i=0; i<radii.size(); ++i)
        radii_[i] = radii[i].get();
    core::ValueInput** positions_ = new core::ValueInput*[positions.size()];
    for(size_t i=0; i<positions.size(); ++i)
        positions_[i] = positions[i].get();

    bool res = setMidRadii_raw(radii_, radii.size(), positions_, positions.size());
    delete[] radii_;
    delete[] positions_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VARIABLERADIUSFILLETEDGESETINPUT_API