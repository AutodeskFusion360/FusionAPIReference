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
#include "MachineAvoidSelectionBase.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_CPP__
# define ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API
# endif
#else
# define ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Machine/avoid default selection class. Represents a group of selections that are parameter
/// driven. Provides access to the stored selections.
class MachineAvoidDefaultSelection : public MachineAvoidSelectionBase {
public:

    /// Get the value of the input geometry.
    std::vector<core::Ptr<core::Base>> inputGeometry() const;

    ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API static const char* classType();
    ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API const char* objectType() const override;
    ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** inputGeometry_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> MachineAvoidDefaultSelection::inputGeometry() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= inputGeometry_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAVOIDDEFAULTSELECTION_API