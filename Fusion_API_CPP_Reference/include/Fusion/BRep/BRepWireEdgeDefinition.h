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
# ifdef __COMPILING_ADSK_FUSION_BREPWIREEDGEDEFINITION_CPP__
# define ADSK_FUSION_BREPWIREEDGEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPWIREEDGEDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPWIREEDGEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
}}
namespace adsk { namespace fusion {
    class BRepVertexDefinition;
}}

namespace adsk { namespace fusion {

/// Represents the definition of an edge in B-Rep wire that can be used as input to create a BRepBody that includes this wire edge.
class BRepWireEdgeDefinition : public core::Base {
public:

    /// Gets and sets the associate ID of this B-Rep wire definition. This ID will be copied to the corresponding
    /// edge when the BRepBodyDefinition is used to create a BrepBody. It is used by Fusion as
    /// the identifier for the edge and is used for tracking this geometry for parametric recomputes.
    int associativeID() const;
    bool associativeID(int value);

    /// Gets and sets the start vertex of the wire edge definition.
    core::Ptr<BRepVertexDefinition> startVertex() const;
    bool startVertex(const core::Ptr<BRepVertexDefinition>& value);

    /// Gets and sets the end vertex of the wire edge definition.
    core::Ptr<BRepVertexDefinition> endVertex() const;
    bool endVertex(const core::Ptr<BRepVertexDefinition>& value);

    /// Gets and sets the Curve3D object that defines the shape of the edge using 3D geometry in model space.
    /// Valid objects are an Arc3D, NurbsCurve3D, Circle3D, Ellipse3D, EllipticalArc3D, or Line3D.
    core::Ptr<core::Curve3D> modelSpaceCurve() const;
    bool modelSpaceCurve(const core::Ptr<core::Curve3D>& value);

    ADSK_FUSION_BREPWIREEDGEDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPWIREEDGEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPWIREEDGEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPWIREEDGEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int associativeID_raw() const = 0;
    virtual bool associativeID_raw(int value) = 0;
    virtual BRepVertexDefinition* startVertex_raw() const = 0;
    virtual bool startVertex_raw(BRepVertexDefinition* value) = 0;
    virtual BRepVertexDefinition* endVertex_raw() const = 0;
    virtual bool endVertex_raw(BRepVertexDefinition* value) = 0;
    virtual core::Curve3D* modelSpaceCurve_raw() const = 0;
    virtual bool modelSpaceCurve_raw(core::Curve3D* value) = 0;
};

// Inline wrappers

inline int BRepWireEdgeDefinition::associativeID() const
{
    int res = associativeID_raw();
    return res;
}

inline bool BRepWireEdgeDefinition::associativeID(int value)
{
    return associativeID_raw(value);
}

inline core::Ptr<BRepVertexDefinition> BRepWireEdgeDefinition::startVertex() const
{
    core::Ptr<BRepVertexDefinition> res = startVertex_raw();
    return res;
}

inline bool BRepWireEdgeDefinition::startVertex(const core::Ptr<BRepVertexDefinition>& value)
{
    return startVertex_raw(value.get());
}

inline core::Ptr<BRepVertexDefinition> BRepWireEdgeDefinition::endVertex() const
{
    core::Ptr<BRepVertexDefinition> res = endVertex_raw();
    return res;
}

inline bool BRepWireEdgeDefinition::endVertex(const core::Ptr<BRepVertexDefinition>& value)
{
    return endVertex_raw(value.get());
}

inline core::Ptr<core::Curve3D> BRepWireEdgeDefinition::modelSpaceCurve() const
{
    core::Ptr<core::Curve3D> res = modelSpaceCurve_raw();
    return res;
}

inline bool BRepWireEdgeDefinition::modelSpaceCurve(const core::Ptr<core::Curve3D>& value)
{
    return modelSpaceCurve_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPWIREEDGEDEFINITION_API