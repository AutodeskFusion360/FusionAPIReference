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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConstructionPlane;
}}

namespace adsk { namespace fusion {

/// A Base class to return the information, possibly parametric, used to define the ConstructionPlane.
class ConstructionPlaneDefinition : public core::Base {
public:

    /// Returns the ConstructionPlane object
    core::Ptr<ConstructionPlane> parentConstructionPlane() const;

    ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane* parentConstructionPlane_raw() const = 0;
    virtual void placeholderConstructionPlaneDefinition0() {}
    virtual void placeholderConstructionPlaneDefinition1() {}
    virtual void placeholderConstructionPlaneDefinition2() {}
    virtual void placeholderConstructionPlaneDefinition3() {}
    virtual void placeholderConstructionPlaneDefinition4() {}
    virtual void placeholderConstructionPlaneDefinition5() {}
    virtual void placeholderConstructionPlaneDefinition6() {}
    virtual void placeholderConstructionPlaneDefinition7() {}
    virtual void placeholderConstructionPlaneDefinition8() {}
    virtual void placeholderConstructionPlaneDefinition9() {}
    virtual void placeholderConstructionPlaneDefinition10() {}
    virtual void placeholderConstructionPlaneDefinition11() {}
    virtual void placeholderConstructionPlaneDefinition12() {}
    virtual void placeholderConstructionPlaneDefinition13() {}
    virtual void placeholderConstructionPlaneDefinition14() {}
    virtual void placeholderConstructionPlaneDefinition15() {}
    virtual void placeholderConstructionPlaneDefinition16() {}
    virtual void placeholderConstructionPlaneDefinition17() {}
    virtual void placeholderConstructionPlaneDefinition18() {}
    virtual void placeholderConstructionPlaneDefinition19() {}
    virtual void placeholderConstructionPlaneDefinition20() {}
    virtual void placeholderConstructionPlaneDefinition21() {}
    virtual void placeholderConstructionPlaneDefinition22() {}
    virtual void placeholderConstructionPlaneDefinition23() {}
    virtual void placeholderConstructionPlaneDefinition24() {}
    virtual void placeholderConstructionPlaneDefinition25() {}
    virtual void placeholderConstructionPlaneDefinition26() {}
    virtual void placeholderConstructionPlaneDefinition27() {}
    virtual void placeholderConstructionPlaneDefinition28() {}
    virtual void placeholderConstructionPlaneDefinition29() {}
    virtual void placeholderConstructionPlaneDefinition30() {}
};

// Inline wrappers

inline core::Ptr<ConstructionPlane> ConstructionPlaneDefinition::parentConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = parentConstructionPlane_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANEDEFINITION_API