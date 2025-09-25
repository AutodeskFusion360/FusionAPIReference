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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_STOCKMATERIALLIBRARY_CPP__
# define ADSK_CAM_STOCKMATERIALLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_STOCKMATERIALLIBRARY_API
# endif
#else
# define ADSK_CAM_STOCKMATERIALLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class StockMaterial;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The StockMaterialLibraries object provides utilities to access, import and update stock material by URL.
class StockMaterialLibrary : public CAMLibrary {
public:

    /// Import a given stockMaterial at a specific location. The stockMaterial will be stored in the library. Throws an error, if the given URL is read-only.
    /// stockMaterial : The stockMaterial that should be imported.
    /// destinationUrl : The URL to the folder where to save the stockMaterial.
    /// stockMaterialName : The name of the stockMaterial that should be created due to the import. The name can be extended if the asset already exists at given location to ensure a unique name.
    /// Returns the URL of the newly imported stockMaterial, or null if the import failed.
    core::Ptr<core::URL> importStockMaterial(const core::Ptr<StockMaterial>& stockMaterial, const core::Ptr<core::URL>& destinationUrl, const std::string& stockMaterialName);

    /// Update a stockMaterial in the library. The library overrides the URL by given stockMaterial. Throws an error if the URL does not already point to an existing stockMaterial.
    /// url : The URL to the existing asset in the library that should be updated.
    /// stockMaterial : The stockMaterial that should be persisted.
    /// Returns true if asset was updated successfully, false otherwise.
    bool updateStockMaterial(const core::Ptr<core::URL>& url, const core::Ptr<StockMaterial>& stockMaterial);

    /// Get a specific stockMaterial by the given URL. Returns null, if the URL does not exist.
    /// url : The URL to the stockMaterial to be loaded.
    /// Returns the stockMaterial for a valid URL, returns null otherwise.
    core::Ptr<StockMaterial> stockMaterialAtURL(const core::Ptr<core::URL>& url);

    /// Get all stockMaterials by the given parent folder URL. Returns null, if the URL does not exist.
    /// url : The URL of the folder to get stockMaterials from.
    /// Returns the stockMaterials for a valid URL, returns null otherwise.
    std::vector<core::Ptr<StockMaterial>> childStockMaterials(const core::Ptr<core::URL>& url);

    ADSK_CAM_STOCKMATERIALLIBRARY_API static const char* classType();
    ADSK_CAM_STOCKMATERIALLIBRARY_API const char* objectType() const override;
    ADSK_CAM_STOCKMATERIALLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_STOCKMATERIALLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::URL* importStockMaterial_raw(StockMaterial* stockMaterial, core::URL* destinationUrl, const char* stockMaterialName) = 0;
    virtual bool updateStockMaterial_raw(core::URL* url, StockMaterial* stockMaterial) = 0;
    virtual StockMaterial* stockMaterialAtURL_raw(core::URL* url) = 0;
    virtual StockMaterial** childStockMaterials_raw(core::URL* url, size_t& return_size) = 0;
};

// Inline wrappers

inline core::Ptr<core::URL> StockMaterialLibrary::importStockMaterial(const core::Ptr<StockMaterial>& stockMaterial, const core::Ptr<core::URL>& destinationUrl, const std::string& stockMaterialName)
{
    core::Ptr<core::URL> res = importStockMaterial_raw(stockMaterial.get(), destinationUrl.get(), stockMaterialName.c_str());
    return res;
}

inline bool StockMaterialLibrary::updateStockMaterial(const core::Ptr<core::URL>& url, const core::Ptr<StockMaterial>& stockMaterial)
{
    bool res = updateStockMaterial_raw(url.get(), stockMaterial.get());
    return res;
}

inline core::Ptr<StockMaterial> StockMaterialLibrary::stockMaterialAtURL(const core::Ptr<core::URL>& url)
{
    core::Ptr<StockMaterial> res = stockMaterialAtURL_raw(url.get());
    return res;
}

inline std::vector<core::Ptr<StockMaterial>> StockMaterialLibrary::childStockMaterials(const core::Ptr<core::URL>& url)
{
    std::vector<core::Ptr<StockMaterial>> res;
    size_t s;

    StockMaterial** p= childStockMaterials_raw(url.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_STOCKMATERIALLIBRARY_API