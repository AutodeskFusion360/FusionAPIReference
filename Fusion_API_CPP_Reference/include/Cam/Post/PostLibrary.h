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
#include "../Global/CAMLibrary.h"
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POSTLIBRARY_CPP__
# define ADSK_CAM_POSTLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_POSTLIBRARY_API
# endif
#else
# define ADSK_CAM_POSTLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class PostConfiguration;
    class PostConfigurationQuery;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The PostLibrary provides access to post configurations. Using this object you can import post configurations
/// and get existing post configurations using either a URL or query to find specific post configurations.
class PostLibrary : public CAMLibrary {
public:

    /// Creates a new PostConfigurationQuery that is used to query the library for post configurations matching
    /// the query.
    /// location : The location specifies the LibraryLocations where to search for in the post library.
    /// Returns a new PostConfigurationQuery. The query is predefined by given parameter.
    core::Ptr<PostConfigurationQuery> createQuery(LibraryLocations location) const;

    /// Import a given post configuration at a specific location. The post configuration will be stored in the library. Throws an error, if the given URL is read-only.
    /// postConfig : The post configuration that should be imported.
    /// destinationUrl : The URL to the folder where to save the post configuration.
    /// postName : The name of the post configuration that should be created due to the import. The name can be extended if the name already exists at given location to ensure a unique name.
    /// Returns the URL of the newly imported post configuration, or null if the import failed.
    core::Ptr<core::URL> importPostConfiguration(const core::Ptr<PostConfiguration>& postConfig, const core::Ptr<core::URL>& destinationUrl, const std::string& postName);

    /// Get a specific post configuration by the given URL. Returns null, if the URL does not exist.
    /// url : The URL to the post configuration to be loaded.
    /// Returns the post configuration for a valid URL, returns null otherwise.
    core::Ptr<PostConfiguration> postConfigurationAtURL(const core::Ptr<core::URL>& url);

    /// Get all posts by the given parent folder URL. Returns null, if the URL does not exist.
    /// url : The URL of the folder to get post configurations from.
    /// Returns all children posts for a valid URL, returns null otherwise.
    std::vector<core::Ptr<PostConfiguration>> childPostConfigurations(const core::Ptr<core::URL>& url);

    ADSK_CAM_POSTLIBRARY_API static const char* classType();
    ADSK_CAM_POSTLIBRARY_API const char* objectType() const override;
    ADSK_CAM_POSTLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POSTLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PostConfigurationQuery* createQuery_raw(LibraryLocations location) const = 0;
    virtual core::URL* importPostConfiguration_raw(PostConfiguration* postConfig, core::URL* destinationUrl, const char* postName) = 0;
    virtual PostConfiguration* postConfigurationAtURL_raw(core::URL* url) = 0;
    virtual PostConfiguration** childPostConfigurations_raw(core::URL* url, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<PostConfigurationQuery> PostLibrary::createQuery(LibraryLocations location) const
{
    core::Ptr<PostConfigurationQuery> res = createQuery_raw(location);
    return res;
}

inline core::Ptr<core::URL> PostLibrary::importPostConfiguration(const core::Ptr<PostConfiguration>& postConfig, const core::Ptr<core::URL>& destinationUrl, const std::string& postName)
{
    core::Ptr<core::URL> res = importPostConfiguration_raw(postConfig.get(), destinationUrl.get(), postName.c_str());
    return res;
}

inline core::Ptr<PostConfiguration> PostLibrary::postConfigurationAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<PostConfiguration> res = postConfigurationAtURL_raw(url.get());
    return res;
}

inline std::vector<core::Ptr<PostConfiguration>> PostLibrary::childPostConfigurations(const core::Ptr<core::URL>& url)
{
    std::vector<core::Ptr<PostConfiguration>> res;
    size_t s;

    PostConfiguration** p= childPostConfigurations_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POSTLIBRARY_API