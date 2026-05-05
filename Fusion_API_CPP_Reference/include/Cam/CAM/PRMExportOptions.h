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
#include "CAMExportOptions.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_PRMEXPORTOPTIONS_CPP__
# define ADSK_CAM_PRMEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_PRMEXPORTOPTIONS_API
# endif
#else
# define ADSK_CAM_PRMEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// PRM export options for additive FEA.  A PRM file can only be
/// exported if the Autodesk Fusion Manufacturing Extension is active.
class PRMExportOptions : public CAMExportOptions {
public:

    ADSK_CAM_PRMEXPORTOPTIONS_API static const char* classType();
    ADSK_CAM_PRMEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_CAM_PRMEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_PRMEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace cam
}// namespace adsk

#undef ADSK_CAM_PRMEXPORTOPTIONS_API