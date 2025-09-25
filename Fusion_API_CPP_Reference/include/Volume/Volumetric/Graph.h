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
#include "../VolumeTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GRAPH_CPP__
# define ADSK_VOLUME_GRAPH_API XI_EXPORT
# else
# define ADSK_VOLUME_GRAPH_API
# endif
#else
# define ADSK_VOLUME_GRAPH_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class GraphConnector;
    class GraphNode;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The graph that describes the volumetric model.
/// Possible node types:
///   "BoxSDF",
///   "CylinderSDF",
///   "SphereSDF",
///   "TorusSDF",
///   "PlaneSDF",
///   "ReferencedGeometrySDF",
///   "ReferencedCurveLength",
///   "ReferencedCurveCoords",
///   "ReferencedFaceCoords",
///   "GradientVector",
///   "InvertDensity",
///   "PerlinNoiseScalar",
///   "VoronoiNoiseScalar",
///   "Shell",
///   "ConstantScalar",
///   "ConstantColor",
///   "ImageSamplerScalar",
///   "ImageSamplerVector",
///   "ImageSamplerColor",
///   "3DImageSamplerScalar",
///   "SphereCoords",
///   "TorusCoords",
///   "CylinderCoords",
///   "HomogenousTransformCoords",
///   "TransformCoords",
///   "AxisBasedDeformCoords ",
///   "TwistCoords",
///   "ControlPointMapScalarToScalar",
///   "ControlPointMapScalarToColor",
///   "FalloffMapping",
///   "VectorToColor",
///   "CombineScalarsToVector",
///   "CombineScalarsToColor",
///   "SplitVectorToScalars",
///   "SplitColorToScalars",
///   "LengthOfVector",
///   "NormalizeVector",
///   "ExternalColor",
///   "FunctionScalarToScalar",
///   "FunctionVectorToColor",
///   "FunctionVectorToVector",
///   "FunctionVectorToScalar",
///   "BinaryOperatorColor",
///   "BinaryOperatorVector",
///   "BinaryOperatorScalar",
///   "MultiplyColor",
///   "MultiplyVector",
///   "MultiplyScalar"
class Graph : public core::Base {
public:

    /// Get node with the given name.
    /// name : Name to search for.
    /// The node if found, null otherwise.
    core::Ptr<GraphNode> getNode(const std::string& name) const;

    /// Get one of the special graph output nodes. Every graph has one or more, the cannot be created or added.
    /// The final output pins of the graph nodes should be connected to these to make a useful graph.
    /// outputNodeType : The type of the output graph node.
    /// Not every graph has every type; the primary graph has all four ouput node types, the cell graph only has OutputDensity.
    /// The output node if present in the graph, null otherwise.
    core::Ptr<GraphNode> getOutputNode(GraphOutputNodeTypes outputNodeType) const;

    /// Get all the nodes in the graph, including the output nodes.
    /// An array of nodes.
    std::vector<core::Ptr<GraphNode>> allNodes() const;

    /// Get all the possible node types that can be used as the nodeType parameter for addNode.
    std::vector<std::string> allPossibleNodeTypes() const;

    /// Add a new node to the graph. Node names are unique, attempting to add two nodes with the same name produces an error.
    /// name : Name of the new node.
    /// nodeType : The node type string, one of the types listed in the documentation.
    /// The new node if it could be added, null otherwise.
    core::Ptr<GraphNode> addNode(const std::string& name, const std::string& nodeType);

    /// Get all the connectors in the graph.
    /// An array of node connector objects, one for each connection between two nodes, unordered.
    std::vector<core::Ptr<GraphConnector>> allGraphConnectors() const;

    /// Get an upstream connection to the node's input pin.
    /// node : The node in question.
    /// inputPinIndex : The index of the input pin of the node.
    /// An array of GraphConnector objects, one for each connection to another node.
    core::Ptr<GraphConnector> getNodeInputPinConnector(const core::Ptr<GraphNode>& node, size_t inputPinIndex) const;

    /// Get an array of downstream connections from the node's output pin.
    /// node : The node in question.
    /// outputPinIndex : The index of the output pin of the node.
    /// An array of GraphConnector objects, one for each connection to another node.
    std::vector<core::Ptr<GraphConnector>> getNodeOutputPinConnectors(const core::Ptr<GraphNode>& node, size_t outputPinIndex) const;

    /// Create a connection between nodes.
    /// outputNode : The node where the connection starts.
    /// outputPinIndex : The index of the output pin on the start node.
    /// inputNode : The node where the connection ends.
    /// inputPinIndex : The index of the input pin on the end node.
    /// 
    bool connect(const core::Ptr<GraphNode>& outputNode, size_t outputPinIndex, const core::Ptr<GraphNode>& inputNode, size_t inputPinIndex);

    /// Delete a connection between nodes.
    /// outputNode : The node where the connection starts.
    /// outputPinIndex : The index of the output pin on the start node.
    /// inputNode : The node where the connection ends.
    /// inputPinIndex : The index of the input pin on the end node.
    /// 
    bool disconnect(const core::Ptr<GraphNode>& outputNode, size_t outputPinIndex, const core::Ptr<GraphNode>& inputNode, size_t inputPinIndex);

    /// Check if all the channels in the graph can be evaluated and in a good state.
    /// True if this graph can be evaluated, false otherwise.
    bool canEvaluateGraph() const;

    ADSK_VOLUME_GRAPH_API static const char* classType();
    ADSK_VOLUME_GRAPH_API const char* objectType() const override;
    ADSK_VOLUME_GRAPH_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GRAPH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GraphNode* getNode_raw(const char* name) const = 0;
    virtual GraphNode* getOutputNode_raw(GraphOutputNodeTypes outputNodeType) const = 0;
    virtual GraphNode** allNodes_raw(size_t& return_size) const = 0;
    virtual char** allPossibleNodeTypes_raw(size_t& return_size) const = 0;
    virtual GraphNode* addNode_raw(const char* name, const char* nodeType) = 0;
    virtual GraphConnector** allGraphConnectors_raw(size_t& return_size) const = 0;
    virtual GraphConnector* getNodeInputPinConnector_raw(GraphNode* node, size_t inputPinIndex) const = 0;
    virtual GraphConnector** getNodeOutputPinConnectors_raw(GraphNode* node, size_t outputPinIndex, size_t& return_size) const = 0;
    virtual bool connect_raw(GraphNode* outputNode, size_t outputPinIndex, GraphNode* inputNode, size_t inputPinIndex) = 0;
    virtual bool disconnect_raw(GraphNode* outputNode, size_t outputPinIndex, GraphNode* inputNode, size_t inputPinIndex) = 0;
    virtual bool canEvaluateGraph_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GraphNode> Graph::getNode(const std::string& name) const
{
    core::Ptr<GraphNode> res = getNode_raw(name.c_str());
    return res;
}

inline core::Ptr<GraphNode> Graph::getOutputNode(GraphOutputNodeTypes outputNodeType) const
{
    core::Ptr<GraphNode> res = getOutputNode_raw(outputNodeType);
    return res;
}

inline std::vector<core::Ptr<GraphNode>> Graph::allNodes() const
{
    std::vector<core::Ptr<GraphNode>> res;
    size_t s;

    GraphNode** p= allNodes_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> Graph::allPossibleNodeTypes() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allPossibleNodeTypes_raw(s);
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

inline core::Ptr<GraphNode> Graph::addNode(const std::string& name, const std::string& nodeType)
{
    core::Ptr<GraphNode> res = addNode_raw(name.c_str(), nodeType.c_str());
    return res;
}

inline std::vector<core::Ptr<GraphConnector>> Graph::allGraphConnectors() const
{
    std::vector<core::Ptr<GraphConnector>> res;
    size_t s;

    GraphConnector** p= allGraphConnectors_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<GraphConnector> Graph::getNodeInputPinConnector(const core::Ptr<GraphNode>& node, size_t inputPinIndex) const
{
    core::Ptr<GraphConnector> res = getNodeInputPinConnector_raw(node.get(), inputPinIndex);
    return res;
}

inline std::vector<core::Ptr<GraphConnector>> Graph::getNodeOutputPinConnectors(const core::Ptr<GraphNode>& node, size_t outputPinIndex) const
{
    std::vector<core::Ptr<GraphConnector>> res;
    size_t s;

    GraphConnector** p= getNodeOutputPinConnectors_raw(node.get(), outputPinIndex, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Graph::connect(const core::Ptr<GraphNode>& outputNode, size_t outputPinIndex, const core::Ptr<GraphNode>& inputNode, size_t inputPinIndex)
{
    bool res = connect_raw(outputNode.get(), outputPinIndex, inputNode.get(), inputPinIndex);
    return res;
}

inline bool Graph::disconnect(const core::Ptr<GraphNode>& outputNode, size_t outputPinIndex, const core::Ptr<GraphNode>& inputNode, size_t inputPinIndex)
{
    bool res = disconnect_raw(outputNode.get(), outputPinIndex, inputNode.get(), inputPinIndex);
    return res;
}

inline bool Graph::canEvaluateGraph() const
{
    bool res = canEvaluateGraph_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GRAPH_API