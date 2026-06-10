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
# ifdef __COMPILING_ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_CPP__
# define ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API
# endif
#else
# define ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Options that control how an electronics document is exported.
/// Obtain an instance from one of the factory methods on ElectronicsExportManager
/// (e.g. board.exportManager.createEagleBrdExportOptions).
class ElectronicsExportOptions : public core::Base {
public:

    /// Full output file path including the file name and extension (e.g. "C:/output/design.brd").
    std::string outputPath() const;
    bool outputPath(const std::string& value);

    ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API static const char* classType();
    ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API const char* objectType() const override;
    ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* outputPath_raw() const = 0;
    virtual bool outputPath_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string ElectronicsExportOptions::outputPath() const
{
    std::string res;

    char* p= outputPath_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ElectronicsExportOptions::outputPath(const std::string& value)
{
    return outputPath_raw(value.c_str());
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ELECTRONICSEXPORTOPTIONS_API