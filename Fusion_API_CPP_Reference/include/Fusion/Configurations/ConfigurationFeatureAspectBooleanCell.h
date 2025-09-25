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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationFeatureAspectColumn;
}}

namespace adsk { namespace fusion {

/// This object represents a cell from a column that defines a configuration feature aspect with a Boolean value.
class ConfigurationFeatureAspectBooleanCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationFeatureAspectColumn> parentColumn() const;

    /// Gets and sets the value of the property associated with the parent column of this cell.
    bool value() const;
    bool value(bool value);

    ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationFeatureAspectColumn* parentColumn_raw() const = 0;
    virtual bool value_raw() const = 0;
    virtual bool value_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationFeatureAspectColumn> ConfigurationFeatureAspectBooleanCell::parentColumn() const
{
    core::Ptr<ConfigurationFeatureAspectColumn> res = parentColumn_raw();
    return res;
}

inline bool ConfigurationFeatureAspectBooleanCell::value() const
{
    bool res = value_raw();
    return res;
}

inline bool ConfigurationFeatureAspectBooleanCell::value(bool value)
{
    return value_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONFEATUREASPECTBOOLEANCELL_API