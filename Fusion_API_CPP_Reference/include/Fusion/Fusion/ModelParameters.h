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
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MODELPARAMETERS_CPP__
# define ADSK_FUSION_MODELPARAMETERS_API XI_EXPORT
# else
# define ADSK_FUSION_MODELPARAMETERS_API
# endif
#else
# define ADSK_FUSION_MODELPARAMETERS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Provides access to the Model Parameters within a component.
class ModelParameters : public core::Base {
public:

    /// Function that returns the specified Model Parameter using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection
    /// has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<ModelParameter> item(size_t index) const;

    /// Function that returns the specified Model Parameter using the name of the parameter as it is
    /// displayed in the parameters dialog.
    /// name : The name of the Model Parameter as it is displayed in the parameters dialog
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<ModelParameter> itemByName(const std::string& name) const;

    /// Returns the number of parameters in the collection.
    size_t count() const;

    /// Returns the component that owns the Model Parameters collection
    core::Ptr<Component> component() const;

    typedef ModelParameter iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_MODELPARAMETERS_API static const char* classType();
    ADSK_FUSION_MODELPARAMETERS_API const char* objectType() const override;
    ADSK_FUSION_MODELPARAMETERS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MODELPARAMETERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* item_raw(size_t index) const = 0;
    virtual ModelParameter* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Component* component_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> ModelParameters::item(size_t index) const
{
    core::Ptr<ModelParameter> res = item_raw(index);
    return res;
}

inline core::Ptr<ModelParameter> ModelParameters::itemByName(const std::string& name) const
{
    core::Ptr<ModelParameter> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ModelParameters::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Component> ModelParameters::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

template <class OutputIterator> inline void ModelParameters::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MODELPARAMETERS_API