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
#include "GeometricConstraint.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PERPENDICULARCONSTRAINT_CPP__
# define ADSK_FUSION_PERPENDICULARCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_PERPENDICULARCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_PERPENDICULARCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// A perpendicular constraint in a sketch.
class PerpendicularConstraint : public GeometricConstraint {
public:

    /// Returns the first line.
    core::Ptr<SketchLine> lineOne() const;

    /// Returns the second line.
    core::Ptr<SketchLine> lineTwo() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PerpendicularConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PerpendicularConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_PERPENDICULARCONSTRAINT_API static const char* classType();
    ADSK_FUSION_PERPENDICULARCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_PERPENDICULARCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PERPENDICULARCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchLine* lineOne_raw() const = 0;
    virtual SketchLine* lineTwo_raw() const = 0;
    virtual PerpendicularConstraint* nativeObject_raw() const = 0;
    virtual PerpendicularConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchLine> PerpendicularConstraint::lineOne() const
{
    core::Ptr<SketchLine> res = lineOne_raw();
    return res;
}

inline core::Ptr<SketchLine> PerpendicularConstraint::lineTwo() const
{
    core::Ptr<SketchLine> res = lineTwo_raw();
    return res;
}

inline core::Ptr<PerpendicularConstraint> PerpendicularConstraint::nativeObject() const
{
    core::Ptr<PerpendicularConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PerpendicularConstraint> PerpendicularConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PerpendicularConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PERPENDICULARCONSTRAINT_API