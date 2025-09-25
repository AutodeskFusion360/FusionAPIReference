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
# ifdef __COMPILING_ADSK_FUSION_BREPLOOPDEFINITION_CPP__
# define ADSK_FUSION_BREPLOOPDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPLOOPDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPLOOPDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepCoEdgeDefinitions;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep loop that can be used as input to create a BRepBody that includes this loop.
class BRepLoopDefinition : public core::Base {
public:

    /// Provides access to the BRepCoEdgeDefinitions object associated with the parent BRepFaceDefinition object.
    /// It's through the returned collection that you can create new BRepCoEdgeDefinition objects.
    core::Ptr<BRepCoEdgeDefinitions> bRepCoEdgeDefinitions() const;

    ADSK_FUSION_BREPLOOPDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPLOOPDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPLOOPDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPLOOPDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepCoEdgeDefinitions* bRepCoEdgeDefinitions_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepCoEdgeDefinitions> BRepLoopDefinition::bRepCoEdgeDefinitions() const
{
    core::Ptr<BRepCoEdgeDefinitions> res = bRepCoEdgeDefinitions_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPLOOPDEFINITION_API