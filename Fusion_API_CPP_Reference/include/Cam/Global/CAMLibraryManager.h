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
# ifdef __COMPILING_ADSK_CAM_CAMLIBRARYMANAGER_CPP__
# define ADSK_CAM_CAMLIBRARYMANAGER_API XI_EXPORT
# else
# define ADSK_CAM_CAMLIBRARYMANAGER_API
# endif
#else
# define ADSK_CAM_CAMLIBRARYMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMTemplateLibrary;
    class MachineLibrary;
    class PostLibrary;
    class PrintSettingLibrary;
    class StockMaterialLibrary;
    class ToolLibraries;
}}

namespace adsk { namespace cam {

/// CAMLibraryManager provides access to properties related to various libraries in the
/// Fusion Manufacture workspace, such as the post library and machine library.
class CAMLibraryManager : public core::Base {
public:

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the absolute path to the folder containing Fusion posts. Fusion posts
    /// appear in the post library under the Fusion tab.
    std::string fusion360PostFolder() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the absolute path to the folder containing local posts. Local posts appear
    /// in post library under the local tab.
    std::string localPostFolder() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the absolute path to the folder containing Fusion machines. Fusion
    /// machines appear in the machine library under the Fusion tab.
    std::string fusion360MachineFolder() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the absolute path to the folder containing local machines. Local Machines appear
    /// in machine library under the local tab.
    std::string localMachineFolder() const;

    /// Gets the absolute path to the folder containing network machines. Network machines
    /// appear in the machine library under the network tab.
    std::string networkMachineFolder() const;

    /// The MachineLibrary provides access to machines.
    core::Ptr<MachineLibrary> machineLibrary() const;

    /// The ToolLibraries provides access to tools.
    core::Ptr<ToolLibraries> toolLibraries() const;

    /// The CAMTemplateLibrary provides access to templates
    core::Ptr<CAMTemplateLibrary> templateLibrary() const;

    /// The PrintSettingLibrary provides access to print settings.
    core::Ptr<PrintSettingLibrary> printSettingLibrary() const;

    /// The PostLibrary provides access to postConfigurations.
    core::Ptr<PostLibrary> postLibrary() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// The StockMaterialLibrary provides access to stock materials.
    /// You can only get a valid StockMaterialLibrary when you have access to Stock Materials private preview feature and enable the feature flag.
    core::Ptr<StockMaterialLibrary> stockMaterialLibrary() const;

    ADSK_CAM_CAMLIBRARYMANAGER_API static const char* classType();
    ADSK_CAM_CAMLIBRARYMANAGER_API const char* objectType() const override;
    ADSK_CAM_CAMLIBRARYMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMLIBRARYMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* fusion360PostFolder_raw() const = 0;
    virtual char* localPostFolder_raw() const = 0;
    virtual char* fusion360MachineFolder_raw() const = 0;
    virtual char* localMachineFolder_raw() const = 0;
    virtual char* networkMachineFolder_raw() const = 0;
    virtual MachineLibrary* machineLibrary_raw() const = 0;
    virtual ToolLibraries* toolLibraries_raw() const = 0;
    virtual CAMTemplateLibrary* templateLibrary_raw() const = 0;
    virtual PrintSettingLibrary* printSettingLibrary_raw() const = 0;
    virtual PostLibrary* postLibrary_raw() const = 0;
    virtual StockMaterialLibrary* stockMaterialLibrary_raw() const = 0;
};

// Inline wrappers

inline std::string CAMLibraryManager::fusion360PostFolder() const
{
    std::string res;

    char* p= fusion360PostFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMLibraryManager::localPostFolder() const
{
    std::string res;

    char* p= localPostFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMLibraryManager::fusion360MachineFolder() const
{
    std::string res;

    char* p= fusion360MachineFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMLibraryManager::localMachineFolder() const
{
    std::string res;

    char* p= localMachineFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAMLibraryManager::networkMachineFolder() const
{
    std::string res;

    char* p= networkMachineFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MachineLibrary> CAMLibraryManager::machineLibrary() const
{
    core::Ptr<MachineLibrary> res = machineLibrary_raw();
    return res;
}

inline core::Ptr<ToolLibraries> CAMLibraryManager::toolLibraries() const
{
    core::Ptr<ToolLibraries> res = toolLibraries_raw();
    return res;
}

inline core::Ptr<CAMTemplateLibrary> CAMLibraryManager::templateLibrary() const
{
    core::Ptr<CAMTemplateLibrary> res = templateLibrary_raw();
    return res;
}

inline core::Ptr<PrintSettingLibrary> CAMLibraryManager::printSettingLibrary() const
{
    core::Ptr<PrintSettingLibrary> res = printSettingLibrary_raw();
    return res;
}

inline core::Ptr<PostLibrary> CAMLibraryManager::postLibrary() const
{
    core::Ptr<PostLibrary> res = postLibrary_raw();
    return res;
}

inline core::Ptr<StockMaterialLibrary> CAMLibraryManager::stockMaterialLibrary() const
{
    core::Ptr<StockMaterialLibrary> res = stockMaterialLibrary_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMLIBRARYMANAGER_API