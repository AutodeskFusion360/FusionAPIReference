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
#include "CustomGraphicsColorEffect.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
}}

namespace adsk { namespace fusion {

/// One of the types of color effects that can be applied to a custom graphics entity. With this
/// type of effect, the graphics entity will display using a Fusion appearance.
class CustomGraphicsAppearanceColorEffect : public CustomGraphicsColorEffect {
public:

    /// Statically creates a new CustomGraphicsAppearanceColorEffect object. This can be used when
    /// setting the color property of the various custom graphics objects. With this coloring
    /// effect, an existing appearance is used. The appearance must be available in the
    /// design where the graphics will be drawn.
    /// appearance : The appearance to use. The appearance must be available in the design where the
    /// graphics will be drawn.
    /// Returns the created CustomGraphicsAppearanceColorEffect or null in case of a failure.
    static core::Ptr<CustomGraphicsAppearanceColorEffect> create(const core::Ptr<core::Appearance>& appearance);

    /// Gets and sets the appearance to use. The appearance assigned must be available in the
    /// design where the graphics will be drawn.
    core::Ptr<core::Appearance> appearance() const;
    bool appearance(const core::Ptr<core::Appearance>& value);

    ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API static CustomGraphicsAppearanceColorEffect* create_raw(core::Appearance* appearance);
    virtual core::Appearance* appearance_raw() const = 0;
    virtual bool appearance_raw(core::Appearance* value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsAppearanceColorEffect> CustomGraphicsAppearanceColorEffect::create(const core::Ptr<core::Appearance>& appearance)
{
    core::Ptr<CustomGraphicsAppearanceColorEffect> res = create_raw(appearance.get());
    return res;
}

inline core::Ptr<core::Appearance> CustomGraphicsAppearanceColorEffect::appearance() const
{
    core::Ptr<core::Appearance> res = appearance_raw();
    return res;
}

inline bool CustomGraphicsAppearanceColorEffect::appearance(const core::Ptr<core::Appearance>& value)
{
    return appearance_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSAPPEARANCECOLOREFFECT_API