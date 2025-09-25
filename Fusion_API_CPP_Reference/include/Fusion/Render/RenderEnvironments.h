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
# ifdef __COMPILING_ADSK_FUSION_RENDERENVIRONMENTS_CPP__
# define ADSK_FUSION_RENDERENVIRONMENTS_API XI_EXPORT
# else
# define ADSK_FUSION_RENDERENVIRONMENTS_API
# endif
#else
# define ADSK_FUSION_RENDERENVIRONMENTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RenderEnvironment;
}}

namespace adsk { namespace fusion {

/// The list of available render environments. This represents the list of environments
/// shown in the "Scene Settings" dialog as being in the "Fusion Library". It does not
/// include a custom environment, if one has been loaded.
class RenderEnvironments : public core::Base {
public:

    /// Method that returns the specified render environment using an index into the collection.
    /// index : The index of the item within the collection. The first item has an index of 0.
    /// Returns the specified render environment or null if an invalid index was specified.
    core::Ptr<RenderEnvironment> item(int index) const;

    /// The number of render environments in the collection.
    size_t count() const;

    /// Returns the specified render environment using the name as seen in the user interface.
    /// name : The name of the render environment to return.
    /// Returns the specified render environment or null if there's no match on the name.
    core::Ptr<RenderEnvironment> itemByName(const std::string& name) const;

    /// Returns the render environment with the specified ID.
    /// id : The ID of the render environment to return.
    /// Returns the specified render environment or null if the ID does not match a render environment.
    core::Ptr<RenderEnvironment> itemById(const std::string& id) const;

    typedef RenderEnvironment iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_RENDERENVIRONMENTS_API static const char* classType();
    ADSK_FUSION_RENDERENVIRONMENTS_API const char* objectType() const override;
    ADSK_FUSION_RENDERENVIRONMENTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RENDERENVIRONMENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RenderEnvironment* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual RenderEnvironment* itemByName_raw(const char* name) const = 0;
    virtual RenderEnvironment* itemById_raw(const char* id) const = 0;
};

// Inline wrappers

inline core::Ptr<RenderEnvironment> RenderEnvironments::item(int index) const
{
    core::Ptr<RenderEnvironment> res = item_raw(index);
    return res;
}

inline size_t RenderEnvironments::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<RenderEnvironment> RenderEnvironments::itemByName(const std::string& name) const
{
    core::Ptr<RenderEnvironment> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<RenderEnvironment> RenderEnvironments::itemById(const std::string& id) const
{
    core::Ptr<RenderEnvironment> res = itemById_raw(id.c_str());
    return res;
}

template <class OutputIterator> inline void RenderEnvironments::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RENDERENVIRONMENTS_API