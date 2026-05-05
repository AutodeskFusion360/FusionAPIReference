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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEDEFINITION_CPP__
# define ADSK_FUSION_ARRANGEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The ArrangeDefinition object is the base class for the ArrangeDefinition2D and ArrangeDefinition3D
/// objects. It provides access to the information that defines an existing Arrange feature.
class ArrangeDefinition : public core::Base {
public:

    /// Gets the type of arrange feature defined by this definition.
    ArrangeSolverTypes solverType() const;

    /// Gets if the original components were moved to create the arrangement or copies were created.
    /// This value can only be set when creating a new arrangement.
    bool isCreateCopies() const;

    ADSK_FUSION_ARRANGEDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeSolverTypes solverType_raw() const = 0;
    virtual bool isCreateCopies_raw() const = 0;
    virtual void placeholderArrangeDefinition0() {}
    virtual void placeholderArrangeDefinition1() {}
    virtual void placeholderArrangeDefinition2() {}
    virtual void placeholderArrangeDefinition3() {}
    virtual void placeholderArrangeDefinition4() {}
    virtual void placeholderArrangeDefinition5() {}
    virtual void placeholderArrangeDefinition6() {}
    virtual void placeholderArrangeDefinition7() {}
    virtual void placeholderArrangeDefinition8() {}
    virtual void placeholderArrangeDefinition9() {}
    virtual void placeholderArrangeDefinition10() {}
    virtual void placeholderArrangeDefinition11() {}
    virtual void placeholderArrangeDefinition12() {}
    virtual void placeholderArrangeDefinition13() {}
    virtual void placeholderArrangeDefinition14() {}
    virtual void placeholderArrangeDefinition15() {}
    virtual void placeholderArrangeDefinition16() {}
    virtual void placeholderArrangeDefinition17() {}
    virtual void placeholderArrangeDefinition18() {}
    virtual void placeholderArrangeDefinition19() {}
    virtual void placeholderArrangeDefinition20() {}
    virtual void placeholderArrangeDefinition21() {}
    virtual void placeholderArrangeDefinition22() {}
    virtual void placeholderArrangeDefinition23() {}
    virtual void placeholderArrangeDefinition24() {}
    virtual void placeholderArrangeDefinition25() {}
    virtual void placeholderArrangeDefinition26() {}
    virtual void placeholderArrangeDefinition27() {}
    virtual void placeholderArrangeDefinition28() {}
    virtual void placeholderArrangeDefinition29() {}
    virtual void placeholderArrangeDefinition30() {}
    virtual void placeholderArrangeDefinition31() {}
    virtual void placeholderArrangeDefinition32() {}
    virtual void placeholderArrangeDefinition33() {}
    virtual void placeholderArrangeDefinition34() {}
    virtual void placeholderArrangeDefinition35() {}
    virtual void placeholderArrangeDefinition36() {}
    virtual void placeholderArrangeDefinition37() {}
    virtual void placeholderArrangeDefinition38() {}
    virtual void placeholderArrangeDefinition39() {}
    virtual void placeholderArrangeDefinition40() {}
    virtual void placeholderArrangeDefinition41() {}
    virtual void placeholderArrangeDefinition42() {}
    virtual void placeholderArrangeDefinition43() {}
    virtual void placeholderArrangeDefinition44() {}
    virtual void placeholderArrangeDefinition45() {}
    virtual void placeholderArrangeDefinition46() {}
    virtual void placeholderArrangeDefinition47() {}
    virtual void placeholderArrangeDefinition48() {}
    virtual void placeholderArrangeDefinition49() {}
    virtual void placeholderArrangeDefinition50() {}
    virtual void placeholderArrangeDefinition51() {}
    virtual void placeholderArrangeDefinition52() {}
    virtual void placeholderArrangeDefinition53() {}
    virtual void placeholderArrangeDefinition54() {}
    virtual void placeholderArrangeDefinition55() {}
    virtual void placeholderArrangeDefinition56() {}
    virtual void placeholderArrangeDefinition57() {}
    virtual void placeholderArrangeDefinition58() {}
    virtual void placeholderArrangeDefinition59() {}
    virtual void placeholderArrangeDefinition60() {}
    virtual void placeholderArrangeDefinition61() {}
};

// Inline wrappers

inline ArrangeSolverTypes ArrangeDefinition::solverType() const
{
    ArrangeSolverTypes res = solverType_raw();
    return res;
}

inline bool ArrangeDefinition::isCreateCopies() const
{
    bool res = isCreateCopies_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEDEFINITION_API