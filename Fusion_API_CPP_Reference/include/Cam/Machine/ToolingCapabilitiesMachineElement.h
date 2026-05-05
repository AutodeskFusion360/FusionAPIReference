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
# ifdef __COMPILING_ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_CPP__
# define ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Machine element representing the tooling capabilities of a machine.
class ToolingCapabilitiesMachineElement : public MachineElement {
public:

    /// Identifying name for all elements of this type.
    /// Pass this to the itemByType or itemById methods of MachineElements to filter to elements of this type.
    /// Returns identifier of this type.
    static std::string staticTypeId();

    /// If your machine has an automatic tool changer, set this to true.
    /// For machines with manual tool change capabilities, set this to false.
    bool isToolChangerAutomatic() const;
    bool isToolChangerAutomatic(bool value);

    /// If your machine has a staging function for the tool changer, set this to true.
    /// For machines without staging tool change capabilities, set this to false.
    bool isToolPreloadSupported() const;
    bool isToolPreloadSupported(bool value);

    /// Property that represents the maximum number of tools available in the tool magazine,
    /// or the maximum number of tools that can be programmed in the control.
    int maxToolCount() const;
    bool maxToolCount(int value);

    ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API static const char* classType();
    ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API static char* staticTypeId_raw();
    virtual bool isToolChangerAutomatic_raw() const = 0;
    virtual bool isToolChangerAutomatic_raw(bool value) = 0;
    virtual bool isToolPreloadSupported_raw() const = 0;
    virtual bool isToolPreloadSupported_raw(bool value) = 0;
    virtual int maxToolCount_raw() const = 0;
    virtual bool maxToolCount_raw(int value) = 0;
};

// Inline wrappers

inline std::string ToolingCapabilitiesMachineElement::staticTypeId()
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

inline bool ToolingCapabilitiesMachineElement::isToolChangerAutomatic() const
{
    bool res = isToolChangerAutomatic_raw();
    return res;
}

inline bool ToolingCapabilitiesMachineElement::isToolChangerAutomatic(bool value)
{
    return isToolChangerAutomatic_raw(value);
}

inline bool ToolingCapabilitiesMachineElement::isToolPreloadSupported() const
{
    bool res = isToolPreloadSupported_raw();
    return res;
}

inline bool ToolingCapabilitiesMachineElement::isToolPreloadSupported(bool value)
{
    return isToolPreloadSupported_raw(value);
}

inline int ToolingCapabilitiesMachineElement::maxToolCount() const
{
    int res = maxToolCount_raw();
    return res;
}

inline bool ToolingCapabilitiesMachineElement::maxToolCount(int value)
{
    return maxToolCount_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLINGCAPABILITIESMACHINEELEMENT_API