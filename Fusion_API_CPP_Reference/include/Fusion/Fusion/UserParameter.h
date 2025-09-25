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
#include "Parameter.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_USERPARAMETER_CPP__
# define ADSK_FUSION_USERPARAMETER_API XI_EXPORT
# else
# define ADSK_FUSION_USERPARAMETER_API
# endif
#else
# define ADSK_FUSION_USERPARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
    class UserParameters;
}}

namespace adsk { namespace fusion {

/// Represents a User Parameter.
class UserParameter : public Parameter {
public:

    /// Deletes the user parameter
    /// A parameter can only be deleted if it is a UserParameter and
    /// it is not referenced by other parameters.
    /// Returns a bool indicating if the delete was successful or not.
    /// Bug!!! Currently returning true if the parameter can't be deleted because it is
    /// being referenced by other parameters.
    bool deleteMe();

    /// Returns the Collection containing the UserParameter.
    core::Ptr<UserParameters> userParameters() const;

    /// Returns the Design containing the UserParameter.
    core::Ptr<Design> design() const;

    ADSK_FUSION_USERPARAMETER_API static const char* classType();
    ADSK_FUSION_USERPARAMETER_API const char* objectType() const override;
    ADSK_FUSION_USERPARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_USERPARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw() = 0;
    virtual UserParameters* userParameters_raw() const = 0;
    virtual Design* design_raw() const = 0;
};

// Inline wrappers

inline bool UserParameter::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<UserParameters> UserParameter::userParameters() const
{
    core::Ptr<UserParameters> res = userParameters_raw();
    return res;
}

inline core::Ptr<Design> UserParameter::design() const
{
    core::Ptr<Design> res = design_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_USERPARAMETER_API