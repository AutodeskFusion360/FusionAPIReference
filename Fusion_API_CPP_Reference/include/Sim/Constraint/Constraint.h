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
#include "../Core/SimAttribute.h"
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_CONSTRAINT_CPP__
# define ADSK_SIM_CONSTRAINT_API XI_EXPORT
# else
# define ADSK_SIM_CONSTRAINT_API
# endif
#else
# define ADSK_SIM_CONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a constraint.
class Constraint : public SimAttribute {
public:

    /// Gets the constraint type.
    ConstraintTypes type() const;

    ADSK_SIM_CONSTRAINT_API static const char* classType();
    ADSK_SIM_CONSTRAINT_API const char* objectType() const override;
    ADSK_SIM_CONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_SIM_CONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstraintTypes type_raw() const = 0;
    virtual void placeholderConstraint0() {}
    virtual void placeholderConstraint1() {}
    virtual void placeholderConstraint2() {}
    virtual void placeholderConstraint3() {}
    virtual void placeholderConstraint4() {}
    virtual void placeholderConstraint5() {}
    virtual void placeholderConstraint6() {}
    virtual void placeholderConstraint7() {}
    virtual void placeholderConstraint8() {}
    virtual void placeholderConstraint9() {}
    virtual void placeholderConstraint10() {}
    virtual void placeholderConstraint11() {}
    virtual void placeholderConstraint12() {}
    virtual void placeholderConstraint13() {}
    virtual void placeholderConstraint14() {}
    virtual void placeholderConstraint15() {}
    virtual void placeholderConstraint16() {}
    virtual void placeholderConstraint17() {}
    virtual void placeholderConstraint18() {}
    virtual void placeholderConstraint19() {}
    virtual void placeholderConstraint20() {}
    virtual void placeholderConstraint21() {}
    virtual void placeholderConstraint22() {}
    virtual void placeholderConstraint23() {}
    virtual void placeholderConstraint24() {}
    virtual void placeholderConstraint25() {}
    virtual void placeholderConstraint26() {}
    virtual void placeholderConstraint27() {}
    virtual void placeholderConstraint28() {}
    virtual void placeholderConstraint29() {}
    virtual void placeholderConstraint30() {}
};

// Inline wrappers

inline ConstraintTypes Constraint::type() const
{
    ConstraintTypes res = type_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_CONSTRAINT_API