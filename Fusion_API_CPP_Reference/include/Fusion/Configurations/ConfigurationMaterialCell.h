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
# ifdef __COMPILING_ADSK_FUSION_CONFIGURATIONMATERIALCELL_CPP__
# define ADSK_FUSION_CONFIGURATIONMATERIALCELL_API XI_EXPORT
# else
# define ADSK_FUSION_CONFIGURATIONMATERIALCELL_API
# endif
#else
# define ADSK_FUSION_CONFIGURATIONMATERIALCELL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Material;
}}
namespace adsk { namespace fusion {
    class ConfigurationMaterialColumn;
}}

namespace adsk { namespace fusion {

/// Represents a single cell within a ConfigurationMaterialTable table that controls which
/// material is assigned to a component or body.
class ConfigurationMaterialCell : public ConfigurationCell {
public:

    /// Returns the column this cell is in.
    core::Ptr<ConfigurationMaterialColumn> parentColumn() const;

    /// Gets and sets the material associated with this cell. When setting this property,
    /// the material used must exist in the design.
    core::Ptr<core::Material> material() const;
    bool material(const core::Ptr<core::Material>& value);

    ADSK_FUSION_CONFIGURATIONMATERIALCELL_API static const char* classType();
    ADSK_FUSION_CONFIGURATIONMATERIALCELL_API const char* objectType() const override;
    ADSK_FUSION_CONFIGURATIONMATERIALCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONFIGURATIONMATERIALCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConfigurationMaterialColumn* parentColumn_raw() const = 0;
    virtual core::Material* material_raw() const = 0;
    virtual bool material_raw(core::Material* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConfigurationMaterialColumn> ConfigurationMaterialCell::parentColumn() const
{
    core::Ptr<ConfigurationMaterialColumn> res = parentColumn_raw();
    return res;
}

inline core::Ptr<core::Material> ConfigurationMaterialCell::material() const
{
    core::Ptr<core::Material> res = material_raw();
    return res;
}

inline bool ConfigurationMaterialCell::material(const core::Ptr<core::Material>& value)
{
    return material_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONFIGURATIONMATERIALCELL_API