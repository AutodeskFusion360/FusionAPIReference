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
# ifdef __COMPILING_ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_CPP__
# define ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API
# endif
#else
# define ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Machine/avoid direct selection class. Represents a group of direct selections that
/// the users can make (faces, bodies, components and higher level entities).
/// Provides access to the stored selections.
class MachineAvoidDirectSelection : public MachineAvoidSelectionBase {
public:

    /// Get or set the value of the input geometry.
    std::vector<core::Ptr<core::Base>> inputGeometry() const;
    bool inputGeometry(const std::vector<core::Ptr<core::Base>>& value);

    ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API static const char* classType();
    ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API const char* objectType() const override;
    ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** inputGeometry_raw(size_t& return_size) const = 0;
    virtual bool inputGeometry_raw(core::Base** value, size_t value_size) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> MachineAvoidDirectSelection::inputGeometry() const
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

inline bool MachineAvoidDirectSelection::inputGeometry(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputGeometry_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEAVOIDDIRECTSELECTION_API