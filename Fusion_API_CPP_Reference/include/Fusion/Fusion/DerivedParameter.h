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
#include "Parameter.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DERIVEDPARAMETER_CPP__
# define ADSK_FUSION_DERIVEDPARAMETER_API XI_EXPORT
# else
# define ADSK_FUSION_DERIVEDPARAMETER_API
# endif
#else
# define ADSK_FUSION_DERIVEDPARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class DeriveFeature;
}}

namespace adsk { namespace fusion {

/// Represents a parameter that is derived from another design.
class DerivedParameter : public Parameter {
public:

    /// Returns the DeriveFeature that derives this parameter from another design.
    core::Ptr<DeriveFeature> deriveFeature() const;

    ADSK_FUSION_DERIVEDPARAMETER_API static const char* classType();
    ADSK_FUSION_DERIVEDPARAMETER_API const char* objectType() const override;
    ADSK_FUSION_DERIVEDPARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DERIVEDPARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DeriveFeature* deriveFeature_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<DeriveFeature> DerivedParameter::deriveFeature() const
{
    core::Ptr<DeriveFeature> res = deriveFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DERIVEDPARAMETER_API