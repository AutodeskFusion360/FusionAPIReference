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
# ifdef __COMPILING_ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_CPP__
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API XI_EXPORT
# else
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API
# endif
#else
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Export filter used by CAMAdditiveMachineBuildFileExportOptions.
class CAMAdditiveBuildExportFilter : public core::Base {
public:

    /// True if the export outputs multiple files.
    /// If so, fullFilename should point to a directory, not a file.
    bool isMultiFileExport() const;

    /// The extension of the file format, including a leading "."
    std::string extension() const;

    /// The name of the file format. Might indicate whether a file format is binary or not.
    std::string name() const;

    /// The id of the file format.
    std::string id() const;

    ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API static const char* classType();
    ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API const char* objectType() const override;
    ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isMultiFileExport_raw() const = 0;
    virtual char* extension_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* id_raw() const = 0;
};

// Inline wrappers

inline bool CAMAdditiveBuildExportFilter::isMultiFileExport() const
{
    bool res = isMultiFileExport_raw();
    return res;
}

inline std::string CAMAdditiveBuildExportFilter::extension() const
{
    std::string res;

    char* p= extension_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMAdditiveBuildExportFilter::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMAdditiveBuildExportFilter::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMADDITIVEBUILDEXPORTFILTER_API