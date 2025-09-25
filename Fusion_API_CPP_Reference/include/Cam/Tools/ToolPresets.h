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
# ifdef __COMPILING_ADSK_CAM_TOOLPRESETS_CPP__
# define ADSK_CAM_TOOLPRESETS_API XI_EXPORT
# else
# define ADSK_CAM_TOOLPRESETS_API
# endif
#else
# define ADSK_CAM_TOOLPRESETS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ToolPreset;
}}

namespace adsk { namespace cam {

/// ToolPresets represents a collection of ToolPreset.
/// It provides access and allows the manipulation like removing and extending the list.
class ToolPresets : public core::Base {
public:

    /// The number of Presets of the owning Tool.
    size_t count() const;

    /// Get Preset by index.
    /// index : Index of the Preset in the owning Tool that should be returned.
    /// Returns Preset at by given index, null otherwise
    core::Ptr<ToolPreset> item(size_t index) const;

    /// Search presets by name. Returns all presets for which the name matches the given pattern.
    /// Compare is case insensitive and characters * and ? are used for wild-card matching.
    /// name : Name of the Preset to search for. The string can define a pattern with wild-card matching.
    /// '*' represents an arbitrary sequence including the empty sequence and '?' represents one arbitrary character.
    /// Returns all presets with matching name.
    std::vector<core::Ptr<ToolPreset>> itemsByName(const std::string& name) const;

    /// Creates and inserts a new Preset at the end of the Preset collection of the owning Tool.
    /// The new Preset will have the same values as the owning Tool.
    /// Returns the newly created Preset
    core::Ptr<ToolPreset> add();

    /// Remove Preset by index from the owning Tool.
    /// index : Index of the Preset in the Tool that should be removed.
    /// Returns true for successful deletion, false otherwise
    bool remove(size_t index);

    typedef ToolPreset iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_TOOLPRESETS_API static const char* classType();
    ADSK_CAM_TOOLPRESETS_API const char* objectType() const override;
    ADSK_CAM_TOOLPRESETS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLPRESETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual ToolPreset* item_raw(size_t index) const = 0;
    virtual ToolPreset** itemsByName_raw(const char* name, size_t& return_size) const = 0;
    virtual ToolPreset* add_raw() = 0;
    virtual bool remove_raw(size_t index) = 0;
};

// Inline wrappers

inline size_t ToolPresets::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ToolPreset> ToolPresets::item(size_t index) const
{
    core::Ptr<ToolPreset> res = item_raw(index);
    return res;
}

inline std::vector<core::Ptr<ToolPreset>> ToolPresets::itemsByName(const std::string& name) const
{
    std::vector<core::Ptr<ToolPreset>> res;
    size_t s;

    ToolPreset** p= itemsByName_raw(name.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ToolPreset> ToolPresets::add()
{
    core::Ptr<ToolPreset> res = add_raw();
    return res;
}

inline bool ToolPresets::remove(size_t index)
{
    bool res = remove_raw(index);
    return res;
}

template <class OutputIterator> inline void ToolPresets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLPRESETS_API