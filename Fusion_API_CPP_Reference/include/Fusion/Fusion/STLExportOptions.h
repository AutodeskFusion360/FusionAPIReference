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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_STLEXPORTOPTIONS_CPP__
# define ADSK_FUSION_STLEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_STLEXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_STLEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines that a STL export is to be done and specifies the various options.
class STLExportOptions : public ExportOptions {
public:

    /// Indicates if the STL file is to be an ASCII or binary STL format. The default is true.
    bool isBinaryFormat() const;
    bool isBinaryFormat(bool value);

    /// If the input is an Occurrence or the root Component, this specifies if a single file should be created containing
    /// all of the bodies within that occurrence or component or if multiple files should be created; one for each body.
    /// If multiple files are created, the body name is appended to the filename. The default is false.
    bool isOneFilePerBody() const;
    bool isOneFilePerBody(bool value);

    /// Gets and sets the current simple mesh refinement settings. Setting this property
    /// will reset the surfaceDeviation, normalDeviation, maximumEdgeLength, and aspectRatio
    /// to values that correspond to the specified mesh refinement. The default is MeshRefinementMedium.
    MeshRefinementSettings meshRefinement() const;
    bool meshRefinement(MeshRefinementSettings value);

    /// Gets and sets the current surface deviation, or the distance the mesh can deviate
    /// from the actual surface. This is defined in centimeter. Setting this property
    /// will automatically set the meshRefinement to MeshRefinementCustom. The default is the value
    /// associated with medium mesh refinement.
    double surfaceDeviation() const;
    bool surfaceDeviation(double value);

    /// Gets and sets the current normal deviation, or the angle the mesh normals at the vertices can deviate
    /// from the actual surface normals. This is defined in radians. Setting this property
    /// will automatically set the meshRefinement to MeshRefinementCustom. The default is the value
    /// associated with medium mesh refinement.
    double normalDeviation() const;
    bool normalDeviation(double value);

    /// Gets and sets the maximum length of any mesh edge. This is defined in centimeter. Setting this property
    /// will automatically set the meshRefinement to MeshRefinementCustom. The default is the value
    /// associated with medium mesh refinement.
    double maximumEdgeLength() const;
    bool maximumEdgeLength(double value);

    /// Gets and sets the minimum aspect ratio for that triangles that are generated for the mesh. Setting this property
    /// will automatically set the meshRefinement to MeshRefinementCustom. The default is the value
    /// associated with medium mesh refinement.
    double aspectRatio() const;
    bool aspectRatio(double value);

    /// Returns a list of the known available print utilities. These strings can be used to set the PrintUtility
    /// property to specify which print utility to open the STL file in.
    std::vector<std::string> availablePrintUtilities() const;

    /// Specifies which print utility to use when opening the STL file if the sendToPrintUtility property is true.
    /// The value of this property can be one of the strings returned by the availalbePrintUtilities property, which
    /// will specify one of the know print utilities. You can also specify a custom print utility by specifying
    /// the full path to the print utility executable. The default value of this property is the last setting specified
    /// in the user-interface.
    std::string printUtility() const;
    bool printUtility(const std::string& value);

    /// Gets and sets whether the created STL file will be sent to the print utility specified by the printUtility property. If this
    /// is false a filename must be defined.
    bool sendToPrintUtility() const;
    bool sendToPrintUtility(bool value);

    /// Gets and sets the units to use for the created STL file. When the STLExportOptions object is created, this property
    /// is initialized with the default units specified for the Design.
    DistanceUnits unitType() const;
    bool unitType(DistanceUnits value);

    ADSK_FUSION_STLEXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_STLEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_STLEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STLEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isBinaryFormat_raw() const = 0;
    virtual bool isBinaryFormat_raw(bool value) = 0;
    virtual bool isOneFilePerBody_raw() const = 0;
    virtual bool isOneFilePerBody_raw(bool value) = 0;
    virtual MeshRefinementSettings meshRefinement_raw() const = 0;
    virtual bool meshRefinement_raw(MeshRefinementSettings value) = 0;
    virtual double surfaceDeviation_raw() const = 0;
    virtual bool surfaceDeviation_raw(double value) = 0;
    virtual double normalDeviation_raw() const = 0;
    virtual bool normalDeviation_raw(double value) = 0;
    virtual double maximumEdgeLength_raw() const = 0;
    virtual bool maximumEdgeLength_raw(double value) = 0;
    virtual double aspectRatio_raw() const = 0;
    virtual bool aspectRatio_raw(double value) = 0;
    virtual char** availablePrintUtilities_raw(size_t& return_size) const = 0;
    virtual char* printUtility_raw() const = 0;
    virtual bool printUtility_raw(const char* value) = 0;
    virtual bool sendToPrintUtility_raw() const = 0;
    virtual bool sendToPrintUtility_raw(bool value) = 0;
    virtual DistanceUnits unitType_raw() const = 0;
    virtual bool unitType_raw(DistanceUnits value) = 0;
};

// Inline wrappers

inline bool STLExportOptions::isBinaryFormat() const
{
    bool res = isBinaryFormat_raw();
    return res;
}

inline bool STLExportOptions::isBinaryFormat(bool value)
{
    return isBinaryFormat_raw(value);
}

inline bool STLExportOptions::isOneFilePerBody() const
{
    bool res = isOneFilePerBody_raw();
    return res;
}

inline bool STLExportOptions::isOneFilePerBody(bool value)
{
    return isOneFilePerBody_raw(value);
}

inline MeshRefinementSettings STLExportOptions::meshRefinement() const
{
    MeshRefinementSettings res = meshRefinement_raw();
    return res;
}

inline bool STLExportOptions::meshRefinement(MeshRefinementSettings value)
{
    return meshRefinement_raw(value);
}

inline double STLExportOptions::surfaceDeviation() const
{
    double res = surfaceDeviation_raw();
    return res;
}

inline bool STLExportOptions::surfaceDeviation(double value)
{
    return surfaceDeviation_raw(value);
}

inline double STLExportOptions::normalDeviation() const
{
    double res = normalDeviation_raw();
    return res;
}

inline bool STLExportOptions::normalDeviation(double value)
{
    return normalDeviation_raw(value);
}

inline double STLExportOptions::maximumEdgeLength() const
{
    double res = maximumEdgeLength_raw();
    return res;
}

inline bool STLExportOptions::maximumEdgeLength(double value)
{
    return maximumEdgeLength_raw(value);
}

inline double STLExportOptions::aspectRatio() const
{
    double res = aspectRatio_raw();
    return res;
}

inline bool STLExportOptions::aspectRatio(double value)
{
    return aspectRatio_raw(value);
}

inline std::vector<std::string> STLExportOptions::availablePrintUtilities() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= availablePrintUtilities_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string STLExportOptions::printUtility() const
{
    std::string res;

    char* p= printUtility_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool STLExportOptions::printUtility(const std::string& value)
{
    return printUtility_raw(value.c_str());
}

inline bool STLExportOptions::sendToPrintUtility() const
{
    bool res = sendToPrintUtility_raw();
    return res;
}

inline bool STLExportOptions::sendToPrintUtility(bool value)
{
    return sendToPrintUtility_raw(value);
}

inline DistanceUnits STLExportOptions::unitType() const
{
    DistanceUnits res = unitType_raw();
    return res;
}

inline bool STLExportOptions::unitType(DistanceUnits value)
{
    return unitType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STLEXPORTOPTIONS_API