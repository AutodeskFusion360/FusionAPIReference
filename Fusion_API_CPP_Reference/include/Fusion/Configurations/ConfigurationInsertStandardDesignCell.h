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
#include "ConfigurationCell.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationInsertStandardDesignColumn;
    class ConfigurationReplaceDesign;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a top or custom theme configuration table that controls which design is
/// used for an inserted standard design. Use the parent column to get the occurrence being modified.
class ConfigurationInsertStandardDesignCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationInsertStandardDesignColumn> parentColumn() const;

    /// Gets and sets which ConfigurationReplaceDesign object will be used when the row
    /// this cell is in is active. When setting this property, only ConfigurationReplaceDesign objects
    /// defined for the parent column of this cell can be used.
    core::Ptr<ConfigurationReplaceDesign> replaceDesign() const;
    bool replaceDesign(const core::Ptr<ConfigurationReplaceDesign>& value);

    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationInsertStandardDesignColumn* parentColumn_raw() const = 0;
    virtual ConfigurationReplaceDesign* replaceDesign_raw() const = 0;
    virtual bool replaceDesign_raw(ConfigurationReplaceDesign* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationInsertStandardDesignColumn> ConfigurationInsertStandardDesignCell::parentColumn() const
{
    core::Ptr<ConfigurationInsertStandardDesignColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<ConfigurationReplaceDesign> ConfigurationInsertStandardDesignCell::replaceDesign() const
{
    core::Ptr<ConfigurationReplaceDesign> res = replaceDesign_raw();
    return res;
}

inline bool ConfigurationInsertStandardDesignCell::replaceDesign(const core::Ptr<ConfigurationReplaceDesign>& value)
{
    return replaceDesign_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONINSERTSTANDARDDESIGNCELL_API