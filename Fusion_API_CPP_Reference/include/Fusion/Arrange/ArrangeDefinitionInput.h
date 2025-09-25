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
# ifdef __COMPILING_ADSK_FUSION_ARRANGEDEFINITIONINPUT_CPP__
# define ADSK_FUSION_ARRANGEDEFINITIONINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEDEFINITIONINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGEDEFINITIONINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The ArrangeDefinition object is the base class for the ArrangeDefinition2D and ArrangeDefinition3D
/// objects. It provides access to the information that defines an existing Arrange feature.
class ArrangeDefinitionInput : public core::Base {
public:

    /// Gets the type of arrange feature defined by this definition.
    ArrangeSolverTypes solverType() const;

    /// Gets and set if the original components will be moved or copied to create the arrangement.
    /// This defaults to true.
    bool isCreateCopies() const;
    bool isCreateCopies(bool value);

    ADSK_FUSION_ARRANGEDEFINITIONINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGEDEFINITIONINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEDEFINITIONINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEDEFINITIONINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeSolverTypes solverType_raw() const = 0;
    virtual bool isCreateCopies_raw() const = 0;
    virtual bool isCreateCopies_raw(bool value) = 0;
    virtual void placeholderArrangeDefinitionInput0() {}
    virtual void placeholderArrangeDefinitionInput1() {}
    virtual void placeholderArrangeDefinitionInput2() {}
    virtual void placeholderArrangeDefinitionInput3() {}
    virtual void placeholderArrangeDefinitionInput4() {}
    virtual void placeholderArrangeDefinitionInput5() {}
    virtual void placeholderArrangeDefinitionInput6() {}
    virtual void placeholderArrangeDefinitionInput7() {}
    virtual void placeholderArrangeDefinitionInput8() {}
    virtual void placeholderArrangeDefinitionInput9() {}
    virtual void placeholderArrangeDefinitionInput10() {}
    virtual void placeholderArrangeDefinitionInput11() {}
    virtual void placeholderArrangeDefinitionInput12() {}
    virtual void placeholderArrangeDefinitionInput13() {}
    virtual void placeholderArrangeDefinitionInput14() {}
    virtual void placeholderArrangeDefinitionInput15() {}
    virtual void placeholderArrangeDefinitionInput16() {}
    virtual void placeholderArrangeDefinitionInput17() {}
    virtual void placeholderArrangeDefinitionInput18() {}
    virtual void placeholderArrangeDefinitionInput19() {}
    virtual void placeholderArrangeDefinitionInput20() {}
    virtual void placeholderArrangeDefinitionInput21() {}
    virtual void placeholderArrangeDefinitionInput22() {}
    virtual void placeholderArrangeDefinitionInput23() {}
    virtual void placeholderArrangeDefinitionInput24() {}
    virtual void placeholderArrangeDefinitionInput25() {}
    virtual void placeholderArrangeDefinitionInput26() {}
    virtual void placeholderArrangeDefinitionInput27() {}
    virtual void placeholderArrangeDefinitionInput28() {}
    virtual void placeholderArrangeDefinitionInput29() {}
    virtual void placeholderArrangeDefinitionInput30() {}
    virtual void placeholderArrangeDefinitionInput31() {}
    virtual void placeholderArrangeDefinitionInput32() {}
    virtual void placeholderArrangeDefinitionInput33() {}
    virtual void placeholderArrangeDefinitionInput34() {}
    virtual void placeholderArrangeDefinitionInput35() {}
    virtual void placeholderArrangeDefinitionInput36() {}
    virtual void placeholderArrangeDefinitionInput37() {}
    virtual void placeholderArrangeDefinitionInput38() {}
    virtual void placeholderArrangeDefinitionInput39() {}
    virtual void placeholderArrangeDefinitionInput40() {}
    virtual void placeholderArrangeDefinitionInput41() {}
    virtual void placeholderArrangeDefinitionInput42() {}
    virtual void placeholderArrangeDefinitionInput43() {}
    virtual void placeholderArrangeDefinitionInput44() {}
    virtual void placeholderArrangeDefinitionInput45() {}
    virtual void placeholderArrangeDefinitionInput46() {}
    virtual void placeholderArrangeDefinitionInput47() {}
    virtual void placeholderArrangeDefinitionInput48() {}
    virtual void placeholderArrangeDefinitionInput49() {}
    virtual void placeholderArrangeDefinitionInput50() {}
    virtual void placeholderArrangeDefinitionInput51() {}
    virtual void placeholderArrangeDefinitionInput52() {}
    virtual void placeholderArrangeDefinitionInput53() {}
    virtual void placeholderArrangeDefinitionInput54() {}
    virtual void placeholderArrangeDefinitionInput55() {}
    virtual void placeholderArrangeDefinitionInput56() {}
    virtual void placeholderArrangeDefinitionInput57() {}
    virtual void placeholderArrangeDefinitionInput58() {}
    virtual void placeholderArrangeDefinitionInput59() {}
    virtual void placeholderArrangeDefinitionInput60() {}
};

// Inline wrappers

inline ArrangeSolverTypes ArrangeDefinitionInput::solverType() const
{
    ArrangeSolverTypes res = solverType_raw();
    return res;
}

inline bool ArrangeDefinitionInput::isCreateCopies() const
{
    bool res = isCreateCopies_raw();
    return res;
}

inline bool ArrangeDefinitionInput::isCreateCopies(bool value)
{
    return isCreateCopies_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEDEFINITIONINPUT_API