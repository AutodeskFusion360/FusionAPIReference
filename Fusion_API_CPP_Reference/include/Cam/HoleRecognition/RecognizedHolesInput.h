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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_RECOGNIZEDHOLESINPUT_CPP__
# define ADSK_CAM_RECOGNIZEDHOLESINPUT_API XI_EXPORT
# else
# define ADSK_CAM_RECOGNIZEDHOLESINPUT_API
# endif
#else
# define ADSK_CAM_RECOGNIZEDHOLESINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object that contains the settings used by recognizedHoles and recognizedHoleGroups.
class RecognizedHolesInput : public core::Base {
public:

    /// Creates an empty input object to be passed into recognizedHoles or recognizedHoleGroups
    /// The newly created input object.
    static core::Ptr<RecognizedHolesInput> create();

    /// Partial holes will not be included in recognized holes when set to true.
    /// Holes that intersect edges are considered partial holes.
    /// If a hole has multiple segments, such as a counterbore hole, all the segments inside the hole must intersect an edge for the hole to be considered a partial hole.
    bool filterPartialHoles() const;
    bool filterPartialHoles(bool value);

    ADSK_CAM_RECOGNIZEDHOLESINPUT_API static const char* classType();
    ADSK_CAM_RECOGNIZEDHOLESINPUT_API const char* objectType() const override;
    ADSK_CAM_RECOGNIZEDHOLESINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_RECOGNIZEDHOLESINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_RECOGNIZEDHOLESINPUT_API static RecognizedHolesInput* create_raw();
    virtual bool filterPartialHoles_raw() const = 0;
    virtual bool filterPartialHoles_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<RecognizedHolesInput> RecognizedHolesInput::create()
{
    core::Ptr<RecognizedHolesInput> res = create_raw();
    return res;
}

inline bool RecognizedHolesInput::filterPartialHoles() const
{
    bool res = filterPartialHoles_raw();
    return res;
}

inline bool RecognizedHolesInput::filterPartialHoles(bool value)
{
    return filterPartialHoles_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_RECOGNIZEDHOLESINPUT_API