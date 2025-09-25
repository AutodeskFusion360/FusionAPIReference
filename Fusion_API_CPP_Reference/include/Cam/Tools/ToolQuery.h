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
# ifdef __COMPILING_ADSK_CAM_TOOLQUERY_CPP__
# define ADSK_CAM_TOOLQUERY_API XI_EXPORT
# else
# define ADSK_CAM_TOOLQUERY_API
# endif
#else
# define ADSK_CAM_TOOLQUERY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ToolQueryResult;
}}
namespace adsk { namespace core {
    class NamedValues;
    class URL;
}}

namespace adsk { namespace cam {

/// ToolQuery objects are used to search for a set of Tools or ToolLibrary objects inside of the ToolLibraries collection or for a set of Tools inside of a particular ToolLibrary.
class ToolQuery : public core::Base {
public:

    /// The case-insensitive vendor specifies the vendor of the tool. The default empty vendor applies to all tools.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// The URL specifies the location and folder to search for in the Tool library.
    /// Setting the URL updates the location.
    /// When searching inside a ToolLibrary the URL will be ignored.
    core::Ptr<core::URL> url() const;
    bool url(const core::Ptr<core::URL>& value);

    /// Specifies the location to search in the Tool library.
    /// Setting the location clears any previous specified URL.
    /// When searching inside a ToolLibrary the location will be ignored.
    LibraryLocations location() const;
    bool location(LibraryLocations value);

    /// List of all criteria a tool must fulfill. Use the suffix '.min' and '.max', to define a upper and / or lower boundary for a particular value.
    core::Ptr<core::NamedValues> criteria() const;

    /// Query for specific a Tool or ToolLbrary.
    /// Returns a list of `ToolQueryResult`. Each result references a Tool that matches this query.
    std::vector<core::Ptr<ToolQueryResult>> execute() const;

    ADSK_CAM_TOOLQUERY_API static const char* classType();
    ADSK_CAM_TOOLQUERY_API const char* objectType() const override;
    ADSK_CAM_TOOLQUERY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual core::URL* url_raw() const = 0;
    virtual bool url_raw(core::URL* value) = 0;
    virtual LibraryLocations location_raw() const = 0;
    virtual bool location_raw(LibraryLocations value) = 0;
    virtual core::NamedValues* criteria_raw() const = 0;
    virtual ToolQueryResult** execute_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::string ToolQuery::vendor() const
{
    std::string res;

    char* p= vendor_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ToolQuery::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline core::Ptr<core::URL> ToolQuery::url() const
{
    core::Ptr<core::URL> res = url_raw();
    return res;
}

inline bool ToolQuery::url(const core::Ptr<core::URL>& value)
{
    return url_raw(value.get());
}

inline LibraryLocations ToolQuery::location() const
{
    LibraryLocations res = location_raw();
    return res;
}

inline bool ToolQuery::location(LibraryLocations value)
{
    return location_raw(value);
}

inline core::Ptr<core::NamedValues> ToolQuery::criteria() const
{
    core::Ptr<core::NamedValues> res = criteria_raw();
    return res;
}

inline std::vector<core::Ptr<ToolQueryResult>> ToolQuery::execute() const
{
    std::vector<core::Ptr<ToolQueryResult>> res;
    size_t s;

    ToolQueryResult** p= execute_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLQUERY_API