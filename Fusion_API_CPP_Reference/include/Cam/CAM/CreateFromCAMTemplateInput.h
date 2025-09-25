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
# ifdef __COMPILING_ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_CPP__
# define ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API XI_EXPORT
# else
# define ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API
# endif
#else
# define ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMTemplate;
}}

namespace adsk { namespace cam {

/// Object that contains the settings used by createFromCAMTemplate.
class CreateFromCAMTemplateInput : public core::Base {
public:

    /// Creates an empty input object to be passed into createFromCAMTemplate
    /// The newly created input object.
    static core::Ptr<CreateFromCAMTemplateInput> create();

    /// Gets and sets the template to be instantiated.
    core::Ptr<CAMTemplate> camTemplate() const;
    bool camTemplate(const core::Ptr<CAMTemplate>& value);

    /// Gets and sets the mode to be used for generation. Defaults to Skip Generation.
    AutomaticGenerationModes mode() const;
    bool mode(AutomaticGenerationModes value);

    ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API static const char* classType();
    ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API const char* objectType() const override;
    ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API static CreateFromCAMTemplateInput* create_raw();
    virtual CAMTemplate* camTemplate_raw() const = 0;
    virtual bool camTemplate_raw(CAMTemplate* value) = 0;
    virtual AutomaticGenerationModes mode_raw() const = 0;
    virtual bool mode_raw(AutomaticGenerationModes value) = 0;
};

// Inline wrappers

inline core::Ptr<CreateFromCAMTemplateInput> CreateFromCAMTemplateInput::create()
{
    core::Ptr<CreateFromCAMTemplateInput> res = create_raw();
    return res;
}

inline core::Ptr<CAMTemplate> CreateFromCAMTemplateInput::camTemplate() const
{
    core::Ptr<CAMTemplate> res = camTemplate_raw();
    return res;
}

inline bool CreateFromCAMTemplateInput::camTemplate(const core::Ptr<CAMTemplate>& value)
{
    return camTemplate_raw(value.get());
}

inline AutomaticGenerationModes CreateFromCAMTemplateInput::mode() const
{
    AutomaticGenerationModes res = mode_raw();
    return res;
}

inline bool CreateFromCAMTemplateInput::mode(AutomaticGenerationModes value)
{
    return mode_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CREATEFROMCAMTEMPLATEINPUT_API