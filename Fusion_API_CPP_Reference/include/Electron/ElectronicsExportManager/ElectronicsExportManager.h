//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../../Core/Base.h"
#include "../ElectronTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_CPP__
# define ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API XI_EXPORT
# else
# define ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API
# endif
#else
# define ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class ElectronicsExportOptions;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Manages export of an electronics document to various formats.
/// Obtain an instance via the exportManager property on Board, Schematic, or Library.
class ElectronicsExportManager : public core::Base {
public:

    /// Creates export options for exporting this document as an EAGLE 9.6.2 board file (.brd).
    /// Only valid when called on a Board's export manager.
    /// outputPath : Full output file path including file name and extension (e.g. "C:/output/design.brd").
    /// An ElectronicsExportOptions object configured for .brd export, or null on failure.
    core::Ptr<ElectronicsExportOptions> createEagleBrdExportOptions(const std::string& outputPath) const;

    /// Creates export options for exporting this document as an EAGLE 9.6.2 schematic file (.sch).
    /// Only valid when called on a Schematic's export manager.
    /// outputPath : Full output file path including file name and extension (e.g. "C:/output/design.sch").
    /// An ElectronicsExportOptions object configured for .sch export, or null on failure.
    core::Ptr<ElectronicsExportOptions> createEagleSchExportOptions(const std::string& outputPath) const;

    /// Creates export options for exporting this document as an EAGLE 9.6.2 library file (.lbr).
    /// Only valid when called on a Library's export manager.
    /// outputPath : Full output file path including file name and extension (e.g. "C:/output/mylib.lbr").
    /// An ElectronicsExportOptions object configured for .lbr export, or null on failure.
    core::Ptr<ElectronicsExportOptions> createEagleLbrExportOptions(const std::string& outputPath) const;

    /// Executes the export using the provided options. Returns true on success.
    /// options : An ElectronicsExportOptions instance obtained from one of the createEagle*ExportOptions methods.
    /// True if the export succeeded; false otherwise.
    bool execute(const core::Ptr<ElectronicsExportOptions>& options);

    ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API static const char* classType();
    ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API const char* objectType() const override;
    ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ElectronicsExportOptions* createEagleBrdExportOptions_raw(const char* outputPath) const = 0;
    virtual ElectronicsExportOptions* createEagleSchExportOptions_raw(const char* outputPath) const = 0;
    virtual ElectronicsExportOptions* createEagleLbrExportOptions_raw(const char* outputPath) const = 0;
    virtual bool execute_raw(ElectronicsExportOptions* options) = 0;
};

// Inline wrappers

inline core::Ptr<ElectronicsExportOptions> ElectronicsExportManager::createEagleBrdExportOptions(const std::string& outputPath) const
{
    core::Ptr<ElectronicsExportOptions> res = createEagleBrdExportOptions_raw(outputPath.c_str());
    return res;
}

inline core::Ptr<ElectronicsExportOptions> ElectronicsExportManager::createEagleSchExportOptions(const std::string& outputPath) const
{
    core::Ptr<ElectronicsExportOptions> res = createEagleSchExportOptions_raw(outputPath.c_str());
    return res;
}

inline core::Ptr<ElectronicsExportOptions> ElectronicsExportManager::createEagleLbrExportOptions(const std::string& outputPath) const
{
    core::Ptr<ElectronicsExportOptions> res = createEagleLbrExportOptions_raw(outputPath.c_str());
    return res;
}

inline bool ElectronicsExportManager::execute(const core::Ptr<ElectronicsExportOptions>& options)
{
    bool res = execute_raw(options.get());
    return res;
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ELECTRONICSEXPORTMANAGER_API