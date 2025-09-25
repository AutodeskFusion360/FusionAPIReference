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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
}}

namespace adsk { namespace fusion {

/// One of the types of color effects that can be applied to a custom graphics entity. With this
/// type of effect, the graphics entity will display as the single color without any lighting
/// effects. For example, a sphere will display as a solid filled circle without any shading
/// indicating it is actually spherical.
class CustomGraphicsSolidColorEffect : public CustomGraphicsColorEffect {
public:

    /// Statically creates a new CustomGraphicsSolidColorEffect object. This can be used as input
    /// when creating various color related custom graphics attributes. A solid color effect,
    /// colors the entity with a single color without any lighting effects. With this coloring
    /// effect, a sphere will display as a solid filled circle.
    /// color : The color to use for the solid color display. The opacity component of the color is ignored
    /// because the opacity of custom graphics is controlled separately using an opacity attribute.
    /// Returns the created CustomGraphicsSolidColorEffect or null in case of a failure.
    static core::Ptr<CustomGraphicsSolidColorEffect> create(const core::Ptr<core::Color>& color);

    /// The color to use for the solid color display. The opacity component of the color is ignored
    /// because the opacity of custom graphics is controlled separately using an opacity attribute.
    core::Ptr<core::Color> color() const;
    bool color(const core::Ptr<core::Color>& value);

    ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API static CustomGraphicsSolidColorEffect* create_raw(core::Color* color);
    virtual core::Color* color_raw() const = 0;
    virtual bool color_raw(core::Color* value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsSolidColorEffect> CustomGraphicsSolidColorEffect::create(const core::Ptr<core::Color>& color)
{
    core::Ptr<CustomGraphicsSolidColorEffect> res = create_raw(color.get());
    return res;
}

inline core::Ptr<core::Color> CustomGraphicsSolidColorEffect::color() const
{
    core::Ptr<core::Color> res = color_raw();
    return res;
}

inline bool CustomGraphicsSolidColorEffect::color(const core::Ptr<core::Color>& value)
{
    return color_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSSOLIDCOLOREFFECT_API