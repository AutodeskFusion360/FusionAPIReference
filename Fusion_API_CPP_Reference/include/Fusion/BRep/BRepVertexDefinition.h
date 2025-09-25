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
# ifdef __COMPILING_ADSK_FUSION_BREPVERTEXDEFINITION_CPP__
# define ADSK_FUSION_BREPVERTEXDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPVERTEXDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPVERTEXDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep vertex that can be used as input to create a BRepBody that includes this vertex.
class BRepVertexDefinition : public core::Base {
public:

    /// Gets and sets the position of the vertex in model space.
    core::Ptr<core::Point3D> position() const;
    bool position(const core::Ptr<core::Point3D>& value);

    ADSK_FUSION_BREPVERTEXDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPVERTEXDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPVERTEXDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPVERTEXDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Point3D* position_raw() const = 0;
    virtual bool position_raw(core::Point3D* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Point3D> BRepVertexDefinition::position() const
{
    core::Ptr<core::Point3D> res = position_raw();
    return res;
}

inline bool BRepVertexDefinition::position(const core::Ptr<core::Point3D>& value)
{
    return position_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPVERTEXDEFINITION_API