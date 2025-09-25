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
# ifdef __COMPILING_ADSK_CAM_MACHINEELEMENTS_CPP__
# define ADSK_CAM_MACHINEELEMENTS_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEELEMENTS_API
# endif
#else
# define ADSK_CAM_MACHINEELEMENTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineElement;
}}

namespace adsk { namespace cam {

/// Collection of machine elements.
/// These elements contain the properties that define the machine.
class MachineElements : public core::Base {
public:

    /// Get the element at a particular index in the collection.
    /// index : Index of element.
    /// Returns the element at the given index.
    core::Ptr<MachineElement> item(int index) const;

    /// Returns the default item of the given type.
    /// In most cases this will be the element with an element ID of "default".
    /// typeId : Element typeId to get the default for. See staticTypeId for the desired element type.
    /// Returns the specified Element or null if no matching type ID is found.
    core::Ptr<MachineElement> defaultItemByType(const std::string& typeId) const;

    /// Gets the element of specified type.
    /// typeId : Element typeId to filter. See staticTypeId for the desired element type.
    /// Returns a list of elements filtered to the specified type or an empty array if there is no match with the specified typeId.
    std::vector<core::Ptr<MachineElement>> itemsByType(const std::string& typeId) const;

    /// Gets an element of a specific type by ID.
    /// typeId : Element typeId to filter. See staticTypeId for the desired element type.
    /// elementId : Element ID to select.
    /// Returns an element of the desired type with the specified ID or null in the case where no match is found.
    core::Ptr<MachineElement> itemById(const std::string& typeId, const std::string& elementId) const;

    /// Total number of elements in collection.
    size_t count() const;

    /// Number of elements of specified type.
    /// typeId : Element typeId to filter. See staticTypeId for the desired element type.
    /// Returns the number of elements of the requested type. Returns zero if no elements match the specified type ID.
    size_t countByType(const std::string& typeId) const;

    typedef MachineElement iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_MACHINEELEMENTS_API static const char* classType();
    ADSK_CAM_MACHINEELEMENTS_API const char* objectType() const override;
    ADSK_CAM_MACHINEELEMENTS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEELEMENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MachineElement* item_raw(int index) const = 0;
    virtual MachineElement* defaultItemByType_raw(const char* typeId) const = 0;
    virtual MachineElement** itemsByType_raw(const char* typeId, size_t& return_size) const = 0;
    virtual MachineElement* itemById_raw(const char* typeId, const char* elementId) const = 0;
    virtual size_t count_raw() const = 0;
    virtual size_t countByType_raw(const char* typeId) const = 0;
};

// Inline wrappers

inline core::Ptr<MachineElement> MachineElements::item(int index) const
{
    core::Ptr<MachineElement> res = item_raw(index);
    return res;
}

inline core::Ptr<MachineElement> MachineElements::defaultItemByType(const std::string& typeId) const
{
    core::Ptr<MachineElement> res = defaultItemByType_raw(typeId.c_str());
    return res;
}

inline std::vector<core::Ptr<MachineElement>> MachineElements::itemsByType(const std::string& typeId) const
{
    std::vector<core::Ptr<MachineElement>> res;
    size_t s;

    MachineElement** p= itemsByType_raw(typeId.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MachineElement> MachineElements::itemById(const std::string& typeId, const std::string& elementId) const
{
    core::Ptr<MachineElement> res = itemById_raw(typeId.c_str(), elementId.c_str());
    return res;
}

inline size_t MachineElements::count() const
{
    size_t res = count_raw();
    return res;
}

inline size_t MachineElements::countByType(const std::string& typeId) const
{
    size_t res = countByType_raw(typeId.c_str());
    return res;
}

template <class OutputIterator> inline void MachineElements::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEELEMENTS_API