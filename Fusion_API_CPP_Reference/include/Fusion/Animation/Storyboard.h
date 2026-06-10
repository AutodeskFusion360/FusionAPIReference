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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_STORYBOARD_CPP__
# define ADSK_FUSION_STORYBOARD_API XI_EXPORT
# else
# define ADSK_FUSION_STORYBOARD_API
# endif
#else
# define ADSK_FUSION_STORYBOARD_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class AnimationManager;
}}

namespace adsk { namespace fusion {

/// A storyboard consists of views and actions distributed along a timeline.
class Storyboard : public core::Base {
public:

    /// Sets this storyboard to be active.
    /// Returns true if the storyboard was successfully activated.
    bool activate();

    /// Method that copies the storyboard.
    /// name : Optional specifies the name for the copied storyboard. If not specified, a default name will be created for it.
    /// targetStoryboard : Optional specifies the target storyboard to copy this storyboard next to. If not specified, the current storyboard will be used.
    /// before : Optional specifies boolean value that indicates whether to copy this storyboard before the target storyboard. If specified to true, the copy will be inserted before the target storyboard.
    /// This defaults to false if not specified indicating that the copy will be placed after the target storyboard.
    /// Returns copied Storyboard if the copy was successful, null otherwise.
    core::Ptr<Storyboard> copy(const std::string& name = "", const core::Ptr<Storyboard>& targetStoryboard = NULL, bool before = false);

    /// Method that deletes the storyboard.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Method that moves the storyboard to another position.
    /// targetStoryboard : Specifies the target storyboard to move this storyboard next to.
    /// before : Optional specifies boolean value that indicates whether to move this storyboard before the target storyboard. If specified to true, this storyboard will be moved before the target storyboard.
    /// This defaults to false if not specified indicating this storyboard will be moved after the target storyboard.
    /// Returns true if the move is successful.
    bool moveTo(const core::Ptr<Storyboard>& targetStoryboard, bool before = false);

    /// Gets and sets whether the view recording is on or off.
    /// When enabled, the view recording captures the camera change of the viewport and creates ViewAction accordingly.
    bool isViewRecordingOn() const;
    bool isViewRecordingOn(bool value);

    /// Gets the parent AnimationManager of this storyboard.
    core::Ptr<AnimationManager> parent() const;

    /// Returns true if this storyboard is the active storyboard.
    bool isActive() const;

    /// Gets and sets whether it is in full screen mode for animation playback.
    bool isInFullScreenMode() const;
    bool isInFullScreenMode(bool value);

    /// Method that reverses the sequence of actions for the storyboard.
    /// Returns true if the sequence of actions of the storyboard was reversed successfully, false otherwise.
    bool reverse();

    /// Gets the end time of the storyboard in seconds.
    double end() const;

    /// Gets and sets the position of the playhead on the timeline in seconds.
    /// Sets to -1 will place the playhead to the scratch zone.
    double playheadPosition() const;
    bool playheadPosition(double value);

    /// Method that plays the storyboard.
    /// fromCurrentPosition : Optional argument specifies whether to play the storyboard from current playhead position. Set this to false to specify the begin.
    /// This defaults to true indicating that it plays from current playhead position.
    /// begin : Specifies the begin time in seconds to start playback. This is ignored if the fromCurrentPosition is not set to false.
    /// end : Specifies the end time in seconds to stop playback. This defaults to 0 indicating the Storyboard.end will be used.
    /// If specified this should be larger than the Storyboard.playheadPosition if the fromCurrentPosition argument is set to true, or it should be larger than begin if the fromCurrentPosition argument is set to false.
    /// This returns true if the playback is successfully started.
    bool play(bool fromCurrentPosition = true, double begin = 0, double end = 0);

    /// Returns true if it is in play mode.
    bool isInPlayMode() const;

    ADSK_FUSION_STORYBOARD_API static const char* classType();
    ADSK_FUSION_STORYBOARD_API const char* objectType() const override;
    ADSK_FUSION_STORYBOARD_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_STORYBOARD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool activate_raw() = 0;
    virtual Storyboard* copy_raw(const char* name, Storyboard* targetStoryboard, bool before) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool moveTo_raw(Storyboard* targetStoryboard, bool before) = 0;
    virtual bool isViewRecordingOn_raw() const = 0;
    virtual bool isViewRecordingOn_raw(bool value) = 0;
    virtual AnimationManager* parent_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool isInFullScreenMode_raw() const = 0;
    virtual bool isInFullScreenMode_raw(bool value) = 0;
    virtual bool reverse_raw() = 0;
    virtual double end_raw() const = 0;
    virtual double playheadPosition_raw() const = 0;
    virtual bool playheadPosition_raw(double value) = 0;
    virtual bool play_raw(bool fromCurrentPosition, double begin, double end) = 0;
    virtual bool isInPlayMode_raw() const = 0;
};

// Inline wrappers

inline bool Storyboard::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<Storyboard> Storyboard::copy(const std::string& name, const core::Ptr<Storyboard>& targetStoryboard, bool before)
{
    core::Ptr<Storyboard> res = copy_raw(name.c_str(), targetStoryboard.get(), before);
    return res;
}

inline bool Storyboard::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool Storyboard::moveTo(const core::Ptr<Storyboard>& targetStoryboard, bool before)
{
    bool res = moveTo_raw(targetStoryboard.get(), before);
    return res;
}

inline bool Storyboard::isViewRecordingOn() const
{
    bool res = isViewRecordingOn_raw();
    return res;
}

inline bool Storyboard::isViewRecordingOn(bool value)
{
    return isViewRecordingOn_raw(value);
}

inline core::Ptr<AnimationManager> Storyboard::parent() const
{
    core::Ptr<AnimationManager> res = parent_raw();
    return res;
}

inline bool Storyboard::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool Storyboard::isInFullScreenMode() const
{
    bool res = isInFullScreenMode_raw();
    return res;
}

inline bool Storyboard::isInFullScreenMode(bool value)
{
    return isInFullScreenMode_raw(value);
}

inline bool Storyboard::reverse()
{
    bool res = reverse_raw();
    return res;
}

inline double Storyboard::end() const
{
    double res = end_raw();
    return res;
}

inline double Storyboard::playheadPosition() const
{
    double res = playheadPosition_raw();
    return res;
}

inline bool Storyboard::playheadPosition(double value)
{
    return playheadPosition_raw(value);
}

inline bool Storyboard::play(bool fromCurrentPosition, double begin, double end)
{
    bool res = play_raw(fromCurrentPosition, begin, end);
    return res;
}

inline bool Storyboard::isInPlayMode() const
{
    bool res = isInPlayMode_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_STORYBOARD_API