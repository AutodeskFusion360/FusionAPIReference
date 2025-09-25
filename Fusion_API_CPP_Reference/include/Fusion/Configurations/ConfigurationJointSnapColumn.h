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
#include "ConfigurationFeatureAspectColumn.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_CPP__
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationJointSnaps;
}}

namespace adsk { namespace fusion {

/// This object represents a column in the table that controls which joint
/// snap to use for a particular joint. The columns contains a list of
/// joint snaps that have been defined specifically for that column. One of
/// the joint snaps is specified for each cell in the column. That joint snap
/// will be used by the joint when the row that cell is in is active.
class ConfigurationJointSnapColumn : public ConfigurationFeatureAspectColumn {
public:

    /// Returns the joint or as-built joint being controlled by this column.
    /// 
    /// This property returns null when the table being queried was obtained from a DataFile object.
    core::Ptr<core::Base> joint() const;

    /// Provides access to any joint snaps that have been defined for this column. Using
    /// the returned collection you can define new joint snaps. Use the cell to specify
    /// which of the defined snaps is used for a specific row.
    core::Ptr<ConfigurationJointSnaps> snaps() const;

    ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* joint_raw() const = 0;
    virtual ConfigurationJointSnaps* snaps_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConfigurationJointSnapColumn::joint() const
{
    core::Ptr<core::Base> res = joint_raw();
    return res;
}

inline core::Ptr<ConfigurationJointSnaps> ConfigurationJointSnapColumn::snaps() const
{
    core::Ptr<ConfigurationJointSnaps> res = snaps_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONJOINTSNAPCOLUMN_API