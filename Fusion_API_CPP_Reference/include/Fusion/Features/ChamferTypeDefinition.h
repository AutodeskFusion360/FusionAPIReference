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
# ifdef __COMPILING_ADSK_FUSION_CHAMFERTYPEDEFINITION_CPP__
# define ADSK_FUSION_CHAMFERTYPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CHAMFERTYPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CHAMFERTYPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ChamferFeature;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The base class for the classes that define how a chamfer can be defined.
class ChamferTypeDefinition : public core::Base {
public:

    /// Returns the feature that owns this chamfer type definition
    core::Ptr<ChamferFeature> parentFeature() const;

    ADSK_FUSION_CHAMFERTYPEDEFINITION_API static const char* classType();
    ADSK_FUSION_CHAMFERTYPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CHAMFERTYPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CHAMFERTYPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ChamferFeature* parentFeature_raw() const = 0;
    virtual void placeholderChamferTypeDefinition0() {}
    virtual void placeholderChamferTypeDefinition1() {}
    virtual void placeholderChamferTypeDefinition2() {}
    virtual void placeholderChamferTypeDefinition3() {}
    virtual void placeholderChamferTypeDefinition4() {}
    virtual void placeholderChamferTypeDefinition5() {}
    virtual void placeholderChamferTypeDefinition6() {}
    virtual void placeholderChamferTypeDefinition7() {}
    virtual void placeholderChamferTypeDefinition8() {}
    virtual void placeholderChamferTypeDefinition9() {}
    virtual void placeholderChamferTypeDefinition10() {}
    virtual void placeholderChamferTypeDefinition11() {}
    virtual void placeholderChamferTypeDefinition12() {}
    virtual void placeholderChamferTypeDefinition13() {}
    virtual void placeholderChamferTypeDefinition14() {}
    virtual void placeholderChamferTypeDefinition15() {}
    virtual void placeholderChamferTypeDefinition16() {}
    virtual void placeholderChamferTypeDefinition17() {}
    virtual void placeholderChamferTypeDefinition18() {}
    virtual void placeholderChamferTypeDefinition19() {}
    virtual void placeholderChamferTypeDefinition20() {}
    virtual void placeholderChamferTypeDefinition21() {}
    virtual void placeholderChamferTypeDefinition22() {}
    virtual void placeholderChamferTypeDefinition23() {}
    virtual void placeholderChamferTypeDefinition24() {}
    virtual void placeholderChamferTypeDefinition25() {}
    virtual void placeholderChamferTypeDefinition26() {}
    virtual void placeholderChamferTypeDefinition27() {}
    virtual void placeholderChamferTypeDefinition28() {}
    virtual void placeholderChamferTypeDefinition29() {}
    virtual void placeholderChamferTypeDefinition30() {}
};

// Inline wrappers

inline core::Ptr<ChamferFeature> ChamferTypeDefinition::parentFeature() const
{
    core::Ptr<ChamferFeature> res = parentFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CHAMFERTYPEDEFINITION_API