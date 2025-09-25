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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMEXPORTFUTURE_CPP__
# define ADSK_CAM_CAMEXPORTFUTURE_API XI_EXPORT
# else
# define ADSK_CAM_CAMEXPORTFUTURE_API
# endif
#else
# define ADSK_CAM_CAMEXPORTFUTURE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMExportOptions;
}}

namespace adsk { namespace cam {

///  Used to check the state and get back the results of an operation generation.
class CAMExportFuture : public core::Base {
public:

    /// Returns the export option used to define the export associated with this future object.
    core::Ptr<CAMExportOptions> exportOptions() const;

    /// Returns true if the export has finished generating.
    bool isGenerationCompleted() const;

    /// Returns the progress as a percentage value between 0.0% and 100.0%.
    float progress() const;

    /// Gets the last encountered error message generated on the export thread.
    /// Returns an empty string if no errors have been found.
    std::string error() const;

    /// Gets the last encountered warning message  generated on the export thread.
    /// Returns an empty string if no warnings have been found.
    std::string warning() const;

    ADSK_CAM_CAMEXPORTFUTURE_API static const char* classType();
    ADSK_CAM_CAMEXPORTFUTURE_API const char* objectType() const override;
    ADSK_CAM_CAMEXPORTFUTURE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMEXPORTFUTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMExportOptions* exportOptions_raw() const = 0;
    virtual bool isGenerationCompleted_raw() const = 0;
    virtual float progress_raw() const = 0;
    virtual char* error_raw() const = 0;
    virtual char* warning_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CAMExportOptions> CAMExportFuture::exportOptions() const
{
    core::Ptr<CAMExportOptions> res = exportOptions_raw();
    return res;
}

inline bool CAMExportFuture::isGenerationCompleted() const
{
    bool res = isGenerationCompleted_raw();
    return res;
}

inline float CAMExportFuture::progress() const
{
    float res = progress_raw();
    return res;
}

inline std::string CAMExportFuture::error() const
{
    std::string res;

    char* p= error_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMExportFuture::warning() const
{
    std::string res;

    char* p= warning_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMEXPORTFUTURE_API