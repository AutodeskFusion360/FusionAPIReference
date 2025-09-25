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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_CPP__
# define ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API
# endif
#else
# define ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameter associated with a constant radius fillet.
class ConstantRadiusFilletEdgeSetInput : public FilletEdgeSetInput {
public:

    /// Gets and sets ValueInput object that defines the radius of the fillet. If the ValueInput uses
    /// a real then it is interpreted as centimeters. If it is a string then the units
    /// can be defined as part of the string (i.e. "2 in") or if no units are specified
    /// it is interpreted using the current default units for length.
    core::Ptr<core::ValueInput> radius() const;
    bool radius(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API static const char* classType();
    ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API const char* objectType() const override;
    ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ValueInput* radius_raw() const = 0;
    virtual bool radius_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ValueInput> ConstantRadiusFilletEdgeSetInput::radius() const
{
    core::Ptr<core::ValueInput> res = radius_raw();
    return res;
}

inline bool ConstantRadiusFilletEdgeSetInput::radius(const core::Ptr<core::ValueInput>& value)
{
    return radius_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTANTRADIUSFILLETEDGESETINPUT_API