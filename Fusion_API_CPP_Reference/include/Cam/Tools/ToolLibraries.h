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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_TOOLLIBRARIES_CPP__
# define ADSK_CAM_TOOLLIBRARIES_API XI_EXPORT
# else
# define ADSK_CAM_TOOLLIBRARIES_API
# endif
#else
# define ADSK_CAM_TOOLLIBRARIES_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ToolLibrary;
    class ToolQuery;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The ToolLibraries object provides utilities to access, import and update tool libraries.
class ToolLibraries : public CAMLibrary {
public:

    /// Import a given ToolLibrary from a specific location. The imported ToolLibrary can be accessed
    /// through this ToolLibraries object. Throws an error, if the given URL is read-only.
    /// toolLibrary : The ToolLibrary that should be imported.
    /// destinationUrl : The URL to the parent folder where the imported tool library will be saved.
    /// libraryName : The name of the library that should be created due to the import. If the specified name already
    /// exists, a number will be added to the name to ensure it is unique.
    /// Returns the URL of the newly imported tool library, or null if the import failed.
    core::Ptr<core::URL> importToolLibrary(const core::Ptr<ToolLibrary>& toolLibrary, const core::Ptr<core::URL>& destinationUrl, const std::string& libraryName);

    /// Update ToolLibrary in ToolLibraries. Overrides the URL by given ToolLibrary.
    /// Throws an error if the URL does not already point to an existing ToolLibrary.
    /// url : The URL to the existing asset in the ToolLibraries that should be updated.
    /// toolLibrary : The ToolLibrary that should be persisted.
    /// Returns true if asset was updated successfully, false otherwise.
    bool updateToolLibrary(const core::Ptr<core::URL>& url, const core::Ptr<ToolLibrary>& toolLibrary);

    /// Get a specific ToolLibrary by given URL. Returns null, if the URL does not exist.
    /// url : The URL to the ToolLibrary to be loaded.
    /// Returns the ToolLibrary for a valid URL, returns null otherwise.
    core::Ptr<ToolLibrary> toolLibraryAtURL(const core::Ptr<core::URL>& url);

    /// Creates a new ToolQuery that is used to query the library for tools matching
    /// the query.
    /// location : The location specifies the LibraryLocations where to search.
    /// Returns a new ToolQuery. The query is predefined by given parameter.
    core::Ptr<ToolQuery> createQuery(LibraryLocations location) const;

    ADSK_CAM_TOOLLIBRARIES_API static const char* classType();
    ADSK_CAM_TOOLLIBRARIES_API const char* objectType() const override;
    ADSK_CAM_TOOLLIBRARIES_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLLIBRARIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::URL* importToolLibrary_raw(ToolLibrary* toolLibrary, core::URL* destinationUrl, const char* libraryName) = 0;
    virtual bool updateToolLibrary_raw(core::URL* url, ToolLibrary* toolLibrary) = 0;
    virtual ToolLibrary* toolLibraryAtURL_raw(core::URL* url) = 0;
    virtual ToolQuery* createQuery_raw(LibraryLocations location) const = 0;
};

// Inline wrappers

inline core::Ptr<core::URL> ToolLibraries::importToolLibrary(const core::Ptr<ToolLibrary>& toolLibrary, const core::Ptr<core::URL>& destinationUrl, const std::string& libraryName)
{
    core::Ptr<core::URL> res = importToolLibrary_raw(toolLibrary.get(), destinationUrl.get(), libraryName.c_str());
    return res;
}

inline bool ToolLibraries::updateToolLibrary(const core::Ptr<core::URL>& url, const core::Ptr<ToolLibrary>& toolLibrary)
{
    bool res = updateToolLibrary_raw(url.get(), toolLibrary.get());
    return res;
}

inline core::Ptr<ToolLibrary> ToolLibraries::toolLibraryAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<ToolLibrary> res = toolLibraryAtURL_raw(url.get());
    return res;
}

inline core::Ptr<ToolQuery> ToolLibraries::createQuery(LibraryLocations location) const
{
    core::Ptr<ToolQuery> res = createQuery_raw(location);
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLLIBRARIES_API