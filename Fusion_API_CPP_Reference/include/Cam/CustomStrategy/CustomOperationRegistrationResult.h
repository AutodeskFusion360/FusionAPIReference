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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_CPP__
# define ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API XI_EXPORT
# else
# define ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API
# endif
#else
# define ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Holds information gathered during the registration of a custom strategy.
class CustomOperationRegistrationResult : public core::Base {
public:

    /// The name of the newly registered strategy, read out from the XML definition.
    std::string strategyName() const;

    /// Returns true if the registration did not encounter any errors.
    /// This value is dependent on the collidingParametersBehavior flag
    /// on the CustomOperationDefinitionInput used to register the strategy.
    bool isRegistrationSuccessful() const;

    /// Returns true if the strategy has overwritten a previous registration.
    bool isOverwritingPreviousRegistration() const;

    /// Lists all metaparameters that collide with an already loaded metaparameter.
    /// How those collisions are handled depends on the strategyRegistrationIssues property
    /// on the CustomOperationDefinitionInput used to register the strategy.
    std::vector<std::string> collidingMetaparameters() const;

    /// Lists all unsupported metaparameters in the strategy definition.
    std::vector<std::string> unsupportedMetaparameters() const;

    /// Lists all parameters that collide with an already loaded parameter.
    /// This could happen if:
    /// - a parameter is included in multiple metaparameters
    /// - a custom parameter has the same name as a parameter within a used metaparameter
    /// - two or more custom parameters have the same name
    /// How those collisions are handled depends on the strategyRegistrationIssues property
    /// on the CustomOperationDefinitionInput used to register the strategy.
    std::vector<std::string> collidingParameters() const;

    /// Lists all parameters which could not be overridden, because they are not part of a metaparameter.
    /// Missing overrides are always treated as a warning.
    std::vector<std::string> unsupportedParameterOverrides() const;

    /// Returns the warning message generated during the registration.
    std::string warningMessage() const;

    /// Returns the error message generated during the registration.
    std::string errorMessage() const;

    ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API static const char* classType();
    ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API const char* objectType() const override;
    ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* strategyName_raw() const = 0;
    virtual bool isRegistrationSuccessful_raw() const = 0;
    virtual bool isOverwritingPreviousRegistration_raw() const = 0;
    virtual char** collidingMetaparameters_raw(size_t& return_size) const = 0;
    virtual char** unsupportedMetaparameters_raw(size_t& return_size) const = 0;
    virtual char** collidingParameters_raw(size_t& return_size) const = 0;
    virtual char** unsupportedParameterOverrides_raw(size_t& return_size) const = 0;
    virtual char* warningMessage_raw() const = 0;
    virtual char* errorMessage_raw() const = 0;
};

// Inline wrappers

inline std::string CustomOperationRegistrationResult::strategyName() const
{
    std::string res;

    char* p= strategyName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomOperationRegistrationResult::isRegistrationSuccessful() const
{
    bool res = isRegistrationSuccessful_raw();
    return res;
}

inline bool CustomOperationRegistrationResult::isOverwritingPreviousRegistration() const
{
    bool res = isOverwritingPreviousRegistration_raw();
    return res;
}

inline std::vector<std::string> CustomOperationRegistrationResult::collidingMetaparameters() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= collidingMetaparameters_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> CustomOperationRegistrationResult::unsupportedMetaparameters() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= unsupportedMetaparameters_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> CustomOperationRegistrationResult::collidingParameters() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= collidingParameters_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> CustomOperationRegistrationResult::unsupportedParameterOverrides() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= unsupportedParameterOverrides_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CustomOperationRegistrationResult::warningMessage() const
{
    std::string res;

    char* p= warningMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CustomOperationRegistrationResult::errorMessage() const
{
    std::string res;

    char* p= errorMessage_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CUSTOMOPERATIONREGISTRATIONRESULT_API