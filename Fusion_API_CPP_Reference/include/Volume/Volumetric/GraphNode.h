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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GRAPHNODE_CPP__
# define ADSK_VOLUME_GRAPHNODE_API XI_EXPORT
# else
# define ADSK_VOLUME_GRAPHNODE_API
# endif
#else
# define ADSK_VOLUME_GRAPHNODE_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class GraphNodeProperties;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// An individual node within a graph.
class GraphNode : public core::Base {
public:

    /// The name of this graph node as give on creation. Node names for each graph should be unique.
    std::string name() const;
    bool name(const std::string& value);

    /// Get the string node type that is was created with.
    std::string nodeType() const;

    /// A user readable description that explains the function of this node type.
    std::string description() const;

    /// Deletes the graphNode and all of its connections.
    /// Returns true in the case where the deletion was successful.
    /// All properties and proery objects of this node will become invalid after this call.
    /// Output nodes cannot be deleted.
    bool deleteMe();

    /// Get a collection of all node properties supported by this node.
    /// An object containing node properties.
    core::Ptr<GraphNodeProperties> properties() const;

    /// How many input pins does this node have.
    /// Pin count.
    size_t getInputPinCount() const;

    /// The name of this graph node input pin describing its function.
    /// pinIndex : Zero based index of the pin to get. Should be less than the pin count.
    std::string getInputPinName(size_t pinIndex) const;

    /// Get the type of the node input pin.
    /// pinIndex : Zero based index of the pin to get. Should be less than the pin count.
    /// The pin type enum.
    NodePinTypes getInputPinType(size_t pinIndex) const;

    /// Some input pins can be optional, so they do not need to be connected for the node to work.
    /// pinIndex : Zero based index of the pin to get. Should be less than the pin count.
    /// True if pin is optional, false if it is required.
    bool isInputPinOptional(size_t pinIndex) const;

    /// How many output pins does this node have.
    /// Pin count.
    size_t getOutputPinCount() const;

    /// The name of this graph node input pin describing its function.
    /// pinIndex : Zero based index of the pin to get. Should be less than the pin count.
    std::string getOutputPinName(size_t pinIndex) const;

    /// Get the type of the node output pin.
    /// pinIndex : Zero based index of the pin to get. Should be less than the pin count.
    /// The pin type enum.
    NodePinTypes getOutputPinType(size_t pinIndex) const;

    /// Check if the graph node properties are valid.
    /// True if the node has good inputs for its properties, false otherwise.
    bool hasValidProperties() const;

    ADSK_VOLUME_GRAPHNODE_API static const char* classType();
    ADSK_VOLUME_GRAPHNODE_API const char* objectType() const override;
    ADSK_VOLUME_GRAPHNODE_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GRAPHNODE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* nodeType_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual GraphNodeProperties* properties_raw() const = 0;
    virtual size_t getInputPinCount_raw() const = 0;
    virtual char* getInputPinName_raw(size_t pinIndex) const = 0;
    virtual NodePinTypes getInputPinType_raw(size_t pinIndex) const = 0;
    virtual bool isInputPinOptional_raw(size_t pinIndex) const = 0;
    virtual size_t getOutputPinCount_raw() const = 0;
    virtual char* getOutputPinName_raw(size_t pinIndex) const = 0;
    virtual NodePinTypes getOutputPinType_raw(size_t pinIndex) const = 0;
    virtual bool hasValidProperties_raw() const = 0;
};

// Inline wrappers

inline std::string GraphNode::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GraphNode::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string GraphNode::nodeType() const
{
    std::string res;

    char* p= nodeType_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string GraphNode::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool GraphNode::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<GraphNodeProperties> GraphNode::properties() const
{
    core::Ptr<GraphNodeProperties> res = properties_raw();
    return res;
}

inline size_t GraphNode::getInputPinCount() const
{
    size_t res = getInputPinCount_raw();
    return res;
}

inline std::string GraphNode::getInputPinName(size_t pinIndex) const
{
    std::string res;

    char* p= getInputPinName_raw(pinIndex);
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline NodePinTypes GraphNode::getInputPinType(size_t pinIndex) const
{
    NodePinTypes res = getInputPinType_raw(pinIndex);
    return res;
}

inline bool GraphNode::isInputPinOptional(size_t pinIndex) const
{
    bool res = isInputPinOptional_raw(pinIndex);
    return res;
}

inline size_t GraphNode::getOutputPinCount() const
{
    size_t res = getOutputPinCount_raw();
    return res;
}

inline std::string GraphNode::getOutputPinName(size_t pinIndex) const
{
    std::string res;

    char* p= getOutputPinName_raw(pinIndex);
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline NodePinTypes GraphNode::getOutputPinType(size_t pinIndex) const
{
    NodePinTypes res = getOutputPinType_raw(pinIndex);
    return res;
}

inline bool GraphNode::hasValidProperties() const
{
    bool res = hasValidProperties_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GRAPHNODE_API