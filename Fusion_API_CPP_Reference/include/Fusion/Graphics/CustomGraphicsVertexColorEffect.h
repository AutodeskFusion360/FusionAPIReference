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
#include "CustomGraphicsColorEffect.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// One of the types of color effects that can be applied to a custom graphics entity. With this
/// type of effect, the graphics entity will display using the colors associated with the vertices
/// of the mesh in the CustomGraphicsCoordinates object.
class CustomGraphicsVertexColorEffect : public CustomGraphicsColorEffect {
public:

    /// Statically creates a new CustomGraphicsVertexColorEffect object.
    /// Returns the created CustomGraphicsVertexColorEffect or null in case of a failure.
    static core::Ptr<CustomGraphicsVertexColorEffect> create();

    ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API static CustomGraphicsVertexColorEffect* create_raw();
};

// Inline wrappers

inline core::Ptr<CustomGraphicsVertexColorEffect> CustomGraphicsVertexColorEffect::create()
{
    core::Ptr<CustomGraphicsVertexColorEffect> res = create_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSVERTEXCOLOREFFECT_API