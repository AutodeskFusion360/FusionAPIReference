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
#include "ConstructionPointDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction point created using the SetbyTwoEdges method
class ConstructionPointTwoEdgesDefinition : public ConstructionPointDefinition {
public:

    /// Returns a B-Rep edge or sketch line
    core::Ptr<core::Base> edgeOne() const;

    /// Returns a B-Rep edge or sketch line
    core::Ptr<core::Base> edgeTwo() const;

    /// Redefines the input geometry of the construction point.
    /// edgeOne : The first B-Rep edge or sketch line
    /// edgeTwo : The second B-Rep edge or sketch line
    /// Returns true if the redefinition of the Construction Point is successful.
    bool redefine(const core::Ptr<core::Base>& edgeOne, const core::Ptr<core::Base>& edgeTwo);

    ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* edgeOne_raw() const = 0;
    virtual core::Base* edgeTwo_raw() const = 0;
    virtual bool redefine_raw(core::Base* edgeOne, core::Base* edgeTwo) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPointTwoEdgesDefinition::edgeOne() const
{
    core::Ptr<core::Base> res = edgeOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPointTwoEdgesDefinition::edgeTwo() const
{
    core::Ptr<core::Base> res = edgeTwo_raw();
    return res;
}

inline bool ConstructionPointTwoEdgesDefinition::redefine(const core::Ptr<core::Base>& edgeOne, const core::Ptr<core::Base>& edgeTwo)
{
    bool res = redefine_raw(edgeOne.get(), edgeTwo.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTTWOEDGESDEFINITION_API