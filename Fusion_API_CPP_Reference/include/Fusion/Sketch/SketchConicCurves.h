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
# ifdef __COMPILING_ADSK_FUSION_SKETCHCONICCURVES_CPP__
# define ADSK_FUSION_SKETCHCONICCURVES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCONICCURVES_API
# endif
#else
# define ADSK_FUSION_SKETCHCONICCURVES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchConicCurve;
}}

namespace adsk { namespace fusion {

/// The collection of conic curves in a sketch. This provides access to the existing
/// conic curves and supports the method to create new conic curves.
class SketchConicCurves : public core::Base {
public:

    /// Function that returns the specified conic curve using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchConicCurve> item(size_t index) const;

    /// Returns the number of conic curves in the sketch.
    size_t count() const;

    /// Creates a new conic curve.
    /// startPoint : The start point of the conic curve. This can be either an existing SketchPoint or a Point3D object.
    /// endPoint : The end point of the conic curve. This can be either an existing SketchPoint or a Point3D object.
    /// apexPoint : The apex point of the conic curve. This can be either an existing SketchPoint or a Point3D object.
    /// rhoValue : Double that specifies the rho value for the conic. This value must be greater than zero and less
    /// than one.
    /// Returns the new conic curve or null if the creation failed.
    core::Ptr<SketchConicCurve> add(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint, const core::Ptr<core::Base>& apexPoint, double rhoValue);

    typedef SketchConicCurve iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHCONICCURVES_API static const char* classType();
    ADSK_FUSION_SKETCHCONICCURVES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCONICCURVES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCONICCURVES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchConicCurve* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchConicCurve* add_raw(core::Base* startPoint, core::Base* endPoint, core::Base* apexPoint, double rhoValue) = 0;
};

// Inline wrappers

inline core::Ptr<SketchConicCurve> SketchConicCurves::item(size_t index) const
{
    core::Ptr<SketchConicCurve> res = item_raw(index);
    return res;
}

inline size_t SketchConicCurves::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchConicCurve> SketchConicCurves::add(const core::Ptr<core::Base>& startPoint, const core::Ptr<core::Base>& endPoint, const core::Ptr<core::Base>& apexPoint, double rhoValue)
{
    core::Ptr<SketchConicCurve> res = add_raw(startPoint.get(), endPoint.get(), apexPoint.get(), rhoValue);
    return res;
}

template <class OutputIterator> inline void SketchConicCurves::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCONICCURVES_API