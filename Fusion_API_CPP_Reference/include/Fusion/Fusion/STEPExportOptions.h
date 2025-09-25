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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_STEPEXPORTOPTIONS_CPP__
# define ADSK_FUSION_STEPEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_STEPEXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_STEPEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines that a STEP export is to be done and specifies the various options.
class STEPExportOptions : public ExportOptions {
public:

    /// Indicates if the STEP file should include the Fusion temporary IDs for faces and edges.
    /// Outside services can use these IDs with the findByTempId method of the BRepBody,
    /// which will return the given entity. The default is false.
    bool wantTempIds() const;
    bool wantTempIds(bool value);

    ADSK_FUSION_STEPEXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_STEPEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_STEPEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STEPEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool wantTempIds_raw() const = 0;
    virtual bool wantTempIds_raw(bool value) = 0;
};

// Inline wrappers

inline bool STEPExportOptions::wantTempIds() const
{
    bool res = wantTempIds_raw();
    return res;
}

inline bool STEPExportOptions::wantTempIds(bool value)
{
    return wantTempIds_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STEPEXPORTOPTIONS_API