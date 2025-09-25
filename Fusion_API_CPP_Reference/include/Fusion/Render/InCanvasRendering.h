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
# ifdef __COMPILING_ADSK_FUSION_INCANVASRENDERING_CPP__
# define ADSK_FUSION_INCANVASRENDERING_API XI_EXPORT
# else
# define ADSK_FUSION_INCANVASRENDERING_API
# endif
#else
# define ADSK_FUSION_INCANVASRENDERING_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RenderEvent;
}}

namespace adsk { namespace fusion {

/// Provides access to the in-canvas rendering capabilities of Fusion. This
/// uses the active viewport and the user will see the rendering as it takes place.
class InCanvasRendering : public core::Base {
public:

    /// Gets and sets if the view should be locked during the in-canvas render. This prohibits
    /// the user from interacting with the view, which will cause the rendering to restart.
    bool lockView() const;
    bool lockView(bool value);

    /// Sets the percentage of the full resolution to render the image. Valid
    /// values are between 20 and 100 inclusive. 100 is full resolution (100%).
    double limitResolution() const;
    bool limitResolution(double value);

    /// Starts the process of in-canvas rendering. There are two modes
    /// when doing in-canvas rendering; advanced and fast. This is specified in the
    /// API using the isAdvanced property. When using advanced rendering, you can
    /// specify the desired quality and the rendering will stop once that quality has
    /// been reached. When using fast rendering, the rendering never stops but continues
    /// until you stop it.
    /// 
    /// When using the API, it's generally best to use advanced rendering so you
    /// can easily control the final quality and get notified by the renderComplete
    /// event when it has finished. When using fast rendering, the renderComplete event
    /// is not fired and you have to use some other criteria like the number of iterations
    /// complete or the time taken to determine when to stop the rendering process.
    /// renderQuality : Specifies the desired quality of the rendering. The quality is specified using a
    /// value between 0 and 1, where 0.75 is the equivalent of "Excellent" and 1.0 is
    /// the same as "Final" in the user interface.
    /// 
    /// This is ignored when using fast rendering (the isAdvanced property is False).
    /// Returns true if the rendering was successfully started.
    bool start(double renderQuality);

    /// Stops the current rendering process.
    /// Returns true if successful.
    bool stop();

    /// Returns the seconds spent on the current render.
    int elapsedTime() const;

    /// Returns the current number of iterations the renderer has completed.
    int iterations() const;

    /// Gets and sets if "Fast" or "Advanced" rendering should be used.
    /// If false, "Fast" rendering is used, which uses simplified lighting
    /// and materials.
    /// 
    /// There are two modes when doing in-canvas rendering; advanced and fast. When
    /// using advanced rendering, you can specify the desired quality and the rendering
    /// will stop once that quality has been reached. When using fast rendering, the
    /// rendering never stops but continues until you stop it.
    /// 
    /// When using the API, it's generally best to use advanced rendering so you
    /// can easily control the final quality and get notified by the renderComplete
    /// event when it has finished. When using fast rendering, the renderComplete event
    /// is not fired, and you have to use some other criteria like the number of iterations
    /// complete, or the time taken to determine when to stop the rendering process.
    bool isAdvanced() const;
    bool isAdvanced(bool value);

    /// The RenderEvent event fires when the rendering has reached the
    /// quality that was specified when the rendering started. This event is only fired
    /// when using advanced rendering (the isAdvanced property is True). To save the
    /// finished rendering, use the saveImage method.
    /// 
    /// You can add or remove event handlers from the RenderEvent.
    core::Ptr<RenderEvent> renderComplete() const;

    /// Saves the image as it currently exists in the active viewport. To get the
    /// best quality, this should be called after the renderComplete event has fired.
    /// filename : The filename to save the image to. This must be the full path.
    /// The file extension can be .png, .jpg, .jpeg, or .tiff and the
    /// file will be saved as that type.
    /// 
    /// The size of the image is dependent on the size of the viewport and
    /// the current specified aspect ratio.
    /// Returns true if the save was successful.
    bool saveImage(const std::string& filename);

    ADSK_FUSION_INCANVASRENDERING_API static const char* classType();
    ADSK_FUSION_INCANVASRENDERING_API const char* objectType() const override;
    ADSK_FUSION_INCANVASRENDERING_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_INCANVASRENDERING_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool lockView_raw() const = 0;
    virtual bool lockView_raw(bool value) = 0;
    virtual double limitResolution_raw() const = 0;
    virtual bool limitResolution_raw(double value) = 0;
    virtual bool start_raw(double renderQuality) = 0;
    virtual bool stop_raw() = 0;
    virtual int elapsedTime_raw() const = 0;
    virtual int iterations_raw() const = 0;
    virtual bool isAdvanced_raw() const = 0;
    virtual bool isAdvanced_raw(bool value) = 0;
    virtual RenderEvent* renderComplete_raw() const = 0;
    virtual bool saveImage_raw(const char* filename) = 0;
};

// Inline wrappers

inline bool InCanvasRendering::lockView() const
{
    bool res = lockView_raw();
    return res;
}

inline bool InCanvasRendering::lockView(bool value)
{
    return lockView_raw(value);
}

inline double InCanvasRendering::limitResolution() const
{
    double res = limitResolution_raw();
    return res;
}

inline bool InCanvasRendering::limitResolution(double value)
{
    return limitResolution_raw(value);
}

inline bool InCanvasRendering::start(double renderQuality)
{
    bool res = start_raw(renderQuality);
    return res;
}

inline bool InCanvasRendering::stop()
{
    bool res = stop_raw();
    return res;
}

inline int InCanvasRendering::elapsedTime() const
{
    int res = elapsedTime_raw();
    return res;
}

inline int InCanvasRendering::iterations() const
{
    int res = iterations_raw();
    return res;
}

inline bool InCanvasRendering::isAdvanced() const
{
    bool res = isAdvanced_raw();
    return res;
}

inline bool InCanvasRendering::isAdvanced(bool value)
{
    return isAdvanced_raw(value);
}

inline core::Ptr<RenderEvent> InCanvasRendering::renderComplete() const
{
    core::Ptr<RenderEvent> res = renderComplete_raw();
    return res;
}

inline bool InCanvasRendering::saveImage(const std::string& filename)
{
    bool res = saveImage_raw(filename.c_str());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_INCANVASRENDERING_API