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
# ifdef __COMPILING_ADSK_FUSION_SKETCHCURVES_CPP__
# define ADSK_FUSION_SKETCHCURVES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHCURVES_API
# endif
#else
# define ADSK_FUSION_SKETCHCURVES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchArcs;
    class SketchCircles;
    class SketchConicCurves;
    class SketchControlPointSplines;
    class SketchCurve;
    class SketchEllipses;
    class SketchEllipticalArcs;
    class SketchFittedSplines;
    class SketchFixedSplines;
    class SketchLines;
}}

namespace adsk { namespace fusion {

/// A collection of sketch curves in a sketch. This also provides access to collections
/// for the specific types of curves where you can get the curves based on type and
/// create new curves.
class SketchCurves : public core::Base {
public:

    /// Function that returns the specified sketch curve using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchCurve> item(size_t index) const;

    /// Returns the number of sketch curves in the sketch.
    size_t count() const;

    /// Returns the sketch arcs collection associated with this sketch.
    /// This provides access to the existing sketch arcs and supports
    /// the creation of new sketch arcs.
    core::Ptr<SketchArcs> sketchArcs() const;

    /// Returns the sketch circles collection associated with this sketch.
    /// This provides access to the existing sketch circles and supports
    /// the creation of new sketch circles.
    core::Ptr<SketchCircles> sketchCircles() const;

    /// Returns the sketch ellipses collection associated with this sketch.
    /// This provides access to the existing sketch ellipses and supports
    /// the creation of new sketch ellipses.
    core::Ptr<SketchEllipses> sketchEllipses() const;

    /// Returns the sketch elliptical arcs collection associated with this sketch.
    /// This provides access to the existing sketch elliptical arcs and supports
    /// the creation of new sketch elliptical arcs.
    core::Ptr<SketchEllipticalArcs> sketchEllipticalArcs() const;

    /// Returns the sketch lines collection associated with this sketch.
    /// This provides access to the existing sketch lines and supports
    /// the creation of new sketch lines.
    core::Ptr<SketchLines> sketchLines() const;

    /// Returns the sketch splines collection associated with this sketch.
    /// This provides access to the existing sketch splines and supports
    /// the creation of new sketch splines.
    core::Ptr<SketchFittedSplines> sketchFittedSplines() const;

    /// Returns the fixed sketch splines collection associated with this sketch.
    /// This provides access to the existing fixed sketch splines and supports
    /// the creation of new fixed sketch splines.
    core::Ptr<SketchFixedSplines> sketchFixedSplines() const;

    /// Returns the conic curves collection associated with this sketch.
    /// This provides access to the existing conic curves and supports the
    /// creation of new conic curves.
    core::Ptr<SketchConicCurves> sketchConicCurves() const;

    /// Returns the control point splines collection associated with this sketch.
    /// This provides access to the existing control point splines and supports the
    /// creation of new control point splines.
    core::Ptr<SketchControlPointSplines> sketchControlPointSplines() const;

    typedef SketchCurve iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHCURVES_API static const char* classType();
    ADSK_FUSION_SKETCHCURVES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHCURVES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHCURVES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchCurve* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchArcs* sketchArcs_raw() const = 0;
    virtual SketchCircles* sketchCircles_raw() const = 0;
    virtual SketchEllipses* sketchEllipses_raw() const = 0;
    virtual SketchEllipticalArcs* sketchEllipticalArcs_raw() const = 0;
    virtual SketchLines* sketchLines_raw() const = 0;
    virtual SketchFittedSplines* sketchFittedSplines_raw() const = 0;
    virtual SketchFixedSplines* sketchFixedSplines_raw() const = 0;
    virtual SketchConicCurves* sketchConicCurves_raw() const = 0;
    virtual SketchControlPointSplines* sketchControlPointSplines_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SketchCurve> SketchCurves::item(size_t index) const
{
    core::Ptr<SketchCurve> res = item_raw(index);
    return res;
}

inline size_t SketchCurves::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchArcs> SketchCurves::sketchArcs() const
{
    core::Ptr<SketchArcs> res = sketchArcs_raw();
    return res;
}

inline core::Ptr<SketchCircles> SketchCurves::sketchCircles() const
{
    core::Ptr<SketchCircles> res = sketchCircles_raw();
    return res;
}

inline core::Ptr<SketchEllipses> SketchCurves::sketchEllipses() const
{
    core::Ptr<SketchEllipses> res = sketchEllipses_raw();
    return res;
}

inline core::Ptr<SketchEllipticalArcs> SketchCurves::sketchEllipticalArcs() const
{
    core::Ptr<SketchEllipticalArcs> res = sketchEllipticalArcs_raw();
    return res;
}

inline core::Ptr<SketchLines> SketchCurves::sketchLines() const
{
    core::Ptr<SketchLines> res = sketchLines_raw();
    return res;
}

inline core::Ptr<SketchFittedSplines> SketchCurves::sketchFittedSplines() const
{
    core::Ptr<SketchFittedSplines> res = sketchFittedSplines_raw();
    return res;
}

inline core::Ptr<SketchFixedSplines> SketchCurves::sketchFixedSplines() const
{
    core::Ptr<SketchFixedSplines> res = sketchFixedSplines_raw();
    return res;
}

inline core::Ptr<SketchConicCurves> SketchCurves::sketchConicCurves() const
{
    core::Ptr<SketchConicCurves> res = sketchConicCurves_raw();
    return res;
}

inline core::Ptr<SketchControlPointSplines> SketchCurves::sketchControlPointSplines() const
{
    core::Ptr<SketchControlPointSplines> res = sketchControlPointSplines_raw();
    return res;
}

template <class OutputIterator> inline void SketchCurves::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHCURVES_API