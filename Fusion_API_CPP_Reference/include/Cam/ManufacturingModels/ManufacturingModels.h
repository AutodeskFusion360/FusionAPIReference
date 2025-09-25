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
# ifdef __COMPILING_ADSK_CAM_MANUFACTURINGMODELS_CPP__
# define ADSK_CAM_MANUFACTURINGMODELS_API XI_EXPORT
# else
# define ADSK_CAM_MANUFACTURINGMODELS_API
# endif
#else
# define ADSK_CAM_MANUFACTURINGMODELS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ManufacturingModel;
    class ManufacturingModelInput;
}}

namespace adsk { namespace cam {

/// Referenced from CAM product to access manufacturing models in document.
class ManufacturingModels : public core::Base {
public:

    /// The number of items in the collection.
    size_t count() const;

    /// Get ManufacturingModel by index in collection.
    /// Returns ManufacturingModel at given index.
    core::Ptr<ManufacturingModel> item(size_t index) const;

    /// Returns all ManufacturingModel with given name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the ManufacturingModel.
    /// Returns all ManufacturingModel with the specified name.
    std::vector<core::Ptr<ManufacturingModel>> itemByName(const std::string& name) const;

    /// Returns ManufacturingModel with given id.
    /// id : The id of the ManufacturingModel.
    /// Returns ManufacturingModel with the specified id or null if no ManufacturingModel has that id.
    core::Ptr<ManufacturingModel> itemById(const std::string& id) const;

    /// Create a new ManufacturingModelInput object. Use properties and methods on this object
    /// to define the ManufacturingModel you want to create and then use the Add method, passing in
    /// the ManufacturingModelInput object.
    /// Returns new ManufacturingModelInput object.
    core::Ptr<ManufacturingModelInput> createInput();

    /// Create a new ManufacturingModel.
    /// input : A ManufacturingModelInput object that defines the desired ManufacturingModel. Use the createInput
    /// method to create a new ManufacturingModelInput object and then use methods on it to define the ManufacturingModel.
    /// Returns the newly created ManufacturingModel.
    core::Ptr<ManufacturingModel> add(const core::Ptr<ManufacturingModelInput>& input);

    /// Checks wether changes to the original design have been made. If so, all manufacturing models are synchronized with their sources.
    /// Returns true if any manufacturing model needed an update.
    bool syncAllManufacturingModels();

    typedef ManufacturingModel iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_MANUFACTURINGMODELS_API static const char* classType();
    ADSK_CAM_MANUFACTURINGMODELS_API const char* objectType() const override;
    ADSK_CAM_MANUFACTURINGMODELS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MANUFACTURINGMODELS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual ManufacturingModel* item_raw(size_t index) const = 0;
    virtual ManufacturingModel** itemByName_raw(const char* name, size_t& return_size) const = 0;
    virtual ManufacturingModel* itemById_raw(const char* id) const = 0;
    virtual ManufacturingModelInput* createInput_raw() = 0;
    virtual ManufacturingModel* add_raw(ManufacturingModelInput* input) = 0;
    virtual bool syncAllManufacturingModels_raw() = 0;
};

// Inline wrappers

inline size_t ManufacturingModels::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<ManufacturingModel> ManufacturingModels::item(size_t index) const
{
    core::Ptr<ManufacturingModel> res = item_raw(index);
    return res;
}

inline std::vector<core::Ptr<ManufacturingModel>> ManufacturingModels::itemByName(const std::string& name) const
{
    std::vector<core::Ptr<ManufacturingModel>> res;
    size_t s;

    ManufacturingModel** p= itemByName_raw(name.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ManufacturingModel> ManufacturingModels::itemById(const std::string& id) const
{
    core::Ptr<ManufacturingModel> res = itemById_raw(id.c_str());
    return res;
}

inline core::Ptr<ManufacturingModelInput> ManufacturingModels::createInput()
{
    core::Ptr<ManufacturingModelInput> res = createInput_raw();
    return res;
}

inline core::Ptr<ManufacturingModel> ManufacturingModels::add(const core::Ptr<ManufacturingModelInput>& input)
{
    core::Ptr<ManufacturingModel> res = add_raw(input.get());
    return res;
}

inline bool ManufacturingModels::syncAllManufacturingModels()
{
    bool res = syncAllManufacturingModels_raw();
    return res;
}

template <class OutputIterator> inline void ManufacturingModels::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MANUFACTURINGMODELS_API