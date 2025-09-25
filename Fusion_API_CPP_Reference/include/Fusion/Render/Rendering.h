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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RENDERING_CPP__
# define ADSK_FUSION_RENDERING_API XI_EXPORT
# else
# define ADSK_FUSION_RENDERING_API
# endif
#else
# define ADSK_FUSION_RENDERING_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Camera;
}}
namespace adsk { namespace fusion {
    class RenderFuture;
}}

namespace adsk { namespace fusion {

/// Provides access to the ability to render in a background process on the local machine.
class Rendering : public core::Base {
public:

    /// Gets and sets the aspect ratio of the rendered image. This is not the resolution, but
    /// only the aspect ratio. To define a custom aspect ratio set this property to CustomAspectRatio
    /// and use the resolutionHeight and resolutionWidth properties to define the resolution and aspect ratio.
    /// The default value is the aspect ratio defined in the scene settings.
    /// The width and height must be between 108 and 4000 pixels.
    RenderAspectRatios aspectRatio() const;
    bool aspectRatio(RenderAspectRatios value);

    /// Gets and sets the desired quality of the rendering. The quality is specified using a
    /// value between 25 and 100, where 75 is the equivalent of "Final" and 100 is
    /// the same as "Excellent" in the user interface. The default value is 75
    int renderQuality() const;
    bool renderQuality(int value);

    /// Specifies if the background of the rendering should be transparent. The default
    /// is false, which means it will not be transparent.
    bool isBackgroundTransparent() const;
    bool isBackgroundTransparent(bool value);

    /// Gets and sets the resolution of the rendered image. This is the final width and height of the
    /// image in pixels. To define a custom aspect ratio, use the resolutionHeight and resolutionWidth
    /// properties to define any resolution. Using those has the side effect of setting this property
    /// to CustomRenderResolution. Setting this to anything except CustomRenderResolution, will also have
    /// the side effect of setting the aspect ratio.
    RenderResolutions resolution() const;
    bool resolution(RenderResolutions value);

    /// Gets and sets the height of the image in pixels. If anything but CustomRenderAspectRatio is defined as the
    /// aspect ratio, the resolution width will be modified to maintain the specified aspect ratio.
    /// The height must be between 108 and 4000 pixels.
    int resolutionHeight() const;
    bool resolutionHeight(int value);

    /// Gets and sets the width of the image in pixels. If anything but CustomRenderAspectRatio is defined as the
    /// aspect ratio, the resolution height will be modified to maintain the specified aspect ratio.
    /// The width must be between 108 and 4000 pixels.
    int resolutionWidth() const;
    bool resolutionWidth(int value);

    /// Starts a local rendering process using either the active viewport or a specified camera to define
    /// the camera information. This starts a background process on the local machine to generate the rendering.
    /// Even though this is a background process, it is tied to the running Fusion process and will be terminated
    /// if Fusion is shut down. If multiple local renders are started, they are queued and only one runs at a time.
    /// filename : Optional argument that is the full path and filename of the file to write the resulting rendering
    /// to. The file extension can be .png, .jpg, .jpeg, or .tiff and the file will be saved as that type.
    /// If not provided or is an empty string, the rendering will be saved to the cloud as a PNG file.
    /// camera : Optional argument that specifies the camera to use for the rendering. The default value is null, which
    /// will use the camera associated with the active viewport.
    /// Returns a RenderFuture that allows you to check the current state of this rendering job.
    core::Ptr<RenderFuture> startLocalRender(const std::string& filename = "", const core::Ptr<core::Camera>& camera = NULL);

    ADSK_FUSION_RENDERING_API static const char* classType();
    ADSK_FUSION_RENDERING_API const char* objectType() const override;
    ADSK_FUSION_RENDERING_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RENDERING_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RenderAspectRatios aspectRatio_raw() const = 0;
    virtual bool aspectRatio_raw(RenderAspectRatios value) = 0;
    virtual int renderQuality_raw() const = 0;
    virtual bool renderQuality_raw(int value) = 0;
    virtual bool isBackgroundTransparent_raw() const = 0;
    virtual bool isBackgroundTransparent_raw(bool value) = 0;
    virtual RenderResolutions resolution_raw() const = 0;
    virtual bool resolution_raw(RenderResolutions value) = 0;
    virtual int resolutionHeight_raw() const = 0;
    virtual bool resolutionHeight_raw(int value) = 0;
    virtual int resolutionWidth_raw() const = 0;
    virtual bool resolutionWidth_raw(int value) = 0;
    virtual RenderFuture* startLocalRender_raw(const char* filename, core::Camera* camera) = 0;
};

// Inline wrappers

inline RenderAspectRatios Rendering::aspectRatio() const
{
    RenderAspectRatios res = aspectRatio_raw();
    return res;
}

inline bool Rendering::aspectRatio(RenderAspectRatios value)
{
    return aspectRatio_raw(value);
}

inline int Rendering::renderQuality() const
{
    int res = renderQuality_raw();
    return res;
}

inline bool Rendering::renderQuality(int value)
{
    return renderQuality_raw(value);
}

inline bool Rendering::isBackgroundTransparent() const
{
    bool res = isBackgroundTransparent_raw();
    return res;
}

inline bool Rendering::isBackgroundTransparent(bool value)
{
    return isBackgroundTransparent_raw(value);
}

inline RenderResolutions Rendering::resolution() const
{
    RenderResolutions res = resolution_raw();
    return res;
}

inline bool Rendering::resolution(RenderResolutions value)
{
    return resolution_raw(value);
}

inline int Rendering::resolutionHeight() const
{
    int res = resolutionHeight_raw();
    return res;
}

inline bool Rendering::resolutionHeight(int value)
{
    return resolutionHeight_raw(value);
}

inline int Rendering::resolutionWidth() const
{
    int res = resolutionWidth_raw();
    return res;
}

inline bool Rendering::resolutionWidth(int value)
{
    return resolutionWidth_raw(value);
}

inline core::Ptr<RenderFuture> Rendering::startLocalRender(const std::string& filename, const core::Ptr<core::Camera>& camera)
{
    core::Ptr<RenderFuture> res = startLocalRender_raw(filename.c_str(), camera.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RENDERING_API