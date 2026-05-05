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
#include "../DrawingTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_GLOBALPREFERENCES_CPP__
# define ADSK_DRAWING_GLOBALPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_GLOBALPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_GLOBALPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Global preferences for drawing generation: sheet toggles, auto-dimensioning, component omission.
class GlobalPreferences : public core::Base {
public:

    /// Gets and sets comma-separated keywords to omit components by name. Default: "Bolt,Screw,Nut,Washer".
    std::string omitComponentsWithKeywords() const;
    bool omitComponentsWithKeywords(const std::string& value);

    /// Gets and sets whether to auto-detect and omit fasteners by geometry. Default: false.
    bool isDetectAndOmitFasteners() const;
    bool isDetectAndOmitFasteners(bool value);

    /// Gets and sets whether to generate main assembly sheets. Default: true.
    bool isMainAssemblySheetGenerated() const;
    bool isMainAssemblySheetGenerated(bool value);

    /// Gets and sets whether to generate sub-assembly sheets. Default: true.
    bool isSubAssemblySheetGenerated() const;
    bool isSubAssemblySheetGenerated(bool value);

    /// Gets and sets whether to generate animation/exploded view sheets. Default: false.
    bool isAnimationSheetGenerated() const;
    bool isAnimationSheetGenerated(bool value);

    /// Gets and sets whether to generate component (part) sheets. Default: true.
    bool isComponentSheetGenerated() const;
    bool isComponentSheetGenerated(bool value);

    /// Gets and sets whether to generate folded model sheets for sheet metal. Default: true.
    bool isFoldedModelSheetGenerated() const;
    bool isFoldedModelSheetGenerated(bool value);

    /// Gets and sets whether to generate flat pattern sheets for sheet metal. Default: true.
    bool isFlatPatternSheetGenerated() const;
    bool isFlatPatternSheetGenerated(bool value);

    /// Gets and sets whether to enable auto-dimensioning on generated views. Default: true.
    bool isAutoDimensionEnabled() const;
    bool isAutoDimensionEnabled(bool value);

    ADSK_DRAWING_GLOBALPREFERENCES_API static const char* classType();
    ADSK_DRAWING_GLOBALPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_GLOBALPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_GLOBALPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* omitComponentsWithKeywords_raw() const = 0;
    virtual bool omitComponentsWithKeywords_raw(const char* value) = 0;
    virtual bool isDetectAndOmitFasteners_raw() const = 0;
    virtual bool isDetectAndOmitFasteners_raw(bool value) = 0;
    virtual bool isMainAssemblySheetGenerated_raw() const = 0;
    virtual bool isMainAssemblySheetGenerated_raw(bool value) = 0;
    virtual bool isSubAssemblySheetGenerated_raw() const = 0;
    virtual bool isSubAssemblySheetGenerated_raw(bool value) = 0;
    virtual bool isAnimationSheetGenerated_raw() const = 0;
    virtual bool isAnimationSheetGenerated_raw(bool value) = 0;
    virtual bool isComponentSheetGenerated_raw() const = 0;
    virtual bool isComponentSheetGenerated_raw(bool value) = 0;
    virtual bool isFoldedModelSheetGenerated_raw() const = 0;
    virtual bool isFoldedModelSheetGenerated_raw(bool value) = 0;
    virtual bool isFlatPatternSheetGenerated_raw() const = 0;
    virtual bool isFlatPatternSheetGenerated_raw(bool value) = 0;
    virtual bool isAutoDimensionEnabled_raw() const = 0;
    virtual bool isAutoDimensionEnabled_raw(bool value) = 0;
};

// Inline wrappers

inline std::string GlobalPreferences::omitComponentsWithKeywords() const
{
    std::string res;

    char* p= omitComponentsWithKeywords_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GlobalPreferences::omitComponentsWithKeywords(const std::string& value)
{
    return omitComponentsWithKeywords_raw(value.c_str());
}

inline bool GlobalPreferences::isDetectAndOmitFasteners() const
{
    bool res = isDetectAndOmitFasteners_raw();
    return res;
}

inline bool GlobalPreferences::isDetectAndOmitFasteners(bool value)
{
    return isDetectAndOmitFasteners_raw(value);
}

inline bool GlobalPreferences::isMainAssemblySheetGenerated() const
{
    bool res = isMainAssemblySheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isMainAssemblySheetGenerated(bool value)
{
    return isMainAssemblySheetGenerated_raw(value);
}

inline bool GlobalPreferences::isSubAssemblySheetGenerated() const
{
    bool res = isSubAssemblySheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isSubAssemblySheetGenerated(bool value)
{
    return isSubAssemblySheetGenerated_raw(value);
}

inline bool GlobalPreferences::isAnimationSheetGenerated() const
{
    bool res = isAnimationSheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isAnimationSheetGenerated(bool value)
{
    return isAnimationSheetGenerated_raw(value);
}

inline bool GlobalPreferences::isComponentSheetGenerated() const
{
    bool res = isComponentSheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isComponentSheetGenerated(bool value)
{
    return isComponentSheetGenerated_raw(value);
}

inline bool GlobalPreferences::isFoldedModelSheetGenerated() const
{
    bool res = isFoldedModelSheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isFoldedModelSheetGenerated(bool value)
{
    return isFoldedModelSheetGenerated_raw(value);
}

inline bool GlobalPreferences::isFlatPatternSheetGenerated() const
{
    bool res = isFlatPatternSheetGenerated_raw();
    return res;
}

inline bool GlobalPreferences::isFlatPatternSheetGenerated(bool value)
{
    return isFlatPatternSheetGenerated_raw(value);
}

inline bool GlobalPreferences::isAutoDimensionEnabled() const
{
    bool res = isAutoDimensionEnabled_raw();
    return res;
}

inline bool GlobalPreferences::isAutoDimensionEnabled(bool value)
{
    return isAutoDimensionEnabled_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_GLOBALPREFERENCES_API