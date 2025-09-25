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
# ifdef __COMPILING_ADSK_CAM_CAMFOLDERS_CPP__
# define ADSK_CAM_CAMFOLDERS_API XI_EXPORT
# else
# define ADSK_CAM_CAMFOLDERS_API
# endif
#else
# define ADSK_CAM_CAMFOLDERS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMFolder;
}}

namespace adsk { namespace cam {

/// Collection that provides access to the folders within an existing setup, folder or pattern.
class CAMFolders : public core::Base {
public:

    /// Function that returns the specified folder using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CAMFolder> item(size_t index) const;

    /// Returns the folder with the specified name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the folder.
    /// Returns the specified folder or null in the case where there is no folder with the specified name.
    core::Ptr<CAMFolder> itemByName(const std::string& name) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Returns the folder with the specified operation id.
    /// id : The id of the folder.
    /// Returns the specified folder or null in the case where there is no folder with the specified operation id.
    core::Ptr<CAMFolder> itemByOperationId(int id) const;

    /// Creates a folder with the specified name and returns it as CAMFolder object.
    /// name : The name (as it appears in the browser) of the folder.
    /// Returns the newly created folder or null if folder can't be created.
    core::Ptr<CAMFolder> addFolder(const std::string& name);

    typedef CAMFolder iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CAMFOLDERS_API static const char* classType();
    ADSK_CAM_CAMFOLDERS_API const char* objectType() const override;
    ADSK_CAM_CAMFOLDERS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMFOLDERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMFolder* item_raw(size_t index) const = 0;
    virtual CAMFolder* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CAMFolder* itemByOperationId_raw(int id) const = 0;
    virtual CAMFolder* addFolder_raw(const char* name) = 0;
};

// Inline wrappers

inline core::Ptr<CAMFolder> CAMFolders::item(size_t index) const
{
    core::Ptr<CAMFolder> res = item_raw(index);
    return res;
}

inline core::Ptr<CAMFolder> CAMFolders::itemByName(const std::string& name) const
{
    core::Ptr<CAMFolder> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CAMFolders::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CAMFolder> CAMFolders::itemByOperationId(int id) const
{
    core::Ptr<CAMFolder> res = itemByOperationId_raw(id);
    return res;
}

inline core::Ptr<CAMFolder> CAMFolders::addFolder(const std::string& name)
{
    core::Ptr<CAMFolder> res = addFolder_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void CAMFolders::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMFOLDERS_API