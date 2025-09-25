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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SNAPSHOTS_CPP__
# define ADSK_FUSION_SNAPSHOTS_API XI_EXPORT
# else
# define ADSK_FUSION_SNAPSHOTS_API
# endif
#else
# define ADSK_FUSION_SNAPSHOTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Snapshot;
}}

namespace adsk { namespace fusion {

/// Provides access to the Snapshots within a design and provides
/// methods to create new Snapshots.
class Snapshots : public core::Base {
public:

    /// Creates a new snapshot. Creating a snapshot is only valid when the HasPendingTransforms property returns true.
    /// Returns the newly created snapshot.
    core::Ptr<Snapshot> add();

    /// Function that returns the specified snapshot in the collection using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Snapshot> item(size_t index) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Indicates if there are any changes that have been made than can be snapshot.
    bool hasPendingSnapshot() const;

    /// Reverts and changes that have been made that can be snapshot. This effectively
    /// reverts the design back to the last snapshot. This is only valid when the
    /// HasPendingSnapshot property returns true.
    /// Returns true if the revert was successful.
    bool revertPendingSnapshot();

    typedef Snapshot iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SNAPSHOTS_API static const char* classType();
    ADSK_FUSION_SNAPSHOTS_API const char* objectType() const override;
    ADSK_FUSION_SNAPSHOTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SNAPSHOTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Snapshot* add_raw() = 0;
    virtual Snapshot* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool hasPendingSnapshot_raw() const = 0;
    virtual bool revertPendingSnapshot_raw() = 0;
};

// Inline wrappers

inline core::Ptr<Snapshot> Snapshots::add()
{
    core::Ptr<Snapshot> res = add_raw();
    return res;
}

inline core::Ptr<Snapshot> Snapshots::item(size_t index) const
{
    core::Ptr<Snapshot> res = item_raw(index);
    return res;
}

inline size_t Snapshots::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool Snapshots::hasPendingSnapshot() const
{
    bool res = hasPendingSnapshot_raw();
    return res;
}

inline bool Snapshots::revertPendingSnapshot()
{
    bool res = revertPendingSnapshot_raw();
    return res;
}

template <class OutputIterator> inline void Snapshots::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SNAPSHOTS_API