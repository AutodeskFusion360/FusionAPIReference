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
# ifdef __COMPILING_SANDVIKINTEGRATION_CPP__
# define SANDVIKINTEGRATION_API XI_EXPORT
# else
# define SANDVIKINTEGRATION_API
# endif
#else
# define SANDVIKINTEGRATION_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class SandvikIntegrationEvent;
    class SandvikPreIntegrationEvent;
    class Setup;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This singleton object provides access to application-level events and properties
/// that relate to the CAM (Manufacture) workspace in Fusion.
class SandvikIntegration : public core::Base {
public:

    /// Access to the root CAMGlobal object.
    /// Return the root SandvikIntegration object or null if it failed.
    static core::Ptr<SandvikIntegration> get();

    /// This event will be fired just before an operation/setup dialog (create/edit) is
    /// presented. This will allow the add-in to indicate which, if any, of the integration
    /// actions should be shown, as well as details of the presentation. See
    /// SandvikPreIntegrationEventArgs for details.
    core::Ptr<SandvikPreIntegrationEvent> preIntegrationEvent() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// An integration event will be fired when any of the buttons related to the
    /// integration is pressed. The event arguments will provide information about which
    /// button was pressed, and will provide contextual information, such as the object
    /// active at the time.
    core::Ptr<SandvikIntegrationEvent> integrationEvent() const;

    /// Provides a mechanism to store and retrieve user-specific information as a hidden system preference.
    std::string settings() const;
    bool settings(const std::string& value);

    /// Get the stock material id specified for the Setup.
    /// setup : The Setup object to get the stock material id for.
    /// The ID of the stock material set for the Setup.
    std::string getStockMaterialId(const core::Ptr<Setup>& setup);

    /// Set the stock material id for the Setup.
    /// setup : The Setup object to set the stock material id for.
    /// Returns true if successful.
    bool setStockMaterialId(const core::Ptr<Setup>& setup, const std::string& id);

    /// Get the stock material id specified for the Setup.
    /// setup : The Setup object to get the stock material id for.
    /// The ID of the stock material set for the Setup.
    std::string getStockMaterialText(const core::Ptr<Setup>& setup);

    /// Set the stock material text for the Setup. This will be displayed in the user interface.
    /// setup : The Setup object to set the stock material text for.
    /// Returns true if successful.
    bool setStockMaterialText(const core::Ptr<Setup>& setup, const std::string& text);

    SANDVIKINTEGRATION_API static const char* classType();
    SANDVIKINTEGRATION_API const char* objectType() const override;
    SANDVIKINTEGRATION_API void* queryInterface(const char* id) const override;
    SANDVIKINTEGRATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    SANDVIKINTEGRATION_API static SandvikIntegration* get_raw();
    virtual SandvikPreIntegrationEvent* preIntegrationEvent_raw() const = 0;
    virtual SandvikIntegrationEvent* integrationEvent_raw() const = 0;
    virtual char* settings_raw() const = 0;
    virtual bool settings_raw(const char* value) = 0;
    virtual char* getStockMaterialId_raw(Setup* setup) = 0;
    virtual bool setStockMaterialId_raw(Setup* setup, const char* id) = 0;
    virtual char* getStockMaterialText_raw(Setup* setup) = 0;
    virtual bool setStockMaterialText_raw(Setup* setup, const char* text) = 0;
};

// Inline wrappers

inline core::Ptr<SandvikIntegration> SandvikIntegration::get()
{
    core::Ptr<SandvikIntegration> res = get_raw();
    return res;
}

inline core::Ptr<SandvikPreIntegrationEvent> SandvikIntegration::preIntegrationEvent() const
{
    core::Ptr<SandvikPreIntegrationEvent> res = preIntegrationEvent_raw();
    return res;
}

inline core::Ptr<SandvikIntegrationEvent> SandvikIntegration::integrationEvent() const
{
    core::Ptr<SandvikIntegrationEvent> res = integrationEvent_raw();
    return res;
}

inline std::string SandvikIntegration::settings() const
{
    std::string res;

    char* p= settings_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SandvikIntegration::settings(const std::string& value)
{
    return settings_raw(value.c_str());
}

inline std::string SandvikIntegration::getStockMaterialId(const core::Ptr<Setup>& setup)
{
    std::string res;

    char* p= getStockMaterialId_raw(setup.get());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SandvikIntegration::setStockMaterialId(const core::Ptr<Setup>& setup, const std::string& id)
{
    bool res = setStockMaterialId_raw(setup.get(), id.c_str());
    return res;
}

inline std::string SandvikIntegration::getStockMaterialText(const core::Ptr<Setup>& setup)
{
    std::string res;

    char* p= getStockMaterialText_raw(setup.get());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool SandvikIntegration::setStockMaterialText(const core::Ptr<Setup>& setup, const std::string& text)
{
    bool res = setStockMaterialText_raw(setup.get(), text.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef SANDVIKINTEGRATION_API