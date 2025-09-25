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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_CPP__
# define ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API
# endif
#else
# define ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Setup;
    class StockMaterial;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// DocumentStockMaterialLibrary provides access to stock materials used by the document.
class DocumentStockMaterialLibrary : public core::Base {
public:

    /// The number of StockMaterial in the DocumentStockMaterialLibrary.
    size_t count() const;

    /// Get StockMaterial by index in DocumentStockMaterialLibrary.
    /// index : Index of the StockMaterial in the DocumentStockMaterialLibrary.
    /// Returns the StockMaterial in the DocumentStockMaterialLibrary by given index.
    core::Ptr<StockMaterial> item(size_t index) const;

    /// Returns all setups that use the given StockMaterial. The StockMaterial must exist in the document StockMaterial library.
    /// Raises an error if the StockMaterial is not in the document.
    /// stockMaterial : The StockMaterial to search for setups. The StockMaterial must exist in the document.
    /// Returns setups using a specific StockMaterial.
    std::vector<core::Ptr<Setup>> setupsByStockMaterial(const core::Ptr<StockMaterial>& stockMaterial) const;

    /// Update the given StockMaterial in the document StockMaterial library. The update applies all changes to the
    /// stockMaterial in the document stockMaterial library and therefore on all setups that use the stockMaterial.
    /// Will error if the stockMaterial does not exist in the document stockMaterial library.
    /// stockMaterial : The StockMaterial that should be updated.
    /// Returns true if the update was successful.
    bool update(const core::Ptr<StockMaterial>& stockMaterial);

    typedef StockMaterial iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API static const char* classType();
    ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API const char* objectType() const override;
    ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual StockMaterial* item_raw(size_t index) const = 0;
    virtual Setup** setupsByStockMaterial_raw(StockMaterial* stockMaterial, size_t& return_size) const = 0;
    virtual bool update_raw(StockMaterial* stockMaterial) = 0;
};

// Inline wrappers

inline size_t DocumentStockMaterialLibrary::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<StockMaterial> DocumentStockMaterialLibrary::item(size_t index) const
{
    core::Ptr<StockMaterial> res = item_raw(index);
    return res;
}

inline std::vector<core::Ptr<Setup>> DocumentStockMaterialLibrary::setupsByStockMaterial(const core::Ptr<StockMaterial>& stockMaterial) const
{
    std::vector<core::Ptr<Setup>> res;
    size_t s;

    Setup** p= setupsByStockMaterial_raw(stockMaterial.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DocumentStockMaterialLibrary::update(const core::Ptr<StockMaterial>& stockMaterial)
{
    bool res = update_raw(stockMaterial.get());
    return res;
}

template <class OutputIterator> inline void DocumentStockMaterialLibrary::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_DOCUMENTSTOCKMATERIALLIBRARY_API