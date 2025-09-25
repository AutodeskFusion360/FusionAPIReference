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
#include "ModifyUtility.h"
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVESETUPUTILITY_CPP__
# define ADSK_CAM_ADDITIVESETUPUTILITY_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVESETUPUTILITY_API
# endif
#else
# define ADSK_CAM_ADDITIVESETUPUTILITY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Operation;
}}

namespace adsk { namespace cam {

/// AdditiveSetupUtility provides functionality for modifications of additive setups.
class AdditiveSetupUtility : public ModifyUtility {
public:

    /// Splits support structure of given target bodies into separate mesh body.
    /// targets : Targets contain any input bodies whose support is to be inserted into a new mesh body.
    /// Input target must belong to the setup and must be part of the associated manufacturing model.
    /// Raises an error if any input target is not part of the setup or is not part of the associated manufacturing model.
    /// splitType : The splitType defines the behavior for support that contains solid and open mesh geometry.
    /// True on success, false on errors
    bool splitSupport(const std::vector<core::Ptr<core::Base>>& targets, SplitSupportTypes splitType);

    /// Remove components from setups, that are outside of the buildroom.
    /// Returns count of removed parts on success and -1 on failure.
    int removeExcessParts();

    /// Assigns an array of parts to the body preset operation corresponding to the chosen PrintSettingItem in the PrintSetting. If a part has been previously assigned to a different preset (i.e. the default preset), it will be removed from its previous owner to ensure a body can only be mapped to one preset. If the previous owner preset ends up being empty, it will be removed from the setup.
    /// parts : Parts to be assigned to a preset. The array may contain BRepBody, MeshBody or Occurrence objects. If occurrences are passed in, the preset will contain their resolved bodies or meshes. If the array is empty, the preset will be removed from the setup, but the PrintSettingItem will stay in the PrintSetting.
    /// presetName : The name of the PrintSettingItem defined in the PrintSetting, which serves as the basis for the to be created operation.
    /// The preset corresponding to the preset name. Returns null if the preset has been removed from the setup due to passing an empty or invalid array.
    core::Ptr<Operation> assignPartsToBodyPreset(const std::vector<core::Ptr<core::Base>>& parts, const std::string& presetName);

    ADSK_CAM_ADDITIVESETUPUTILITY_API static const char* classType();
    ADSK_CAM_ADDITIVESETUPUTILITY_API const char* objectType() const override;
    ADSK_CAM_ADDITIVESETUPUTILITY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVESETUPUTILITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool splitSupport_raw(core::Base** targets, size_t targets_size, SplitSupportTypes splitType) = 0;
    virtual int removeExcessParts_raw() = 0;
    virtual Operation* assignPartsToBodyPreset_raw(core::Base** parts, size_t parts_size, const char* presetName) = 0;
};

// Inline wrappers

inline bool AdditiveSetupUtility::splitSupport(const std::vector<core::Ptr<core::Base>>& targets, SplitSupportTypes splitType)
{
    core::Base** targets_ = new core::Base*[targets.size()];
    for(size_t i=0; i<targets.size(); ++i)
        targets_[i] = targets[i].get();

    bool res = splitSupport_raw(targets_, targets.size(), splitType);
    delete[] targets_;
    return res;
}

inline int AdditiveSetupUtility::removeExcessParts()
{
    int res = removeExcessParts_raw();
    return res;
}

inline core::Ptr<Operation> AdditiveSetupUtility::assignPartsToBodyPreset(const std::vector<core::Ptr<core::Base>>& parts, const std::string& presetName)
{
    core::Base** parts_ = new core::Base*[parts.size()];
    for(size_t i=0; i<parts.size(); ++i)
        parts_[i] = parts[i].get();

    core::Ptr<Operation> res = assignPartsToBodyPreset_raw(parts_, parts.size(), presetName.c_str());
    delete[] parts_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVESETUPUTILITY_API