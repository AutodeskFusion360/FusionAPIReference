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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_CPP__
# define ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API XI_EXPORT
# else
# define ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API
# endif
#else
# define ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// The NCProgramPostProcessOptions provides settings to control the post processing of NC programs.
/// It is needed for the NCPrograms.postProcess method for posting toolpaths and generating CNC files and setup sheets.
class NCProgramPostProcessOptions : public core::Base {
public:

    /// Creates a new NCProgramPostProcessOptions object to be used as an input argument by the postProcess()
    /// method.
    /// Returns the newly created NCProgramPostProcessOptions object or null if the creation failed.
    static core::Ptr<NCProgramPostProcessOptions> create();

    /// Toggles whether the post processing should abort if two tools with the same tool number have been detected.
    /// True by default. If true, an exception will be thrown if at least two tools map to the same tool number.
    /// If false, the post processor will not perform a tool change if the tool number is the same, which may mean that the wrong tool is used for an operation.
    bool isFailOnToolNumberDuplication() const;
    bool isFailOnToolNumberDuplication(bool value);

    /// Gets and sets the post process behavior with regards to the operations' error or out of date states.
    /// Uses PostProcessExecutionBehavior_OmitInvalidAndEmptyOperations by default.
    PostProcessExecutionBehaviors postProcessExecutionBehavior() const;
    bool postProcessExecutionBehavior(PostProcessExecutionBehaviors value);

    /// Gets and sets the post process behavior for exporting to Fusion Hub.
    /// Uses fusionHubExecutionBehavior_ExportWithRelationship by default.
    FusionHubExecutionBehaviors fusionHubExecutionBehavior() const;
    bool fusionHubExecutionBehavior(FusionHubExecutionBehaviors value);

    ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API static const char* classType();
    ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API const char* objectType() const override;
    ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API static NCProgramPostProcessOptions* create_raw();
    virtual bool isFailOnToolNumberDuplication_raw() const = 0;
    virtual bool isFailOnToolNumberDuplication_raw(bool value) = 0;
    virtual PostProcessExecutionBehaviors postProcessExecutionBehavior_raw() const = 0;
    virtual bool postProcessExecutionBehavior_raw(PostProcessExecutionBehaviors value) = 0;
    virtual FusionHubExecutionBehaviors fusionHubExecutionBehavior_raw() const = 0;
    virtual bool fusionHubExecutionBehavior_raw(FusionHubExecutionBehaviors value) = 0;
};

// Inline wrappers

inline core::Ptr<NCProgramPostProcessOptions> NCProgramPostProcessOptions::create()
{
    core::Ptr<NCProgramPostProcessOptions> res = create_raw();
    return res;
}

inline bool NCProgramPostProcessOptions::isFailOnToolNumberDuplication() const
{
    bool res = isFailOnToolNumberDuplication_raw();
    return res;
}

inline bool NCProgramPostProcessOptions::isFailOnToolNumberDuplication(bool value)
{
    return isFailOnToolNumberDuplication_raw(value);
}

inline PostProcessExecutionBehaviors NCProgramPostProcessOptions::postProcessExecutionBehavior() const
{
    PostProcessExecutionBehaviors res = postProcessExecutionBehavior_raw();
    return res;
}

inline bool NCProgramPostProcessOptions::postProcessExecutionBehavior(PostProcessExecutionBehaviors value)
{
    return postProcessExecutionBehavior_raw(value);
}

inline FusionHubExecutionBehaviors NCProgramPostProcessOptions::fusionHubExecutionBehavior() const
{
    FusionHubExecutionBehaviors res = fusionHubExecutionBehavior_raw();
    return res;
}

inline bool NCProgramPostProcessOptions::fusionHubExecutionBehavior(FusionHubExecutionBehaviors value)
{
    return fusionHubExecutionBehavior_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_NCPROGRAMPOSTPROCESSOPTIONS_API