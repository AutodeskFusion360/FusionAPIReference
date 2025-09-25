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
# ifdef __COMPILING_ADSK_FUSION_FROMENTITYSTARTDEFINITION_CPP__
# define ADSK_FUSION_FROMENTITYSTARTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_FROMENTITYSTARTDEFINITION_API
# endif
#else
# define ADSK_FUSION_FROMENTITYSTARTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// A definition object that is used to define a feature whose start is defined by a specified construction
/// plane or face. If a face is specified it must be large enough to completely contain the projected profile.
class FromEntityStartDefinition : public ExtentDefinition {
public:

    /// Statically creates a new FromEntityStartDefinition object. This is used as input when
    /// create a new feature and defining the starting condition.
    /// entity : An input construction plane or face that defines the start of the feature. If a face is specified it
    /// must be large enough to completely contain the projected profile.
    /// offset : An input ValueInput objects that defines the offset distance from the specified entity. The offset can be positive or
    /// negative. A positive value indicates an offset in the same direction as the positive normal direction of the face.
    /// Returns the newly created FromEntityStartDefinition or null in the case of a failure.
    static core::Ptr<FromEntityStartDefinition> create(const core::Ptr<core::Base>& entity, const core::Ptr<core::ValueInput>& offset);

    /// Gets the currently defined offset value. If the FromEntityStartDefinition object was
    /// created statically and is not associated with a feature, this will return a ValueInput object.
    /// if the FromEntityStartDefinition is associated with an existing feature, this will return
    /// the parameter that was created when the feature was created. To edit the offset, use properties
    /// on the parameter to change the value of the parameter.
    core::Ptr<core::Base> offset() const;

    /// Gets and sets the entity defining the start of the feature.
    core::Ptr<core::Base> entity() const;
    bool entity(const core::Ptr<core::Base>& value);

    ADSK_FUSION_FROMENTITYSTARTDEFINITION_API static const char* classType();
    ADSK_FUSION_FROMENTITYSTARTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_FROMENTITYSTARTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FROMENTITYSTARTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_FROMENTITYSTARTDEFINITION_API static FromEntityStartDefinition* create_raw(core::Base* entity, core::ValueInput* offset);
    virtual core::Base* offset_raw() const = 0;
    virtual core::Base* entity_raw() const = 0;
    virtual bool entity_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<FromEntityStartDefinition> FromEntityStartDefinition::create(const core::Ptr<core::Base>& entity, const core::Ptr<core::ValueInput>& offset)
{
    core::Ptr<FromEntityStartDefinition> res = create_raw(entity.get(), offset.get());
    return res;
}

inline core::Ptr<core::Base> FromEntityStartDefinition::offset() const
{
    core::Ptr<core::Base> res = offset_raw();
    return res;
}

inline core::Ptr<core::Base> FromEntityStartDefinition::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline bool FromEntityStartDefinition::entity(const core::Ptr<core::Base>& value)
{
    return entity_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FROMENTITYSTARTDEFINITION_API