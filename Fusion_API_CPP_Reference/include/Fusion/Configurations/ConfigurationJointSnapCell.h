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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationJointSnap;
    class ConfigurationJointSnapColumn;
}}

namespace adsk { namespace fusion {

/// This object represents a joint snap that has been defined for a ConfigurationJointSnapColumn.
/// Joint snaps are defined on the parent column, and the cell specifies which of the defined
/// snaps will be used when the parent row of the cell is active.
class ConfigurationJointSnapCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationJointSnapColumn> parentColumn() const;

    /// Gets and sets which snap will be used when the row this cell is in is active. When
    /// setting this property, only snaps defined for the  parent column of this cell
    /// can be used.
    core::Ptr<ConfigurationJointSnap> snap() const;
    bool snap(const core::Ptr<ConfigurationJointSnap>& value);

    ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationJointSnapColumn* parentColumn_raw() const = 0;
    virtual ConfigurationJointSnap* snap_raw() const = 0;
    virtual bool snap_raw(ConfigurationJointSnap* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationJointSnapColumn> ConfigurationJointSnapCell::parentColumn() const
{
    core::Ptr<ConfigurationJointSnapColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<ConfigurationJointSnap> ConfigurationJointSnapCell::snap() const
{
    core::Ptr<ConfigurationJointSnap> res = snap_raw();
    return res;
}

inline bool ConfigurationJointSnapCell::snap(const core::Ptr<ConfigurationJointSnap>& value)
{
    return snap_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONJOINTSNAPCELL_API