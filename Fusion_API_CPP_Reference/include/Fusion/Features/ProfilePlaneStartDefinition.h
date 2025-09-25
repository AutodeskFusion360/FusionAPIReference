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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PROFILEPLANESTARTDEFINITION_CPP__
# define ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API
# endif
#else
# define ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Plane;
}}

namespace adsk { namespace fusion {

/// A definition object that is used to define a feature whose start plane is the sketch plane of the profile.
class ProfilePlaneStartDefinition : public ExtentDefinition {
public:

    /// Statically creates a new ProfilePlaneStartDefinition object. This is used as input when creating a new
    /// feature and defining the starting condition.
    /// Returns the newly created ProfilePlaneStartDefinition object or null in the case of a failure.
    static core::Ptr<ProfilePlaneStartDefinition> create();

    /// Returns the geometric definition of the profile plane.
    core::Ptr<core::Plane> profilePlane() const;

    ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API static const char* classType();
    ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API static ProfilePlaneStartDefinition* create_raw();
    virtual core::Plane* profilePlane_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ProfilePlaneStartDefinition> ProfilePlaneStartDefinition::create()
{
    core::Ptr<ProfilePlaneStartDefinition> res = create_raw();
    return res;
}

inline core::Ptr<core::Plane> ProfilePlaneStartDefinition::profilePlane() const
{
    core::Ptr<core::Plane> res = profilePlane_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PROFILEPLANESTARTDEFINITION_API