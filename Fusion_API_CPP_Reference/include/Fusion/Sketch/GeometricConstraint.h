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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_GEOMETRICCONSTRAINT_CPP__
# define ADSK_FUSION_GEOMETRICCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_GEOMETRICCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_GEOMETRICCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class Sketch;
}}

namespace adsk { namespace fusion {

/// The base class for all geometric constraints.
class GeometricConstraint : public core::Base {
public:

    /// Deletes this constraint. The IsDeletable property can be used to determine if this
    /// constraint can be deleted.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Indicates if this constraint is deletable.
    bool isDeletable() const;

    /// Returns the parent sketch object.
    core::Ptr<Sketch> parentSketch() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Returns the collection of attributes associated with this geometric constraint.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the GeometricConstraint object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same geometric constraint.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    ADSK_FUSION_GEOMETRICCONSTRAINT_API static const char* classType();
    ADSK_FUSION_GEOMETRICCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_GEOMETRICCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_GEOMETRICCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw() = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual Sketch* parentSketch_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual void placeholderGeometricConstraint0() {}
    virtual void placeholderGeometricConstraint1() {}
    virtual void placeholderGeometricConstraint2() {}
    virtual void placeholderGeometricConstraint3() {}
    virtual void placeholderGeometricConstraint4() {}
    virtual void placeholderGeometricConstraint5() {}
    virtual void placeholderGeometricConstraint6() {}
    virtual void placeholderGeometricConstraint7() {}
    virtual void placeholderGeometricConstraint8() {}
    virtual void placeholderGeometricConstraint9() {}
    virtual void placeholderGeometricConstraint10() {}
    virtual void placeholderGeometricConstraint11() {}
    virtual void placeholderGeometricConstraint12() {}
    virtual void placeholderGeometricConstraint13() {}
    virtual void placeholderGeometricConstraint14() {}
    virtual void placeholderGeometricConstraint15() {}
    virtual void placeholderGeometricConstraint16() {}
    virtual void placeholderGeometricConstraint17() {}
    virtual void placeholderGeometricConstraint18() {}
    virtual void placeholderGeometricConstraint19() {}
    virtual void placeholderGeometricConstraint20() {}
    virtual void placeholderGeometricConstraint21() {}
    virtual void placeholderGeometricConstraint22() {}
    virtual void placeholderGeometricConstraint23() {}
    virtual void placeholderGeometricConstraint24() {}
    virtual void placeholderGeometricConstraint25() {}
};

// Inline wrappers

inline bool GeometricConstraint::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool GeometricConstraint::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline core::Ptr<Sketch> GeometricConstraint::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline core::Ptr<Occurrence> GeometricConstraint::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<core::Attributes> GeometricConstraint::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string GeometricConstraint::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_GEOMETRICCONSTRAINT_API