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
# ifdef __COMPILING_ADSK_FUSION_BREPLUMPDEFINITION_CPP__
# define ADSK_FUSION_BREPLUMPDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_BREPLUMPDEFINITION_API
# endif
#else
# define ADSK_FUSION_BREPLUMPDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepShellDefinitions;
}}

namespace adsk { namespace fusion {

/// Represents the definition of a B-Rep lump which is used in defining the topology of a B-Rep body.
class BRepLumpDefinition : public core::Base {
public:

    /// Provides access to the BRepShellDefinitions object associated with this BRepLumpDefinition.
    /// It's through the returned collection that you can create new BRepShellDefinition objects.
    core::Ptr<BRepShellDefinitions> shellDefinitions() const;

    ADSK_FUSION_BREPLUMPDEFINITION_API static const char* classType();
    ADSK_FUSION_BREPLUMPDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_BREPLUMPDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPLUMPDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepShellDefinitions* shellDefinitions_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepShellDefinitions> BRepLumpDefinition::shellDefinitions() const
{
    core::Ptr<BRepShellDefinitions> res = shellDefinitions_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPLUMPDEFINITION_API