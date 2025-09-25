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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConstructionAxis;
}}

namespace adsk { namespace fusion {

/// A Base class to return the information (possibly parametric) used to
/// define a ConstructionAxis.
class ConstructionAxisDefinition : public core::Base {
public:

    /// Returns the ConstructionAxis object
    core::Ptr<ConstructionAxis> parentConstructionAxis() const;

    ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionAxis* parentConstructionAxis_raw() const = 0;
    virtual void placeholderConstructionAxisDefinition0() {}
    virtual void placeholderConstructionAxisDefinition1() {}
    virtual void placeholderConstructionAxisDefinition2() {}
    virtual void placeholderConstructionAxisDefinition3() {}
    virtual void placeholderConstructionAxisDefinition4() {}
    virtual void placeholderConstructionAxisDefinition5() {}
    virtual void placeholderConstructionAxisDefinition6() {}
    virtual void placeholderConstructionAxisDefinition7() {}
    virtual void placeholderConstructionAxisDefinition8() {}
    virtual void placeholderConstructionAxisDefinition9() {}
    virtual void placeholderConstructionAxisDefinition10() {}
    virtual void placeholderConstructionAxisDefinition11() {}
    virtual void placeholderConstructionAxisDefinition12() {}
    virtual void placeholderConstructionAxisDefinition13() {}
    virtual void placeholderConstructionAxisDefinition14() {}
    virtual void placeholderConstructionAxisDefinition15() {}
    virtual void placeholderConstructionAxisDefinition16() {}
    virtual void placeholderConstructionAxisDefinition17() {}
    virtual void placeholderConstructionAxisDefinition18() {}
    virtual void placeholderConstructionAxisDefinition19() {}
    virtual void placeholderConstructionAxisDefinition20() {}
    virtual void placeholderConstructionAxisDefinition21() {}
    virtual void placeholderConstructionAxisDefinition22() {}
    virtual void placeholderConstructionAxisDefinition23() {}
    virtual void placeholderConstructionAxisDefinition24() {}
    virtual void placeholderConstructionAxisDefinition25() {}
    virtual void placeholderConstructionAxisDefinition26() {}
    virtual void placeholderConstructionAxisDefinition27() {}
    virtual void placeholderConstructionAxisDefinition28() {}
    virtual void placeholderConstructionAxisDefinition29() {}
    virtual void placeholderConstructionAxisDefinition30() {}
};

// Inline wrappers

inline core::Ptr<ConstructionAxis> ConstructionAxisDefinition::parentConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = parentConstructionAxis_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISDEFINITION_API