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
#include "CAMExportOptions.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_CPP__
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMAdditiveBuildExportFilter;
}}

namespace adsk { namespace cam {

/// Additive buildfile export option. Available with all additive machines except for FFF and DED based machines.
/// Currently picks the first export filter from the print setting's export filter list.
class CAMAdditiveBuildExportOptions : public CAMExportOptions {
public:

    /// Gets a list of available export filters from the setup's print setting.
    /// The export object must be set before using this function.
    std::vector<core::Ptr<CAMAdditiveBuildExportFilter>> exportFilters() const;

    /// Gets and sets the export filter to be used for the export.
    /// By default, this is the first entry in the print setting's filter list.
    std::string selectedExportFilterId() const;
    bool selectedExportFilterId(const std::string& value);

    ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMAdditiveBuildExportFilter** exportFilters_raw(size_t& return_size) const = 0;
    virtual char* selectedExportFilterId_raw() const = 0;
    virtual bool selectedExportFilterId_raw(const char* value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<CAMAdditiveBuildExportFilter>> CAMAdditiveBuildExportOptions::exportFilters() const
{
    std::vector<core::Ptr<CAMAdditiveBuildExportFilter>> res;
    size_t s;

    CAMAdditiveBuildExportFilter** p= exportFilters_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMAdditiveBuildExportOptions::selectedExportFilterId() const
{
    std::string res;

    char* p= selectedExportFilterId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMAdditiveBuildExportOptions::selectedExportFilterId(const std::string& value)
{
    return selectedExportFilterId_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMADDITIVEBUILDEXPORTOPTIONS_API