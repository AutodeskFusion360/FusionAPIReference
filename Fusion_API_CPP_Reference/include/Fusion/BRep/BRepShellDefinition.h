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
# ifdef __COMPILING_ADSK_FUSION_BREPSHELLDEFINITION_CPP__
# define ADSK_FUSION_BREPSHELLDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPSHELLDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPSHELLDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFaceDefinitions;
    class BRepWireDefinition;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep shell that can be used as input to create a BRepBody that includes this shell.
class BRepShellDefinition : public core::Base {
public:

    /// Provides access to the BRepFaceDefinitions object associated with this BRepShellDefinition.
    /// It's through the returned collection that you can create new BRepFaceDefinition objects.
    core::Ptr<BRepFaceDefinitions> faceDefinitions() const;

    /// Returns the single BRepWireDefinition associated with this shell definition.
    core::Ptr<BRepWireDefinition> wireDefinition() const;

    ADSK_FUSION_BREPSHELLDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPSHELLDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPSHELLDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPSHELLDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFaceDefinitions* faceDefinitions_raw() const = 0;
    virtual BRepWireDefinition* wireDefinition_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFaceDefinitions> BRepShellDefinition::faceDefinitions() const
{
    core::Ptr<BRepFaceDefinitions> res = faceDefinitions_raw();
    return res;
}

inline core::Ptr<BRepWireDefinition> BRepShellDefinition::wireDefinition() const
{
    core::Ptr<BRepWireDefinition> res = wireDefinition_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPSHELLDEFINITION_API