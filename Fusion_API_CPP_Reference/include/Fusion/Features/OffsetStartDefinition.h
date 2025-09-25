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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OFFSETSTARTDEFINITION_CPP__
# define ADSK_FUSION_OFFSETSTARTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETSTARTDEFINITION_API
# endif
#else
# define ADSK_FUSION_OFFSETSTARTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Plane;
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// A definition object that is used to define a feature whose start plane is defined as plane that is
/// offset from the sketch plane of the profile.
class OffsetStartDefinition : public ExtentDefinition {
public:

    /// Statically creates a new OffsetStartDefinition object. This is used as input when
    /// create a new feature and defining the starting condition.
    /// offset : An input ValueInput objects that defines the offset distance. The offset can be positive or
    /// negative. A positive value indicates an offset in the same direction as the z axis of the
    /// profile plane.
    /// Returns the newly created OffsetStartDefinition object or null in the case of failure.
    static core::Ptr<OffsetStartDefinition> create(const core::Ptr<core::ValueInput>& offset);

    /// Gets the currently defined offset value. If the ProfilePlaneWithOffsetDefinition object was
    /// created statically and is not associated with a feature, this will return a ValueInput object.
    /// if the ProfilePlaneWithOffsetDefinition is associated with an existing feature, this will return
    /// the parameter that was created when the feature was created. To edit the offset, use properties
    /// on the parameter to change the value of the parameter.
    core::Ptr<core::Base> offset() const;

    /// Returns the geometric definition of the profile plane.
    core::Ptr<core::Plane> profilePlane() const;

    ADSK_FUSION_OFFSETSTARTDEFINITION_API static const char* classType();
    ADSK_FUSION_OFFSETSTARTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_OFFSETSTARTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETSTARTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_OFFSETSTARTDEFINITION_API static OffsetStartDefinition* create_raw(core::ValueInput* offset);
    virtual core::Base* offset_raw() const = 0;
    virtual core::Plane* profilePlane_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<OffsetStartDefinition> OffsetStartDefinition::create(const core::Ptr<core::ValueInput>& offset)
{
    core::Ptr<OffsetStartDefinition> res = create_raw(offset.get());
    return res;
}

inline core::Ptr<core::Base> OffsetStartDefinition::offset() const
{
    core::Ptr<core::Base> res = offset_raw();
    return res;
}

inline core::Ptr<core::Plane> OffsetStartDefinition::profilePlane() const
{
    core::Ptr<core::Plane> res = profilePlane_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETSTARTDEFINITION_API