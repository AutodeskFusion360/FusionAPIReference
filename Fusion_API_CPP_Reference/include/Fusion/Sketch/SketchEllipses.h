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
# ifdef __COMPILING_ADSK_FUSION_SKETCHELLIPSES_CPP__
# define ADSK_FUSION_SKETCHELLIPSES_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHELLIPSES_API
# endif
#else
# define ADSK_FUSION_SKETCHELLIPSES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}
namespace adsk { namespace fusion {
    class SketchEllipse;
}}

namespace adsk { namespace fusion {

/// The collection of ellipses in a sketch. This provides access to the existing
/// ellipses and supports the methods to create new ellipses.
class SketchEllipses : public core::Base {
public:

    /// Function that returns the specified sketch ellipse using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchEllipse> item(size_t index) const;

    /// Returns the number of ellipses in the sketch.
    size_t count() const;

    /// Creates a sketch ellipse using the center point, a point defining the major axis
    /// and a third point anywhere along the ellipse. The created ellipse is parallel to the
    /// x-y plane of the sketch.
    /// centerPoint : The center point of the ellipse. This can be either an existing SketchPoint or a Point3D object.
    /// majorAxisPoint : A point3D object that defines both the major axis direction and major axis radius.
    /// point : A point3D object that the ellipse will pass through.
    /// Returns the newly created SketchEllipse object if the creation was successful or null if it failed.
    core::Ptr<SketchEllipse> add(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Point3D>& majorAxisPoint, const core::Ptr<core::Point3D>& point);

    typedef SketchEllipse iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHELLIPSES_API static const char* classType();
    ADSK_FUSION_SKETCHELLIPSES_API const char* objectType() const override;
    ADSK_FUSION_SKETCHELLIPSES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHELLIPSES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchEllipse* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchEllipse* add_raw(core::Base* centerPoint, core::Point3D* majorAxisPoint, core::Point3D* point) = 0;
};

// Inline wrappers

inline core::Ptr<SketchEllipse> SketchEllipses::item(size_t index) const
{
    core::Ptr<SketchEllipse> res = item_raw(index);
    return res;
}

inline size_t SketchEllipses::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchEllipse> SketchEllipses::add(const core::Ptr<core::Base>& centerPoint, const core::Ptr<core::Point3D>& majorAxisPoint, const core::Ptr<core::Point3D>& point)
{
    core::Ptr<SketchEllipse> res = add_raw(centerPoint.get(), majorAxisPoint.get(), point.get());
    return res;
}

template <class OutputIterator> inline void SketchEllipses::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHELLIPSES_API