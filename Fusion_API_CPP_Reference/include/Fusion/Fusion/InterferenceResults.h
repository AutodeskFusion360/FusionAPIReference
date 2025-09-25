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
# ifdef __COMPILING_ADSK_FUSION_INTERFERENCERESULTS_CPP__
# define ADSK_FUSION_INTERFERENCERESULTS_API XI_EXPORT
# else
# define ADSK_FUSION_INTERFERENCERESULTS_API
# endif
#else
# define ADSK_FUSION_INTERFERENCERESULTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class InterferenceResult;
}}

namespace adsk { namespace fusion {

/// Transient object used to return the result of an interference analysis.
class InterferenceResults : public core::Base {
public:

    /// Function that returns the specified interference result using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<InterferenceResult> item(size_t index) const;

    /// Returns the number of interference results in the collection.
    size_t count() const;

    /// Creates bodies in the model that represent the interference volumes.
    /// This is not supported in parametric modeling.
    /// allInterferenceBodies : Sets if all bodies or only individual bodies will be created as bodies in the model.
    /// If False, then only interferenceResult objects whose isCreateBody property is true
    /// will be created as a model body. If true, all interface volumes will be created as
    /// a body regardless of the value of the isCreateBody property on each InterferenceResult object.
    /// Returns an ObjectCollection containing the bodies that were created.
    core::Ptr<core::ObjectCollection> createBodies(bool allInterferenceBodies);

    typedef InterferenceResult iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_INTERFERENCERESULTS_API static const char* classType();
    ADSK_FUSION_INTERFERENCERESULTS_API const char* objectType() const override;
    ADSK_FUSION_INTERFERENCERESULTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_INTERFERENCERESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual InterferenceResult* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual core::ObjectCollection* createBodies_raw(bool allInterferenceBodies) = 0;
};

// Inline wrappers

inline core::Ptr<InterferenceResult> InterferenceResults::item(size_t index) const
{
    core::Ptr<InterferenceResult> res = item_raw(index);
    return res;
}

inline size_t InterferenceResults::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> InterferenceResults::createBodies(bool allInterferenceBodies)
{
    core::Ptr<core::ObjectCollection> res = createBodies_raw(allInterferenceBodies);
    return res;
}

template <class OutputIterator> inline void InterferenceResults::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_INTERFERENCERESULTS_API