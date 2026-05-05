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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_CPP__
# define ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Base auto-dimension settings: enable, strategy, hole preferences.
/// Applicable only when GlobalPreferences.isAutoDimensionEnabled is true.
class AutoDimensionBasePreferences : public core::Base {
public:

    /// Gets and sets whether auto-dimensioning is enabled for this sheet type. Default: true.
    bool isAutoDimensionEnabled() const;
    bool isAutoDimensionEnabled(bool value);

    /// Gets and sets the dimension placement strategy. Default: OverallDimensionStrategyType.
    DimensionStrategyTypes dimensionStrategyType() const;
    bool dimensionStrategyType(DimensionStrategyTypes value);

    /// Gets and sets hole and thread annotation preferences. Default: HoleAndThreadNoteHolePreferencesType.
    HolePreferencesTypes holePreferencesType() const;
    bool holePreferencesType(HolePreferencesTypes value);

    ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API static const char* classType();
    ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isAutoDimensionEnabled_raw() const = 0;
    virtual bool isAutoDimensionEnabled_raw(bool value) = 0;
    virtual DimensionStrategyTypes dimensionStrategyType_raw() const = 0;
    virtual bool dimensionStrategyType_raw(DimensionStrategyTypes value) = 0;
    virtual HolePreferencesTypes holePreferencesType_raw() const = 0;
    virtual bool holePreferencesType_raw(HolePreferencesTypes value) = 0;
    virtual void placeholderAutoDimensionBasePreferences0() {}
    virtual void placeholderAutoDimensionBasePreferences1() {}
    virtual void placeholderAutoDimensionBasePreferences2() {}
    virtual void placeholderAutoDimensionBasePreferences3() {}
    virtual void placeholderAutoDimensionBasePreferences4() {}
    virtual void placeholderAutoDimensionBasePreferences5() {}
    virtual void placeholderAutoDimensionBasePreferences6() {}
    virtual void placeholderAutoDimensionBasePreferences7() {}
    virtual void placeholderAutoDimensionBasePreferences8() {}
    virtual void placeholderAutoDimensionBasePreferences9() {}
    virtual void placeholderAutoDimensionBasePreferences10() {}
    virtual void placeholderAutoDimensionBasePreferences11() {}
    virtual void placeholderAutoDimensionBasePreferences12() {}
    virtual void placeholderAutoDimensionBasePreferences13() {}
    virtual void placeholderAutoDimensionBasePreferences14() {}
    virtual void placeholderAutoDimensionBasePreferences15() {}
    virtual void placeholderAutoDimensionBasePreferences16() {}
    virtual void placeholderAutoDimensionBasePreferences17() {}
    virtual void placeholderAutoDimensionBasePreferences18() {}
    virtual void placeholderAutoDimensionBasePreferences19() {}
    virtual void placeholderAutoDimensionBasePreferences20() {}
    virtual void placeholderAutoDimensionBasePreferences21() {}
    virtual void placeholderAutoDimensionBasePreferences22() {}
    virtual void placeholderAutoDimensionBasePreferences23() {}
    virtual void placeholderAutoDimensionBasePreferences24() {}
    virtual void placeholderAutoDimensionBasePreferences25() {}
};

// Inline wrappers

inline bool AutoDimensionBasePreferences::isAutoDimensionEnabled() const
{
    bool res = isAutoDimensionEnabled_raw();
    return res;
}

inline bool AutoDimensionBasePreferences::isAutoDimensionEnabled(bool value)
{
    return isAutoDimensionEnabled_raw(value);
}

inline DimensionStrategyTypes AutoDimensionBasePreferences::dimensionStrategyType() const
{
    DimensionStrategyTypes res = dimensionStrategyType_raw();
    return res;
}

inline bool AutoDimensionBasePreferences::dimensionStrategyType(DimensionStrategyTypes value)
{
    return dimensionStrategyType_raw(value);
}

inline HolePreferencesTypes AutoDimensionBasePreferences::holePreferencesType() const
{
    HolePreferencesTypes res = holePreferencesType_raw();
    return res;
}

inline bool AutoDimensionBasePreferences::holePreferencesType(HolePreferencesTypes value)
{
    return holePreferencesType_raw(value);
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_AUTODIMENSIONBASEPREFERENCES_API