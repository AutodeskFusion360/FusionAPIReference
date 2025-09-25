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
#include "ConstructionAxisDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the SetbyEdge method
class ConstructionAxisEdgeDefinition : public ConstructionAxisDefinition {
public:

    /// Gets and sets the linear edge, construction line, or sketch line that defines
    /// the construction axis.
    core::Ptr<core::Base> edgeEntity() const;
    bool edgeEntity(const core::Ptr<core::Base>& value);

    ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* edgeEntity_raw() const = 0;
    virtual bool edgeEntity_raw(core::Base* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionAxisEdgeDefinition::edgeEntity() const
{
    core::Ptr<core::Base> res = edgeEntity_raw();
    return res;
}

inline bool ConstructionAxisEdgeDefinition::edgeEntity(const core::Ptr<core::Base>& value)
{
    return edgeEntity_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISEDGEDEFINITION_API