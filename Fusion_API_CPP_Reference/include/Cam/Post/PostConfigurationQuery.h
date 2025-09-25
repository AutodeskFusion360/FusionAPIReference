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
# ifdef __COMPILING_ADSK_CAM_POSTCONFIGURATIONQUERY_CPP__
# define ADSK_CAM_POSTCONFIGURATIONQUERY_API XI_EXPORT
# else
# define ADSK_CAM_POSTCONFIGURATIONQUERY_API
# endif
#else
# define ADSK_CAM_POSTCONFIGURATIONQUERY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class PostConfiguration;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// A PostConfigurationQuery can be used to search a LibraryLocation for a set of PostConfiguration objects matching the required properties.
class PostConfigurationQuery : public core::Base {
public:

    /// The case-insensitive vendor specifies the vendor of the post configuration. The default empty vendor applies to all post configurations.
    std::string vendor() const;
    bool vendor(const std::string& value);

    /// The URL specifies the location and folder to search for in the post library.
    /// Setting the URL updates the location.
    core::Ptr<core::URL> url() const;
    bool url(const core::Ptr<core::URL>& value);

    /// Specifies the capability to search for in the post library.
    PostCapabilities capability() const;
    bool capability(PostCapabilities value);

    /// The location specifies the location to search in the post library.
    /// Setting the location clears any previous specified URL.
    LibraryLocations location() const;
    bool location(LibraryLocations value);

    /// Query for specific posts. This PostConfiguration query.
    /// Returns a list of posts. Each returned post matches this query.
    std::vector<core::Ptr<PostConfiguration>> execute() const;

    ADSK_CAM_POSTCONFIGURATIONQUERY_API static const char* classType();
    ADSK_CAM_POSTCONFIGURATIONQUERY_API const char* objectType() const override;
    ADSK_CAM_POSTCONFIGURATIONQUERY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POSTCONFIGURATIONQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* vendor_raw() const = 0;
    virtual bool vendor_raw(const char* value) = 0;
    virtual core::URL* url_raw() const = 0;
    virtual bool url_raw(core::URL* value) = 0;
    virtual PostCapabilities capability_raw() const = 0;
    virtual bool capability_raw(PostCapabilities value) = 0;
    virtual LibraryLocations location_raw() const = 0;
    virtual bool location_raw(LibraryLocations value) = 0;
    virtual PostConfiguration** execute_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::string PostConfigurationQuery::vendor() const
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

inline bool PostConfigurationQuery::vendor(const std::string& value)
{
    return vendor_raw(value.c_str());
}

inline core::Ptr<core::URL> PostConfigurationQuery::url() const
{
    core::Ptr<core::URL> res = url_raw();
    return res;
}

inline bool PostConfigurationQuery::url(const core::Ptr<core::URL>& value)
{
    return url_raw(value.get());
}

inline PostCapabilities PostConfigurationQuery::capability() const
{
    PostCapabilities res = capability_raw();
    return res;
}

inline bool PostConfigurationQuery::capability(PostCapabilities value)
{
    return capability_raw(value);
}

inline LibraryLocations PostConfigurationQuery::location() const
{
    LibraryLocations res = location_raw();
    return res;
}

inline bool PostConfigurationQuery::location(LibraryLocations value)
{
    return location_raw(value);
}

inline std::vector<core::Ptr<PostConfiguration>> PostConfigurationQuery::execute() const
{
    std::vector<core::Ptr<PostConfiguration>> res;
    size_t s;

    PostConfiguration** p= execute_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POSTCONFIGURATIONQUERY_API