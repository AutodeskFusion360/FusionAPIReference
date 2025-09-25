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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_GENERATEDDATACOLLECTION_CPP__
# define ADSK_CAM_GENERATEDDATACOLLECTION_API XI_EXPORT
# else
# define ADSK_CAM_GENERATEDDATACOLLECTION_API
# endif
#else
# define ADSK_CAM_GENERATEDDATACOLLECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class GeneratedData;
}}

namespace adsk { namespace cam {

/// Collection can hold multiple GeneratedData results for a particular operation, setup or folder.
/// In the case of folders and setups, the data associated with the child operations is not added to the collection.
/// In most cases folders and setups will not have any items in the collection, whereas most operations will only have one.
class GeneratedDataCollection : public core::Base {
public:

    /// Gets the desired generated data at the given index.
    core::Ptr<GeneratedData> item(int index);

    /// Gets the desired generated data. Generated result objects are unique for a given identifier, but may contain any number of child objects.
    core::Ptr<GeneratedData> itemByIdentifier(GeneratedDataType resultType);

    /// The number of items in the collection.
    size_t count() const;

    typedef GeneratedData iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_GENERATEDDATACOLLECTION_API static const char* classType();
    ADSK_CAM_GENERATEDDATACOLLECTION_API const char* objectType() const override;
    ADSK_CAM_GENERATEDDATACOLLECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_GENERATEDDATACOLLECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeneratedData* item_raw(int index) = 0;
    virtual GeneratedData* itemByIdentifier_raw(GeneratedDataType resultType) = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GeneratedData> GeneratedDataCollection::item(int index)
{
    core::Ptr<GeneratedData> res = item_raw(index);
    return res;
}

inline core::Ptr<GeneratedData> GeneratedDataCollection::itemByIdentifier(GeneratedDataType resultType)
{
    core::Ptr<GeneratedData> res = itemByIdentifier_raw(resultType);
    return res;
}

inline size_t GeneratedDataCollection::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void GeneratedDataCollection::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_GENERATEDDATACOLLECTION_API