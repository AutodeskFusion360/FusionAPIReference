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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SETUPS_CPP__
# define ADSK_CAM_SETUPS_API XI_EXPORT
# else
# define ADSK_CAM_SETUPS_API
# endif
#else
# define ADSK_CAM_SETUPS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Setup;
    class SetupInput;
}}

namespace adsk { namespace cam {

/// Collection that provides access to all of the existing setups in a document.
class Setups : public core::Base {
public:

    /// Function that returns the specified setup using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Setup> item(size_t index) const;

    /// Returns the setup with the specified name.
    /// name : The name (as it appears in the browser) of the operation.
    /// Returns the specified setup or null in the case where there is no setup with the specified name.
    core::Ptr<Setup> itemByName(const std::string& name) const;

    /// The number of setups in the collection.
    size_t count() const;

    /// Returns the setup with the specified operation id.
    /// id : The id of the operation.
    /// Returns the specified setup or null in the case where there is no setup with the specified operation id.
    core::Ptr<Setup> itemByOperationId(int id) const;

    /// Creates a new SetupInput object that is used to specify the input needed to create a new setup.
    /// type : The type specifies the type of the setup that should be created.
    /// Returns new SetupInput object.
    core::Ptr<SetupInput> createInput(OperationTypes type);

    /// Creates a new setup.
    /// input : The input holds all the information needed to create a valid setup.
    /// Returns newly created Setup instance.
    core::Ptr<Setup> add(const core::Ptr<SetupInput>& input);

    typedef Setup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_SETUPS_API static const char* classType();
    ADSK_CAM_SETUPS_API const char* objectType() const override;
    ADSK_CAM_SETUPS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Setup* item_raw(size_t index) const = 0;
    virtual Setup* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Setup* itemByOperationId_raw(int id) const = 0;
    virtual SetupInput* createInput_raw(OperationTypes type) = 0;
    virtual Setup* add_raw(SetupInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<Setup> Setups::item(size_t index) const
{
    core::Ptr<Setup> res = item_raw(index);
    return res;
}

inline core::Ptr<Setup> Setups::itemByName(const std::string& name) const
{
    core::Ptr<Setup> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Setups::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Setup> Setups::itemByOperationId(int id) const
{
    core::Ptr<Setup> res = itemByOperationId_raw(id);
    return res;
}

inline core::Ptr<SetupInput> Setups::createInput(OperationTypes type)
{
    core::Ptr<SetupInput> res = createInput_raw(type);
    return res;
}

inline core::Ptr<Setup> Setups::add(const core::Ptr<SetupInput>& input)
{
    core::Ptr<Setup> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void Setups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPS_API