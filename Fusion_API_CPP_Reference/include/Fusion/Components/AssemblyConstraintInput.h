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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_CPP__
# define ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API
# endif
#else
# define ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class GeometricRelationships;
}}

namespace adsk { namespace fusion {

/// Defines all of the information required to create a new assembly constraint. This object provides
/// equivalent functionality to the Assembly Relationships command dialog in that it gathers the required
/// information to create an assembly constraint.
class AssemblyConstraintInput : public core::Base {
public:

    /// Returns the collection object used to define the geometric relationships that
    /// the constraints will be inferred from. A geometric relationship defines a pair of entities,
    /// if the relationships is flipped, and the offset or angle value.
    core::Ptr<GeometricRelationships> geometricRelationships() const;

    ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API static const char* classType();
    ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeometricRelationships* geometricRelationships_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GeometricRelationships> AssemblyConstraintInput::geometricRelationships() const
{
    core::Ptr<GeometricRelationships> res = geometricRelationships_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASSEMBLYCONSTRAINTINPUT_API