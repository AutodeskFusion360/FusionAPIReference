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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConstructionPoint;
}}

namespace adsk { namespace fusion {

/// A Base class to return the information (possibly parametric) used to
/// define a ConstructionPoint.
class ConstructionPointDefinition : public core::Base {
public:

    /// Returns the ConstructionPoint object
    core::Ptr<ConstructionPoint> parentConstructionPoint() const;

    ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPoint* parentConstructionPoint_raw() const = 0;
    virtual void placeholderConstructionPointDefinition0() {}
    virtual void placeholderConstructionPointDefinition1() {}
    virtual void placeholderConstructionPointDefinition2() {}
    virtual void placeholderConstructionPointDefinition3() {}
    virtual void placeholderConstructionPointDefinition4() {}
    virtual void placeholderConstructionPointDefinition5() {}
    virtual void placeholderConstructionPointDefinition6() {}
    virtual void placeholderConstructionPointDefinition7() {}
    virtual void placeholderConstructionPointDefinition8() {}
    virtual void placeholderConstructionPointDefinition9() {}
    virtual void placeholderConstructionPointDefinition10() {}
    virtual void placeholderConstructionPointDefinition11() {}
    virtual void placeholderConstructionPointDefinition12() {}
    virtual void placeholderConstructionPointDefinition13() {}
    virtual void placeholderConstructionPointDefinition14() {}
    virtual void placeholderConstructionPointDefinition15() {}
    virtual void placeholderConstructionPointDefinition16() {}
    virtual void placeholderConstructionPointDefinition17() {}
    virtual void placeholderConstructionPointDefinition18() {}
    virtual void placeholderConstructionPointDefinition19() {}
    virtual void placeholderConstructionPointDefinition20() {}
    virtual void placeholderConstructionPointDefinition21() {}
    virtual void placeholderConstructionPointDefinition22() {}
    virtual void placeholderConstructionPointDefinition23() {}
    virtual void placeholderConstructionPointDefinition24() {}
    virtual void placeholderConstructionPointDefinition25() {}
    virtual void placeholderConstructionPointDefinition26() {}
    virtual void placeholderConstructionPointDefinition27() {}
    virtual void placeholderConstructionPointDefinition28() {}
    virtual void placeholderConstructionPointDefinition29() {}
    virtual void placeholderConstructionPointDefinition30() {}
};

// Inline wrappers

inline core::Ptr<ConstructionPoint> ConstructionPointDefinition::parentConstructionPoint() const
{
    core::Ptr<ConstructionPoint> res = parentConstructionPoint_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTDEFINITION_API