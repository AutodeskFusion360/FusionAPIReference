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
#include "CAMExportOptions.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_CPP__
# define ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Autodesk CLD export option to allow exporting of Fusion toolpaths to a human readable text file.
/// The operation to be exported is set by exportObject and the target file is set by fullFilename.
/// The .AutodeskCLD extension will be automatically added (if not manually set as the fullFilename)
class CAMAutodeskCLDExportOptions : public CAMExportOptions {
public:

    ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMAUTODESKCLDEXPORTOPTIONS_API