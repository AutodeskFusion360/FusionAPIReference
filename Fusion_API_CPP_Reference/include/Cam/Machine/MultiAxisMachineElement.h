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
#include "MachineElement.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MULTIAXISMACHINEELEMENT_CPP__
# define ADSK_CAM_MULTIAXISMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_MULTIAXISMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_MULTIAXISMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MultiAxisFeedrateSettings;
    class MultiAxisFeedrateSettingsInput;
    class MultiAxisRetractAndReconfigureSettings;
    class MultiAxisSingularitySettings;
}}

namespace adsk { namespace cam {

/// Machine element representing multi-axis machine settings.
class MultiAxisMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// Delete this multi-axis machine element from the machine.
    void deleteMe();

    /// Specifies if the position of the virtual tool tip (tool end) should be output. Only relevant for rotary head axes.
    bool isUsingVirtualTooltip() const;
    bool isUsingVirtualTooltip(bool value);

    /// The multi-axis kinematics settings for this machine.
    /// For changes to to this object to take effect, re-assign them to this property.
    /// To not use multi-axis kinematics, set this to null.
    core::Ptr<MultiAxisSingularitySettings> singularitySettings() const;
    bool singularitySettings(const core::Ptr<MultiAxisSingularitySettings>& value);

    /// Creates a MultiAxisSingularitySettings object.
    /// Set this object on the singularitySettings property to apply the changes.
    /// The MultiAxisSingularitySettings object created.
    core::Ptr<MultiAxisSingularitySettings> createSingularitySettings();

    /// The multi-axis feedrate settings for this machine.
    /// For changes to to this object to take effect, re-assign them to this property.
    /// Cannot be set to null.
    core::Ptr<MultiAxisFeedrateSettings> feedrateSettings() const;
    bool feedrateSettings(const core::Ptr<MultiAxisFeedrateSettings>& value);

    /// Creates a MultiAxisFeedrateSettingsInput object to be used as input for creating MultiAxisFeedrateSettings objects.
    ///  The MultiAxisFeedrateSettingsInput object 
    core::Ptr<MultiAxisFeedrateSettingsInput> createFeedrateSettingsInput() const;

    /// Creates a MultiAxisFeedrateSettings specialized object from the given input.
    /// input : The input object containing the settings to create the MultiAxisFeedrateSettings object.
    /// Set this object on the feedrateSettings property to apply the changes.
    /// The specialized MultiAxisFeedrateSettings object created from the input.
    core::Ptr<MultiAxisFeedrateSettings> createFeedrateSettings(const core::Ptr<MultiAxisFeedrateSettingsInput>& input);

    /// The multi-axis retract and reconfigure settings for this machine.
    /// For changes to to this object to take effect, re-assign them to this property.
    /// To not use multi-axis retract and reconfigure, set this to null.
    core::Ptr<MultiAxisRetractAndReconfigureSettings> retractAndReconfigureSettings() const;
    bool retractAndReconfigureSettings(const core::Ptr<MultiAxisRetractAndReconfigureSettings>& value);

    /// Creates a MultiAxisRetractAndReconfigureSettings object.
    /// Set this object on the retractAndReconfigureSettings property to apply the changes.
    /// The MultiAxisRetractAndReconfigureSettings object created.
    core::Ptr<MultiAxisRetractAndReconfigureSettings> createRetractAndReconfigureSettings();

    /// Specifies if tilted workplane command (e.g., G68.2, G254, PLANE SPATIAL, CYCLE800) should be output for 3+2 operations.
    bool isUsingTiltedWorkplane() const;
    bool isUsingTiltedWorkplane(bool value);

    ADSK_CAM_MULTIAXISMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_MULTIAXISMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_MULTIAXISMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MULTIAXISMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_MULTIAXISMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual void deleteMe_raw() = 0;
    virtual bool isUsingVirtualTooltip_raw() const = 0;
    virtual bool isUsingVirtualTooltip_raw(bool value) = 0;
    virtual MultiAxisSingularitySettings* singularitySettings_raw() const = 0;
    virtual bool singularitySettings_raw(MultiAxisSingularitySettings* value) = 0;
    virtual MultiAxisSingularitySettings* createSingularitySettings_raw() = 0;
    virtual MultiAxisFeedrateSettings* feedrateSettings_raw() const = 0;
    virtual bool feedrateSettings_raw(MultiAxisFeedrateSettings* value) = 0;
    virtual MultiAxisFeedrateSettingsInput* createFeedrateSettingsInput_raw() const = 0;
    virtual MultiAxisFeedrateSettings* createFeedrateSettings_raw(MultiAxisFeedrateSettingsInput* input) = 0;
    virtual MultiAxisRetractAndReconfigureSettings* retractAndReconfigureSettings_raw() const = 0;
    virtual bool retractAndReconfigureSettings_raw(MultiAxisRetractAndReconfigureSettings* value) = 0;
    virtual MultiAxisRetractAndReconfigureSettings* createRetractAndReconfigureSettings_raw() = 0;
    virtual bool isUsingTiltedWorkplane_raw() const = 0;
    virtual bool isUsingTiltedWorkplane_raw(bool value) = 0;
};

// Inline wrappers

inline std::string MultiAxisMachineElement::staticTypeId()
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

inline void MultiAxisMachineElement::deleteMe()
{
    deleteMe_raw();
}

inline bool MultiAxisMachineElement::isUsingVirtualTooltip() const
{
    bool res = isUsingVirtualTooltip_raw();
    return res;
}

inline bool MultiAxisMachineElement::isUsingVirtualTooltip(bool value)
{
    return isUsingVirtualTooltip_raw(value);
}

inline core::Ptr<MultiAxisSingularitySettings> MultiAxisMachineElement::singularitySettings() const
{
    core::Ptr<MultiAxisSingularitySettings> res = singularitySettings_raw();
    return res;
}

inline bool MultiAxisMachineElement::singularitySettings(const core::Ptr<MultiAxisSingularitySettings>& value)
{
    return singularitySettings_raw(value.get());
}

inline core::Ptr<MultiAxisSingularitySettings> MultiAxisMachineElement::createSingularitySettings()
{
    core::Ptr<MultiAxisSingularitySettings> res = createSingularitySettings_raw();
    return res;
}

inline core::Ptr<MultiAxisFeedrateSettings> MultiAxisMachineElement::feedrateSettings() const
{
    core::Ptr<MultiAxisFeedrateSettings> res = feedrateSettings_raw();
    return res;
}

inline bool MultiAxisMachineElement::feedrateSettings(const core::Ptr<MultiAxisFeedrateSettings>& value)
{
    return feedrateSettings_raw(value.get());
}

inline core::Ptr<MultiAxisFeedrateSettingsInput> MultiAxisMachineElement::createFeedrateSettingsInput() const
{
    core::Ptr<MultiAxisFeedrateSettingsInput> res = createFeedrateSettingsInput_raw();
    return res;
}

inline core::Ptr<MultiAxisFeedrateSettings> MultiAxisMachineElement::createFeedrateSettings(const core::Ptr<MultiAxisFeedrateSettingsInput>& input)
{
    core::Ptr<MultiAxisFeedrateSettings> res = createFeedrateSettings_raw(input.get());
    return res;
}

inline core::Ptr<MultiAxisRetractAndReconfigureSettings> MultiAxisMachineElement::retractAndReconfigureSettings() const
{
    core::Ptr<MultiAxisRetractAndReconfigureSettings> res = retractAndReconfigureSettings_raw();
    return res;
}

inline bool MultiAxisMachineElement::retractAndReconfigureSettings(const core::Ptr<MultiAxisRetractAndReconfigureSettings>& value)
{
    return retractAndReconfigureSettings_raw(value.get());
}

inline core::Ptr<MultiAxisRetractAndReconfigureSettings> MultiAxisMachineElement::createRetractAndReconfigureSettings()
{
    core::Ptr<MultiAxisRetractAndReconfigureSettings> res = createRetractAndReconfigureSettings_raw();
    return res;
}

inline bool MultiAxisMachineElement::isUsingTiltedWorkplane() const
{
    bool res = isUsingTiltedWorkplane_raw();
    return res;
}

inline bool MultiAxisMachineElement::isUsingTiltedWorkplane(bool value)
{
    return isUsingTiltedWorkplane_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MULTIAXISMACHINEELEMENT_API