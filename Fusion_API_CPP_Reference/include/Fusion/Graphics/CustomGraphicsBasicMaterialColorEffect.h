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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
}}

namespace adsk { namespace fusion {

/// One of the types of color effects that can be applied to a custom graphics entity. With this type
/// of effect, basic Phong shading and lighting techniques are used so give the entity a 3-dimensional
/// appearance.
class CustomGraphicsBasicMaterialColorEffect : public CustomGraphicsColorEffect {
public:

    /// Statically creates a new basic CustomGraphicsBasicMaterialColorEffect object. This can be used to
    /// color custom graphics entities. With this type of effect you define the basic Phong shading
    /// properties so that the entity can be rendered with basic shading and lighting effects applied
    /// so that it appears 3-dimensional.
    /// 
    /// If only the emissive color is provided, the API will automatically create values for the
    /// other colors to render the object as a single color.
    /// diffuseColor : The diffuse color is the color of reflected light as it scatters off of a rough surface and is
    /// the primary color of the entity. This color is always required.
    /// ambientColor : The ambient color is the color of the light anywhere there's not a specific light source. If
    /// not specified the same color as the diffuse color is used.
    /// specularColor : The specular color is the color of reflected light (highlights) as it is reflected off of a shiny surface. This is
    /// commonly white or a lighter shade of the diffuse color. If not specified, white is used.
    /// emissiveColor : The emissive color is the color of light that entity emits, such as in a light bulb. If not specified,
    /// black for no emissive light is used.
    /// glossiness : This specifies how glossy the entity is. The glossiness determines the size of highlights, and thus
    /// the apparent shininess of the material. A value of 0.0 will result in very large highlights like you
    /// would see with a rough surface. A maximum value of 128.0 will result in very small highlight as
    /// from a smooth surface.
    /// opacity : Specifies the opacity of the entity where a value of 1.0 is completely opaque and 0.0 is completely transparent.
    /// Returns the created CustomGraphicsBasicMaterialColorEffect or null in case of a failure.
    static core::Ptr<CustomGraphicsBasicMaterialColorEffect> create(const core::Ptr<core::Color>& diffuseColor, const core::Ptr<core::Color>& ambientColor = core::Ptr<core::Color>(), const core::Ptr<core::Color>& specularColor = core::Ptr<core::Color>(), const core::Ptr<core::Color>& emissiveColor = core::Ptr<core::Color>(), double glossiness = 5.0, double opacity = 1.0);

    /// Gets and sets the emissiveColor associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// The emissive color is the primary color of the entity
    core::Ptr<core::Color> emissiveColor() const;
    bool emissiveColor(const core::Ptr<core::Color>& value);

    /// Gets and sets the ambientColor associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// The ambient color is the color of the light anywhere there's not a specific light source.
    core::Ptr<core::Color> ambientColor() const;
    bool ambientColor(const core::Ptr<core::Color>& value);

    /// Gets and sets the diffuseColor associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// The diffuse color is the color of reflected light as it scatters off of a rough surface.
    core::Ptr<core::Color> diffuseColor() const;
    bool diffuseColor(const core::Ptr<core::Color>& value);

    /// Gets and sets the specularColor associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// The specular color is the color of reflected light (highlights) as it is reflected off of a shiny surface. This is
    /// commonly white or a lighter shade of the emissive color.
    core::Ptr<core::Color> specularColor() const;
    bool specularColor(const core::Ptr<core::Color>& value);

    /// Gets and sets the glossiness associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// The glossiness determines the size of highlights, and thus the apparent shininess of the material.
    /// A value of 0.0 will result in very large highlights like you would see with a rough surface.
    /// A maximum value of 128.0 will result in very small highlight as from a smooth surface.
    double glossiness() const;
    bool glossiness(double value);

    /// Gets and sets the opacity associated with this CustomGraphicsBasicMaterialColorEffect object.
    /// A value of 1.0 is completely opaque and 0.0 is completely transparent.
    double opacity() const;
    bool opacity(double value);

    ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API static CustomGraphicsBasicMaterialColorEffect* create_raw(core::Color* diffuseColor, core::Color* ambientColor, core::Color* specularColor, core::Color* emissiveColor, double glossiness, double opacity);
    virtual core::Color* emissiveColor_raw() const = 0;
    virtual bool emissiveColor_raw(core::Color* value) = 0;
    virtual core::Color* ambientColor_raw() const = 0;
    virtual bool ambientColor_raw(core::Color* value) = 0;
    virtual core::Color* diffuseColor_raw() const = 0;
    virtual bool diffuseColor_raw(core::Color* value) = 0;
    virtual core::Color* specularColor_raw() const = 0;
    virtual bool specularColor_raw(core::Color* value) = 0;
    virtual double glossiness_raw() const = 0;
    virtual bool glossiness_raw(double value) = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsBasicMaterialColorEffect> CustomGraphicsBasicMaterialColorEffect::create(const core::Ptr<core::Color>& diffuseColor, const core::Ptr<core::Color>& ambientColor, const core::Ptr<core::Color>& specularColor, const core::Ptr<core::Color>& emissiveColor, double glossiness, double opacity)
{
    core::Ptr<CustomGraphicsBasicMaterialColorEffect> res = create_raw(diffuseColor.get(), ambientColor.get(), specularColor.get(), emissiveColor.get(), glossiness, opacity);
    return res;
}

inline core::Ptr<core::Color> CustomGraphicsBasicMaterialColorEffect::emissiveColor() const
{
    core::Ptr<core::Color> res = emissiveColor_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::emissiveColor(const core::Ptr<core::Color>& value)
{
    return emissiveColor_raw(value.get());
}

inline core::Ptr<core::Color> CustomGraphicsBasicMaterialColorEffect::ambientColor() const
{
    core::Ptr<core::Color> res = ambientColor_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::ambientColor(const core::Ptr<core::Color>& value)
{
    return ambientColor_raw(value.get());
}

inline core::Ptr<core::Color> CustomGraphicsBasicMaterialColorEffect::diffuseColor() const
{
    core::Ptr<core::Color> res = diffuseColor_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::diffuseColor(const core::Ptr<core::Color>& value)
{
    return diffuseColor_raw(value.get());
}

inline core::Ptr<core::Color> CustomGraphicsBasicMaterialColorEffect::specularColor() const
{
    core::Ptr<core::Color> res = specularColor_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::specularColor(const core::Ptr<core::Color>& value)
{
    return specularColor_raw(value.get());
}

inline double CustomGraphicsBasicMaterialColorEffect::glossiness() const
{
    double res = glossiness_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::glossiness(double value)
{
    return glossiness_raw(value);
}

inline double CustomGraphicsBasicMaterialColorEffect::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool CustomGraphicsBasicMaterialColorEffect::opacity(double value)
{
    return opacity_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSBASICMATERIALCOLOREFFECT_API