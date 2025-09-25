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
# ifdef __COMPILING_ADSK_CAM_PRINTSETTINGLIBRARY_CPP__
# define ADSK_CAM_PRINTSETTINGLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_PRINTSETTINGLIBRARY_API
# endif
#else
# define ADSK_CAM_PRINTSETTINGLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class PrintSetting;
    class PrintSettingQuery;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The PrintSettingLibrary provides access to PrintSettings. Using this object you can import PrintSettings
/// and get existing PrintSettings using either URL or query to find specific PrintSetting.
class PrintSettingLibrary : public CAMLibrary {
public:

    /// Creates a new PrintSettingQuery that is used to query the library for PrintSettings matching
    /// the query.
    /// location : The location specifies the LibraryLocations where to search for in the PrintSetting library.
    /// Returns a new PrintSettingQuery. The query is predefined by given parameter.
    core::Ptr<PrintSettingQuery> createQuery(LibraryLocations location) const;

    /// Import a given PrintSetting at a specific location. The PrintSetting will be stored in the library. Throws an error if the given URL is read-only.
    /// printSetting : The PrintSetting that should be imported.
    /// destinationUrl : The URL to the folder where to save the PrintSetting.
    /// printSettingName : The name that should be assigned to imported PrintSetting. The name can be extended if there already exists a PrintSetting at given location to ensure a unique name.
    /// Returns the URL of the newly imported PrintSetting, or null if the import failed.
    core::Ptr<core::URL> importPrintSetting(const core::Ptr<PrintSetting>& printSetting, const core::Ptr<core::URL>& destinationUrl, const std::string& printSettingName);

    /// Update a PrintSetting in the library. The library overrides the URL by given PrintSetting. Throws an error if the URL does not already point to an existing printSetting.
    /// url : The URL to the existing asset in the library that should be updated.
    /// printSetting : The PrintSetting that should be persisted.
    /// Returns true if asset was updated successfully, false otherwise.
    bool updatePrintSetting(const core::Ptr<core::URL>& url, const core::Ptr<PrintSetting>& printSetting);

    /// Get a specific PrintSetting by the given URL. Returns null if the URL does not exist.
    /// url : The URL to the PrintSetting to be loaded.
    /// Returns the PrintSetting for a valid URL, returns null otherwise.
    core::Ptr<PrintSetting> printSettingAtURL(const core::Ptr<core::URL>& url);

    /// Get all PrintSettings by the given parent folder URL. Returns null, if the URL does not exist.
    /// url : The URL of the folder to get PrintSettings from.
    /// Returns the PrintSetting for a valid URL, returns null otherwise.
    std::vector<core::Ptr<PrintSetting>> childPrintSettings(const core::Ptr<core::URL>& url);

    ADSK_CAM_PRINTSETTINGLIBRARY_API static const char* classType();
    ADSK_CAM_PRINTSETTINGLIBRARY_API const char* objectType() const override;
    ADSK_CAM_PRINTSETTINGLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PRINTSETTINGLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PrintSettingQuery* createQuery_raw(LibraryLocations location) const = 0;
    virtual core::URL* importPrintSetting_raw(PrintSetting* printSetting, core::URL* destinationUrl, const char* printSettingName) = 0;
    virtual bool updatePrintSetting_raw(core::URL* url, PrintSetting* printSetting) = 0;
    virtual PrintSetting* printSettingAtURL_raw(core::URL* url) = 0;
    virtual PrintSetting** childPrintSettings_raw(core::URL* url, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<PrintSettingQuery> PrintSettingLibrary::createQuery(LibraryLocations location) const
{
    core::Ptr<PrintSettingQuery> res = createQuery_raw(location);
    return res;
}

inline core::Ptr<core::URL> PrintSettingLibrary::importPrintSetting(const core::Ptr<PrintSetting>& printSetting, const core::Ptr<core::URL>& destinationUrl, const std::string& printSettingName)
{
    core::Ptr<core::URL> res = importPrintSetting_raw(printSetting.get(), destinationUrl.get(), printSettingName.c_str());
    return res;
}

inline bool PrintSettingLibrary::updatePrintSetting(const core::Ptr<core::URL>& url, const core::Ptr<PrintSetting>& printSetting)
{
    bool res = updatePrintSetting_raw(url.get(), printSetting.get());
    return res;
}

inline core::Ptr<PrintSetting> PrintSettingLibrary::printSettingAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<PrintSetting> res = printSettingAtURL_raw(url.get());
    return res;
}

inline std::vector<core::Ptr<PrintSetting>> PrintSettingLibrary::childPrintSettings(const core::Ptr<core::URL>& url)
{
    std::vector<core::Ptr<PrintSetting>> res;
    size_t s;

    PrintSetting** p= childPrintSettings_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PRINTSETTINGLIBRARY_API