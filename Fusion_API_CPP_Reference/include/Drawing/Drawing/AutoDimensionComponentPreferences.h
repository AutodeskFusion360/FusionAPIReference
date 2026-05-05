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
#include "AutoDimensionBasePreferences.h"
#include "../DrawingTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_CPP__
# define ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Auto-dimension settings for components. Extends base with origin and pattern options.
class AutoDimensionComponentPreferences : public AutoDimensionBasePreferences {
public:

    /// Gets and sets the datum origin for dimension placement. Default: ModelOriginDefaultOriginType.
    DefaultOriginTypes defaultOriginType() const;
    bool defaultOriginType(DefaultOriginTypes value);

    /// Gets and sets whether to include dimensions for circular pattern features. Default: true.
    bool isCircularPatternDimensionsIncluded() const;
    bool isCircularPatternDimensionsIncluded(bool value);

    ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API static const char* classType();
    ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DefaultOriginTypes defaultOriginType_raw() const = 0;
    virtual bool defaultOriginType_raw(DefaultOriginTypes value) = 0;
    virtual bool isCircularPatternDimensionsIncluded_raw() const = 0;
    virtual bool isCircularPatternDimensionsIncluded_raw(bool value) = 0;
};

// Inline wrappers

inline DefaultOriginTypes AutoDimensionComponentPreferences::defaultOriginType() const
{
    DefaultOriginTypes res = defaultOriginType_raw();
    return res;
}

inline bool AutoDimensionComponentPreferences::defaultOriginType(DefaultOriginTypes value)
{
    return defaultOriginType_raw(value);
}

inline bool AutoDimensionComponentPreferences::isCircularPatternDimensionsIncluded() const
{
    bool res = isCircularPatternDimensionsIncluded_raw();
    return res;
}

inline bool AutoDimensionComponentPreferences::isCircularPatternDimensionsIncluded(bool value)
{
    return isCircularPatternDimensionsIncluded_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_AUTODIMENSIONCOMPONENTPREFERENCES_API