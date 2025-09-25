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
# ifdef __COMPILING_ADSK_CAM_CAMEXPORTOPTIONS_CPP__
# define ADSK_CAM_CAMEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAMEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Parent class for all ExportOptions objects giving access to the setup and file name used for the export.
class CAMExportOptions : public core::Base {
public:

    /// The file we want to export to. Needs to contain a valid path, as no intermediate folders are created.
    std::string fullFilename() const;
    bool fullFilename(const std::string& value);

    /// The export object we want to export. Depending on the actual export option, this might be geometry, an operation or a setup.
    core::Ptr<core::Base> exportObject() const;
    bool exportObject(const core::Ptr<core::Base>& value);

    /// Path to the thumbnail for the buildfile
    std::string thumbnailPath() const;
    bool thumbnailPath(const std::string& value);

    /// Method to check if the exporter implementation supports thumbnail
    bool isThumbnailSupported() const;

    /// Gets the last encountered error message.
    /// When the CAMExportManager's executeWithExportFuture() method is used, this method only returns errors encoutered when setting up the export.
    /// Errors thrown afterwards can be retrieved via the CAMExportFuture object.
    /// When the CAMExportManager's execute() method is used, any error can be retrieved using this property.
    /// Returns an empty string if no errors have been found.
    std::string error() const;

    ADSK_CAM_CAMEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAMEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAMEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* fullFilename_raw() const = 0;
    virtual bool fullFilename_raw(const char* value) = 0;
    virtual core::Base* exportObject_raw() const = 0;
    virtual bool exportObject_raw(core::Base* value) = 0;
    virtual char* thumbnailPath_raw() const = 0;
    virtual bool thumbnailPath_raw(const char* value) = 0;
    virtual bool isThumbnailSupported_raw() const = 0;
    virtual char* error_raw() const = 0;
    virtual void placeholderCAMExportOptions0() {}
    virtual void placeholderCAMExportOptions1() {}
    virtual void placeholderCAMExportOptions2() {}
    virtual void placeholderCAMExportOptions3() {}
    virtual void placeholderCAMExportOptions4() {}
    virtual void placeholderCAMExportOptions5() {}
    virtual void placeholderCAMExportOptions6() {}
    virtual void placeholderCAMExportOptions7() {}
};

// Inline wrappers

inline std::string CAMExportOptions::fullFilename() const
{
    std::string res;

    char* p= fullFilename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMExportOptions::fullFilename(const std::string& value)
{
    return fullFilename_raw(value.c_str());
}

inline core::Ptr<core::Base> CAMExportOptions::exportObject() const
{
    core::Ptr<core::Base> res = exportObject_raw();
    return res;
}

inline bool CAMExportOptions::exportObject(const core::Ptr<core::Base>& value)
{
    return exportObject_raw(value.get());
}

inline std::string CAMExportOptions::thumbnailPath() const
{
    std::string res;

    char* p= thumbnailPath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMExportOptions::thumbnailPath(const std::string& value)
{
    return thumbnailPath_raw(value.c_str());
}

inline bool CAMExportOptions::isThumbnailSupported() const
{
    bool res = isThumbnailSupported_raw();
    return res;
}

inline std::string CAMExportOptions::error() const
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
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMEXPORTOPTIONS_API