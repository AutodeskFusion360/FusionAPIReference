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
# ifdef __COMPILING_ADSK_FUSION_PATH_CPP__
# define ADSK_FUSION_PATH_API XI_EXPORT
# else
# define ADSK_FUSION_PATH_API
# endif
#else
# define ADSK_FUSION_PATH_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class PathEntity;
}}

namespace adsk { namespace fusion {

/// The Path object represents a single set of connected curves. The order of the objects within the collection is the same as the connection order of the entities.
/// When using a Path to create a feature, the Path serves as a way to pass in the set of sketch entities and edges. When
/// getting the Path of an existing feature it returns the actual path used to define the feature geometry. In cases like a
/// sweep feature, this can result in using portions of the original input sketch curves or edges and the returned path
/// will provide these "partial" curves as the PathEntity objects.
class Path : public core::Base {
public:

    /// Function that returns the specified PathEntity using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<PathEntity> item(size_t index) const;

    /// The number of curves in the path.
    size_t count() const;

    /// Indicates if the path is closed or not. Returns True in the case of a closed path.
    bool isClosed() const;

    /// This property is not supported for the Path object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// This property is not supported for the Path object.
    core::Ptr<Path> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : 
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<Path> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Creates a new Path that can be used as input to various features. For example, it is used
    /// to create an open set of curves to create surfaces using extrude, revolve, and sweep.
    /// It is also used to create the path for a sweep and sections and profiles and rails for lofts. And
    /// it is used to define the boundary of a patch feature.
    /// 
    /// Although the creation of a path is very flexible as far as the types of entities and whether they
    /// are planar or not, each of the features have specific requirements and the path must meet those
    /// requirements. For example, a path for an extrusion can only contain sketch curves and must be planar,
    /// whereas the path for a sweep can contain a mix of sketch curves and edges and can be in three dimensions.
    /// curves : A SketchCurve, BRepEdge, or an ObjectCollection containing multiple sketch entities and/or BRepEdges. If a single sketch curve
    /// or BRepEdge is input the chainCurves argument is used to determine if connected curves or edges (they do not need to be tangent)
    /// should be automatically found. Searching for connected curves is only performed within the same sketch or open edges on the same
    /// body. If multiple curves are provided the chainCurves argument is treated as false so only the specified input curves are
    /// used. The input curves need to geometrically connect for a path to be created.
    /// chainOptions : If a single SketchCurve or BRepEdge is input, this argument is used to specify the rules in how chained entities should be found. If
    /// an ObjectCollection is input, this argument is ignored.
    /// Returns the new Path object or null in the case of a failure.
    static core::Ptr<Path> create(const core::Ptr<core::Base>& curves, ChainedCurveOptions chainOptions);

    /// Adds additional curves to the existing path. This can be useful when creating a complex path for a sweep and you
    /// want to include sets of curves from multiple sketches and edges from multiple bodies.
    /// curves : A SketchCurve, BRepEdge, or an ObjectCollection containing multiple sketch entities and/or BRepEdges. If a single sketch curve
    /// or BRepEdge is input the chainCurves argument is used to determine if connected curves or edges (they do not need to be tangent)
    /// should be automatically found. Searching for connected curves is only performed within the same sketch or open edges on the same
    /// body. If multiple curves are provided the chainCurves argument is treated as false so only the specified input curves are
    /// used. The input curves need to geometrically connect for a path to be created.
    /// chainOptions : If a single SketchCurve or BRepEdge is input, this argument is used to specify the rules in how chained entities should be found. If
    /// an ObjectCollection is input, this argument is ignored.
    /// Returns a bool indicating if the process was successful or not.
    bool addCurves(const core::Ptr<core::Base>& curves, ChainedCurveOptions chainOptions);

    typedef PathEntity iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_PATH_API static const char* classType();
    ADSK_FUSION_PATH_API const char* objectType() const override;
    ADSK_FUSION_PATH_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PathEntity* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool isClosed_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual Path* nativeObject_raw() const = 0;
    virtual Path* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    ADSK_FUSION_PATH_API static Path* create_raw(core::Base* curves, ChainedCurveOptions chainOptions);
    virtual bool addCurves_raw(core::Base* curves, ChainedCurveOptions chainOptions) = 0;
};

// Inline wrappers

inline core::Ptr<PathEntity> Path::item(size_t index) const
{
    core::Ptr<PathEntity> res = item_raw(index);
    return res;
}

inline size_t Path::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool Path::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline core::Ptr<Occurrence> Path::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<Path> Path::nativeObject() const
{
    core::Ptr<Path> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Path> Path::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Path> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<Path> Path::create(const core::Ptr<core::Base>& curves, ChainedCurveOptions chainOptions)
{
    core::Ptr<Path> res = create_raw(curves.get(), chainOptions);
    return res;
}

inline bool Path::addCurves(const core::Ptr<core::Base>& curves, ChainedCurveOptions chainOptions)
{
    bool res = addCurves_raw(curves.get(), chainOptions);
    return res;
}

template <class OutputIterator> inline void Path::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATH_API