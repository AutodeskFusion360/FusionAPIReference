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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MANUFACTURINGMODEL_CPP__
# define ADSK_CAM_MANUFACTURINGMODEL_API XI_EXPORT
# else
# define ADSK_CAM_MANUFACTURINGMODEL_API
# endif
#else
# define ADSK_CAM_MANUFACTURINGMODEL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace cam {

/// Represents a ManufacturingModel within a CAM design. A Manufacturing Model is a derive of the Design scene, which can be augmented without any effects of the original Design.
class ManufacturingModel : public core::Base {
public:

    /// Gets or sets the display name of the ManufacturingModel.
    /// This is the name that will be shown in the browser and other locations.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets the unique identifier of the ManufacturingModel within the document.
    std::string id() const;

    /// Gets whether this ManufacturingModel is active in the user interface.
    /// This is the same as checking the state of the radio button next to the ManufacturingModel in the browser.
    /// To activate the ManufacturingModel use the Activate method.
    bool isActive() const;

    /// Makes the ManufacturingModel the active edit target in the user interface. This is the same
    /// as enabling the radio button next to the occurrence in the browser.
    /// Returns true if the activation was successful.
    bool activate();

    /// Creates and returns a copy of the ManufacturingModel, within its parent collection.
    /// The newly created ManufacturingModel will have a new unique name assigned.
    /// Returns the newly created ManufacturingModel copy.
    core::Ptr<ManufacturingModel> duplicate();

    /// Deletes this ManufacturingModel. If this is part of a setup, the reference to this will be lost. The deletion makes that reference invalid.
    /// Returns true if the delete is successful.
    bool deleteMe();

    /// Returns the occurrence for that ManufacturingModel.
    /// Returns true Occurrence for the current ManufacturingModel.
    core::Ptr<fusion::Occurrence> occurrence() const;

    /// Checks whether changes to the original design have been made. If so, the given manufacturing model is synchronized with its source.
    /// Returns true if the manufacturing model needed an update.
    bool syncManufacturingModel();

    ADSK_CAM_MANUFACTURINGMODEL_API static const char* classType();
    ADSK_CAM_MANUFACTURINGMODEL_API const char* objectType() const override;
    ADSK_CAM_MANUFACTURINGMODEL_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MANUFACTURINGMODEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* id_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual ManufacturingModel* duplicate_raw() = 0;
    virtual bool deleteMe_raw() = 0;
    virtual fusion::Occurrence* occurrence_raw() const = 0;
    virtual bool syncManufacturingModel_raw() = 0;
};

// Inline wrappers

inline std::string ManufacturingModel::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ManufacturingModel::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string ManufacturingModel::id() const
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

inline bool ManufacturingModel::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool ManufacturingModel::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<ManufacturingModel> ManufacturingModel::duplicate()
{
    core::Ptr<ManufacturingModel> res = duplicate_raw();
    return res;
}

inline bool ManufacturingModel::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<fusion::Occurrence> ManufacturingModel::occurrence() const
{
    core::Ptr<fusion::Occurrence> res = occurrence_raw();
    return res;
}

inline bool ManufacturingModel::syncManufacturingModel()
{
    bool res = syncManufacturingModel_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MANUFACTURINGMODEL_API