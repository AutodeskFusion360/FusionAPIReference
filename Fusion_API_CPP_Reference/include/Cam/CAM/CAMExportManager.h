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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMEXPORTMANAGER_CPP__
# define ADSK_CAM_CAMEXPORTMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMEXPORTMANAGER_API
# endif
#else
# define ADSK_CAM_CAMEXPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAM3MFExportOptions;
    class CAMAdditiveBuildExportOptions;
    class CAMAutodeskCLDExportOptions;
    class CAMExportFuture;
    class CAMExportOptions;
    class CAMFormlabsExportOptions;
}}

namespace adsk { namespace cam {

/// Export manager used to export the setup's models in one of the formats defined the ExportOptions objects.
/// The export is currently restricted to additive setups only and the availability of the export option and its settings depends on the chosen machine.
class CAMExportManager : public core::Base {
public:

    /// Executes an export based on the export options.
    /// exportOptions : The export options defining the export type and necessary meta data.
    /// Returns true if the export finished successfully.
    bool execute(const core::Ptr<CAMExportOptions>& exportOptions);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new Formlabs export option.
    /// Returns new CAMFormlabsExportOptions.
    core::Ptr<CAMFormlabsExportOptions> createFormlabsOptions();

    /// Creates a new 3MF export option.
    /// Returns new CAM3MFExportOptions.
    core::Ptr<CAM3MFExportOptions> create3MFOptions();

    /// Creates a new export option based on the print setting's export formats.
    /// FFF and DED machines are not supported, their export files are generated using posts.
    /// Returns new CAMAdditiveBuildExportOptions.
    core::Ptr<CAMAdditiveBuildExportOptions> createCAMAdditiveBuildExportOptions();

    /// Executes an export based on the export options
    /// exportOptions : The export options defining the export type and necessary meta data.
    /// Returns a CAMExportFuture object if the export has started successfully.
    core::Ptr<CAMExportFuture> executeWithExportFuture(const core::Ptr<CAMExportOptions>& exportOptions);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new Autodesk CLD export option.
    /// Returns new CAMAutodeskCLDExportOptions.
    core::Ptr<CAMAutodeskCLDExportOptions> createAutodeskCLDExportOptions();

    ADSK_CAM_CAMEXPORTMANAGER_API static const char* classType();
    ADSK_CAM_CAMEXPORTMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMEXPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMEXPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool execute_raw(CAMExportOptions* exportOptions) = 0;
    virtual CAMFormlabsExportOptions* createFormlabsOptions_raw() = 0;
    virtual CAM3MFExportOptions* create3MFOptions_raw() = 0;
    virtual CAMAdditiveBuildExportOptions* createCAMAdditiveBuildExportOptions_raw() = 0;
    virtual CAMExportFuture* executeWithExportFuture_raw(CAMExportOptions* exportOptions) = 0;
    virtual CAMAutodeskCLDExportOptions* createAutodeskCLDExportOptions_raw() = 0;
};

// Inline wrappers

inline bool CAMExportManager::execute(const core::Ptr<CAMExportOptions>& exportOptions)
{
    bool res = execute_raw(exportOptions.get());
    return res;
}

inline core::Ptr<CAMFormlabsExportOptions> CAMExportManager::createFormlabsOptions()
{
    core::Ptr<CAMFormlabsExportOptions> res = createFormlabsOptions_raw();
    return res;
}

inline core::Ptr<CAM3MFExportOptions> CAMExportManager::create3MFOptions()
{
    core::Ptr<CAM3MFExportOptions> res = create3MFOptions_raw();
    return res;
}

inline core::Ptr<CAMAdditiveBuildExportOptions> CAMExportManager::createCAMAdditiveBuildExportOptions()
{
    core::Ptr<CAMAdditiveBuildExportOptions> res = createCAMAdditiveBuildExportOptions_raw();
    return res;
}

inline core::Ptr<CAMExportFuture> CAMExportManager::executeWithExportFuture(const core::Ptr<CAMExportOptions>& exportOptions)
{
    core::Ptr<CAMExportFuture> res = executeWithExportFuture_raw(exportOptions.get());
    return res;
}

inline core::Ptr<CAMAutodeskCLDExportOptions> CAMExportManager::createAutodeskCLDExportOptions()
{
    core::Ptr<CAMAutodeskCLDExportOptions> res = createAutodeskCLDExportOptions_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMEXPORTMANAGER_API