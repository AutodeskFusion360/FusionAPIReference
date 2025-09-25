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
# ifdef __COMPILING_ADSK_FUSION_CUTPASTEBODIES_CPP__
# define ADSK_FUSION_CUTPASTEBODIES_API XI_EXPORT
# else
# define ADSK_FUSION_CUTPASTEBODIES_API
# endif
#else
# define ADSK_FUSION_CUTPASTEBODIES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CutPasteBody;
}}

namespace adsk { namespace fusion {

/// Collection that provides access to all of the existing cut-paste features in a design.
/// These are created in the UI by cutting and then pasting a B-Rep body.
class CutPasteBodies : public core::Base {
public:

    /// Function that returns the specified Cut/Paste Body feature using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CutPasteBody> item(size_t index) const;

    /// Function that returns the specified Cut/Paste Body feature using the name of the feature.
    /// name : The name of the feature within the collection to return. This is the name seen in the timeline.
    /// Returns the specified item or null if the specified name was not found.
    core::Ptr<CutPasteBody> itemByName(const std::string& name) const;

    /// The number of Cut/Paste Body features in the collection.
    size_t count() const;

    /// Cuts and copies the specified body into the component that owns this CutPasteBodies collection.
    /// This is effectively the equivalent of moving a body.
    /// sourceBody : Either an ObjectCollection of BRepBodies or a single BRepBody object to cut.
    /// Returns the newly created BRepBody object or null in the case of failure.
    core::Ptr<CutPasteBody> add(const core::Ptr<core::Base>& sourceBody);

    typedef CutPasteBody iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CUTPASTEBODIES_API static const char* classType();
    ADSK_FUSION_CUTPASTEBODIES_API const char* objectType() const override;
    ADSK_FUSION_CUTPASTEBODIES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUTPASTEBODIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CutPasteBody* item_raw(size_t index) const = 0;
    virtual CutPasteBody* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual CutPasteBody* add_raw(core::Base* sourceBody) = 0;
};

// Inline wrappers

inline core::Ptr<CutPasteBody> CutPasteBodies::item(size_t index) const
{
    core::Ptr<CutPasteBody> res = item_raw(index);
    return res;
}

inline core::Ptr<CutPasteBody> CutPasteBodies::itemByName(const std::string& name) const
{
    core::Ptr<CutPasteBody> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t CutPasteBodies::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<CutPasteBody> CutPasteBodies::add(const core::Ptr<core::Base>& sourceBody)
{
    core::Ptr<CutPasteBody> res = add_raw(sourceBody.get());
    return res;
}

template <class OutputIterator> inline void CutPasteBodies::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUTPASTEBODIES_API