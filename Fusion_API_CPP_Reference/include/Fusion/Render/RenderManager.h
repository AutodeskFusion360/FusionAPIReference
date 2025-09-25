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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RENDERMANAGER_CPP__
# define ADSK_FUSION_RENDERMANAGER_API XI_EXPORT
# else
# define ADSK_FUSION_RENDERMANAGER_API
# endif
#else
# define ADSK_FUSION_RENDERMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Product;
}}
namespace adsk { namespace fusion {
    class InCanvasRendering;
    class RenderEnvironments;
    class Rendering;
    class SceneSettings;
}}

namespace adsk { namespace fusion {

/// Provides access to the Rendering functionality in Fusion and is accessed from the Design object.
class RenderManager : public core::Base {
public:

    /// Returns the parent Design this RenderManager was obtained from.
    core::Ptr<core::Product> parentDesign() const;

    /// Returns the SceneSettings object that provides access to all of the
    /// settings that control how the scene is rendered. This provides equivalent
    /// functionality as the "Settings" tab in the "SCENE SETTINGS" dialog.
    core::Ptr<SceneSettings> sceneSettings() const;

    /// Provides access to the provided environments and supports specifying
    /// a custom environment. This provides access to the same list of environments
    /// that you see in the "Environment Library" tab of the "SCENE SETTINGS" dialog.
    core::Ptr<RenderEnvironments> renderEnvironments() const;

    /// Provides access to the local and cloud rendering capabilities of Fusion. In both
    /// cases, the rendering is done in a process external to Fusion, either a local or
    /// cloud rendering process.
    core::Ptr<Rendering> rendering() const;

    /// Returns if the Render workspace for this Design is active or not. Returns
    /// true if the workspace is active.
    bool isRenderWorkspaceActive() const;

    /// Activates the Render workspace for this design. If the workspace is already
    /// active, nothing happens and it remains active.
    /// Returns true if the activation was successful or if the Render workspace was already active.
    bool activateRenderWorkspace();

    /// Provides access to the in-canvas rendering capabilities of Fusion. This
    /// uses the active viewport and the user will see the rendering as it takes place.
    core::Ptr<InCanvasRendering> inCanvasRendering() const;

    ADSK_FUSION_RENDERMANAGER_API static const char* classType();
    ADSK_FUSION_RENDERMANAGER_API const char* objectType() const override;
    ADSK_FUSION_RENDERMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RENDERMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Product* parentDesign_raw() const = 0;
    virtual SceneSettings* sceneSettings_raw() const = 0;
    virtual RenderEnvironments* renderEnvironments_raw() const = 0;
    virtual Rendering* rendering_raw() const = 0;
    virtual bool isRenderWorkspaceActive_raw() const = 0;
    virtual bool activateRenderWorkspace_raw() = 0;
    virtual InCanvasRendering* inCanvasRendering_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::Product> RenderManager::parentDesign() const
{
    core::Ptr<core::Product> res = parentDesign_raw();
    return res;
}

inline core::Ptr<SceneSettings> RenderManager::sceneSettings() const
{
    core::Ptr<SceneSettings> res = sceneSettings_raw();
    return res;
}

inline core::Ptr<RenderEnvironments> RenderManager::renderEnvironments() const
{
    core::Ptr<RenderEnvironments> res = renderEnvironments_raw();
    return res;
}

inline core::Ptr<Rendering> RenderManager::rendering() const
{
    core::Ptr<Rendering> res = rendering_raw();
    return res;
}

inline bool RenderManager::isRenderWorkspaceActive() const
{
    bool res = isRenderWorkspaceActive_raw();
    return res;
}

inline bool RenderManager::activateRenderWorkspace()
{
    bool res = activateRenderWorkspace_raw();
    return res;
}

inline core::Ptr<InCanvasRendering> RenderManager::inCanvasRendering() const
{
    core::Ptr<InCanvasRendering> res = inCanvasRendering_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RENDERMANAGER_API