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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_CPP__
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
}}
namespace adsk { namespace fusion {
    class ConfigurationAppearanceColumn;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a ConfigurationAppearanceTable table that controls which
/// appearance is assigned to a component or body.
class ConfigurationAppearanceCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationAppearanceColumn> parentColumn() const;

    /// Gets and sets the appearance associated with this cell.
    /// This property can return null indicating the appearance from the physical material assigned to the object is inherited.
    /// Setting the property to null will inherit the appearance from the physical material assigned to the object.
    core::Ptr<core::Appearance> appearance() const;
    bool appearance(const core::Ptr<core::Appearance>& value);

    ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationAppearanceColumn* parentColumn_raw() const = 0;
    virtual core::Appearance* appearance_raw() const = 0;
    virtual bool appearance_raw(core::Appearance* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationAppearanceColumn> ConfigurationAppearanceCell::parentColumn() const
{
    core::Ptr<ConfigurationAppearanceColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<core::Appearance> ConfigurationAppearanceCell::appearance() const
{
    core::Ptr<core::Appearance> res = appearance_raw();
    return res;
}

inline bool ConfigurationAppearanceCell::appearance(const core::Ptr<core::Appearance>& value)
{
    return appearance_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONAPPEARANCECELL_API