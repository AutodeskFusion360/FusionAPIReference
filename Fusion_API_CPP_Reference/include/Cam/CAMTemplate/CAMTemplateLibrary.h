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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMTEMPLATELIBRARY_CPP__
# define ADSK_CAM_CAMTEMPLATELIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_CAMTEMPLATELIBRARY_API
# endif
#else
# define ADSK_CAM_CAMTEMPLATELIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMTemplate;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The CAMTemplateLibrary provides access to templates. Using this object you can import templates
/// and get existing templates using a URL.
class CAMTemplateLibrary : public CAMLibrary {
public:

    /// Import a given template at a specific location. The template will be stored in the library. Throws an error if the given URL is read-only.
    /// camTemplate : The template that should be imported.
    /// destinationUrl : The URL to the folder where to save the template.
    /// Returns the URL of the newly imported template, or null if the import failed.
    core::Ptr<core::URL> importTemplate(const core::Ptr<CAMTemplate>& camTemplate, const core::Ptr<core::URL>& destinationUrl);

    /// Update a template in the library. The library substitutes the existing template at the URL by given template. Throws an error if the URL does not already point to an existing template.
    /// If the name member of the CAMTemplate doesn't match the name portion of the URL then this will include a rename operation and the returned URL will reflect the new name.
    /// camTemplate : The template that should be persisted.
    /// url : The URL to the existing template in the library that should be updated.
    /// Returns the URL of the updated template, or null if the update failed.
    core::Ptr<core::URL> updateTemplate(const core::Ptr<CAMTemplate>& camTemplate, const core::Ptr<core::URL>& url);

    /// Gets a specific template specified by the given URL. Returns null if the specified template does not exist.
    /// url : The URL to the template to be fetched.
    /// Returns the template for a valid URL, returns null otherwise.
    core::Ptr<CAMTemplate> templateAtURL(const core::Ptr<core::URL>& url);

    /// Get all templates by the given parent folder URL. Returns null if there is no folder at the URL.
    /// url : The URL of the folder to get the templates from.
    /// Returns an array of templates contained within the specified folder URL. Returns null if the URL is not valid.
    std::vector<core::Ptr<CAMTemplate>> childTemplates(const core::Ptr<core::URL>& url);

    ADSK_CAM_CAMTEMPLATELIBRARY_API static const char* classType();
    ADSK_CAM_CAMTEMPLATELIBRARY_API const char* objectType() const override;
    ADSK_CAM_CAMTEMPLATELIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMTEMPLATELIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::URL* importTemplate_raw(CAMTemplate* camTemplate, core::URL* destinationUrl) = 0;
    virtual core::URL* updateTemplate_raw(CAMTemplate* camTemplate, core::URL* url) = 0;
    virtual CAMTemplate* templateAtURL_raw(core::URL* url) = 0;
    virtual CAMTemplate** childTemplates_raw(core::URL* url, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<core::URL> CAMTemplateLibrary::importTemplate(const core::Ptr<CAMTemplate>& camTemplate, const core::Ptr<core::URL>& destinationUrl)
{
    core::Ptr<core::URL> res = importTemplate_raw(camTemplate.get(), destinationUrl.get());
    return res;
}

inline core::Ptr<core::URL> CAMTemplateLibrary::updateTemplate(const core::Ptr<CAMTemplate>& camTemplate, const core::Ptr<core::URL>& url)
{
    core::Ptr<core::URL> res = updateTemplate_raw(camTemplate.get(), url.get());
    return res;
}

inline core::Ptr<CAMTemplate> CAMTemplateLibrary::templateAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<CAMTemplate> res = templateAtURL_raw(url.get());
    return res;
}

inline std::vector<core::Ptr<CAMTemplate>> CAMTemplateLibrary::childTemplates(const core::Ptr<core::URL>& url)
{
    std::vector<core::Ptr<CAMTemplate>> res;
    size_t s;

    CAMTemplate** p= childTemplates_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMTEMPLATELIBRARY_API