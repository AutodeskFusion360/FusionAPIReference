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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMNAMEDVALUES_CPP__
# define ADSK_FUSION_CUSTOMNAMEDVALUES_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMNAMEDVALUES_API
# endif
#else
# define ADSK_FUSION_CUSTOMNAMEDVALUES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A collection of named values. The values are strings that Fusion stores but can be
/// anything you choose. If you have several things you need to save you can choose to
/// combine the data into a JSON or XML representation and save it as a single custom value
/// or create a new custom value or each unique value you want to store. Fusion doesn't care
/// what the value is or what it represents but only saves and provides access to it.
class CustomNamedValues : public core::Base {
public:

    /// Adds or updates a value. If the specified ID does not exist, a new named value is
    /// added. If the ID does exist, the named value is updated with the specified value.
    /// id : The ID of the value to create or change.
    /// value : The string to assign to the value.
    /// Returns true is successful and false if it failed.
    bool addOrSetValue(const std::string& id, const std::string& value);

    /// Function that returns if a value with the specified ID exists or not.
    /// id : The ID of the value to check if it exists.
    /// Returns true if a value with the ID exists.
    bool isExistingValue(const std::string& id);

    /// Function that returns the specified value given its ID.
    /// id : The ID of the value, which was assigned when the value was created.
    /// Returns the value or an empty string if the specified ID was not found.
    std::string value(const std::string& id);

    /// Function that returns the name of a value specified by its index.
    /// index : The index of the item within the collection to return the name of. The first item in the collection has an index of 0
    /// and the last item is the count of this collection minus 1.
    /// Returns the ID of the specified item or asserts if an out of bounds index is used.
    std::string idByIndex(size_t index);

    /// The number of values in the collection.
    size_t count() const;

    /// Removes the specified value from the collection.
    /// id : The ID of the value to remove.
    /// Returns true if the value was successfully removed and false if it failed.
    /// Failure is typically because the specified ID does not exist within the collection.
    bool remove(const std::string& id);

    ADSK_FUSION_CUSTOMNAMEDVALUES_API static const char* classType();
    ADSK_FUSION_CUSTOMNAMEDVALUES_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMNAMEDVALUES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMNAMEDVALUES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool addOrSetValue_raw(const char* id, const char* value) = 0;
    virtual bool isExistingValue_raw(const char* id) = 0;
    virtual char* value_raw(const char* id) = 0;
    virtual char* idByIndex_raw(size_t index) = 0;
    virtual size_t count_raw() const = 0;
    virtual bool remove_raw(const char* id) = 0;
};

// Inline wrappers

inline bool CustomNamedValues::addOrSetValue(const std::string& id, const std::string& value)
{
    bool res = addOrSetValue_raw(id.c_str(), value.c_str());
    return res;
}

inline bool CustomNamedValues::isExistingValue(const std::string& id)
{
    bool res = isExistingValue_raw(id.c_str());
    return res;
}

inline std::string CustomNamedValues::value(const std::string& id)
{
    std::string res;

    char* p= value_raw(id.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CustomNamedValues::idByIndex(size_t index)
{
    std::string res;

    char* p= idByIndex_raw(index);
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline size_t CustomNamedValues::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool CustomNamedValues::remove(const std::string& id)
{
    bool res = remove_raw(id.c_str());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMNAMEDVALUES_API