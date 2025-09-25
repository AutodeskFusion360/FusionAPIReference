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
#include "SketchCurve.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHLINE_CPP__
# define ADSK_FUSION_SKETCHLINE_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHLINE_API
# endif
#else
# define ADSK_FUSION_SKETCHLINE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Line3D;
}}
namespace adsk { namespace fusion {
    class Occurrence;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// A line in a sketch.
class SketchLine : public SketchCurve {
public:

    /// The sketch point at the start of the line. The line is dependent on this point and moving the
    /// point will cause the line to adjust.
    core::Ptr<SketchPoint> startSketchPoint() const;

    /// The sketch point at the end of the line. The line is dependent on this point and moving the
    /// point will cause the line to adjust.
    core::Ptr<SketchPoint> endSketchPoint() const;

    /// Returns the transient geometry of the line which provides geometry
    /// information about the line. The returned geometry is always in sketch space.
    core::Ptr<core::Line3D> geometry() const;

    /// Returns a Line3D object which provides geometric information in world space.
    /// The returned geometry takes into account the assembly context and the position of the
    /// sketch in it's parent component, which means the geometry will be returned in the root
    /// component space.
    core::Ptr<core::Line3D> worldGeometry() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of it's parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<SketchLine> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<SketchLine> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets whether this line is defined as a centerline.
    bool isCenterLine() const;
    bool isCenterLine(bool value);

    ADSK_FUSION_SKETCHLINE_API static const char* classType();
    ADSK_FUSION_SKETCHLINE_API const char* objectType() const override;
    ADSK_FUSION_SKETCHLINE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHLINE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* startSketchPoint_raw() const = 0;
    virtual SketchPoint* endSketchPoint_raw() const = 0;
    virtual core::Line3D* geometry_raw() const = 0;
    virtual core::Line3D* worldGeometry_raw() const = 0;
    virtual SketchLine* nativeObject_raw() const = 0;
    virtual SketchLine* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isCenterLine_raw() const = 0;
    virtual bool isCenterLine_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> SketchLine::startSketchPoint() const
{
    core::Ptr<SketchPoint> res = startSketchPoint_raw();
    return res;
}

inline core::Ptr<SketchPoint> SketchLine::endSketchPoint() const
{
    core::Ptr<SketchPoint> res = endSketchPoint_raw();
    return res;
}

inline core::Ptr<core::Line3D> SketchLine::geometry() const
{
    core::Ptr<core::Line3D> res = geometry_raw();
    return res;
}

inline core::Ptr<core::Line3D> SketchLine::worldGeometry() const
{
    core::Ptr<core::Line3D> res = worldGeometry_raw();
    return res;
}

inline core::Ptr<SketchLine> SketchLine::nativeObject() const
{
    core::Ptr<SketchLine> res = nativeObject_raw();
    return res;
}

inline core::Ptr<SketchLine> SketchLine::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<SketchLine> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool SketchLine::isCenterLine() const
{
    bool res = isCenterLine_raw();
    return res;
}

inline bool SketchLine::isCenterLine(bool value)
{
    return isCenterLine_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHLINE_API