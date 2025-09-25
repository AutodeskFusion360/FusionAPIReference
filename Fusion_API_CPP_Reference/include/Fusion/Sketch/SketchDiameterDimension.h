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
# ifdef __COMPILING_ADSK_FUSION_SKETCHDIAMETERDIMENSION_CPP__
# define ADSK_FUSION_SKETCHDIAMETERDIMENSION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHDIAMETERDIMENSION_API
# endif
#else
# define ADSK_FUSION_SKETCHDIAMETERDIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
}}

namespace adsk { namespace fusion {

/// An diameter dimension in a sketch.
class SketchDiameterDimension : public SketchDimension {
public:

    /// Returns the arc or circle being constrained.
    core::Ptr<SketchCurve> entity() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchDiameterDimension> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchDiameterDimension> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_SKETCHDIAMETERDIMENSION_API static const char* classType();
    ADSK_FUSION_SKETCHDIAMETERDIMENSION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHDIAMETERDIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHDIAMETERDIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCurve* entity_raw() const = 0;
    virtual SketchDiameterDimension* nativeObject_raw() const = 0;
    virtual SketchDiameterDimension* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<SketchCurve> SketchDiameterDimension::entity() const
{
    core::Ptr<SketchCurve> res = entity_raw();
    return res;
}

inline core::Ptr<SketchDiameterDimension> SketchDiameterDimension::nativeObject() const
{
    core::Ptr<SketchDiameterDimension> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchDiameterDimension> SketchDiameterDimension::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchDiameterDimension> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHDIAMETERDIMENSION_API