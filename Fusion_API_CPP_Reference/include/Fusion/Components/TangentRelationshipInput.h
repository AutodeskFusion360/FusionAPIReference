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
# ifdef __COMPILING_ADSK_FUSION_TANGENTRELATIONSHIPINPUT_CPP__
# define ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API
# endif
#else
# define ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// Defines all of the information required to create a new tangent relationship. This object provides
/// equivalent functionality to the Tangent Relationship command dialog in that it gathers the required
/// information to create a tangent relationship.
class TangentRelationshipInput : public core::Base {
public:

    /// Gets and sets the first BRepFace object that will remain tangent to the set of specified tangent faces.
    core::Ptr<BRepFace> faceOne() const;
    bool faceOne(const core::Ptr<BRepFace>& value);

    /// Gets and sets a single BRepFace object that is part of the body that faceOne will remain tangent to. All
    /// of the faces of the body will be used when computing the tangent relationship.
    core::Ptr<core::Base> tangentFaces() const;
    bool tangentFaces(const core::Ptr<core::Base>& value);

    ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API static const char* classType();
    ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API const char* objectType() const override;
    ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* faceOne_raw() const = 0;
    virtual bool faceOne_raw(BRepFace* value) = 0;
    virtual core::Base* tangentFaces_raw() const = 0;
    virtual bool tangentFaces_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> TangentRelationshipInput::faceOne() const
{
    core::Ptr<BRepFace> res = faceOne_raw();
    return res;
}

inline bool TangentRelationshipInput::faceOne(const core::Ptr<BRepFace>& value)
{
    return faceOne_raw(value.get());
}

inline core::Ptr<core::Base> TangentRelationshipInput::tangentFaces() const
{
    core::Ptr<core::Base> res = tangentFaces_raw();
    return res;
}

inline bool TangentRelationshipInput::tangentFaces(const core::Ptr<core::Base>& value)
{
    return tangentFaces_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TANGENTRELATIONSHIPINPUT_API