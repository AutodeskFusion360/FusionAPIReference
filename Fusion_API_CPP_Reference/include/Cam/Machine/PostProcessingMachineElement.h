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
#include "MachineElement.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_CPP__
# define ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Machine element representing the post processor and post properties.
class PostProcessingMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Gets or sets the URL of the post assigned to the machine.
    /// Returns a string with the URL of the post assigned to the machine.
    core::Ptr<core::URL> postURL() const;
    bool postURL(const core::Ptr<core::URL>& value);

    /// Gets and sets the path for the output folder where the .nc files will be located.
    /// Returns a string of the output folder path for the post processing result.
    std::string outputFolder() const;
    bool outputFolder(const std::string& value);

    /// Gets the machine scope post properties as parameters.
    core::Ptr<CAMParameters> postParameters() const;

    /// Overrides the default post parameters with the given user's input.
    /// Returns true if the update was successful. False otherwise.
    bool updatePostParameters(const core::Ptr<CAMParameters>& parameters);

    ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual core::URL* postURL_raw() const = 0;
    virtual bool postURL_raw(core::URL* value) = 0;
    virtual char* outputFolder_raw() const = 0;
    virtual bool outputFolder_raw(const char* value) = 0;
    virtual CAMParameters* postParameters_raw() const = 0;
    virtual bool updatePostParameters_raw(CAMParameters* parameters) = 0;
};

// Inline wrappers

inline std::string PostProcessingMachineElement::staticTypeId()
{
    std::string res;

    char* p= staticTypeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::URL> PostProcessingMachineElement::postURL() const
{
    core::Ptr<core::URL> res = postURL_raw();
    return res;
}

inline bool PostProcessingMachineElement::postURL(const core::Ptr<core::URL>& value)
{
    return postURL_raw(value.get());
}

inline std::string PostProcessingMachineElement::outputFolder() const
{
    std::string res;

    char* p= outputFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PostProcessingMachineElement::outputFolder(const std::string& value)
{
    return outputFolder_raw(value.c_str());
}

inline core::Ptr<CAMParameters> PostProcessingMachineElement::postParameters() const
{
    core::Ptr<CAMParameters> res = postParameters_raw();
    return res;
}

inline bool PostProcessingMachineElement::updatePostParameters(const core::Ptr<CAMParameters>& parameters)
{
    bool res = updatePostParameters_raw(parameters.get());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POSTPROCESSINGMACHINEELEMENT_API