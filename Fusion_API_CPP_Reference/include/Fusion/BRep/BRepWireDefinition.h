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
# ifdef __COMPILING_ADSK_FUSION_BREPWIREDEFINITION_CPP__
# define ADSK_FUSION_BREPWIREDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPWIREDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPWIREDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepWireEdgeDefinitions;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep wire that can be used as input to create a BRepBody that includes this wire.
class BRepWireDefinition : public core::Base {
public:

    /// Provides access to the BRepWireEdgeDefinitions object associated with the parent BRepWireDefinition object.
    /// It's through the returned collection that you can create new BRepWireEdgeDefinitions objects.
    core::Ptr<BRepWireEdgeDefinitions> wireEdgeDefinitions() const;

    ADSK_FUSION_BREPWIREDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPWIREDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPWIREDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPWIREDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepWireEdgeDefinitions* wireEdgeDefinitions_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepWireEdgeDefinitions> BRepWireDefinition::wireEdgeDefinitions() const
{
    core::Ptr<BRepWireEdgeDefinitions> res = wireEdgeDefinitions_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPWIREDEFINITION_API