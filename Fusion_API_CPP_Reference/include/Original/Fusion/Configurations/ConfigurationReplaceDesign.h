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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_CPP__
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}

namespace adsk { namespace fusion {

/// This object represents an individual ConfigurationReplaceDesign object that has been defined for a
/// ConfigurationReplaceDesignColumn. Multiple ConfigurationReplaceDesign objects can be defined for a
/// column and then one of those ConfigurationReplaceDesign objects is specified in each cell of the column.
class ConfigurationReplaceDesign : public core::Base {
public:

    /// Gets the name of the ConfigurationReplaceDesign object.
    std::string name() const;

    /// Gets the Design object associated with this ConfigurationReplaceDesign object.
    /// This must be a DataFile object that represents a standard design, not a configured design.
    core::Ptr<core::DataFile> dataFile() const;

    /// Deletes this ConfigurationReplaceDesign.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual core::DataFile* dataFile_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline std::string ConfigurationReplaceDesign::name() const
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

inline core::Ptr<core::DataFile> ConfigurationReplaceDesign::dataFile() const
{
    core::Ptr<core::DataFile> res = dataFile_raw();
    return res;
}

inline bool ConfigurationReplaceDesign::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONREPLACEDESIGN_API