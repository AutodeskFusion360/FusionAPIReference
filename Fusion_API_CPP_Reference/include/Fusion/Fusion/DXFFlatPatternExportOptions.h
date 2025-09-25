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
# ifdef __COMPILING_ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_CPP__
# define ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines that a DXF export of a flat pattern is to be done and specifies the various options.
class DXFFlatPatternExportOptions : public ExportOptions {
public:

    /// Specifies if splines are converted to polylines. If true, the convertToPolylineTolerance
    /// value is used to specify the accuracy of the conversion. Defaults to false.
    bool isSplineConvertedToPolyline() const;
    bool isSplineConvertedToPolyline(bool value);

    /// Specifies the tolerance when converting a spline to polylines. This value is only used when
    /// the isSplineConvertedToPolyline property is true and otherwise it is ignored. The units for
    /// this value are centimeters. Defaults to 0.01 cm.
    double convertToPolylineTolerance() const;
    bool convertToPolylineTolerance(double value);

    /// Gets and sets the units that will be used for the DXF file. This defaults to be
    /// the same as the default units of the design.
    DistanceUnits units() const;
    bool units(DistanceUnits value);

    /// Specifies if the center lines (bend line) of the flat pattern are exported in the DXF.
    /// Defaults to true.
    bool isCenterLinesExported() const;
    bool isCenterLinesExported(bool value);

    /// Specifies if the bend extent lines of the flat pattern are exported in the DXF.
    /// Defaults to true.
    bool isExtentLinesExported() const;
    bool isExtentLinesExported(bool value);

    ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSplineConvertedToPolyline_raw() const = 0;
    virtual bool isSplineConvertedToPolyline_raw(bool value) = 0;
    virtual double convertToPolylineTolerance_raw() const = 0;
    virtual bool convertToPolylineTolerance_raw(double value) = 0;
    virtual DistanceUnits units_raw() const = 0;
    virtual bool units_raw(DistanceUnits value) = 0;
    virtual bool isCenterLinesExported_raw() const = 0;
    virtual bool isCenterLinesExported_raw(bool value) = 0;
    virtual bool isExtentLinesExported_raw() const = 0;
    virtual bool isExtentLinesExported_raw(bool value) = 0;
};

// Inline wrappers

inline bool DXFFlatPatternExportOptions::isSplineConvertedToPolyline() const
{
    bool res = isSplineConvertedToPolyline_raw();
    return res;
}

inline bool DXFFlatPatternExportOptions::isSplineConvertedToPolyline(bool value)
{
    return isSplineConvertedToPolyline_raw(value);
}

inline double DXFFlatPatternExportOptions::convertToPolylineTolerance() const
{
    double res = convertToPolylineTolerance_raw();
    return res;
}

inline bool DXFFlatPatternExportOptions::convertToPolylineTolerance(double value)
{
    return convertToPolylineTolerance_raw(value);
}

inline DistanceUnits DXFFlatPatternExportOptions::units() const
{
    DistanceUnits res = units_raw();
    return res;
}

inline bool DXFFlatPatternExportOptions::units(DistanceUnits value)
{
    return units_raw(value);
}

inline bool DXFFlatPatternExportOptions::isCenterLinesExported() const
{
    bool res = isCenterLinesExported_raw();
    return res;
}

inline bool DXFFlatPatternExportOptions::isCenterLinesExported(bool value)
{
    return isCenterLinesExported_raw(value);
}

inline bool DXFFlatPatternExportOptions::isExtentLinesExported() const
{
    bool res = isExtentLinesExported_raw();
    return res;
}

inline bool DXFFlatPatternExportOptions::isExtentLinesExported(bool value)
{
    return isExtentLinesExported_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DXFFLATPATTERNEXPORTOPTIONS_API