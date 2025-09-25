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
# ifdef __COMPILING_ADSK_FUSION_ONESIDETOEXTENTDEFINITION_CPP__
# define ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the inputs for a OneSideToExtentDefinition object.
/// This defines a feature extent that goes up to a face or construction plane in one direction.
class OneSideToExtentDefinition : public ExtentDefinition {
public:

    /// Gets and sets the entity that defines the extent. The valid types of entities can vary depending on
    /// the type of feature this is being used with.
    core::Ptr<core::Base> toEntity() const;
    bool toEntity(const core::Ptr<core::Base>& value);

    /// Specifies if the face should be extended or use adjacent faces if necessary to define the termination
    /// of the extrusion.
    /// When used for a revolve feature this is ignored and is always treated as true.
    bool matchShape() const;
    bool matchShape(bool value);

    ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* toEntity_raw() const = 0;
    virtual bool toEntity_raw(core::Base* value) = 0;
    virtual bool matchShape_raw() const = 0;
    virtual bool matchShape_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> OneSideToExtentDefinition::toEntity() const
{
    core::Ptr<core::Base> res = toEntity_raw();
    return res;
}

inline bool OneSideToExtentDefinition::toEntity(const core::Ptr<core::Base>& value)
{
    return toEntity_raw(value.get());
}

inline bool OneSideToExtentDefinition::matchShape() const
{
    bool res = matchShape_raw();
    return res;
}

inline bool OneSideToExtentDefinition::matchShape(bool value)
{
    return matchShape_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ONESIDETOEXTENTDEFINITION_API