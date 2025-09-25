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
#include "ExportOptions.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_CPP__
# define ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines the various settings associated with exporting a sketch in DXF format.
class DXFSketchExportOptions : public ExportOptions {
public:

    /// Gets and sets the units that will be used for the DXF file. This defaults to be
    /// the same as the default units of the design.
    DistanceUnits units() const;
    bool units(DistanceUnits value);

    /// Indicates if construction geometry should be exported. Defaults to true,
    /// which will export all construction geometry. If false it will be ignored
    /// and not included in the DXF file.
    bool isConstructionExported() const;
    bool isConstructionExported(bool value);

    /// Indicates if the sketch points should be exported. Defaults to true,
    /// which will export all points. If false it will be ignored
    /// and not included in the DXF file.
    bool isPointsExported() const;
    bool isPointsExported(bool value);

    /// Indicates if any projected geometry should be exported. Defaults to true,
    /// which will export all projected geometry. If false it will be ignored
    /// and not included in the DXF file.
    bool isProjectedGeometryExported() const;
    bool isProjectedGeometryExported(bool value);

    ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DistanceUnits units_raw() const = 0;
    virtual bool units_raw(DistanceUnits value) = 0;
    virtual bool isConstructionExported_raw() const = 0;
    virtual bool isConstructionExported_raw(bool value) = 0;
    virtual bool isPointsExported_raw() const = 0;
    virtual bool isPointsExported_raw(bool value) = 0;
    virtual bool isProjectedGeometryExported_raw() const = 0;
    virtual bool isProjectedGeometryExported_raw(bool value) = 0;
};

// Inline wrappers

inline DistanceUnits DXFSketchExportOptions::units() const
{
    DistanceUnits res = units_raw();
    return res;
}

inline bool DXFSketchExportOptions::units(DistanceUnits value)
{
    return units_raw(value);
}

inline bool DXFSketchExportOptions::isConstructionExported() const
{
    bool res = isConstructionExported_raw();
    return res;
}

inline bool DXFSketchExportOptions::isConstructionExported(bool value)
{
    return isConstructionExported_raw(value);
}

inline bool DXFSketchExportOptions::isPointsExported() const
{
    bool res = isPointsExported_raw();
    return res;
}

inline bool DXFSketchExportOptions::isPointsExported(bool value)
{
    return isPointsExported_raw(value);
}

inline bool DXFSketchExportOptions::isProjectedGeometryExported() const
{
    bool res = isProjectedGeometryExported_raw();
    return res;
}

inline bool DXFSketchExportOptions::isProjectedGeometryExported(bool value)
{
    return isProjectedGeometryExported_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DXFSKETCHEXPORTOPTIONS_API