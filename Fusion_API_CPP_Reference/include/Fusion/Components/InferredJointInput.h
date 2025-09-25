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
# ifdef __COMPILING_ADSK_FUSION_INFERREDJOINTINPUT_CPP__
# define ADSK_FUSION_INFERREDJOINTINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_INFERREDJOINTINPUT_API
# endif
#else
# define ADSK_FUSION_INFERREDJOINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class GeometricRelationships;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines all of the information required to create a new inferred joint. This object provides equivalent
/// functionality to the Joint command dialog, gathering the required information to create an inferred joint.
class InferredJointInput : public core::Base {
public:

    /// Returns the collection object used to define the geometric relationships from which the joint will be inferred.
    /// A geometric relationship defines several things: the pair of entities, if the relationship is flipped,
    /// if it defines a mating alignment or an angle, and the value of the offset or angle.
    core::Ptr<GeometricRelationships> geometricRelationships() const;

    ADSK_FUSION_INFERREDJOINTINPUT_API static const char* classType();
    ADSK_FUSION_INFERREDJOINTINPUT_API const char* objectType() const override;
    ADSK_FUSION_INFERREDJOINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_INFERREDJOINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeometricRelationships* geometricRelationships_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GeometricRelationships> InferredJointInput::geometricRelationships() const
{
    core::Ptr<GeometricRelationships> res = geometricRelationships_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_INFERREDJOINTINPUT_API