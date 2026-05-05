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
#include "../../Core/Base.h"
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_MACHINEPART_CPP__
# define ADSK_CAM_MACHINEPART_API XI_EXPORT
# else
# define ADSK_CAM_MACHINEPART_API
# endif
#else
# define ADSK_CAM_MACHINEPART_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class MachineAxis;
    class MachineParts;
    class MachineSpindle;
    class MachineToolStation;
}}

namespace adsk { namespace cam {

/// Object representing some part of a machine, such as the static base of the machine, an
/// axis, or the attachment points for tools and fixtures.
class MachinePart : public core::Base {
public:

    /// Delete this part and its children from the kinematics tree.
    void deleteMe();

    /// Get the collection of child parts.
    core::Ptr<MachineParts> children() const;

    /// Get or set the parent of this part.
    /// Returns null if this part is a root part.
    /// Setting the parent will add this part to the end of the parent's children
    /// collection. Setting the parent will throw an error if the new parent is this
    /// part or a child of this part.
    core::Ptr<MachinePart> parent() const;
    bool parent(const core::Ptr<MachinePart>& value);

    /// Get the type of this part.
    MachinePartTypes partType() const;

    /// Get the internal ID of the part.
    /// This is unique with respect to other MachineParts in the Machine.
    std::string id() const;

    /// Get the axis object for this part used to reference this part for other
    /// operations.
    /// Only valid when partType is Axis, otherwise returns null
    core::Ptr<MachineAxis> axis() const;

    /// Get the spindle object for this part used to reference this part for other
    /// operations.
    /// Will return null if the part has no spindle assigned.
    core::Ptr<MachineSpindle> spindle() const;

    /// Get the tool station object for this part.
    /// Will return null if the part has no tool station assigned.
    core::Ptr<MachineToolStation> toolStation() const;

    ADSK_CAM_MACHINEPART_API static const char* classType();
    ADSK_CAM_MACHINEPART_API const char* objectType() const override;
    ADSK_CAM_MACHINEPART_API void* queryInterface(const char* id) const override;
    ADSK_CAM_MACHINEPART_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void deleteMe_raw() = 0;
    virtual MachineParts* children_raw() const = 0;
    virtual MachinePart* parent_raw() const = 0;
    virtual bool parent_raw(MachinePart* value) = 0;
    virtual MachinePartTypes partType_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual MachineAxis* axis_raw() const = 0;
    virtual MachineSpindle* spindle_raw() const = 0;
    virtual MachineToolStation* toolStation_raw() const = 0;
};

// Inline wrappers

inline void MachinePart::deleteMe()
{
    deleteMe_raw();
}

inline core::Ptr<MachineParts> MachinePart::children() const
{
    core::Ptr<MachineParts> res = children_raw();
    return res;
}

inline core::Ptr<MachinePart> MachinePart::parent() const
{
    core::Ptr<MachinePart> res = parent_raw();
    return res;
}

inline bool MachinePart::parent(const core::Ptr<MachinePart>& value)
{
    return parent_raw(value.get());
}

inline MachinePartTypes MachinePart::partType() const
{
    MachinePartTypes res = partType_raw();
    return res;
}

inline std::string MachinePart::id() const
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

inline core::Ptr<MachineAxis> MachinePart::axis() const
{
    core::Ptr<MachineAxis> res = axis_raw();
    return res;
}

inline core::Ptr<MachineSpindle> MachinePart::spindle() const
{
    core::Ptr<MachineSpindle> res = spindle_raw();
    return res;
}

inline core::Ptr<MachineToolStation> MachinePart::toolStation() const
{
    core::Ptr<MachineToolStation> res = toolStation_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_MACHINEPART_API