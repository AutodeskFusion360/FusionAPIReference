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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_USERPARAMETERS_CPP__
# define ADSK_FUSION_USERPARAMETERS_API XI_EXPORT
# else
# define ADSK_FUSION_USERPARAMETERS_API
# endif
#else
# define ADSK_FUSION_USERPARAMETERS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Design;
    class UserParameter;
}}

namespace adsk { namespace fusion {

/// Provides access to the User Parameters within a design and provides
/// methods to create new user parameters.
class UserParameters : public core::Base {
public:

    /// Function that returns the specified User Parameter using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<UserParameter> item(size_t index) const;

    /// Function that returns the specified User Parameter using the name of the parameter
    /// as it is displayed in the parameters dialog.
    /// name : The name of the User Parameter as it is displayed in the parameters dialog
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<UserParameter> itemByName(const std::string& name) const;

    /// Returns the number of parameters in the collection.
    size_t count() const;

    /// Returns the design that owns the user parameters collection.
    core::Ptr<Design> design() const;

    /// Adds a new user parameter to the collection.
    /// name : The name of the parameter. This is the name shown in the parameters dialog
    /// value : ValueInput object that specifies the value of the parameter. If the ValueInput was created using a real,
    /// the value will be interpreted using the internal unit for the unit type specified by the "units" argument.
    /// For example, if the ValueInput was created using the real value 5 and the input to the "units" argument is
    /// any valid length unit, the value will be interpreted as 5 centimeters since centimeters is the internal unit
    /// for lengths. If the "units" argument is a valid angle unit the value will be interpreted as 5 radians.
    /// 
    /// If the ValueInput was created using a string, the string is used as-is for the expression of the parameter.
    /// This means if there are units as part of the string it must evaluate to the same unit type as that specified
    /// by the "units" argument and if no units are specified it will use the current default units specified for
    /// the current document. For example, if the ValueInput was created with the string "5 in", then the "units"
    /// argument must define any valid length so they are compatible. If the ValueInput was created with the string "5",
    /// any unit type can be used and the result will be 5 of that unit.
    /// 
    /// When using a ValueInput created using a string, it's the same as creating a parameter in the user-interface.
    /// You can specify any valid expression, i.e. "5", "5 in", "5 in / 2", "5 + Length", etc. and you can choose
    /// from many different types of units. The only requirement is that the units must match in type. For example,
    /// they must both be lengths, or they must both be angles.
    /// units : The units to use for the value of the parameter.
    /// Units specified must match the units specified (if any) in the ValueInput object.
    /// 
    /// To create a parameter with no units you can specify either an empty string.
    /// comment : The comment to display in the parameters dialog. Specify an empty string ("") for no comment
    /// Returns the newly created UserParameter or null if the creation failed.
    core::Ptr<UserParameter> add(const std::string& name, const core::Ptr<core::ValueInput>& value, const std::string& units, const std::string& comment);

    /// Returns the user parameters in the design as an array.
    /// Returns an array of the user parameters in the design.
    std::vector<core::Ptr<UserParameter>> asArray() const;

    /// Function that exports a list of user parameters to a csv file.
    /// userParameterArray : The array of user parameters to export.
    /// filename : The full filename (path and file) of the file to write the parameters to.
    /// Returns whether the export was successful.
    bool exportUserParameters(const std::vector<core::Ptr<UserParameter>>& userParameterArray, const std::string& filename) const;

    /// Function that imports a list of user parameters from a csv file.
    /// 
    /// The format of the csv file is as follows:
    /// It must have at least two rows - Header followed by a row of parameter.
    /// It must be encoded in UTF8 format.
    /// It must contain at least six columns - name, unit, expression, value, comment, and favorite
    /// where favorite is either true or false.
    /// The columns must only have a comma delimiter.
    /// Any locale will work but no thousands.
    /// expression column support double quotes.
    /// comment can either be single line or multi line. If multi line, it must be in double quotes.
    /// 
    /// Here is an example of a csv file with two rows
    /// Name,Unit,Expression,Value,Comments,Favorite
    /// p1,mm,32 mm,32,the first parameter,FALSE
    /// 
    /// The function exportUserParameters could be used to see what a csv file looks like.
    /// filename : The full filename (path and file) of the file to read the parameters from.
    /// Returns whether the import was successful.
    bool importUserParameters(const std::string& filename);

    typedef UserParameter iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_USERPARAMETERS_API static const char* classType();
    ADSK_FUSION_USERPARAMETERS_API const char* objectType() const override;
    ADSK_FUSION_USERPARAMETERS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_USERPARAMETERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UserParameter* item_raw(size_t index) const = 0;
    virtual UserParameter* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Design* design_raw() const = 0;
    virtual UserParameter* add_raw(const char* name, core::ValueInput* value, const char* units, const char* comment) = 0;
    virtual UserParameter** asArray_raw(size_t& return_size) const = 0;
    virtual bool exportUserParameters_raw(UserParameter** userParameterArray, size_t userParameterArray_size, const char* filename) const = 0;
    virtual bool importUserParameters_raw(const char* filename) = 0;
};

// Inline wrappers

inline core::Ptr<UserParameter> UserParameters::item(size_t index) const
{
    core::Ptr<UserParameter> res = item_raw(index);
    return res;
}

inline core::Ptr<UserParameter> UserParameters::itemByName(const std::string& name) const
{
    core::Ptr<UserParameter> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t UserParameters::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Design> UserParameters::design() const
{
    core::Ptr<Design> res = design_raw();
    return res;
}

inline core::Ptr<UserParameter> UserParameters::add(const std::string& name, const core::Ptr<core::ValueInput>& value, const std::string& units, const std::string& comment)
{
    core::Ptr<UserParameter> res = add_raw(name.c_str(), value.get(), units.c_str(), comment.c_str());
    return res;
}

inline std::vector<core::Ptr<UserParameter>> UserParameters::asArray() const
{
    std::vector<core::Ptr<UserParameter>> res;
    size_t s;

    UserParameter** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool UserParameters::exportUserParameters(const std::vector<core::Ptr<UserParameter>>& userParameterArray, const std::string& filename) const
{
    UserParameter** userParameterArray_ = new UserParameter*[userParameterArray.size()];
    for(size_t i=0; i<userParameterArray.size(); ++i)
        userParameterArray_[i] = userParameterArray[i].get();

    bool res = exportUserParameters_raw(userParameterArray_, userParameterArray.size(), filename.c_str());
    delete[] userParameterArray_;
    return res;
}

inline bool UserParameters::importUserParameters(const std::string& filename)
{
    bool res = importUserParameters_raw(filename.c_str());
    return res;
}

template <class OutputIterator> inline void UserParameters::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_USERPARAMETERS_API