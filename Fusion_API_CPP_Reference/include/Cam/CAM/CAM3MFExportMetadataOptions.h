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
# ifdef __COMPILING_ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_CPP__
# define ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API
# endif
#else
# define ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Class providing read and write access to meta data of a 3MF file.
class CAM3MFExportMetadataOptions : public core::Base {
public:

    /// Enable or disable the integration of Metadata in the 3mf.
    /// This is true by default.
    bool enabled() const;
    bool enabled(bool value);

    /// Title of the 3MF File
    std::string title() const;
    bool title(const std::string& value);

    /// Designer of the 3MF File
    std::string designer() const;
    bool designer(const std::string& value);

    /// Description of the 3MF File
    std::string description() const;
    bool description(const std::string& value);

    /// Copyright of the 3MF File
    std::string copyright() const;
    bool copyright(const std::string& value);

    /// License terms of the 3MF File
    std::string licenseTerms() const;
    bool licenseTerms(const std::string& value);

    /// Creation date of the 3MF File
    std::string creationDate() const;
    bool creationDate(const std::string& value);

    /// Modification date of the 3MF File
    std::string modificationDate() const;
    bool modificationDate(const std::string& value);

    ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API static const char* classType();
    ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool enabled_raw() const = 0;
    virtual bool enabled_raw(bool value) = 0;
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual char* designer_raw() const = 0;
    virtual bool designer_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual char* copyright_raw() const = 0;
    virtual bool copyright_raw(const char* value) = 0;
    virtual char* licenseTerms_raw() const = 0;
    virtual bool licenseTerms_raw(const char* value) = 0;
    virtual char* creationDate_raw() const = 0;
    virtual bool creationDate_raw(const char* value) = 0;
    virtual char* modificationDate_raw() const = 0;
    virtual bool modificationDate_raw(const char* value) = 0;
};

// Inline wrappers

inline bool CAM3MFExportMetadataOptions::enabled() const
{
    bool res = enabled_raw();
    return res;
}

inline bool CAM3MFExportMetadataOptions::enabled(bool value)
{
    return enabled_raw(value);
}

inline std::string CAM3MFExportMetadataOptions::title() const
{
    std::string res;

    char* p= title_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::designer() const
{
    std::string res;

    char* p= designer_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::designer(const std::string& value)
{
    return designer_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::copyright() const
{
    std::string res;

    char* p= copyright_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::copyright(const std::string& value)
{
    return copyright_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::licenseTerms() const
{
    std::string res;

    char* p= licenseTerms_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::licenseTerms(const std::string& value)
{
    return licenseTerms_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::creationDate() const
{
    std::string res;

    char* p= creationDate_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::creationDate(const std::string& value)
{
    return creationDate_raw(value.c_str());
}

inline std::string CAM3MFExportMetadataOptions::modificationDate() const
{
    std::string res;

    char* p= modificationDate_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportMetadataOptions::modificationDate(const std::string& value)
{
    return modificationDate_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAM3MFEXPORTMETADATAOPTIONS_API