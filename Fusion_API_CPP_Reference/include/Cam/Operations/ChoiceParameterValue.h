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
#include "ParameterValue.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CHOICEPARAMETERVALUE_CPP__
# define ADSK_CAM_CHOICEPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CHOICEPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CHOICEPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// A parameter value that is a list of choices.
class ChoiceParameterValue : public ParameterValue {
public:

    /// Method that returns the list of available choices.
    /// names : An array of the names of the choices. These coincide with the array of possible values returned by the values argument.
    /// values : An array of the possible values. These coincide with the array of names returned by the names argument.
    /// Returns true if the call was successful.
    bool getChoices(std::vector<std::string>& names, std::vector<std::string>& values);

    /// Get or set the value of the parameter.
    /// This value will correspond to one of the available values of the parameter.
    std::string value() const;
    bool value(const std::string& value);

    ADSK_CAM_CHOICEPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CHOICEPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CHOICEPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CHOICEPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool getChoices_raw(char**& names, size_t& names_size, char**& values, size_t& values_size) = 0;
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
};

// Inline wrappers

inline bool ChoiceParameterValue::getChoices(std::vector<std::string>& names, std::vector<std::string>& values)
{
    char** names_ = nullptr;
    size_t names_size;
    char** values_ = nullptr;
    size_t values_size;

    bool res = getChoices_raw(names_, names_size, values_, values_size);
    if(names_)
    {
        names.resize( names_size);
        for(size_t i=0; i< names_size; ++i)
        {
            char* pChar = names_[i];
            if(pChar)
                names[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(names_);
    }
    if(values_)
    {
        values.resize( values_size);
        for(size_t i=0; i< values_size; ++i)
        {
            char* pChar = values_[i];
            if(pChar)
                values[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(values_);
    }
    return res;
}

inline std::string ChoiceParameterValue::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ChoiceParameterValue::value(const std::string& value)
{
    return value_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CHOICEPARAMETERVALUE_API