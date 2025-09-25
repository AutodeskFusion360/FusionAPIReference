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
#include "../Features/Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FLATPATTERN_CPP__
# define ADSK_FUSION_FLATPATTERN_API XI_EXPORT
# else
# define ADSK_FUSION_FLATPATTERN_API
# endif
#else
# define ADSK_FUSION_FLATPATTERN_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepBody;
    class BRepEdge;
    class BRepFace;
    class BRepFaces;
}}

namespace adsk { namespace fusion {

/// The FlatPattern object provides access to the flattened representation of a folded part.
/// This supports most of the functionality of a regular component like creating sketches,
/// construction geometry, and most features. Functionality that is not supported in a
/// flat pattern will fail if you attempt to use it. For example, the creation of occurrences
/// and new components is not supported. Also the creation of sheet metal features is
/// not supported.
class FlatPattern : public Feature {
public:

    /// Returns the B-Rep body that represents the flattened sheet metal part.
    core::Ptr<BRepBody> flatBody() const;

    /// Returns the wire B-Rep body that represents the bend lines of the flattened sheet metal part.
    core::Ptr<BRepBody> bendLinesBody() const;

    /// Returns the wire B-Rep body that represents the extent lines of the flattened sheet metal part.
    core::Ptr<BRepBody> extentLinesBody() const;

    /// Returns the "top" face of the flat pattern B-Rep body.
    core::Ptr<BRepFace> topFace() const;

    /// Returns the "bottom" face of the flat pattern B-Rep body.
    core::Ptr<BRepFace> bottomFace() const;

    /// Returns the "side" faces of the flat pattern B-Rep body. These are the faces around
    /// the edge of the flat pattern that connect the top and bottom faces.
    core::Ptr<BRepFaces> sideFaces() const;

    /// Returns the folded B-Rep body in the design that this flat pattern was created from.
    core::Ptr<BRepBody> foldedBody() const;

    /// Returns bend information for the specified bend.
    /// bendEdge : The wire BrepEdge that represents a bend line in the model. The edges are obtained from the wire
    /// body returned by the bendLinesBody property.
    /// isBendUp : Indicates if the bend is in the natural direction of the bend line or in the opposite direction. Returns true
    /// if the bend is in the same direction as the input bend line.
    /// bendAngle : Returns the bend angle of the bend in radians.
    /// Returns true if the bend information was successfully returned.
    bool getBendInfo(const core::Ptr<BRepEdge>& bendEdge, bool& isBendUp, double& bendAngle);

    ADSK_FUSION_FLATPATTERN_API static const char* classType();
    ADSK_FUSION_FLATPATTERN_API const char* objectType() const override;
    ADSK_FUSION_FLATPATTERN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FLATPATTERN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepBody* flatBody_raw() const = 0;
    virtual BRepBody* bendLinesBody_raw() const = 0;
    virtual BRepBody* extentLinesBody_raw() const = 0;
    virtual BRepFace* topFace_raw() const = 0;
    virtual BRepFace* bottomFace_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual BRepBody* foldedBody_raw() const = 0;
    virtual bool getBendInfo_raw(BRepEdge* bendEdge, bool& isBendUp, double& bendAngle) = 0;
};

// Inline wrappers

inline core::Ptr<BRepBody> FlatPattern::flatBody() const
{
    core::Ptr<BRepBody> res = flatBody_raw();
    return res;
}

inline core::Ptr<BRepBody> FlatPattern::bendLinesBody() const
{
    core::Ptr<BRepBody> res = bendLinesBody_raw();
    return res;
}

inline core::Ptr<BRepBody> FlatPattern::extentLinesBody() const
{
    core::Ptr<BRepBody> res = extentLinesBody_raw();
    return res;
}

inline core::Ptr<BRepFace> FlatPattern::topFace() const
{
    core::Ptr<BRepFace> res = topFace_raw();
    return res;
}

inline core::Ptr<BRepFace> FlatPattern::bottomFace() const
{
    core::Ptr<BRepFace> res = bottomFace_raw();
    return res;
}

inline core::Ptr<BRepFaces> FlatPattern::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline core::Ptr<BRepBody> FlatPattern::foldedBody() const
{
    core::Ptr<BRepBody> res = foldedBody_raw();
    return res;
}

inline bool FlatPattern::getBendInfo(const core::Ptr<BRepEdge>& bendEdge, bool& isBendUp, double& bendAngle)
{
    bool res = getBendInfo_raw(bendEdge.get(), isBendUp, bendAngle);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FLATPATTERN_API