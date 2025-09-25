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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPBODYDEFINITION_CPP__
# define ADSK_FUSION_BREPBODYDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPBODYDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPBODYDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdgeDefinition;
    class BRepLumpDefinitions;
    class BRepVertexDefinition;
}}

namespace adsk { namespace fusion {

/// This object is used to define a temporary B-Rep body. This includes solid, surface, and wire
/// bodies. The class supports the ability to define the geometry and topology of the B-Rep and
/// once the definition is complete, it supports the creation of a temporary BRepBody object.
class BRepBodyDefinition : public core::Base {
public:

    /// Static function that creates a new BRepBodyDefinition object. It's initially empty but you can use
    /// the functionality it provides to define the geometry and topology of the B-Rep
    /// object you want to create.
    /// Returns the newly created BRepBodyDefinition object.
    static core::Ptr<BRepBodyDefinition> create();

    /// Attempts to create a temporary BRepBody object using the definition
    /// provided by this BRepBodyDefinition object. Properties on this BRepBodyDefinition
    /// are used to define some of the criteria that control how the body is created.
    /// Returns the newly created BRepBody object if successful, otherwise null is returned.
    /// Information about the body creation can be obtained by using the outcomeInfo property.
    /// The outcome info is especially useful when initially writing and debugging your code to understand
    /// why the creation of the body is failing.
    core::Ptr<BRepBody> createBody();

    /// Specifies if full healing is done when creating the body. This defaults to true and it's highly recommended
    /// that you do full healing because it can find and correct problems with the input. If you're sure that the
    /// B-Rep definition that you've constructed is correct then you can set this to false to skip the full
    /// healing process.
    bool doFullHealing() const;
    bool doFullHealing(bool value);

    /// Returns an array of strings that contain information about the outcome of the previous
    /// call of the createBody method. This is especially useful when the createBody method fails,
    /// (returns null), because it provides information about why the failure occurred. It can
    /// also sometimes provide some information even when createBody succeeds.
    /// 
    /// Each string that's returned represents a single set of information and is packaged as JSON
    /// such as '{"description":"vertex data is null or inconsistent with edge geometry","associativeID":"unknown","code":37}'
    /// 
    /// The description is an English description of the error or warning. The associativeID maps back to the
    /// entity provided that is the cause of the problem. The ID is the associative ID you can optionally
    /// assign to the entity definition. The code is an internal code for the error or warning.
    /// 
    /// An empty array is returned if createBody succeeded and there's no additional information.
    std::vector<std::string> outcomeInfo() const;

    /// Provides access to the BRepLumpDefinitions object associated with this BRepBodyDefinition.
    /// It's through the returned collection that you can create new BRepLumpDefinition objects.
    core::Ptr<BRepLumpDefinitions> lumpDefinitions() const;

    /// Using a curve in model space it creates a new BRepEdgeDefinition object that's associated with the body.
    /// startVertex : Vertex definition that defines the start of the edge. For a closed curve, like a circle, you still
    /// need to provide a vertex on the curve but you should use the same BRepVertexDefinition for both the start and end vertices.
    /// endVertex : Vertex definition that defines the end of the edge. For a closed curve, like a circle, this should be the
    /// same vertex as used for the start vertex.
    /// modelSpaceCurve : A Curve3D object that defines the shape of the edge using 3D geometry in model space.
    /// Valid input is an Arc3D, NurbsCurve3D, Circle3D, Ellipse3D, EllipticalArc3D, or Line3D.
    /// Returns the created BRepEdgeDefinition object or null in the case of failure.
    core::Ptr<BRepEdgeDefinition> createEdgeDefinitionByCurve(const core::Ptr<BRepVertexDefinition>& startVertex, const core::Ptr<BRepVertexDefinition>& endVertex, const core::Ptr<core::Curve3D>& modelSpaceCurve);

    /// Creates a new BRepVertexDefinition object that's associated with the body.
    /// position : Specifies the position of the vertex in model space.
    /// Returns the created BRepVertexDefinition object or null in the case of failure.
    core::Ptr<BRepVertexDefinition> createVertexDefinition(const core::Ptr<core::Point3D>& position);

    ADSK_FUSION_BREPBODYDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPBODYDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPBODYDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPBODYDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_BREPBODYDEFINITION_API static BRepBodyDefinition* create_raw();
    virtual BRepBody* createBody_raw() = 0;
    virtual bool doFullHealing_raw() const = 0;
    virtual bool doFullHealing_raw(bool value) = 0;
    virtual char** outcomeInfo_raw(size_t& return_size) const = 0;
    virtual BRepLumpDefinitions* lumpDefinitions_raw() const = 0;
    virtual BRepEdgeDefinition* createEdgeDefinitionByCurve_raw(BRepVertexDefinition* startVertex, BRepVertexDefinition* endVertex, core::Curve3D* modelSpaceCurve) = 0;
    virtual BRepVertexDefinition* createVertexDefinition_raw(core::Point3D* position) = 0;
};

// Inline wrappers

inline core::Ptr<BRepBodyDefinition> BRepBodyDefinition::create()
{
    core::Ptr<BRepBodyDefinition> res = create_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBodyDefinition::createBody()
{
    core::Ptr<BRepBody> res = createBody_raw();
    return res;
}

inline bool BRepBodyDefinition::doFullHealing() const
{
    bool res = doFullHealing_raw();
    return res;
}

inline bool BRepBodyDefinition::doFullHealing(bool value)
{
    return doFullHealing_raw(value);
}

inline std::vector<std::string> BRepBodyDefinition::outcomeInfo() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= outcomeInfo_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<BRepLumpDefinitions> BRepBodyDefinition::lumpDefinitions() const
{
    core::Ptr<BRepLumpDefinitions> res = lumpDefinitions_raw();
    return res;
}

inline core::Ptr<BRepEdgeDefinition> BRepBodyDefinition::createEdgeDefinitionByCurve(const core::Ptr<BRepVertexDefinition>& startVertex, const core::Ptr<BRepVertexDefinition>& endVertex, const core::Ptr<core::Curve3D>& modelSpaceCurve)
{
    core::Ptr<BRepEdgeDefinition> res = createEdgeDefinitionByCurve_raw(startVertex.get(), endVertex.get(), modelSpaceCurve.get());
    return res;
}

inline core::Ptr<BRepVertexDefinition> BRepBodyDefinition::createVertexDefinition(const core::Ptr<core::Point3D>& position)
{
    core::Ptr<BRepVertexDefinition> res = createVertexDefinition_raw(position.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPBODYDEFINITION_API