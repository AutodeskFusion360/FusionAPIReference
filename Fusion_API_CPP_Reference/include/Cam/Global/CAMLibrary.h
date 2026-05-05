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
# ifdef __COMPILING_ADSK_CAM_CAMLIBRARY_CPP__
# define ADSK_CAM_CAMLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_CAMLIBRARY_API
# endif
#else
# define ADSK_CAM_CAMLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The CAMLibrary is the base-class for all other asset-specific libraries.
class CAMLibrary : public core::Base {
public:

    /// Get the name of the asset type which can be accessed by the library.
    std::string assetTypeName() const;

    /// Get the URL for a given LibraryLocations.
    /// location : The LibraryLocations to be converted into an URL.
    /// Returns the URL for given location.
    core::Ptr<core::URL> urlByLocation(LibraryLocations location) const;

    /// Get the localized display name for a given URL. The URL must point to a folder.
    /// url : The URL that defines the path to a folder.
    /// Returns localized display name for the folder. Returns empty string for invalid URL.
    std::string displayName(const core::Ptr<core::URL>& url) const;

    /// Get all library folders under given URL.
    /// url : The URL to the parent folder.
    /// Returns list of folder URLs at given location.
    std::vector<core::Ptr<core::URL>> childFolderURLs(const core::Ptr<core::URL>& url) const;

    /// Get all assets under given URL.
    /// url : The URL to the parent folder.
    /// Returns list of asset URLs at given location.
    std::vector<core::Ptr<core::URL>> childAssetURLs(const core::Ptr<core::URL>& url) const;

    /// Delete folder by URL from the library. Any content of the folder will also be deleted.
    /// Throw an error if given URL does not point to a valid folder or the URL is read-only.
    /// url : The URL to the folder that should be removed.
    /// Returns true if folder was deleted successfully, false otherwise
    bool deleteFolder(const core::Ptr<core::URL>& url);

    /// Delete asset by URL from the library.
    /// Throw an error if given URL does not point to a valid asset or the URL is read-only.
    /// url : The URL to the asset that should be removed.
    /// Returns true if asset was deleted successfully, false otherwise
    bool deleteAsset(const core::Ptr<core::URL>& url);

    /// Create a new folder in the library. Create the folder under given parent URL with given folder name. Add counting suffix, in case a folder with given name already exists.
    /// Throw an error if given URL does not point to a valid folder or the URL is read-only. Also throws an error if given folder name is empty.
    /// parentUrl : The parent URL for the folder to be created.
    /// folderName : Name of the new folder to be created. Must not be empty.
    /// Returns the URL to the newly created folder
    core::Ptr<core::URL> createFolder(const core::Ptr<core::URL>& parentUrl, const std::string& folderName);

    /// Checks if the given URL points to an existing folder or asset in the library.
    /// url : The URL to be checked.
    /// Returns true if the URL points to an existing folder or asset, false otherwise.
    bool doesPathExist(const core::Ptr<core::URL>& url) const;

    ADSK_CAM_CAMLIBRARY_API static const char* classType();
    ADSK_CAM_CAMLIBRARY_API const char* objectType() const override;
    ADSK_CAM_CAMLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* assetTypeName_raw() const = 0;
    virtual core::URL* urlByLocation_raw(LibraryLocations location) const = 0;
    virtual char* displayName_raw(core::URL* url) const = 0;
    virtual core::URL** childFolderURLs_raw(core::URL* url, size_t& return_size) const = 0;
    virtual core::URL** childAssetURLs_raw(core::URL* url, size_t& return_size) const = 0;
    virtual bool deleteFolder_raw(core::URL* url) = 0;
    virtual bool deleteAsset_raw(core::URL* url) = 0;
    virtual core::URL* createFolder_raw(core::URL* parentUrl, const char* folderName) = 0;
    virtual bool doesPathExist_raw(core::URL* url) const = 0;
    virtual void placeholderCAMLibrary0() {}
    virtual void placeholderCAMLibrary1() {}
    virtual void placeholderCAMLibrary2() {}
    virtual void placeholderCAMLibrary3() {}
    virtual void placeholderCAMLibrary4() {}
    virtual void placeholderCAMLibrary5() {}
    virtual void placeholderCAMLibrary6() {}
    virtual void placeholderCAMLibrary7() {}
    virtual void placeholderCAMLibrary8() {}
    virtual void placeholderCAMLibrary9() {}
    virtual void placeholderCAMLibrary10() {}
    virtual void placeholderCAMLibrary11() {}
    virtual void placeholderCAMLibrary12() {}
    virtual void placeholderCAMLibrary13() {}
    virtual void placeholderCAMLibrary14() {}
    virtual void placeholderCAMLibrary15() {}
    virtual void placeholderCAMLibrary16() {}
    virtual void placeholderCAMLibrary17() {}
    virtual void placeholderCAMLibrary18() {}
    virtual void placeholderCAMLibrary19() {}
    virtual void placeholderCAMLibrary20() {}
    virtual void placeholderCAMLibrary21() {}
    virtual void placeholderCAMLibrary22() {}
};

// Inline wrappers

inline std::string CAMLibrary::assetTypeName() const
{
    std::string res;

    char* p= assetTypeName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::URL> CAMLibrary::urlByLocation(LibraryLocations location) const
{
    core::Ptr<core::URL> res = urlByLocation_raw(location);
    return res;
}

inline std::string CAMLibrary::displayName(const core::Ptr<core::URL>& url) const
{
    std::string res;

    char* p= displayName_raw(url.get());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::URL>> CAMLibrary::childFolderURLs(const core::Ptr<core::URL>& url) const
{
    std::vector<core::Ptr<core::URL>> res;
    size_t s;

    core::URL** p= childFolderURLs_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<core::URL>> CAMLibrary::childAssetURLs(const core::Ptr<core::URL>& url) const
{
    std::vector<core::Ptr<core::URL>> res;
    size_t s;

    core::URL** p= childAssetURLs_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMLibrary::deleteFolder(const core::Ptr<core::URL>& url)
{
    bool res = deleteFolder_raw(url.get());
    return res;
}

inline bool CAMLibrary::deleteAsset(const core::Ptr<core::URL>& url)
{
    bool res = deleteAsset_raw(url.get());
    return res;
}

inline core::Ptr<core::URL> CAMLibrary::createFolder(const core::Ptr<core::URL>& parentUrl, const std::string& folderName)
{
    core::Ptr<core::URL> res = createFolder_raw(parentUrl.get(), folderName.c_str());
    return res;
}

inline bool CAMLibrary::doesPathExist(const core::Ptr<core::URL>& url) const
{
    bool res = doesPathExist_raw(url.get());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMLIBRARY_API