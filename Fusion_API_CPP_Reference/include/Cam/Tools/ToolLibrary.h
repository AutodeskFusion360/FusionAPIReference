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
# ifdef __COMPILING_ADSK_CAM_TOOLLIBRARY_CPP__
# define ADSK_CAM_TOOLLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_TOOLLIBRARY_API
# endif
#else
# define ADSK_CAM_TOOLLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Tool;
    class ToolQuery;
}}

namespace adsk { namespace cam {

/// ToolLibrary represents a collection of Tool objects.
class ToolLibrary : public core::Base {
public:

    /// Creates a ToolLibrary by given JSON-string. Raises an error if the given JSON is invalid.
    /// json : The JSON contains all tools that should be added to the new ToolLibrary
    /// Returns the newly created ToolLibrary.
    static core::Ptr<ToolLibrary> createFromJson(const std::string& json);

    /// Creates an empty ToolLibrary.
    /// Returns the newly created ToolLibrary.
    static core::Ptr<ToolLibrary> createEmpty();

    /// The number of tools in the ToolLibrary.
    size_t count() const;

    /// Get Tool by index in ToolLibrary.
    /// index : Index of the Tool in the ToolLibrary.
    /// Returns the Tool in the ToolLibrary by given index.
    core::Ptr<Tool> item(size_t index) const;

    /// Inserts a Tool at the end of the ToolLibrary.
    /// tool : The Tool that should be added.
    /// Returns true for successful insertion, false otherwise
    bool add(const core::Ptr<Tool>& tool);

    /// Remove Tool by index from ToolLibrary.
    /// index : Index of the Tool in the ToolLibrary that should be removed.
    /// Returns true for successful deletion, false otherwise
    bool remove(size_t index);

    /// Generate and return JSON string that contains all tools of that list.
    /// Returns JSON string that contains all tools of that list.
    std::string toJson() const;

    /// Creates a new ToolQuery that is used to query the library for tools matching
    /// the query.
    /// Returns a new ToolQuery. The query is predefined by given parameter.
    core::Ptr<ToolQuery> createQuery() const;

    typedef Tool iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_TOOLLIBRARY_API static const char* classType();
    ADSK_CAM_TOOLLIBRARY_API const char* objectType() const override;
    ADSK_CAM_TOOLLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_TOOLLIBRARY_API static ToolLibrary* createFromJson_raw(const char* json);
    ADSK_CAM_TOOLLIBRARY_API static ToolLibrary* createEmpty_raw();
    virtual size_t count_raw() const = 0;
    virtual Tool* item_raw(size_t index) const = 0;
    virtual bool add_raw(Tool* tool) = 0;
    virtual bool remove_raw(size_t index) = 0;
    virtual char* toJson_raw() const = 0;
    virtual ToolQuery* createQuery_raw() const = 0;
    virtual void placeholderToolLibrary0() {}
    virtual void placeholderToolLibrary1() {}
    virtual void placeholderToolLibrary2() {}
    virtual void placeholderToolLibrary3() {}
    virtual void placeholderToolLibrary4() {}
    virtual void placeholderToolLibrary5() {}
    virtual void placeholderToolLibrary6() {}
    virtual void placeholderToolLibrary7() {}
    virtual void placeholderToolLibrary8() {}
    virtual void placeholderToolLibrary9() {}
    virtual void placeholderToolLibrary10() {}
    virtual void placeholderToolLibrary11() {}
    virtual void placeholderToolLibrary12() {}
    virtual void placeholderToolLibrary13() {}
    virtual void placeholderToolLibrary14() {}
    virtual void placeholderToolLibrary15() {}
    virtual void placeholderToolLibrary16() {}
    virtual void placeholderToolLibrary17() {}
    virtual void placeholderToolLibrary18() {}
    virtual void placeholderToolLibrary19() {}
    virtual void placeholderToolLibrary20() {}
    virtual void placeholderToolLibrary21() {}
    virtual void placeholderToolLibrary22() {}
    virtual void placeholderToolLibrary23() {}
    virtual void placeholderToolLibrary24() {}
    virtual void placeholderToolLibrary25() {}
};

// Inline wrappers

inline core::Ptr<ToolLibrary> ToolLibrary::createFromJson(const std::string& json)
{
    core::Ptr<ToolLibrary> res = createFromJson_raw(json.c_str());
    return res;
}

inline core::Ptr<ToolLibrary> ToolLibrary::createEmpty()
{
    core::Ptr<ToolLibrary> res = createEmpty_raw();
    return res;
}

inline size_t ToolLibrary::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Tool> ToolLibrary::item(size_t index) const
{
    core::Ptr<Tool> res = item_raw(index);
    return res;
}

inline bool ToolLibrary::add(const core::Ptr<Tool>& tool)
{
    bool res = add_raw(tool.get());
    return res;
}

inline bool ToolLibrary::remove(size_t index)
{
    bool res = remove_raw(index);
    return res;
}

inline std::string ToolLibrary::toJson() const
{
    std::string res;

    char* p= toJson_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ToolQuery> ToolLibrary::createQuery() const
{
    core::Ptr<ToolQuery> res = createQuery_raw();
    return res;
}

template <class OutputIterator> inline void ToolLibrary::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLLIBRARY_API