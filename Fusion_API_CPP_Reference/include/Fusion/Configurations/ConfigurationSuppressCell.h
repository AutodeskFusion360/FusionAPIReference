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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationSuppressColumn;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table that controls if a feature is suppressed.
/// Get the parent column to get the feature being suppressed.
class ConfigurationSuppressCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationSuppressColumn> parentColumn() const;

    /// Specifies if the feature is suppressed or not. This property behaves as read-only when the table is obtained from a DataFile.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationSuppressColumn* parentColumn_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationSuppressColumn> ConfigurationSuppressCell::parentColumn() const
{
    core::Ptr<ConfigurationSuppressColumn> res = parentColumn_raw();
    return res;
}

inline bool ConfigurationSuppressCell::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool ConfigurationSuppressCell::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONSUPPRESSCELL_API