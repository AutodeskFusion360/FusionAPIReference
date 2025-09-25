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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONCELL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConfigurationRow;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a configuration table. This is the base class for the type-specific cell objects.
class ConfigurationCell : public core::Base {
public:

    /// Returns the row this cell is in.
    core::Ptr<ConfigurationRow> parentRow() const;

    ADSK_FUSION_CONFIGURATIONCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationRow* parentRow_raw() const = 0;
    virtual void placeholderConfigurationCell0() {}
    virtual void placeholderConfigurationCell1() {}
    virtual void placeholderConfigurationCell2() {}
    virtual void placeholderConfigurationCell3() {}
    virtual void placeholderConfigurationCell4() {}
    virtual void placeholderConfigurationCell5() {}
    virtual void placeholderConfigurationCell6() {}
    virtual void placeholderConfigurationCell7() {}
    virtual void placeholderConfigurationCell8() {}
    virtual void placeholderConfigurationCell9() {}
    virtual void placeholderConfigurationCell10() {}
    virtual void placeholderConfigurationCell11() {}
    virtual void placeholderConfigurationCell12() {}
    virtual void placeholderConfigurationCell13() {}
    virtual void placeholderConfigurationCell14() {}
    virtual void placeholderConfigurationCell15() {}
    virtual void placeholderConfigurationCell16() {}
    virtual void placeholderConfigurationCell17() {}
    virtual void placeholderConfigurationCell18() {}
    virtual void placeholderConfigurationCell19() {}
    virtual void placeholderConfigurationCell20() {}
    virtual void placeholderConfigurationCell21() {}
    virtual void placeholderConfigurationCell22() {}
    virtual void placeholderConfigurationCell23() {}
    virtual void placeholderConfigurationCell24() {}
    virtual void placeholderConfigurationCell25() {}
    virtual void placeholderConfigurationCell26() {}
    virtual void placeholderConfigurationCell27() {}
    virtual void placeholderConfigurationCell28() {}
    virtual void placeholderConfigurationCell29() {}
    virtual void placeholderConfigurationCell30() {}
};

// Inline wrappers

inline core::Ptr<ConfigurationRow> ConfigurationCell::parentRow() const
{
    core::Ptr<ConfigurationRow> res = parentRow_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONCELL_API