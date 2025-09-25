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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMFEATUREDEFINITION_CPP__
# define ADSK_FUSION_CUSTOMFEATUREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMFEATUREDEFINITION_API
# endif
#else
# define ADSK_FUSION_CUSTOMFEATUREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class CustomFeatureEvent;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The CustomFeatureDefinition object defines a specific type of custom feature. It contains
/// the settings that apply to all custom features of that type and is used when creating new
/// custom features of that type. It also supports the events used to handle changes to custom
/// features of that type.
class CustomFeatureDefinition : public core::Base {
public:

    /// A static function that creates a new CustomFeatureDefinition object. The creation of a
    /// CustomFeatureDefinition object is required to be able to create new custom features and
    /// for existing custom features to behave correctly. The CustomFeatureDefinition object defines
    /// all of the information that is common for all custom features of a particular type. For example,
    /// it defines the icon and the default name. The CustomFeatureDefinition object also supports the
    /// events that used to react to an existing feature being edited or re-computed.
    /// 
    /// The custom feature definition should be created when your add-in is initially loaded to notify
    /// Fusion that the add-in that supports that custom feature type is available.
    /// id : The unique ID for custom features of a particular type. Care must be taken to ensure that this
    /// is unique and you must be consistent in its use once you've chosen an ID. A good practice to
    /// help ensure unique naming is to use the name of your company in combination with the name of
    /// the feature, such as "CompanyName.FeatureName". For example, "WoodTools4U.Dovetail".
    /// defaultName : The default name of the feature. Fusion will use this name and append a number to each feature
    /// instance as it's created. For example, if this is "Dovetail" the first custom feature created
    /// will be named "Dovetail1" and the second will be "Dovetail2".
    /// 
    /// If you want to localize this name you can use the Application.Preferences.generalPreferences.userLanguage
    /// property to determine what language the user has chosen and use the corresponding name for that language.
    /// iconFolder : The folder that contains the image files that will be used for the icon for this feature in
    /// the timeline. This can be a full path or a relative path where it will be relative to the add-in
    /// file. The folder should contain the image files named 16x16.png and 32x32.png which should be
    /// images that are 16 and 32 pixels square.
    /// Returns the newly created CustomFeatureDefinition or null in the case of failure.
    static core::Ptr<CustomFeatureDefinition> create(const std::string& id, const std::string& defaultName, const std::string& iconFolder);

    /// Gets the unique ID used for this type of custom feature.
    std::string id() const;

    /// Gets and sets the folder that contains the images that are used for the icon in the timeline for
    /// this custom feature. The folder should contain the image files named 16x16.png and 32x32.png
    /// which should be images that are 16 and 32 pixels square.
    std::string iconFolder() const;
    bool iconFolder(const std::string& value);

    /// Gets and sets the default name of the feature. Fusion will use this name and append a number
    /// to each feature instance as it's created. For example, if this is "Dovetail" the first
    /// custom feature created will be named "Dovetail1" and the second will be "Dovetail2".
    /// 
    /// If you want to localize this name you can use the Application.Preferences.generalPreferences.userLanguage
    /// property to determine what language the user has chosen and use the corresponding name for that language.
    std::string defaultName() const;
    bool defaultName(const std::string& value);

    /// Gets and sets which command will be invoked when the feature is edited. This is the id of the
    /// CommandDefinition object that you have created to do the edit of the feature.
    std::string editCommandId() const;
    bool editCommandId(const std::string& value);

    /// The customFeatureCompute event fires when Fusion is computing the timeline and reaches
    /// the custom feature. The event is fired if any of the dependencies of the custom feature
    /// have changed. You can modify the results of your custom feature based on the dependencies.
    core::Ptr<CustomFeatureEvent> customFeatureCompute() const;

    ADSK_FUSION_CUSTOMFEATUREDEFINITION_API static const char* classType();
    ADSK_FUSION_CUSTOMFEATUREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMFEATUREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMFEATUREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMFEATUREDEFINITION_API static CustomFeatureDefinition* create_raw(const char* id, const char* defaultName, const char* iconFolder);
    virtual char* id_raw() const = 0;
    virtual char* iconFolder_raw() const = 0;
    virtual bool iconFolder_raw(const char* value) = 0;
    virtual char* defaultName_raw() const = 0;
    virtual bool defaultName_raw(const char* value) = 0;
    virtual char* editCommandId_raw() const = 0;
    virtual bool editCommandId_raw(const char* value) = 0;
    virtual CustomFeatureEvent* customFeatureCompute_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CustomFeatureDefinition> CustomFeatureDefinition::create(const std::string& id, const std::string& defaultName, const std::string& iconFolder)
{
    core::Ptr<CustomFeatureDefinition> res = create_raw(id.c_str(), defaultName.c_str(), iconFolder.c_str());
    return res;
}

inline std::string CustomFeatureDefinition::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CustomFeatureDefinition::iconFolder() const
{
    std::string res;

    char* p= iconFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomFeatureDefinition::iconFolder(const std::string& value)
{
    return iconFolder_raw(value.c_str());
}

inline std::string CustomFeatureDefinition::defaultName() const
{
    std::string res;

    char* p= defaultName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomFeatureDefinition::defaultName(const std::string& value)
{
    return defaultName_raw(value.c_str());
}

inline std::string CustomFeatureDefinition::editCommandId() const
{
    std::string res;

    char* p= editCommandId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CustomFeatureDefinition::editCommandId(const std::string& value)
{
    return editCommandId_raw(value.c_str());
}

inline core::Ptr<CustomFeatureEvent> CustomFeatureDefinition::customFeatureCompute() const
{
    core::Ptr<CustomFeatureEvent> res = customFeatureCompute_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMFEATUREDEFINITION_API