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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the SetByTwoPlanes method
class ConstructionAxisTwoPlaneDefinition : public ConstructionAxisDefinition {
public:

    /// Gets the first planar face or construction plane
    core::Ptr<core::Base> planarEntityOne() const;

    /// Gets the second planar face or construction plane
    core::Ptr<core::Base> planarEntityTwo() const;

    /// Redefines the input geometry of the construction axis.
    /// planarEntityOne : The first planar face or construction plane
    /// planarEntityTwo : The second planar face or construction plane
    /// Returns true if the redefinition of the axis is successful.
    bool redefine(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo);

    ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntityOne_raw() const = 0;
    virtual core::Base* planarEntityTwo_raw() const = 0;
    virtual bool redefine_raw(core::Base* planarEntityOne, core::Base* planarEntityTwo) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionAxisTwoPlaneDefinition::planarEntityOne() const
{
    core::Ptr<core::Base> res = planarEntityOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionAxisTwoPlaneDefinition::planarEntityTwo() const
{
    core::Ptr<core::Base> res = planarEntityTwo_raw();
    return res;
}

inline bool ConstructionAxisTwoPlaneDefinition::redefine(const core::Ptr<core::Base>& planarEntityOne, const core::Ptr<core::Base>& planarEntityTwo)
{
    bool res = redefine_raw(planarEntityOne.get(), planarEntityTwo.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISTWOPLANEDEFINITION_API