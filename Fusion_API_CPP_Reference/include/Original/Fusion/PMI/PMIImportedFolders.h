//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDFOLDERS_CPP__
# define ADSK_FUSION_PMIIMPORTEDFOLDERS_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDFOLDERS_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDFOLDERS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIImportedFolder;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides access to the all the PMIImportedFolder objects in a component.
class PMIImportedFolders : public core::Base {
public:

    /// Gets the number of PMIImportedFolders in the collection.
    size_t count() const;

    /// Gets the specified PMIImportedFolder using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PMIImportedFolder> item(size_t index) const;

    /// Gets the specified PMIImportedFolder from the collection using a name.
    /// name : The name of the PMIImportedFolder within the collection to return.
    /// Returns the specified item or null if no item with the specified name was found.
    core::Ptr<PMIImportedFolder> itemByName(const std::string& name) const;

    typedef PMIImportedFolder iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PMIIMPORTEDFOLDERS_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDFOLDERS_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDFOLDERS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDFOLDERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual PMIImportedFolder* item_raw(size_t index) const = 0;
    virtual PMIImportedFolder* itemByName_raw(const char* name) const = 0;
};

// Inline wrappers

inline size_t PMIImportedFolders::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<PMIImportedFolder> PMIImportedFolders::item(size_t index) const
{
    core::Ptr<PMIImportedFolder> res = item_raw(index);
    return res;
}

inline core::Ptr<PMIImportedFolder> PMIImportedFolders::itemByName(const std::string& name) const
{
    core::Ptr<PMIImportedFolder> res = itemByName_raw(name.c_str());
    return res;
}

template <class OutputIterator> inline void PMIImportedFolders::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDFOLDERS_API