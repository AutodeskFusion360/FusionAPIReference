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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POSTPROCESSINPUT_CPP__
# define ADSK_CAM_POSTPROCESSINPUT_API XI_EXPORT
# else
# define ADSK_CAM_POSTPROCESSINPUT_API
# endif
#else
# define ADSK_CAM_POSTPROCESSINPUT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Machine;
}}
namespace adsk { namespace core {
    class NamedValues;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This class defines the properties that pertain to the settings and options required for posting a
/// toolpath to generate a CNC file.  A PostProcessInput object is a required parameter for the
/// postProcessAll() and postProcess() methods on the CAM class.
class PostProcessInput : public core::Base {
public:

    /// Creates a new PostProcessInput object to be used as an input argument by the postProcess() and postProcessAll()
    /// methods on the CAM class for posting toolpaths and generating CNC files.
    /// programName : The program name or number.
    /// If the post configuration specifies the parameter programNameIsInteger = true, then the program name must be a number.
    /// postConfiguration : The full filename (including the path) to the post configuration file (.cps)
    /// The post config file can be stored in any path but for convenience you can use the genericPostFolder or the personalPostFolder property on the CAM class to specify
    /// the path if your .cps file is stored in either of those locations.  You must add a forward slash (this works for Mac or Windows) to the path defined by these folder
    /// properties before the filename (e.g. postConfiguration = cam.genericPostFolder + '/' + 'fanuc.cps')
    /// outputFolder : The path for the existing output folder where the .cnc files will be located.  This method will create the specified output folder if it does not already exist.
    /// It is not necessary to add a slash to the end of the outputFolder path.  You should use forward slashes in your path definition if you want your script to run on both Mac and Windows.
    /// outputUnits : The units option for the CNC output.
    /// Valid options are DocumentUnitsOutput, InchesOutput or MillimetersOutput
    /// Returns the newly created PostProcessInput object or null if the creation failed.
    static core::Ptr<PostProcessInput> create(const std::string& programName, const std::string& postConfiguration, const std::string& outputFolder, PostOutputUnitOptions outputUnits);

    /// Gets and sets the program name or number.
    /// If the post configuration specifies the parameter programNameIsInteger = true, then the program name must be a number.
    std::string programName() const;
    bool programName(const std::string& value);

    /// Gets and sets the program comment.  The default value for this property is an empty string ("").
    std::string programComment() const;
    bool programComment(const std::string& value);

    /// Gets and sets the full filename (including the path) for the post configuration file (.cps)
    std::string postConfiguration() const;
    bool postConfiguration(const std::string& value);

    /// Gets and sets the path for the output folder where the .cnc files will be located.
    std::string outputFolder() const;
    bool outputFolder(const std::string& value);

    /// Gets and sets the units option for the CNC output.
    /// Valid options are DocumentUnitsOutput, InchesOutput or MillimetersOutput
    PostOutputUnitOptions outputUnits() const;
    bool outputUnits(PostOutputUnitOptions value);

    /// Gets and sets the option if opening the CNC file with the editor after it is created.
    /// The default value for this property is true.
    bool isOpenInEditor() const;
    bool isOpenInEditor(bool value);

    /// Gets and sets that operations may be reordered between setups to minimize the number of tool changes.
    /// Operations within each setup will still be executed in the programmed order.
    /// This is commonly used for tombstone machining where you have multiple setups.
    /// The default value for this property is false.
    bool areToolChangesMinimized() const;
    bool areToolChangesMinimized(bool value);

    /// Gets and sets the list of post properties.
    /// Each property has a string name and a ValueInput object.
    /// The default value for this is an empty NamedValues.
    core::Ptr<core::NamedValues> postProperties() const;
    bool postProperties(const core::Ptr<core::NamedValues>& value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the machine used for post processing.
    /// It will override the machines associated with the operations or setup when posting.
    /// The default value for this property is null.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    ADSK_CAM_POSTPROCESSINPUT_API static const char* classType();
    ADSK_CAM_POSTPROCESSINPUT_API const char* objectType() const override;
    ADSK_CAM_POSTPROCESSINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POSTPROCESSINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_POSTPROCESSINPUT_API static PostProcessInput* create_raw(const char* programName, const char* postConfiguration, const char* outputFolder, PostOutputUnitOptions outputUnits);
    virtual char* programName_raw() const = 0;
    virtual bool programName_raw(const char* value) = 0;
    virtual char* programComment_raw() const = 0;
    virtual bool programComment_raw(const char* value) = 0;
    virtual char* postConfiguration_raw() const = 0;
    virtual bool postConfiguration_raw(const char* value) = 0;
    virtual char* outputFolder_raw() const = 0;
    virtual bool outputFolder_raw(const char* value) = 0;
    virtual PostOutputUnitOptions outputUnits_raw() const = 0;
    virtual bool outputUnits_raw(PostOutputUnitOptions value) = 0;
    virtual bool isOpenInEditor_raw() const = 0;
    virtual bool isOpenInEditor_raw(bool value) = 0;
    virtual bool areToolChangesMinimized_raw() const = 0;
    virtual bool areToolChangesMinimized_raw(bool value) = 0;
    virtual core::NamedValues* postProperties_raw() const = 0;
    virtual bool postProperties_raw(core::NamedValues* value) = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
};

// Inline wrappers

inline core::Ptr<PostProcessInput> PostProcessInput::create(const std::string& programName, const std::string& postConfiguration, const std::string& outputFolder, PostOutputUnitOptions outputUnits)
{
    core::Ptr<PostProcessInput> res = create_raw(programName.c_str(), postConfiguration.c_str(), outputFolder.c_str(), outputUnits);
    return res;
}

inline std::string PostProcessInput::programName() const
{
    std::string res;

    char* p= programName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PostProcessInput::programName(const std::string& value)
{
    return programName_raw(value.c_str());
}

inline std::string PostProcessInput::programComment() const
{
    std::string res;

    char* p= programComment_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PostProcessInput::programComment(const std::string& value)
{
    return programComment_raw(value.c_str());
}

inline std::string PostProcessInput::postConfiguration() const
{
    std::string res;

    char* p= postConfiguration_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PostProcessInput::postConfiguration(const std::string& value)
{
    return postConfiguration_raw(value.c_str());
}

inline std::string PostProcessInput::outputFolder() const
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

inline bool PostProcessInput::outputFolder(const std::string& value)
{
    return outputFolder_raw(value.c_str());
}

inline PostOutputUnitOptions PostProcessInput::outputUnits() const
{
    PostOutputUnitOptions res = outputUnits_raw();
    return res;
}

inline bool PostProcessInput::outputUnits(PostOutputUnitOptions value)
{
    return outputUnits_raw(value);
}

inline bool PostProcessInput::isOpenInEditor() const
{
    bool res = isOpenInEditor_raw();
    return res;
}

inline bool PostProcessInput::isOpenInEditor(bool value)
{
    return isOpenInEditor_raw(value);
}

inline bool PostProcessInput::areToolChangesMinimized() const
{
    bool res = areToolChangesMinimized_raw();
    return res;
}

inline bool PostProcessInput::areToolChangesMinimized(bool value)
{
    return areToolChangesMinimized_raw(value);
}

inline core::Ptr<core::NamedValues> PostProcessInput::postProperties() const
{
    core::Ptr<core::NamedValues> res = postProperties_raw();
    return res;
}

inline bool PostProcessInput::postProperties(const core::Ptr<core::NamedValues>& value)
{
    return postProperties_raw(value.get());
}

inline core::Ptr<Machine> PostProcessInput::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool PostProcessInput::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POSTPROCESSINPUT_API