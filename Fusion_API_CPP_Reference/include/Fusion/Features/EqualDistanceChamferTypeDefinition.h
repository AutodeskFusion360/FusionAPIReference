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
#include "ChamferTypeDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_CPP__
# define ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Provides information to create a chamfer that is defined by a single distance and has an equal offset from the edge.
class EqualDistanceChamferTypeDefinition : public ChamferTypeDefinition {
public:

    /// Returns the parameter controlling the distance. You can edit the distance
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> distance() const;

    ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API static const char* classType();
    ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* distance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> EqualDistanceChamferTypeDefinition::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EQUALDISTANCECHAMFERTYPEDEFINITION_API