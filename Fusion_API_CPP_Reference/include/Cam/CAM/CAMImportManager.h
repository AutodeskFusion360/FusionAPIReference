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
# ifdef __COMPILING_ADSK_CAM_CAMIMPORTMANAGER_CPP__
# define ADSK_CAM_CAMIMPORTMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMIMPORTMANAGER_API
# endif
#else
# define ADSK_CAM_CAMIMPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMAutodeskCLDImportOptions;
    class CAMImportOptions;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Import manager used to import data into the selected setup.
class CAMImportManager : public core::Base {
public:

    /// Executes an import based on the import options.
    /// importOptions : The import options defining the import type and necessary meta data.
    /// Returns true if the import finished successfully.
    bool execute(const core::Ptr<CAMImportOptions>& importOptions);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a new Autodesk CLD import option.
    /// Returns new CAMAutodeskCLDImportOptions.
    core::Ptr<CAMAutodeskCLDImportOptions> createAutodeskCLDImportOptions();

    ADSK_CAM_CAMIMPORTMANAGER_API static const char* classType();
    ADSK_CAM_CAMIMPORTMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMIMPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMIMPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool execute_raw(CAMImportOptions* importOptions) = 0;
    virtual CAMAutodeskCLDImportOptions* createAutodeskCLDImportOptions_raw() = 0;
};

// Inline wrappers

inline bool CAMImportManager::execute(const core::Ptr<CAMImportOptions>& importOptions)
{
    bool res = execute_raw(importOptions.get());
    return res;
}

inline core::Ptr<CAMAutodeskCLDImportOptions> CAMImportManager::createAutodeskCLDImportOptions()
{
    core::Ptr<CAMAutodeskCLDImportOptions> res = createAutodeskCLDImportOptions_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMIMPORTMANAGER_API