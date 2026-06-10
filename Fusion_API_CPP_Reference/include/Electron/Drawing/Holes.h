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
#include "../ElectronTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_HOLES_CPP__
# define ADSK_ELECTRON_HOLES_API XI_EXPORT
# else
# define ADSK_ELECTRON_HOLES_API
# endif
#else
# define ADSK_ELECTRON_HOLES_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Hole;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The Holes collection provides access to all of the through-holes within a board or package.
class Holes : public core::Base {
public:

    /// Number of holes in this collection.
    size_t count() const;

    /// Function that returns the specified hole using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Hole> item(size_t index) const;

    typedef Hole iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_ELECTRON_HOLES_API static const char* classType();
    ADSK_ELECTRON_HOLES_API const char* objectType() const override;
    ADSK_ELECTRON_HOLES_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_HOLES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual Hole* item_raw(size_t index) const = 0;
};

// Inline wrappers

inline size_t Holes::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Hole> Holes::item(size_t index) const
{
    core::Ptr<Hole> res = item_raw(index);
    return res;
}

template <class OutputIterator> inline void Holes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_HOLES_API