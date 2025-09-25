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
#include "ConstructionPlaneDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Parameter;
}}

namespace adsk { namespace fusion {

/// ConstructionPlaneOffsetDefinition defines a construction plane that is offset by a specified
/// distance from a planar face or construction plane by a specified distance. A positive or negative
/// value can control the direction of the offset.
class ConstructionPlaneOffsetDefinition : public ConstructionPlaneDefinition {
public:

    /// Returns a Parameter object that controls the value of the offset. You can use properties
    /// of the returned Parameter object to modify the offset.
    core::Ptr<Parameter> offset() const;

    /// Gets the planar face or construction plane this construction plane
    /// is parametrically dependent on.
    core::Ptr<core::Base> planarEntity() const;

    /// Redefines the input geometry of the construction plane.
    /// offset : ValueInput object that specifies the offset distance
    /// planarEntity : A plane, planar face or construction plane from which to measure the offset from
    /// Returns true is the operation is successful
    bool redefine(const core::Ptr<core::ValueInput>& offset, const core::Ptr<core::Base>& planarEntity);

    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Parameter* offset_raw() const = 0;
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool redefine_raw(core::ValueInput* offset, core::Base* planarEntity) = 0;
};

// Inline wrappers

inline core::Ptr<Parameter> ConstructionPlaneOffsetDefinition::offset() const
{
    core::Ptr<Parameter> res = offset_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneOffsetDefinition::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool ConstructionPlaneOffsetDefinition::redefine(const core::Ptr<core::ValueInput>& offset, const core::Ptr<core::Base>& planarEntity)
{
    bool res = redefine_raw(offset.get(), planarEntity.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEOFFSETDEFINITION_API