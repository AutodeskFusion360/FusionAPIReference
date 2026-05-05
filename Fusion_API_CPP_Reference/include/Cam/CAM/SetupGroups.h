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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SETUPGROUPS_CPP__
# define ADSK_CAM_SETUPGROUPS_API XI_EXPORT
# else
# define ADSK_CAM_SETUPGROUPS_API
# endif
#else
# define ADSK_CAM_SETUPGROUPS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Setup;
    class SetupGroup;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Collection that provides access to all of the existing Setup Groups in a document.
class SetupGroups : public core::Base {
public:

    /// The number of Setup Groups in the collection.
    size_t count() const;

    /// Function that returns the specified Setup Group using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SetupGroup> item(size_t index) const;

    /// Returns the Setup Group with the specified name.
    /// name : The name (as it appears in the browser) of the operation.
    /// Returns the specified setup or null in the case where there is no setup group with the specified name.
    core::Ptr<SetupGroup> itemByName(const std::string& name) const;

    /// Returns the Setup Group with the specified operation id.
    /// id : The id of the operation.
    /// Returns the specified Setup Group or null in the case where there is no setup group with the specified operation id.
    core::Ptr<SetupGroup> itemByOperationId(int id) const;

    /// Creates a new SetupGroup.
    /// name : The name of the group. This must be unique with respect to other
    /// SetupGroup objects in the CAM object.
    /// setups : An array of setups to add to the group. This can be an empty array to create
    /// an empty group and you can add setups to it later.
    /// Returns the newly created SetupGroup or null in the case of failure.
    core::Ptr<SetupGroup> add(const std::string& name, const std::vector<core::Ptr<Setup>>& setups);

    typedef SetupGroup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_SETUPGROUPS_API static const char* classType();
    ADSK_CAM_SETUPGROUPS_API const char* objectType() const override;
    ADSK_CAM_SETUPGROUPS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPGROUPS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual SetupGroup* item_raw(size_t index) const = 0;
    virtual SetupGroup* itemByName_raw(const char* name) const = 0;
    virtual SetupGroup* itemByOperationId_raw(int id) const = 0;
    virtual SetupGroup* add_raw(const char* name, Setup** setups, size_t setups_size) = 0;
};

// Inline wrappers

inline size_t SetupGroups::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SetupGroup> SetupGroups::item(size_t index) const
{
    core::Ptr<SetupGroup> res = item_raw(index);
    return res;
}

inline core::Ptr<SetupGroup> SetupGroups::itemByName(const std::string& name) const
{
    core::Ptr<SetupGroup> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<SetupGroup> SetupGroups::itemByOperationId(int id) const
{
    core::Ptr<SetupGroup> res = itemByOperationId_raw(id);
    return res;
}

inline core::Ptr<SetupGroup> SetupGroups::add(const std::string& name, const std::vector<core::Ptr<Setup>>& setups)
{
    Setup** setups_ = new Setup*[setups.size()];
    for(size_t i=0; i<setups.size(); ++i)
        setups_[i] = setups[i].get();

    core::Ptr<SetupGroup> res = add_raw(name.c_str(), setups_, setups.size());
    delete[] setups_;
    return res;
}

template <class OutputIterator> inline void SetupGroups::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPGROUPS_API