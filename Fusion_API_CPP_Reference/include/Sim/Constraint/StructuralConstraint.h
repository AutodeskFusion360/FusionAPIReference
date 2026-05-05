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
# ifdef __COMPILING_ADSK_SIM_STRUCTURALCONSTRAINT_CPP__
# define ADSK_SIM_STRUCTURALCONSTRAINT_API XI_EXPORT
# else
# define ADSK_SIM_STRUCTURALCONSTRAINT_API
# endif
#else
# define ADSK_SIM_STRUCTURALCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}
namespace adsk { namespace sim {
    class ConstraintMaskDefinition;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a structural constraint.
class StructuralConstraint : public SimAttribute {
public:

    /// The type of constraint.
    ConstraintTypes type() const;

    /// The constraint mask determines from the values in the displacement or rotation
    /// vectors which ones are (in)significant.
    core::Ptr<ConstraintMaskDefinition> maskDefinition() const;

    /// The prescribed displacements values.
    core::Ptr<core::Vector3D> displacement() const;

    /// The prescribed rotations values of the constraint.
    core::Ptr<core::Vector3D> rotation() const;

    ADSK_SIM_STRUCTURALCONSTRAINT_API static const char* classType();
    ADSK_SIM_STRUCTURALCONSTRAINT_API const char* objectType() const override;
    ADSK_SIM_STRUCTURALCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STRUCTURALCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstraintTypes type_raw() const = 0;
    virtual ConstraintMaskDefinition* maskDefinition_raw() const = 0;
    virtual core::Vector3D* displacement_raw() const = 0;
    virtual core::Vector3D* rotation_raw() const = 0;
    virtual void placeholderStructuralConstraint0() {}
    virtual void placeholderStructuralConstraint1() {}
    virtual void placeholderStructuralConstraint2() {}
    virtual void placeholderStructuralConstraint3() {}
    virtual void placeholderStructuralConstraint4() {}
    virtual void placeholderStructuralConstraint5() {}
    virtual void placeholderStructuralConstraint6() {}
    virtual void placeholderStructuralConstraint7() {}
    virtual void placeholderStructuralConstraint8() {}
    virtual void placeholderStructuralConstraint9() {}
    virtual void placeholderStructuralConstraint10() {}
    virtual void placeholderStructuralConstraint11() {}
    virtual void placeholderStructuralConstraint12() {}
    virtual void placeholderStructuralConstraint13() {}
    virtual void placeholderStructuralConstraint14() {}
    virtual void placeholderStructuralConstraint15() {}
    virtual void placeholderStructuralConstraint16() {}
    virtual void placeholderStructuralConstraint17() {}
    virtual void placeholderStructuralConstraint18() {}
    virtual void placeholderStructuralConstraint19() {}
    virtual void placeholderStructuralConstraint20() {}
    virtual void placeholderStructuralConstraint21() {}
    virtual void placeholderStructuralConstraint22() {}
    virtual void placeholderStructuralConstraint23() {}
    virtual void placeholderStructuralConstraint24() {}
    virtual void placeholderStructuralConstraint25() {}
    virtual void placeholderStructuralConstraint26() {}
    virtual void placeholderStructuralConstraint27() {}
};

// Inline wrappers

inline ConstraintTypes StructuralConstraint::type() const
{
    ConstraintTypes res = type_raw();
    return res;
}

inline core::Ptr<ConstraintMaskDefinition> StructuralConstraint::maskDefinition() const
{
    core::Ptr<ConstraintMaskDefinition> res = maskDefinition_raw();
    return res;
}

inline core::Ptr<core::Vector3D> StructuralConstraint::displacement() const
{
    core::Ptr<core::Vector3D> res = displacement_raw();
    return res;
}

inline core::Ptr<core::Vector3D> StructuralConstraint::rotation() const
{
    core::Ptr<core::Vector3D> res = rotation_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STRUCTURALCONSTRAINT_API