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
#include "SketchDimension.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_CPP__
# define ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API
# endif
#else
# define ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
    class SketchEntity;
}}

namespace adsk { namespace fusion {

/// A distance dimension measuring to the tangent on one or two circles or arcs.
class SketchTangentDistanceDimension : public SketchDimension {
public:

    /// The first entity being constrained. This can be a SketchCircle, SketchArc,
    /// SketchLine, or SketchPoint.
    core::Ptr<SketchEntity> entityOne() const;

    /// The second entity being constrained which is always a SketchCircle or SketchArc.
    core::Ptr<SketchCurve> circleOrArc() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchTangentDistanceDimension> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchTangentDistanceDimension> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API static const char* classType();
    ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEntity* entityOne_raw() const = 0;
    virtual SketchCurve* circleOrArc_raw() const = 0;
    virtual SketchTangentDistanceDimension* nativeObject_raw() const = 0;
    virtual SketchTangentDistanceDimension* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchEntity> SketchTangentDistanceDimension::entityOne() const
{
    core::Ptr<SketchEntity> res = entityOne_raw();
    return res;
}

inline core::Ptr<SketchCurve> SketchTangentDistanceDimension::circleOrArc() const
{
    core::Ptr<SketchCurve> res = circleOrArc_raw();
    return res;
}

inline core::Ptr<SketchTangentDistanceDimension> SketchTangentDistanceDimension::nativeObject() const
{
    core::Ptr<SketchTangentDistanceDimension> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchTangentDistanceDimension> SketchTangentDistanceDimension::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchTangentDistanceDimension> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHTANGENTDISTANCEDIMENSION_API