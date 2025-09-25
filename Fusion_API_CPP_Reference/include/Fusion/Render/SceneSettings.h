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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include "../../Core/CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SCENESETTINGS_CPP__
# define ADSK_FUSION_SCENESETTINGS_API XI_EXPORT
# else
# define ADSK_FUSION_SCENESETTINGS_API
# endif
#else
# define ADSK_FUSION_SCENESETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class RenderEnvironment;
}}

namespace adsk { namespace fusion {

/// Provides access to all the settings that control how the scene is rendered.
class SceneSettings : public core::Base {
public:

    /// Gets and sets the brightness or luminance of the scene. This must be a value between
    /// 0 and 100,000 and is in lux units.
    double brightness() const;
    bool brightness(double value);

    /// Gets and sets the origin of the projection of the environment onto the textured
    /// ground plane. This lets you position the environment relative to the model. This
    /// is only used when the isGroundFlattened property is true.
    /// 
    /// If the isGroundFlattened property is true, and a texture is being applied to
    /// the ground, the groundPosition property can be used to change both
    /// the offset and location of the texture on the ground. The lightAngle
    /// property controls the orientation of the texture.
    core::Ptr<core::Point3D> groundPosition() const;
    bool groundPosition(const core::Ptr<core::Point3D>& value);

    /// Gets and sets the distance of the ground from the bottom of the model.
    /// A value of 0 is at the bottom of the model and a positive value moves
    /// the plane up and negative down. The value is in centimeters.
    /// 
    /// If the isGroundFlattened property is true, and a texture is being applied to
    /// the ground, the groundPosition property can be used to change both
    /// the offset and location of the texture on the ground. The lightAngle
    /// property controls the orientation of the texture.
    double groundOffset() const;
    bool groundOffset(double value);

    /// Specifies the rotation of the lighting. The angle is specified in Radians.
    /// 
    /// When the isGroundFlattened property is true, this also controls the angle
    /// of the texture that is applied to the ground. When the background is an
    /// environment, this controls the rotation of the environment relative to
    /// the model.
    double lightAngle() const;
    bool lightAngle(double value);

    /// Gets and sets the background color. When this property is set, it defines
    /// the background to be a solid color. The opacity component of the color is ignored.
    /// 
    /// Getting this property is only valid when the backgroundType property returns
    /// SolidColorRenderSceneBackgroundType. Setting this property will automatically
    /// set the background type to SolidColorRenderSceneBackgroundType.
    core::Ptr<core::Color> backgroundSolidColor() const;
    bool backgroundSolidColor(const core::Ptr<core::Color>& value);

    /// Gets and sets the environment to use for the background. The available environments
    /// can be accessed through the RenderManager.renderEnvironments property.
    /// 
    /// Getting this property is only valid when the backgroundType property returns
    /// EnvironmentRenderSceneBackgroundType. Setting this property will automatically
    /// set the background type to EnvironmentRenderSceneBackgroundType.
    core::Ptr<RenderEnvironment> backgroundEnvironment() const;
    bool backgroundEnvironment(const core::Ptr<RenderEnvironment>& value);

    /// Specifies the current type of background being used to render the scene.
    /// To change the background type use either the backgroundEnvironment
    /// or the backgroundSolidColor to set the environment or color.
    RenderSceneBackgroundTypes backgroundType() const;

    /// Gets and sets if the ground plane is displayed. The plane allows shadows
    /// on the ground and reflections if the isGroundReflections property is true.
    bool isGroundDisplayed() const;
    bool isGroundDisplayed(bool value);

    /// Gets and sets if the ground plane is "textured" where the environment
    /// image is mapped as a texture.
    bool isGroundFlattened() const;
    bool isGroundFlattened(bool value);

    /// Gets and sets if objects are reflected on the ground plane.
    bool isGroundReflections() const;
    bool isGroundReflections(bool value);

    /// Gets and sets the roughness of the ground which controls the sharpness
    /// of the reflection. This is only used when the isGroundReflections property
    /// is true. This is a value between 0 and 1, where 0 is smooth and 1 is rough.
    double groundRoughness() const;
    bool groundRoughness(double value);

    /// Gets and sets the type of camera to use when rendering the scene.
    core::CameraTypes cameraType() const;
    bool cameraType(core::CameraTypes value);

    /// Gets and sets the focal length of the camera, specified in millimeters.
    /// Changing the perspective angle of the camera associated with the active
    /// viewport will also change the focal length. Focal length and perspective
    /// angle are two different ways to control the same setting.
    double cameraFocalLength() const;
    bool cameraFocalLength(double value);

    /// Gets and sets if the exposure of the camera as specified using the "Exposure Value" (EV). Valid
    /// values are between -15.0 and 25.0, inclusive.
    double cameraExposure() const;
    bool cameraExposure(double value);

    /// Gets and sets if the depth of field option is enabled. When setting this to true, use the
    /// centerOfFocus and depthOfFieldBlur properties to specify how the depth of field is defined.
    bool isDepthOfFieldEnabled() const;
    bool isDepthOfFieldEnabled(bool value);

    /// When the isDepthofFieldEnabled property is true, this point is used as the center of focus.
    /// All objects that are the same distance from the camera as this point will be in focus.
    /// Any geometry that is closer or further away from the camera than this point will appear more out of focus.
    /// 
    /// Setting this property has the side effect of setting the isDepthOfField property to true. If the
    /// isDepthOfFieldEnabled property is false, the value of this property is ignored.
    core::Ptr<core::Point3D> centerOfFocus() const;
    bool centerOfFocus(const core::Ptr<core::Point3D>& value);

    /// Specify the amount of blur to apply to objects outside the center of focus. This must be a value
    /// between 0.001 and 2.000 inclusive. The depth of field is defined by using the centerOfFocus
    /// property to set the depth where the model is in focus.
    /// 
    /// Setting this property has the side effect of setting the isDepthOfField property to true. If the
    /// isDepthOfFieldEnabled property is false, the value of this property is ignored.
    double depthOfFieldBlur() const;
    bool depthOfFieldBlur(double value);

    /// Gets and sets the aspect ratio of the rendered image. This is not the resolution, but
    /// only the aspect ratio. To define a custom aspect ratio set this property to CustomRenderAspectRatio
    /// and use the aspectRatioHeight and aspectRatioWidth properties to define any aspect ratio.
    /// 
    /// This is used for in-canvas render to allow you to use a different aspect ratio than what
    /// is implicitly defined by the size of the active viewport.
    /// 
    /// If this is set to CustomRenderAspectRatio, use the aspectRatioHeight and aspectRatioWidth to
    /// define the aspect ratio.
    RenderAspectRatios aspectRatio() const;
    bool aspectRatio(RenderAspectRatios value);

    /// Gets and sets the height of the aspect ratio of the rendered image. This is not the resolution, but
    /// only the aspect ratio. For example specifying the width and height of 4:3 is equivalent to setting
    /// 20:15. It's only the ratio of the numbers that matters.
    /// 
    /// The resolution is determined by the screen resolution when rendering in-canvas or is specified when
    /// rendering locally or using the cloud. When setting this property the aspectRatio property is
    /// automatically set to CustomRenderAspectRatio.
    int aspectRatioHeight() const;
    bool aspectRatioHeight(int value);

    /// Gets and sets the width of the aspect ratio of the rendered image. This is not the resolution, but
    /// only the aspect ratio. For example specifying the width and height of 4:3 is equivalent to setting
    /// 20:15. It's only the ratio of the numbers that matters.
    /// 
    /// The resolution is determined by the screen resolution when rendering in-canvas or is specified when
    /// rendering locally or using the cloud. When setting this property the aspectRatio property is
    /// automatically set to CustomRenderAspectRatio.
    int aspectRatioWidth() const;
    bool aspectRatioWidth(int value);

    /// Saves all of the scene settings as the default settings for this Design.
    /// Returns true if saving the defaults was successful.
    bool saveAsDefaults();

    /// Changes all of the scene settings to the default values.
    /// Returns true if setting to the default settings was successful.
    bool restoreDefaults();

    ADSK_FUSION_SCENESETTINGS_API static const char* classType();
    ADSK_FUSION_SCENESETTINGS_API const char* objectType() const override;
    ADSK_FUSION_SCENESETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SCENESETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double brightness_raw() const = 0;
    virtual bool brightness_raw(double value) = 0;
    virtual core::Point3D* groundPosition_raw() const = 0;
    virtual bool groundPosition_raw(core::Point3D* value) = 0;
    virtual double groundOffset_raw() const = 0;
    virtual bool groundOffset_raw(double value) = 0;
    virtual double lightAngle_raw() const = 0;
    virtual bool lightAngle_raw(double value) = 0;
    virtual core::Color* backgroundSolidColor_raw() const = 0;
    virtual bool backgroundSolidColor_raw(core::Color* value) = 0;
    virtual RenderEnvironment* backgroundEnvironment_raw() const = 0;
    virtual bool backgroundEnvironment_raw(RenderEnvironment* value) = 0;
    virtual RenderSceneBackgroundTypes backgroundType_raw() const = 0;
    virtual bool isGroundDisplayed_raw() const = 0;
    virtual bool isGroundDisplayed_raw(bool value) = 0;
    virtual bool isGroundFlattened_raw() const = 0;
    virtual bool isGroundFlattened_raw(bool value) = 0;
    virtual bool isGroundReflections_raw() const = 0;
    virtual bool isGroundReflections_raw(bool value) = 0;
    virtual double groundRoughness_raw() const = 0;
    virtual bool groundRoughness_raw(double value) = 0;
    virtual core::CameraTypes cameraType_raw() const = 0;
    virtual bool cameraType_raw(core::CameraTypes value) = 0;
    virtual double cameraFocalLength_raw() const = 0;
    virtual bool cameraFocalLength_raw(double value) = 0;
    virtual double cameraExposure_raw() const = 0;
    virtual bool cameraExposure_raw(double value) = 0;
    virtual bool isDepthOfFieldEnabled_raw() const = 0;
    virtual bool isDepthOfFieldEnabled_raw(bool value) = 0;
    virtual core::Point3D* centerOfFocus_raw() const = 0;
    virtual bool centerOfFocus_raw(core::Point3D* value) = 0;
    virtual double depthOfFieldBlur_raw() const = 0;
    virtual bool depthOfFieldBlur_raw(double value) = 0;
    virtual RenderAspectRatios aspectRatio_raw() const = 0;
    virtual bool aspectRatio_raw(RenderAspectRatios value) = 0;
    virtual int aspectRatioHeight_raw() const = 0;
    virtual bool aspectRatioHeight_raw(int value) = 0;
    virtual int aspectRatioWidth_raw() const = 0;
    virtual bool aspectRatioWidth_raw(int value) = 0;
    virtual bool saveAsDefaults_raw() = 0;
    virtual bool restoreDefaults_raw() = 0;
};

// Inline wrappers

inline double SceneSettings::brightness() const
{
    double res = brightness_raw();
    return res;
}

inline bool SceneSettings::brightness(double value)
{
    return brightness_raw(value);
}

inline core::Ptr<core::Point3D> SceneSettings::groundPosition() const
{
    core::Ptr<core::Point3D> res = groundPosition_raw();
    return res;
}

inline bool SceneSettings::groundPosition(const core::Ptr<core::Point3D>& value)
{
    return groundPosition_raw(value.get());
}

inline double SceneSettings::groundOffset() const
{
    double res = groundOffset_raw();
    return res;
}

inline bool SceneSettings::groundOffset(double value)
{
    return groundOffset_raw(value);
}

inline double SceneSettings::lightAngle() const
{
    double res = lightAngle_raw();
    return res;
}

inline bool SceneSettings::lightAngle(double value)
{
    return lightAngle_raw(value);
}

inline core::Ptr<core::Color> SceneSettings::backgroundSolidColor() const
{
    core::Ptr<core::Color> res = backgroundSolidColor_raw();
    return res;
}

inline bool SceneSettings::backgroundSolidColor(const core::Ptr<core::Color>& value)
{
    return backgroundSolidColor_raw(value.get());
}

inline core::Ptr<RenderEnvironment> SceneSettings::backgroundEnvironment() const
{
    core::Ptr<RenderEnvironment> res = backgroundEnvironment_raw();
    return res;
}

inline bool SceneSettings::backgroundEnvironment(const core::Ptr<RenderEnvironment>& value)
{
    return backgroundEnvironment_raw(value.get());
}

inline RenderSceneBackgroundTypes SceneSettings::backgroundType() const
{
    RenderSceneBackgroundTypes res = backgroundType_raw();
    return res;
}

inline bool SceneSettings::isGroundDisplayed() const
{
    bool res = isGroundDisplayed_raw();
    return res;
}

inline bool SceneSettings::isGroundDisplayed(bool value)
{
    return isGroundDisplayed_raw(value);
}

inline bool SceneSettings::isGroundFlattened() const
{
    bool res = isGroundFlattened_raw();
    return res;
}

inline bool SceneSettings::isGroundFlattened(bool value)
{
    return isGroundFlattened_raw(value);
}

inline bool SceneSettings::isGroundReflections() const
{
    bool res = isGroundReflections_raw();
    return res;
}

inline bool SceneSettings::isGroundReflections(bool value)
{
    return isGroundReflections_raw(value);
}

inline double SceneSettings::groundRoughness() const
{
    double res = groundRoughness_raw();
    return res;
}

inline bool SceneSettings::groundRoughness(double value)
{
    return groundRoughness_raw(value);
}

inline core::CameraTypes SceneSettings::cameraType() const
{
    core::CameraTypes res = cameraType_raw();
    return res;
}

inline bool SceneSettings::cameraType(core::CameraTypes value)
{
    return cameraType_raw(value);
}

inline double SceneSettings::cameraFocalLength() const
{
    double res = cameraFocalLength_raw();
    return res;
}

inline bool SceneSettings::cameraFocalLength(double value)
{
    return cameraFocalLength_raw(value);
}

inline double SceneSettings::cameraExposure() const
{
    double res = cameraExposure_raw();
    return res;
}

inline bool SceneSettings::cameraExposure(double value)
{
    return cameraExposure_raw(value);
}

inline bool SceneSettings::isDepthOfFieldEnabled() const
{
    bool res = isDepthOfFieldEnabled_raw();
    return res;
}

inline bool SceneSettings::isDepthOfFieldEnabled(bool value)
{
    return isDepthOfFieldEnabled_raw(value);
}

inline core::Ptr<core::Point3D> SceneSettings::centerOfFocus() const
{
    core::Ptr<core::Point3D> res = centerOfFocus_raw();
    return res;
}

inline bool SceneSettings::centerOfFocus(const core::Ptr<core::Point3D>& value)
{
    return centerOfFocus_raw(value.get());
}

inline double SceneSettings::depthOfFieldBlur() const
{
    double res = depthOfFieldBlur_raw();
    return res;
}

inline bool SceneSettings::depthOfFieldBlur(double value)
{
    return depthOfFieldBlur_raw(value);
}

inline RenderAspectRatios SceneSettings::aspectRatio() const
{
    RenderAspectRatios res = aspectRatio_raw();
    return res;
}

inline bool SceneSettings::aspectRatio(RenderAspectRatios value)
{
    return aspectRatio_raw(value);
}

inline int SceneSettings::aspectRatioHeight() const
{
    int res = aspectRatioHeight_raw();
    return res;
}

inline bool SceneSettings::aspectRatioHeight(int value)
{
    return aspectRatioHeight_raw(value);
}

inline int SceneSettings::aspectRatioWidth() const
{
    int res = aspectRatioWidth_raw();
    return res;
}

inline bool SceneSettings::aspectRatioWidth(int value)
{
    return aspectRatioWidth_raw(value);
}

inline bool SceneSettings::saveAsDefaults()
{
    bool res = saveAsDefaults_raw();
    return res;
}

inline bool SceneSettings::restoreDefaults()
{
    bool res = restoreDefaults_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SCENESETTINGS_API