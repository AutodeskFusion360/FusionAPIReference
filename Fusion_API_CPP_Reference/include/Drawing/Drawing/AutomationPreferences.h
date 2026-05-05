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
# ifdef __COMPILING_ADSK_DRAWING_AUTOMATIONPREFERENCES_CPP__
# define ADSK_DRAWING_AUTOMATIONPREFERENCES_API XI_EXPORT
# else
# define ADSK_DRAWING_AUTOMATIONPREFERENCES_API
# endif
#else
# define ADSK_DRAWING_AUTOMATIONPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace drawing {
    class AnimationPreferences;
    class AssemblyPreferences;
    class ComponentPreferences;
    class FlatPatternPreferences;
    class FoldedModelPreferences;
    class GlobalPreferences;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Central configuration hub for automatic drawing preferences. Access globalPreferences for sheet
/// generation toggles, and type-specific preferences for each sheet type.
class AutomationPreferences : public core::Base {
public:

    /// Gets GlobalPreferences for sheet generation toggles, auto-dimensioning, and component omission rules.
    core::Ptr<GlobalPreferences> globalPreferences() const;

    /// Gets preferences for main (top-level) assembly sheets: ISO views, orthogonal views, dimensions, view appearance.
    core::Ptr<AssemblyPreferences> mainAssemblyPreferences() const;

    /// Gets preferences for sub-assembly sheets: ISO views, orthogonal views, dimensions, view appearance.
    core::Ptr<AssemblyPreferences> subAssemblyPreferences() const;

    /// Gets preferences for animation/exploded view sheets. Enable via GlobalPreferences.generateAnimationSheet.
    core::Ptr<AnimationPreferences> animationPreferences() const;

    /// Gets preferences for individual component (part) sheets: views, dimensions, view appearance.
    core::Ptr<ComponentPreferences> componentPreferences() const;

    /// Gets preferences for sheet metal folded model sheets (formed state). Complements flat pattern sheets.
    core::Ptr<FoldedModelPreferences> foldedModelPreferences() const;

    /// Gets preferences for sheet metal flat pattern sheets (unfolded state with bend information).
    core::Ptr<FlatPatternPreferences> flatPatternPreferences() const;

    ADSK_DRAWING_AUTOMATIONPREFERENCES_API static const char* classType();
    ADSK_DRAWING_AUTOMATIONPREFERENCES_API const char* objectType() const override;
    ADSK_DRAWING_AUTOMATIONPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_AUTOMATIONPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GlobalPreferences* globalPreferences_raw() const = 0;
    virtual AssemblyPreferences* mainAssemblyPreferences_raw() const = 0;
    virtual AssemblyPreferences* subAssemblyPreferences_raw() const = 0;
    virtual AnimationPreferences* animationPreferences_raw() const = 0;
    virtual ComponentPreferences* componentPreferences_raw() const = 0;
    virtual FoldedModelPreferences* foldedModelPreferences_raw() const = 0;
    virtual FlatPatternPreferences* flatPatternPreferences_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GlobalPreferences> AutomationPreferences::globalPreferences() const
{
    core::Ptr<GlobalPreferences> res = globalPreferences_raw();
    return res;
}

inline core::Ptr<AssemblyPreferences> AutomationPreferences::mainAssemblyPreferences() const
{
    core::Ptr<AssemblyPreferences> res = mainAssemblyPreferences_raw();
    return res;
}

inline core::Ptr<AssemblyPreferences> AutomationPreferences::subAssemblyPreferences() const
{
    core::Ptr<AssemblyPreferences> res = subAssemblyPreferences_raw();
    return res;
}

inline core::Ptr<AnimationPreferences> AutomationPreferences::animationPreferences() const
{
    core::Ptr<AnimationPreferences> res = animationPreferences_raw();
    return res;
}

inline core::Ptr<ComponentPreferences> AutomationPreferences::componentPreferences() const
{
    core::Ptr<ComponentPreferences> res = componentPreferences_raw();
    return res;
}

inline core::Ptr<FoldedModelPreferences> AutomationPreferences::foldedModelPreferences() const
{
    core::Ptr<FoldedModelPreferences> res = foldedModelPreferences_raw();
    return res;
}

inline core::Ptr<FlatPatternPreferences> AutomationPreferences::flatPatternPreferences() const
{
    core::Ptr<FlatPatternPreferences> res = flatPatternPreferences_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_AUTOMATIONPREFERENCES_API