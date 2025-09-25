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
# ifdef __COMPILING_ADSK_CAM_NCPROGRAMS_CPP__
# define ADSK_CAM_NCPROGRAMS_API XI_EXPORT
# else
# define ADSK_CAM_NCPROGRAMS_API
# endif
#else
# define ADSK_CAM_NCPROGRAMS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class NCProgram;
    class NCProgramInput;
}}

namespace adsk { namespace cam {

/// Container for all NC programs. Referenced from CAM product to access NC programs in a document, similar to what Setups is for all setup objects.
class NCPrograms : public core::Base {
public:

    /// The number of items in the collection.
    size_t count() const;

    /// Function that returns the specified NC program using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<NCProgram> item(size_t index) const;

    /// Returns the NC program with the specified name.
    /// name : The name (as it appears in the browser) of the operation.
    /// Returns the specified NC program or null in the case where there is no NC program with the specified name.
    /// If there are multiple NC programs with the same name, the first item in the tree will be returned.
    core::Ptr<NCProgram> itemByName(const std::string& name) const;

    /// Returns the NC program with the specified operation id.
    /// id : The id of the NC program.
    /// Returns the specified NC program or null in the case where there is no NC program with the specified operation id.
    core::Ptr<NCProgram> itemByOperationId(int id) const;

    /// Create a new NCProgramInput object. Use properties and methods on this object
    /// to define the NC program you want to create and then use the Add method, passing in
    /// the NCProgramInput object.
    /// Returns a new NCProgramInput object.
    core::Ptr<NCProgramInput> createInput();

    /// Creates a new NC program.
    /// input : NCProgramInput which will be used to create the NC program.
    /// Returns the created NC program.
    core::Ptr<NCProgram> add(const core::Ptr<NCProgramInput>& input);

    typedef NCProgram iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_NCPROGRAMS_API static const char* classType();
    ADSK_CAM_NCPROGRAMS_API const char* objectType() const override;
    ADSK_CAM_NCPROGRAMS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NCPROGRAMS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual NCProgram* item_raw(size_t index) const = 0;
    virtual NCProgram* itemByName_raw(const char* name) const = 0;
    virtual NCProgram* itemByOperationId_raw(int id) const = 0;
    virtual NCProgramInput* createInput_raw() = 0;
    virtual NCProgram* add_raw(NCProgramInput* input) = 0;
};

// Inline wrappers

inline size_t NCPrograms::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<NCProgram> NCPrograms::item(size_t index) const
{
    core::Ptr<NCProgram> res = item_raw(index);
    return res;
}

inline core::Ptr<NCProgram> NCPrograms::itemByName(const std::string& name) const
{
    core::Ptr<NCProgram> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<NCProgram> NCPrograms::itemByOperationId(int id) const
{
    core::Ptr<NCProgram> res = itemByOperationId_raw(id);
    return res;
}

inline core::Ptr<NCProgramInput> NCPrograms::createInput()
{
    core::Ptr<NCProgramInput> res = createInput_raw();
    return res;
}

inline core::Ptr<NCProgram> NCPrograms::add(const core::Ptr<NCProgramInput>& input)
{
    core::Ptr<NCProgram> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void NCPrograms::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NCPROGRAMS_API