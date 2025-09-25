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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OFFSETCONSTRAINT_CPP__
# define ADSK_FUSION_OFFSETCONSTRAINT_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETCONSTRAINT_API
# endif
#else
# define ADSK_FUSION_OFFSETCONSTRAINT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class SketchCurve;
    class SketchDimension;
}}

namespace adsk { namespace fusion {

/// An offset constraint in a sketch.
class OffsetConstraint : public GeometricConstraint {
public:

    /// Returns an array of sketch curves that are the set of parent curves.
    /// Nothing should be assumed about the order in how the curves are returned.
    std::vector<core::Ptr<SketchCurve>> parentCurves() const;

    /// Returns an array of sketch curves that are the set of child curves resulting from the offset.
    /// Nothing should be assumed about the order in how the curves are returned.
    std::vector<core::Ptr<SketchCurve>> childCurves() const;

    /// The current distance of the offset in centimeters. To change the offset you need to
    /// modify the value of the parameter associated with the dimension, which you can get
    /// using the dimension property.
    double distance() const;

    /// Returns the dimension controlling the offset distance. This can return null in the
    /// case where the dimension has been deleted. To change the offset distance you can use
    /// the parameter property of the returned dimension to get the parameter that controls the value and
    /// use properties on the parameter to change the value. This can return either a SketchOffsetCurvesDimension
    /// or a SketchOffsetDimension. A SketchOffsetCurvesDimension is created automatically when curves are
    /// offset but if it is deleted the offset can also be controlled by a SketchOffsetDimension.
    core::Ptr<SketchDimension> dimension() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<OffsetConstraint> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<OffsetConstraint> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets the setting that controls if the offset curves match the topology of the original curves.
    bool isTopologyMatched() const;

    ADSK_FUSION_OFFSETCONSTRAINT_API static const char* classType();
    ADSK_FUSION_OFFSETCONSTRAINT_API const char* objectType() const override;
    ADSK_FUSION_OFFSETCONSTRAINT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETCONSTRAINT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCurve** parentCurves_raw(size_t& return_size) const = 0;
    virtual SketchCurve** childCurves_raw(size_t& return_size) const = 0;
    virtual double distance_raw() const = 0;
    virtual SketchDimension* dimension_raw() const = 0;
    virtual OffsetConstraint* nativeObject_raw() const = 0;
    virtual OffsetConstraint* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isTopologyMatched_raw() const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchCurve>> OffsetConstraint::parentCurves() const
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= parentCurves_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<SketchCurve>> OffsetConstraint::childCurves() const
{
    std::vector<core::Ptr<SketchCurve>> res;
    size_t s;

    SketchCurve** p= childCurves_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double OffsetConstraint::distance() const
{
    double res = distance_raw();
    return res;
}

inline core::Ptr<SketchDimension> OffsetConstraint::dimension() const
{
    core::Ptr<SketchDimension> res = dimension_raw();
    return res;
}

inline core::Ptr<OffsetConstraint> OffsetConstraint::nativeObject() const
{
    core::Ptr<OffsetConstraint> res = nativeObject_raw();
    return res;
}

inline core::Ptr<OffsetConstraint> OffsetConstraint::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<OffsetConstraint> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool OffsetConstraint::isTopologyMatched() const
{
    bool res = isTopologyMatched_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETCONSTRAINT_API