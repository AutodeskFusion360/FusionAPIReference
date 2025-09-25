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
#include "GeneratedData.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_CPP__
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API XI_EXPORT
# else
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API
# endif
#else
# define ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class OptimizedOrientationResult;
}}

namespace adsk { namespace cam {

/// Collection of OptimizedOrientationResult instances associated with a given optimized orientation object inside an additive setup.
/// The number of instances is the number of results given and the initial orientation result.
/// The initial orientation will contain the orientation matrix, but not the other values calculated by the orientation operation.
/// Setting an OptimizedOrientationResult as the currentOrientationResult will transform the Occurrence assigned to the orientation operation.
class OptimizedOrientationResults : public GeneratedData {
public:

    /// Gets the desired orientation result at the given index. The list is ordered given the orientation parameters of the parent orientation operation.
    core::Ptr<OptimizedOrientationResult> item(int index);

    /// Gets the initial orientation of the component before any result has been applied.
    core::Ptr<OptimizedOrientationResult> initialOrientationResult() const;

    /// Gets or sets the desired OrientationResult.
    /// When setting, the orientation matrix is applied to the component selected in the parent orientation operation, possibly invalidating other operations.
    core::Ptr<OptimizedOrientationResult> currentOrientationResult() const;
    bool currentOrientationResult(const core::Ptr<OptimizedOrientationResult>& value);

    /// The number of items in the collection.
    size_t count() const;

    typedef OptimizedOrientationResult iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API static const char* classType();
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API const char* objectType() const override;
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OptimizedOrientationResult* item_raw(int index) = 0;
    virtual OptimizedOrientationResult* initialOrientationResult_raw() const = 0;
    virtual OptimizedOrientationResult* currentOrientationResult_raw() const = 0;
    virtual bool currentOrientationResult_raw(OptimizedOrientationResult* value) = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<OptimizedOrientationResult> OptimizedOrientationResults::item(int index)
{
    core::Ptr<OptimizedOrientationResult> res = item_raw(index);
    return res;
}

inline core::Ptr<OptimizedOrientationResult> OptimizedOrientationResults::initialOrientationResult() const
{
    core::Ptr<OptimizedOrientationResult> res = initialOrientationResult_raw();
    return res;
}

inline core::Ptr<OptimizedOrientationResult> OptimizedOrientationResults::currentOrientationResult() const
{
    core::Ptr<OptimizedOrientationResult> res = currentOrientationResult_raw();
    return res;
}

inline bool OptimizedOrientationResults::currentOrientationResult(const core::Ptr<OptimizedOrientationResult>& value)
{
    return currentOrientationResult_raw(value.get());
}

inline size_t OptimizedOrientationResults::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void OptimizedOrientationResults::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPTIMIZEDORIENTATIONRESULTS_API