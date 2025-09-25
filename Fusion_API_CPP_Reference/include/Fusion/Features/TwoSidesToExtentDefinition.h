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
# ifdef __COMPILING_ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_CPP__
# define ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the inputs for a TwoSidesToExtentDefinition object.
/// This defines a feature extent where the extents of feature go up to faces or construction planes in both directions.
class TwoSidesToExtentDefinition : public ExtentDefinition {
public:

    /// Gets and sets the entity that defines the extent on side one. The valid types of entities can vary depending on
    /// the type of feature this is being used with.
    core::Ptr<core::Base> toEntityOne() const;
    bool toEntityOne(const core::Ptr<core::Base>& value);

    /// Gets and sets the entity that defines the extent on side two. The valid types of entities can vary depending on
    /// the type of feature this is being used with.
    core::Ptr<core::Base> toEntityTwo() const;
    bool toEntityTwo(const core::Ptr<core::Base>& value);

    /// Gets and sets whether the toEntity is extended to fully intersect the extrusion.
    bool matchShape() const;
    bool matchShape(bool value);

    ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* toEntityOne_raw() const = 0;
    virtual bool toEntityOne_raw(core::Base* value) = 0;
    virtual core::Base* toEntityTwo_raw() const = 0;
    virtual bool toEntityTwo_raw(core::Base* value) = 0;
    virtual bool matchShape_raw() const = 0;
    virtual bool matchShape_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> TwoSidesToExtentDefinition::toEntityOne() const
{
    core::Ptr<core::Base> res = toEntityOne_raw();
    return res;
}

inline bool TwoSidesToExtentDefinition::toEntityOne(const core::Ptr<core::Base>& value)
{
    return toEntityOne_raw(value.get());
}

inline core::Ptr<core::Base> TwoSidesToExtentDefinition::toEntityTwo() const
{
    core::Ptr<core::Base> res = toEntityTwo_raw();
    return res;
}

inline bool TwoSidesToExtentDefinition::toEntityTwo(const core::Ptr<core::Base>& value)
{
    return toEntityTwo_raw(value.get());
}

inline bool TwoSidesToExtentDefinition::matchShape() const
{
    bool res = matchShape_raw();
    return res;
}

inline bool TwoSidesToExtentDefinition::matchShape(bool value)
{
    return matchShape_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TWOSIDESTOEXTENTDEFINITION_API