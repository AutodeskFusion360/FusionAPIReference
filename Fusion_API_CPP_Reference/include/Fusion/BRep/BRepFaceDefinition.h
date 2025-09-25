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
# ifdef __COMPILING_ADSK_FUSION_BREPFACEDEFINITION_CPP__
# define ADSK_FUSION_BREPFACEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPFACEDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPFACEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Surface;
}}
namespace adsk { namespace fusion {
    class BRepLoopDefinitions;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep face that can be used as input to create a BRepBody that includes this face.
class BRepFaceDefinition : public core::Base {
public:

    /// Gets and sets the associate ID of this face definition. This ID will be copied to the corresponding
    /// face when the BRepBodyDefinition is used to create a BrepBody. It is used by Fusion as
    /// the identifier for the face and is used for tracking this geometry for parametric recomputes.
    int associativeID() const;
    bool associativeID(int value);

    /// Provides access to the BRepLoopDefinitions object associated with this BRepFaceDefinition.
    /// It's through the returned collection that you can create new BRepLoopDefinition objects.
    core::Ptr<BRepLoopDefinitions> loopDefinitions() const;

    /// Gets and sets the surface geometry associated with this face definition.
    core::Ptr<core::Surface> surfaceGeometry() const;
    bool surfaceGeometry(const core::Ptr<core::Surface>& value);

    /// Gets and sets if the normal of this face is reversed with respect to the surface geometry associated
    /// with this face definition.
    bool isParamReversed() const;
    bool isParamReversed(bool value);

    ADSK_FUSION_BREPFACEDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPFACEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPFACEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPFACEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int associativeID_raw() const = 0;
    virtual bool associativeID_raw(int value) = 0;
    virtual BRepLoopDefinitions* loopDefinitions_raw() const = 0;
    virtual core::Surface* surfaceGeometry_raw() const = 0;
    virtual bool surfaceGeometry_raw(core::Surface* value) = 0;
    virtual bool isParamReversed_raw() const = 0;
    virtual bool isParamReversed_raw(bool value) = 0;
};

// Inline wrappers

inline int BRepFaceDefinition::associativeID() const
{
    int res = associativeID_raw();
    return res;
}

inline bool BRepFaceDefinition::associativeID(int value)
{
    return associativeID_raw(value);
}

inline core::Ptr<BRepLoopDefinitions> BRepFaceDefinition::loopDefinitions() const
{
    core::Ptr<BRepLoopDefinitions> res = loopDefinitions_raw();
    return res;
}

inline core::Ptr<core::Surface> BRepFaceDefinition::surfaceGeometry() const
{
    core::Ptr<core::Surface> res = surfaceGeometry_raw();
    return res;
}

inline bool BRepFaceDefinition::surfaceGeometry(const core::Ptr<core::Surface>& value)
{
    return surfaceGeometry_raw(value.get());
}

inline bool BRepFaceDefinition::isParamReversed() const
{
    bool res = isParamReversed_raw();
    return res;
}

inline bool BRepFaceDefinition::isParamReversed(bool value)
{
    return isParamReversed_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPFACEDEFINITION_API