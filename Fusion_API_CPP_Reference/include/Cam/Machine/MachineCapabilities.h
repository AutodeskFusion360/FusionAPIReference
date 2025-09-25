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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINECAPABILITIES_CPP__
# define ADSK_CAM_MACHINECAPABILITIES_API XI_EXPORT
# else
# define ADSK_CAM_MACHINECAPABILITIES_API
# endif
#else
# define ADSK_CAM_MACHINECAPABILITIES_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Object that represents the capabilities of the machine.
class MachineCapabilities : public core::Base {
public:

    /// Gets and sets if the machine is capable of subtractive milling.
    bool isMillingSupported() const;
    bool isMillingSupported(bool value);

    /// Gets and sets if the machine is capable of subtractive turning.
    bool isTurningSupported() const;
    bool isTurningSupported(bool value);

    /// Gets and sets if the machine is capable of subtractive cutting.
    bool isCuttingSupported() const;
    bool isCuttingSupported(bool value);

    /// Gets and sets if the machine is capable of additive operations.
    bool isAdditiveSupported() const;
    bool isAdditiveSupported(bool value);

    /// Gets which additive technology the machine supports.
    /// Return "NA" if the machine does not support Additive
    AdditiveTechnologies additiveTechnology() const;

    ADSK_CAM_MACHINECAPABILITIES_API static const char* classType();
    ADSK_CAM_MACHINECAPABILITIES_API const char* objectType() const override;
    ADSK_CAM_MACHINECAPABILITIES_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINECAPABILITIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isMillingSupported_raw() const = 0;
    virtual bool isMillingSupported_raw(bool value) = 0;
    virtual bool isTurningSupported_raw() const = 0;
    virtual bool isTurningSupported_raw(bool value) = 0;
    virtual bool isCuttingSupported_raw() const = 0;
    virtual bool isCuttingSupported_raw(bool value) = 0;
    virtual bool isAdditiveSupported_raw() const = 0;
    virtual bool isAdditiveSupported_raw(bool value) = 0;
    virtual AdditiveTechnologies additiveTechnology_raw() const = 0;
};

// Inline wrappers

inline bool MachineCapabilities::isMillingSupported() const
{
    bool res = isMillingSupported_raw();
    return res;
}

inline bool MachineCapabilities::isMillingSupported(bool value)
{
    return isMillingSupported_raw(value);
}

inline bool MachineCapabilities::isTurningSupported() const
{
    bool res = isTurningSupported_raw();
    return res;
}

inline bool MachineCapabilities::isTurningSupported(bool value)
{
    return isTurningSupported_raw(value);
}

inline bool MachineCapabilities::isCuttingSupported() const
{
    bool res = isCuttingSupported_raw();
    return res;
}

inline bool MachineCapabilities::isCuttingSupported(bool value)
{
    return isCuttingSupported_raw(value);
}

inline bool MachineCapabilities::isAdditiveSupported() const
{
    bool res = isAdditiveSupported_raw();
    return res;
}

inline bool MachineCapabilities::isAdditiveSupported(bool value)
{
    return isAdditiveSupported_raw(value);
}

inline AdditiveTechnologies MachineCapabilities::additiveTechnology() const
{
    AdditiveTechnologies res = additiveTechnology_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINECAPABILITIES_API