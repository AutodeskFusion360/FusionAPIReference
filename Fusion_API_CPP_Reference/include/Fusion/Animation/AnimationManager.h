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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ANIMATIONMANAGER_CPP__
# define ADSK_FUSION_ANIMATIONMANAGER_API XI_EXPORT
# else
# define ADSK_FUSION_ANIMATIONMANAGER_API
# endif
#else
# define ADSK_FUSION_ANIMATIONMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
    class Storyboard;
    class Storyboards;
}}

namespace adsk { namespace fusion {

/// Provides access to the animation functionality in Fusion and is accessed from the Design object.
class AnimationManager : public core::Base {
public:

    /// Returns the active storyboard in this Animation.
    core::Ptr<Storyboard> activeStoryboard() const;

    /// Returns the parent Design this AnimationManager was obtained from.
    core::Ptr<Design> parentDesign() const;

    /// Returns if the Animation workspace for this Design is active or not. Returns
    /// true if the workspace is active.
    bool isAnimationWorkspaceActive() const;

    /// Activates the Animation workspace for this design. If the workspace is already
    /// active, nothing happens and it remains active.
    /// Returns true if the activation was successful or if the Animation workspace was already active.
    bool activateAnimationWorkspace();

    /// Collection that provides access to all of the existing storyboards in an animation and supports the ability to create new storyboards.
    core::Ptr<Storyboards> storyboards() const;

    /// Gets and sets the recording mode setting.
    RecordingModeTypes recordingMode() const;
    bool recordingMode(RecordingModeTypes value);

    /// Gets and sets whether to show text watermark in cavas when the view recording is off.
    bool isWatermarkShown() const;
    bool isWatermarkShown(bool value);

    ADSK_FUSION_ANIMATIONMANAGER_API static const char* classType();
    ADSK_FUSION_ANIMATIONMANAGER_API const char* objectType() const override;
    ADSK_FUSION_ANIMATIONMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ANIMATIONMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Storyboard* activeStoryboard_raw() const = 0;
    virtual Design* parentDesign_raw() const = 0;
    virtual bool isAnimationWorkspaceActive_raw() const = 0;
    virtual bool activateAnimationWorkspace_raw() = 0;
    virtual Storyboards* storyboards_raw() const = 0;
    virtual RecordingModeTypes recordingMode_raw() const = 0;
    virtual bool recordingMode_raw(RecordingModeTypes value) = 0;
    virtual bool isWatermarkShown_raw() const = 0;
    virtual bool isWatermarkShown_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<Storyboard> AnimationManager::activeStoryboard() const
{
    core::Ptr<Storyboard> res = activeStoryboard_raw();
    return res;
}

inline core::Ptr<Design> AnimationManager::parentDesign() const
{
    core::Ptr<Design> res = parentDesign_raw();
    return res;
}

inline bool AnimationManager::isAnimationWorkspaceActive() const
{
    bool res = isAnimationWorkspaceActive_raw();
    return res;
}

inline bool AnimationManager::activateAnimationWorkspace()
{
    bool res = activateAnimationWorkspace_raw();
    return res;
}

inline core::Ptr<Storyboards> AnimationManager::storyboards() const
{
    core::Ptr<Storyboards> res = storyboards_raw();
    return res;
}

inline RecordingModeTypes AnimationManager::recordingMode() const
{
    RecordingModeTypes res = recordingMode_raw();
    return res;
}

inline bool AnimationManager::recordingMode(RecordingModeTypes value)
{
    return recordingMode_raw(value);
}

inline bool AnimationManager::isWatermarkShown() const
{
    bool res = isWatermarkShown_raw();
    return res;
}

inline bool AnimationManager::isWatermarkShown(bool value)
{
    return isWatermarkShown_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ANIMATIONMANAGER_API