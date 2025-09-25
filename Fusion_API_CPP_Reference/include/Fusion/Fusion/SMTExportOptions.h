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
# ifdef __COMPILING_ADSK_FUSION_SMTEXPORTOPTIONS_CPP__
# define ADSK_FUSION_SMTEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_FUSION_SMTEXPORTOPTIONS_API
# endif
#else
# define ADSK_FUSION_SMTEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines that an SMT export is to be done and specifies the various options.
class SMTExportOptions : public ExportOptions {
public:

    /// Gets and set the version of the SMT format to write to. The default
    /// is to use the current version of the Autodesk Shape Manager kernel
    /// that Fusion is using. Specifying an invalid version will result
    /// in an assert.
    /// 
    /// Valid versions are 218 up to the current version, which is what this
    /// property returns by default when a new SMTExportOptions object is
    /// created.
    int version() const;
    bool version(int value);

    ADSK_FUSION_SMTEXPORTOPTIONS_API static const char* classType();
    ADSK_FUSION_SMTEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_FUSION_SMTEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SMTEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int version_raw() const = 0;
    virtual bool version_raw(int value) = 0;
};

// Inline wrappers

inline int SMTExportOptions::version() const
{
    int res = version_raw();
    return res;
}

inline bool SMTExportOptions::version(int value)
{
    return version_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SMTEXPORTOPTIONS_API