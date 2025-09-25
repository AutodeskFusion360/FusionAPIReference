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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_GRAPHCONNECTOR_CPP__
# define ADSK_VOLUME_GRAPHCONNECTOR_API XI_EXPORT
# else
# define ADSK_VOLUME_GRAPHCONNECTOR_API
# endif
#else
# define ADSK_VOLUME_GRAPHCONNECTOR_API XI_IMPORT
#endif

namespace adsk { namespace volume {
    class GraphNode;
}}

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A simple read-only structure that represents a connection beween two nodes' pins in the graph.
class GraphConnector : public core::Base {
public:

    /// The node on the output of which this connector starts.
    core::Ptr<GraphNode> sourceGraphNode() const;

    /// The output pin index of the start node.
    size_t sourcePinIndex() const;

    /// The node on the input of which this connector ends.
    core::Ptr<GraphNode> targetGraphNode() const;

    /// The intput pin index of the end node.
    size_t targetPinIndex() const;

    ADSK_VOLUME_GRAPHCONNECTOR_API static const char* classType();
    ADSK_VOLUME_GRAPHCONNECTOR_API const char* objectType() const override;
    ADSK_VOLUME_GRAPHCONNECTOR_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_GRAPHCONNECTOR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GraphNode* sourceGraphNode_raw() const = 0;
    virtual size_t sourcePinIndex_raw() const = 0;
    virtual GraphNode* targetGraphNode_raw() const = 0;
    virtual size_t targetPinIndex_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<GraphNode> GraphConnector::sourceGraphNode() const
{
    core::Ptr<GraphNode> res = sourceGraphNode_raw();
    return res;
}

inline size_t GraphConnector::sourcePinIndex() const
{
    size_t res = sourcePinIndex_raw();
    return res;
}

inline core::Ptr<GraphNode> GraphConnector::targetGraphNode() const
{
    core::Ptr<GraphNode> res = targetGraphNode_raw();
    return res;
}

inline size_t GraphConnector::targetPinIndex() const
{
    size_t res = targetPinIndex_raw();
    return res;
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_GRAPHCONNECTOR_API