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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EXPORTMANAGER_CPP__
# define ADSK_FUSION_EXPORTMANAGER_API XI_EXPORT
# else
# define ADSK_FUSION_EXPORTMANAGER_API
# endif
#else
# define ADSK_FUSION_EXPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class C3MFExportOptions;
    class DXFFlatPatternExportOptions;
    class DXFSketchExportOptions;
    class ExportOptions;
    class FlatPattern;
    class FusionArchiveExportOptions;
    class IGESExportOptions;
    class OBJExportOptions;
    class SATExportOptions;
    class Sketch;
    class SMTExportOptions;
    class STEPExportOptions;
    class STLExportOptions;
    class USDExportOptions;
}}

namespace adsk { namespace fusion {

/// Provides support for exporting model data to various formats.
class ExportManager : public core::Base {
public:

    /// Creates an IGESExportOptions object that's used to export a design in IGES format. Creation
    /// of the IGESExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The IGESExportOptions supports any available
    /// options when exporting to IGES format.
    /// filename : The filename of the IGES file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created IGESExportOptions object or null if the creation failed.
    core::Ptr<IGESExportOptions> createIGESExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an STEPExportOptions object that's used to export a design in STEP format. Creation
    /// of the STEPExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The STEPExportOptions supports any available
    /// options when exporting to STEP format.
    /// filename : The filename of the STEP file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created STEPExportOptions object or null if the creation failed.
    core::Ptr<STEPExportOptions> createSTEPExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an SATExportOptions object that's used to export a design in SAT format. Creation
    /// of the SATExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The SATExportOptions supports any available
    /// options when exporting to SAT format.
    /// filename : The filename of the SAT file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created SATExportOptions object or null if the creation failed.
    core::Ptr<SATExportOptions> createSATExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an SMTExportOptions object that's used to export a design in SMT format. Creation
    /// of the SMTExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The SMTExportOptions supports any available
    /// options when exporting to SMT format.
    /// filename : The filename of the SMT file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created SMTExportOptions object or null if the creation failed.
    core::Ptr<SMTExportOptions> createSMTExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an FusionArchiveExportOptions object that's used to export a design in Fusion archive format. Creation
    /// of the FusionArchiveExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The FusionArchiveExportOptions supports any available
    /// options when exporting to Fusion archive format.
    /// filename : The filename of the Fusion archive file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created FusionArchiveExportOptions object or null if the creation failed.
    core::Ptr<FusionArchiveExportOptions> createFusionArchiveExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an STLExportOptions object that's used to export a design in STL format. Creation
    /// of the STLExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export.
    /// geometry : The geometry to export. This can be a BRepBody, Occurrence, or Component object.
    /// filename : The filename of the STL file to be created. This is optional and can be left out if the mesh will be opened in a mesh editor.
    /// The created createSTLExportOptions object or null if the creation failed.
    core::Ptr<STLExportOptions> createSTLExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename = "");

    /// Executes the export operation to create the file in the format specified by the provided ExportOptions object.
    /// exportOptions : An ExportOptions object that is created using one of the create methods on the ExportManager object. This
    /// defines the type of file and any available options supported for that file type.
    /// Returns true if the export was successful.
    bool execute(const core::Ptr<ExportOptions>& exportOptions);

    /// Creates a C3MFExportOptions object that's used to export a design in 3MF format. Creation
    /// of the C3MFExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export.
    /// geometry : The geometry to export. This can be a BRepBody, Occurrence, or Component object.
    /// filename : The filename of the 3MF file to be created. This is optional and can be left out if the mesh will be opened in a mesh editor.
    /// The created createC3MFExportOptions object or null if the creation failed.
    core::Ptr<C3MFExportOptions> createC3MFExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename = "");

    /// Creates an USDExportOptions object that's used to export a design in USD format. Creation
    /// of the USDExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export. The USDExportOptions supports any available
    /// options when exporting to USD format.
    /// filename : The filename of the USD file to be created.
    /// geometry : The geometry to export. Valid geometry for this is currently a Component object. This argument is optional
    /// and if not specified, it results in the root component and it entire contents being exported.
    /// The created USDExportOptions object or null if the creation failed.
    core::Ptr<USDExportOptions> createUSDExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry = NULL);

    /// Creates an OBJExportOptions object that's used to export a design in OBJ format. Creation
    /// of the OBJExportOptions object does not perform the export. You must pass this object to the
    /// ExportManager.execute method to perform the export.
    /// geometry : The geometry to export. This can be a BRepBody, Occurrence, or Component object.
    /// filename : The filename of the OBJ file to be created. This is optional and can be left out if the mesh will be opened in a mesh editor.
    /// The created createOBJExportOptions object or null if the creation failed.
    core::Ptr<OBJExportOptions> createOBJExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename = "");

    /// Creates a DXFFlatPatternExport object that's used to export a flat pattern in DXF format. Creation
    /// of the DXFFlatPatternExport object does not perform the export. You must call the execute method.
    /// You can change any additional settings by setting properties on the returned object before calling
    /// the execute method.
    /// filename : The filename of the DXF file to be created.
    /// flatPattern : The FlatPattern object to export.
    /// The created DXFFlatPatternExport object or null if the creation failed.
    core::Ptr<DXFFlatPatternExportOptions> createDXFFlatPatternExportOptions(const std::string& filename, const core::Ptr<FlatPattern>& flatPattern);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a DXFSketchExportOptions object that's used to export a sketch in DXF format. Creation
    /// of the DXFSketchExportOptions object does not perform the export. You must call the execute method after changing
    /// the settings to the desired values.
    /// filename : The filename of the DXF file to be created.
    /// sketch : The Sketch object to export.
    /// The created DXFSketchExportOptions object or null if the creation failed.
    core::Ptr<DXFSketchExportOptions> createDXFSketchExportOptions(const std::string& filename, const core::Ptr<Sketch>& sketch);

    ADSK_FUSION_EXPORTMANAGER_API static const char* classType();
    ADSK_FUSION_EXPORTMANAGER_API const char* objectType() const override;
    ADSK_FUSION_EXPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual IGESExportOptions* createIGESExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual STEPExportOptions* createSTEPExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual SATExportOptions* createSATExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual SMTExportOptions* createSMTExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual FusionArchiveExportOptions* createFusionArchiveExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual STLExportOptions* createSTLExportOptions_raw(core::Base* geometry, const char* filename) = 0;
    virtual bool execute_raw(ExportOptions* exportOptions) = 0;
    virtual C3MFExportOptions* createC3MFExportOptions_raw(core::Base* geometry, const char* filename) = 0;
    virtual USDExportOptions* createUSDExportOptions_raw(const char* filename, core::Base* geometry) = 0;
    virtual OBJExportOptions* createOBJExportOptions_raw(core::Base* geometry, const char* filename) = 0;
    virtual DXFFlatPatternExportOptions* createDXFFlatPatternExportOptions_raw(const char* filename, FlatPattern* flatPattern) = 0;
    virtual DXFSketchExportOptions* createDXFSketchExportOptions_raw(const char* filename, Sketch* sketch) = 0;
};

// Inline wrappers

inline core::Ptr<IGESExportOptions> ExportManager::createIGESExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<IGESExportOptions> res = createIGESExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<STEPExportOptions> ExportManager::createSTEPExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<STEPExportOptions> res = createSTEPExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<SATExportOptions> ExportManager::createSATExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<SATExportOptions> res = createSATExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<SMTExportOptions> ExportManager::createSMTExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<SMTExportOptions> res = createSMTExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<FusionArchiveExportOptions> ExportManager::createFusionArchiveExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<FusionArchiveExportOptions> res = createFusionArchiveExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<STLExportOptions> ExportManager::createSTLExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename)
{
    core::Ptr<STLExportOptions> res = createSTLExportOptions_raw(geometry.get(), filename.c_str());
    return res;
}

inline bool ExportManager::execute(const core::Ptr<ExportOptions>& exportOptions)
{
    bool res = execute_raw(exportOptions.get());
    return res;
}

inline core::Ptr<C3MFExportOptions> ExportManager::createC3MFExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename)
{
    core::Ptr<C3MFExportOptions> res = createC3MFExportOptions_raw(geometry.get(), filename.c_str());
    return res;
}

inline core::Ptr<USDExportOptions> ExportManager::createUSDExportOptions(const std::string& filename, const core::Ptr<core::Base>& geometry)
{
    core::Ptr<USDExportOptions> res = createUSDExportOptions_raw(filename.c_str(), geometry.get());
    return res;
}

inline core::Ptr<OBJExportOptions> ExportManager::createOBJExportOptions(const core::Ptr<core::Base>& geometry, const std::string& filename)
{
    core::Ptr<OBJExportOptions> res = createOBJExportOptions_raw(geometry.get(), filename.c_str());
    return res;
}

inline core::Ptr<DXFFlatPatternExportOptions> ExportManager::createDXFFlatPatternExportOptions(const std::string& filename, const core::Ptr<FlatPattern>& flatPattern)
{
    core::Ptr<DXFFlatPatternExportOptions> res = createDXFFlatPatternExportOptions_raw(filename.c_str(), flatPattern.get());
    return res;
}

inline core::Ptr<DXFSketchExportOptions> ExportManager::createDXFSketchExportOptions(const std::string& filename, const core::Ptr<Sketch>& sketch)
{
    core::Ptr<DXFSketchExportOptions> res = createDXFSketchExportOptions_raw(filename.c_str(), sketch.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXPORTMANAGER_API