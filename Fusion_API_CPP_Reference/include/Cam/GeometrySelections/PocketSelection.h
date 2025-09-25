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
#include "CurveSelection.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POCKETSELECTION_CPP__
# define ADSK_CAM_POCKETSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_POCKETSELECTION_API
# endif
#else
# define ADSK_CAM_POCKETSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Pocket type for a curve selection. Allows planar BREP face selections for the input geometry.
/// Overrides the GeometrySelection's the value property to include other faces if isSelectingSamePlaneFaces is set to true and the selection has been applied.
/// The result of the value property call may contain duplicates.
/// Note: selecting arbitrary faces, only planar faces are actually added to the list of faces to work with.
class PocketSelection : public CurveSelection {
public:

    /// The desired extension method. TangentExtension by default.
    ExtensionMethods extensionMethod() const;
    bool extensionMethod(ExtensionMethods value);

    /// True if all planar faces lying in the same plane as the selected face should be automatically selected as well.
    /// False by default.
    bool isSelectingSamePlaneFaces() const;
    bool isSelectingSamePlaneFaces(bool value);

    ADSK_CAM_POCKETSELECTION_API static const char* classType();
    ADSK_CAM_POCKETSELECTION_API const char* objectType() const override;
    ADSK_CAM_POCKETSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POCKETSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ExtensionMethods extensionMethod_raw() const = 0;
    virtual bool extensionMethod_raw(ExtensionMethods value) = 0;
    virtual bool isSelectingSamePlaneFaces_raw() const = 0;
    virtual bool isSelectingSamePlaneFaces_raw(bool value) = 0;
};

// Inline wrappers

inline ExtensionMethods PocketSelection::extensionMethod() const
{
    ExtensionMethods res = extensionMethod_raw();
    return res;
}

inline bool PocketSelection::extensionMethod(ExtensionMethods value)
{
    return extensionMethod_raw(value);
}

inline bool PocketSelection::isSelectingSamePlaneFaces() const
{
    bool res = isSelectingSamePlaneFaces_raw();
    return res;
}

inline bool PocketSelection::isSelectingSamePlaneFaces(bool value)
{
    return isSelectingSamePlaneFaces_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POCKETSELECTION_API