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
#include "../VolumeTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GRAPHNODEPROPERTIES_CPP__
# define ADSK_VOLUME_GRAPHNODEPROPERTIES_API XI_EXPORT
# else
# define ADSK_VOLUME_GRAPHNODEPROPERTIES_API
# endif
#else
# define ADSK_VOLUME_GRAPHNODEPROPERTIES_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class GraphNodeProperty;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A collection of properties of a graph node.
class GraphNodeProperties : public core::Base {
public:

    /// The number of items in the collection.
    size_t count() const;

    /// Function that returns the specified property using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<GraphNodeProperty> item(size_t index) const;

    /// Returns the property with the specified internal name.
    /// propertyName : The id of the property.
    /// Returns the specified property or null in the case where there is no property with the specified id.
    core::Ptr<GraphNodeProperty> itemByName(const std::string& propertyName) const;

    typedef GraphNodeProperty iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_VOLUME_GRAPHNODEPROPERTIES_API static const char* classType();
    ADSK_VOLUME_GRAPHNODEPROPERTIES_API const char* objectType() const override;
    ADSK_VOLUME_GRAPHNODEPROPERTIES_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GRAPHNODEPROPERTIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual GraphNodeProperty* item_raw(size_t index) const = 0;
    virtual GraphNodeProperty* itemByName_raw(const char* propertyName) const = 0;
};

// Inline wrappers

inline size_t GraphNodeProperties::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<GraphNodeProperty> GraphNodeProperties::item(size_t index) const
{
    core::Ptr<GraphNodeProperty> res = item_raw(index);
    return res;
}

inline core::Ptr<GraphNodeProperty> GraphNodeProperties::itemByName(const std::string& propertyName) const
{
    core::Ptr<GraphNodeProperty> res = itemByName_raw(propertyName.c_str());
    return res;
}

template <class OutputIterator> inline void GraphNodeProperties::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GRAPHNODEPROPERTIES_API