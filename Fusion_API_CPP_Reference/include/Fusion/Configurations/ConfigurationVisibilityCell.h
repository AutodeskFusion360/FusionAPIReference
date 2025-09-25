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
#include "ConfigurationCell.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationVisibilityColumn;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table that controls whether an entity is visible. Get the parent column to get the entity.
class ConfigurationVisibilityCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationVisibilityColumn> parentColumn() const;

    /// Specifies if the entity is visible or not. This property behaves as read-only when the table is obtained from a DataFile.
    bool isVisible() const;
    bool isVisible(bool value);

    ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationVisibilityColumn* parentColumn_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationVisibilityColumn> ConfigurationVisibilityCell::parentColumn() const
{
    core::Ptr<ConfigurationVisibilityColumn> res = parentColumn_raw();
    return res;
}

inline bool ConfigurationVisibilityCell::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool ConfigurationVisibilityCell::isVisible(bool value)
{
    return isVisible_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONVISIBILITYCELL_API