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
# ifdef __COMPILING_ADSK_CAM_MACHINEELEMENT_CPP__
# define ADSK_CAM_MACHINEELEMENT_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEELEMENT_API
# endif
#else
# define ADSK_CAM_MACHINEELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Base class for objects that compose a machine.
class MachineElement : public core::Base {
public:

    /// Identifier for this element. Unique within an element type.
    std::string elementId() const;

    /// Identifier for this type of machine element.
    std::string typeId() const;

    ADSK_CAM_MACHINEELEMENT_API static const char* classType();
    ADSK_CAM_MACHINEELEMENT_API const char* objectType() const override;
    ADSK_CAM_MACHINEELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* elementId_raw() const = 0;
    virtual char* typeId_raw() const = 0;
    virtual void placeholderMachineElement0() {}
    virtual void placeholderMachineElement1() {}
    virtual void placeholderMachineElement2() {}
    virtual void placeholderMachineElement3() {}
    virtual void placeholderMachineElement4() {}
    virtual void placeholderMachineElement5() {}
    virtual void placeholderMachineElement6() {}
    virtual void placeholderMachineElement7() {}
    virtual void placeholderMachineElement8() {}
    virtual void placeholderMachineElement9() {}
    virtual void placeholderMachineElement10() {}
    virtual void placeholderMachineElement11() {}
    virtual void placeholderMachineElement12() {}
    virtual void placeholderMachineElement13() {}
};

// Inline wrappers

inline std::string MachineElement::elementId() const
{
    std::string res;

    char* p= elementId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string MachineElement::typeId() const
{
    std::string res;

    char* p= typeId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEELEMENT_API