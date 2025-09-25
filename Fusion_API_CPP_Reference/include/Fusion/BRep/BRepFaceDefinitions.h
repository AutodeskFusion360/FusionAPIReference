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
# ifdef __COMPILING_ADSK_FUSION_BREPFACEDEFINITIONS_CPP__
# define ADSK_FUSION_BREPFACEDEFINITIONS_API XI_EXPORT
# else
# define ADSK_FUSION_BREPFACEDEFINITIONS_API
# endif
#else
# define ADSK_FUSION_BREPFACEDEFINITIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Surface;
}}
namespace adsk { namespace fusion {
    class BRepFaceDefinition;
}}

namespace adsk { namespace fusion {

/// Provides access to the BRepFaceDefinition objects associated with the object the collection was obtained from.
/// It's through this object that you create new BRepFaceDefinition objects.
class BRepFaceDefinitions : public core::Base {
public:

    /// Function that returns the specified BRepFaceDefinition object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<BRepFaceDefinition> item(size_t index) const;

    /// The number of B-Rep face definition objects in the collection.
    size_t count() const;

    /// Creates a new BrepFaceDefinition within the parent BRepShellDefinition object.
    /// surfaceGeometry : Input surface object that defines the geometry of the face. Valid objects for input are
    /// NurbsSurface, Cone, Cylinder, EllipticalCone, EllipticalCylinder, Plane, Sphere, and Torus.
    /// isParamReversed : Input Boolean that indicates if the normal of this face is reversed with respect to the
    /// surface geometry associated with this face definition.
    /// Returns the newly created BRepFaceDefinition object or null in the case of failure.
    core::Ptr<BRepFaceDefinition> add(const core::Ptr<core::Surface>& surfaceGeometry, bool isParamReversed);

    typedef BRepFaceDefinition iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_BREPFACEDEFINITIONS_API static const char* classType();
    ADSK_FUSION_BREPFACEDEFINITIONS_API const char* objectType() const override;
    ADSK_FUSION_BREPFACEDEFINITIONS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPFACEDEFINITIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFaceDefinition* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual BRepFaceDefinition* add_raw(core::Surface* surfaceGeometry, bool isParamReversed) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFaceDefinition> BRepFaceDefinitions::item(size_t index) const
{
    core::Ptr<BRepFaceDefinition> res = item_raw(index);
    return res;
}

inline size_t BRepFaceDefinitions::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<BRepFaceDefinition> BRepFaceDefinitions::add(const core::Ptr<core::Surface>& surfaceGeometry, bool isParamReversed)
{
    core::Ptr<BRepFaceDefinition> res = add_raw(surfaceGeometry.get(), isParamReversed);
    return res;
}

template <class OutputIterator> inline void BRepFaceDefinitions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPFACEDEFINITIONS_API