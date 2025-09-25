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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the SetbyTwoPoints method
class ConstructionAxisTwoPointDefinition : public ConstructionAxisDefinition {
public:

    /// Gets the first point.
    core::Ptr<core::Base> pointEntityOne() const;

    /// Gets the second point.
    core::Ptr<core::Base> pointEntityTwo() const;

    /// Redefines the input geometry of the construction axis.
    /// pointEntityOne : The first point
    /// pointEntityTwo : The second point
    /// Returns true if the redefinition of the construction axis is successful.
    bool redefine(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo);

    ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* pointEntityOne_raw() const = 0;
    virtual core::Base* pointEntityTwo_raw() const = 0;
    virtual bool redefine_raw(core::Base* pointEntityOne, core::Base* pointEntityTwo) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionAxisTwoPointDefinition::pointEntityOne() const
{
    core::Ptr<core::Base> res = pointEntityOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionAxisTwoPointDefinition::pointEntityTwo() const
{
    core::Ptr<core::Base> res = pointEntityTwo_raw();
    return res;
}

inline bool ConstructionAxisTwoPointDefinition::redefine(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo)
{
    bool res = redefine_raw(pointEntityOne.get(), pointEntityTwo.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISTWOPOINTDEFINITION_API