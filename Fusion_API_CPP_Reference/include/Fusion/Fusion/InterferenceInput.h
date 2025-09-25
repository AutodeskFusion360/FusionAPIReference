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
# ifdef __COMPILING_ADSK_FUSION_INTERFERENCEINPUT_CPP__
# define ADSK_FUSION_INTERFERENCEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_INTERFERENCEINPUT_API
# endif
#else
# define ADSK_FUSION_INTERFERENCEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}

namespace adsk { namespace fusion {

/// Used to gather and define the various inputs and settings needed to calculate interference. This
/// object is created using the Design.createInterferenceInput method.
class InterferenceInput : public core::Base {
public:

    /// Gets and set an ObjectCollection containing BRepBody and/or Occurrence entities that
    /// will be used when checking for interference. All entities must be in the context of
    /// the root component of the top-level design.
    core::Ptr<core::ObjectCollection> entities() const;
    bool entities(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets whether any coincident faces in the input bodies are considered as interference
    /// or not. This property defaults to False for a newly created InterferenceInput object.
    bool areCoincidentFacesIncluded() const;
    bool areCoincidentFacesIncluded(bool value);

    ADSK_FUSION_INTERFERENCEINPUT_API static const char* classType();
    ADSK_FUSION_INTERFERENCEINPUT_API const char* objectType() const override;
    ADSK_FUSION_INTERFERENCEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_INTERFERENCEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* entities_raw() const = 0;
    virtual bool entities_raw(core::ObjectCollection* value) = 0;
    virtual bool areCoincidentFacesIncluded_raw() const = 0;
    virtual bool areCoincidentFacesIncluded_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> InterferenceInput::entities() const
{
    core::Ptr<core::ObjectCollection> res = entities_raw();
    return res;
}

inline bool InterferenceInput::entities(const core::Ptr<core::ObjectCollection>& value)
{
    return entities_raw(value.get());
}

inline bool InterferenceInput::areCoincidentFacesIncluded() const
{
    bool res = areCoincidentFacesIncluded_raw();
    return res;
}

inline bool InterferenceInput::areCoincidentFacesIncluded(bool value)
{
    return areCoincidentFacesIncluded_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_INTERFERENCEINPUT_API