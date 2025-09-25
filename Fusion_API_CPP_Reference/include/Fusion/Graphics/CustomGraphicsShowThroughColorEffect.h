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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
}}

namespace adsk { namespace fusion {

/// One of the types of color effects that can be applied to a custom graphics entity. With this
/// type of effect, the graphics entity will display using the specified color and will show through
/// other graphics that are in front of it.
class CustomGraphicsShowThroughColorEffect : public CustomGraphicsColorEffect {
public:

    /// Creates a new CustomGraphicsShowThroughColorEffect object that can be assigned to a custom graphics entity
    /// using its showThrough property.
    /// color : The color that will be used to render the custom graphics object.
    /// opacity : The level of opacity that will be applied when rendering the custom graphics object. A value of 0 is fully translucent
    /// and will have the effect of the object being completely covered by objects in front of it. A value of 1 is fully opaque
    /// which will have the effect of the object completely covering all objects. Values in between will make objects in front of
    /// the graphics object appear translucent to varying degrees so you can see the custom graphics object through it.
    /// Returns the newly created CustomGraphicsShowThroughColorEffect object or null in the case of failure. This can be assigned
    /// to a custom graphics entity using its showThrough property.
    static core::Ptr<CustomGraphicsShowThroughColorEffect> create(const core::Ptr<core::Color>& color, double opacity);

    /// Gets and sets the color associated with this CustomGraphicsShowThroughColorEffect object. The color that will be used to render
    /// the portion of the entity that is covered by other objects in the scene.
    core::Ptr<core::Color> color() const;
    bool color(const core::Ptr<core::Color>& value);

    /// Gets and sets the opacity value associated with this CustomGraphicsShowThroughColorEffect object. The opacity is used when rendering
    /// the portion of the entity that is covered by other objects in the scene. This can be a value between 0 and 1, where 1 is
    /// fully opaque and will completely cover any other entities.
    double opacity() const;
    bool opacity(double value);

    ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API static CustomGraphicsShowThroughColorEffect* create_raw(core::Color* color, double opacity);
    virtual core::Color* color_raw() const = 0;
    virtual bool color_raw(core::Color* value) = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsShowThroughColorEffect> CustomGraphicsShowThroughColorEffect::create(const core::Ptr<core::Color>& color, double opacity)
{
    core::Ptr<CustomGraphicsShowThroughColorEffect> res = create_raw(color.get(), opacity);
    return res;
}

inline core::Ptr<core::Color> CustomGraphicsShowThroughColorEffect::color() const
{
    core::Ptr<core::Color> res = color_raw();
    return res;
}

inline bool CustomGraphicsShowThroughColorEffect::color(const core::Ptr<core::Color>& value)
{
    return color_raw(value.get());
}

inline double CustomGraphicsShowThroughColorEffect::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool CustomGraphicsShowThroughColorEffect::opacity(double value)
{
    return opacity_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSSHOWTHROUGHCOLOREFFECT_API