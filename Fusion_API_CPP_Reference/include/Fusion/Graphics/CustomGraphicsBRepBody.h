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
#include "CustomGraphicsEntity.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class CustomGraphicsBRepEdges;
    class CustomGraphicsBRepFaces;
    class CustomGraphicsBRepVertices;
}}

namespace adsk { namespace fusion {

/// This represents custom graphics that are based on a BRepBody.
class CustomGraphicsBRepBody : public CustomGraphicsEntity {
public:

    /// Returns the collection of CustomGraphicsBRepFace objects in the CustomGraphicsBRepBody.
    core::Ptr<CustomGraphicsBRepFaces> faces() const;

    /// Returns the collection of CustomGraphicsBRepEdge objects in the CustomGraphicsBRepBody.
    core::Ptr<CustomGraphicsBRepEdges> edges() const;

    /// Returns the collection of CustomGraphicsBRepVertex objects in the CustomGraphicsBRepBody.
    core::Ptr<CustomGraphicsBRepVertices> vertices() const;

    /// Returns a transient BRepBody that is being displayed as custom graphics.
    core::Ptr<BRepBody> bRepBody() const;

    ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CustomGraphicsBRepFaces* faces_raw() const = 0;
    virtual CustomGraphicsBRepEdges* edges_raw() const = 0;
    virtual CustomGraphicsBRepVertices* vertices_raw() const = 0;
    virtual BRepBody* bRepBody_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CustomGraphicsBRepFaces> CustomGraphicsBRepBody::faces() const
{
    core::Ptr<CustomGraphicsBRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<CustomGraphicsBRepEdges> CustomGraphicsBRepBody::edges() const
{
    core::Ptr<CustomGraphicsBRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<CustomGraphicsBRepVertices> CustomGraphicsBRepBody::vertices() const
{
    core::Ptr<CustomGraphicsBRepVertices> res = vertices_raw();
    return res;
}

inline core::Ptr<BRepBody> CustomGraphicsBRepBody::bRepBody() const
{
    core::Ptr<BRepBody> res = bRepBody_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSBREPBODY_API