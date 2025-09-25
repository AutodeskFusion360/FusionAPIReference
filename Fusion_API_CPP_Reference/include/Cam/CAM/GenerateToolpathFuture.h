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
# ifdef __COMPILING_ADSK_CAM_GENERATETOOLPATHFUTURE_CPP__
# define ADSK_CAM_GENERATETOOLPATHFUTURE_API XI_EXPORT
# else
# define ADSK_CAM_GENERATETOOLPATHFUTURE_API
# endif
#else
# define ADSK_CAM_GENERATETOOLPATHFUTURE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Operations;
}}

namespace adsk { namespace cam {

///  Used to check the state and get back the results of an operation generation.
class GenerateToolpathFuture : public core::Base {
public:

    /// Returns the number of operations that need to be generated.
    int numberOfOperations() const;

    /// Returns the number of operations whose generation is complete.
    int numberOfCompleted() const;

    /// Returns a collection of all operations that need to be generated.
    core::Ptr<Operations> operations() const;

    /// Returns true if all operations are generated.
    bool isGenerationCompleted() const;

    /// Returns the number of tasks of operations that need to be generated.
    int numberOfTasks() const;

    /// Returns the number of tasks of operations whose generation is complete.
    int numberOfCompletedTasks() const;

    ADSK_CAM_GENERATETOOLPATHFUTURE_API static const char* classType();
    ADSK_CAM_GENERATETOOLPATHFUTURE_API const char* objectType() const override;
    ADSK_CAM_GENERATETOOLPATHFUTURE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_GENERATETOOLPATHFUTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int numberOfOperations_raw() const = 0;
    virtual int numberOfCompleted_raw() const = 0;
    virtual Operations* operations_raw() const = 0;
    virtual bool isGenerationCompleted_raw() const = 0;
    virtual int numberOfTasks_raw() const = 0;
    virtual int numberOfCompletedTasks_raw() const = 0;
};

// Inline wrappers

inline int GenerateToolpathFuture::numberOfOperations() const
{
    int res = numberOfOperations_raw();
    return res;
}

inline int GenerateToolpathFuture::numberOfCompleted() const
{
    int res = numberOfCompleted_raw();
    return res;
}

inline core::Ptr<Operations> GenerateToolpathFuture::operations() const
{
    core::Ptr<Operations> res = operations_raw();
    return res;
}

inline bool GenerateToolpathFuture::isGenerationCompleted() const
{
    bool res = isGenerationCompleted_raw();
    return res;
}

inline int GenerateToolpathFuture::numberOfTasks() const
{
    int res = numberOfTasks_raw();
    return res;
}

inline int GenerateToolpathFuture::numberOfCompletedTasks() const
{
    int res = numberOfCompletedTasks_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_GENERATETOOLPATHFUTURE_API