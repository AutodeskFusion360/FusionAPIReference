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
#include "FilletEdgeSetInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_CPP__
# define ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API
# endif
#else
# define ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameters associated with an asymmetric fillet.
class AsymmetricFilletEdgeSetInput : public FilletEdgeSetInput {
public:

    /// Gets and sets a ValueInput object that defines the first offset of the asymmetric fillet.
    /// If the ValueInput uses a real value then it is interpreted as centimeters. If it is a string
    /// then the units can be defined as part of the string (i.e. "2 in") or if no units are
    /// specified it is interpreted using the current document units for length.
    core::Ptr<core::ValueInput> offsetOne() const;
    bool offsetOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets a ValueInput object that defines the second offset value of the asymmetric fillet.
    /// If the ValueInput uses a real value then it is interpreted as centimeters. If it is a string
    /// then the units can be defined as part of the string (i.e. "2 in") or if no units are
    /// specified it is interpreted using the current document units for length.
    core::Ptr<core::ValueInput> offsetTwo() const;
    bool offsetTwo(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets if offsets are reversed. If false, offsetOne is applied to the first direction
    /// and offsetTwo to the second direction. Setting to true reverses this.
    bool isFlipped() const;
    bool isFlipped(bool value);

    ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API static const char* classType();
    ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API const char* objectType() const override;
    ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ValueInput* offsetOne_raw() const = 0;
    virtual bool offsetOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* offsetTwo_raw() const = 0;
    virtual bool offsetTwo_raw(core::ValueInput* value) = 0;
    virtual bool isFlipped_raw() const = 0;
    virtual bool isFlipped_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ValueInput> AsymmetricFilletEdgeSetInput::offsetOne() const
{
    core::Ptr<core::ValueInput> res = offsetOne_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSetInput::offsetOne(const core::Ptr<core::ValueInput>& value)
{
    return offsetOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> AsymmetricFilletEdgeSetInput::offsetTwo() const
{
    core::Ptr<core::ValueInput> res = offsetTwo_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSetInput::offsetTwo(const core::Ptr<core::ValueInput>& value)
{
    return offsetTwo_raw(value.get());
}

inline bool AsymmetricFilletEdgeSetInput::isFlipped() const
{
    bool res = isFlipped_raw();
    return res;
}

inline bool AsymmetricFilletEdgeSetInput::isFlipped(bool value)
{
    return isFlipped_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASYMMETRICFILLETEDGESETINPUT_API