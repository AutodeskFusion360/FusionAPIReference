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
#include "ConstructionPlaneDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// ConstructionPlaneThreePointDefinition defines a ConstructionPlane by 3 point entities
/// (e.g. (sketch points, vertices or construction points) that form a triangle (i.e.
/// no two points the same and they aren't collinear).
class ConstructionPlaneThreePointsDefinition : public ConstructionPlaneDefinition {
public:

    /// Gets the first construction point, sketch point or vertex.
    core::Ptr<core::Base> pointEntityOne() const;

    /// Gets the second construction point, sketch point or vertex.
    core::Ptr<core::Base> pointEntityTwo() const;

    /// Gets the third construction point, sketch point or vertex.
    core::Ptr<core::Base> pointEntityThree() const;

    /// Redefines the input geometry of the construction plane.
    /// pointEntityOne : Gets the first construction point, sketch point or vertex.
    /// pointEntityTwo : Gets the second construction point, sketch point or vertex.
    /// pointEntityThree : Gets the third construction point, sketch point or vertex.
    /// Returns true if the redefinition of the plane is successful.
    bool redefine(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo, const core::Ptr<core::Base>& pointEntityThree);

    ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* pointEntityOne_raw() const = 0;
    virtual core::Base* pointEntityTwo_raw() const = 0;
    virtual core::Base* pointEntityThree_raw() const = 0;
    virtual bool redefine_raw(core::Base* pointEntityOne, core::Base* pointEntityTwo, core::Base* pointEntityThree) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPlaneThreePointsDefinition::pointEntityOne() const
{
    core::Ptr<core::Base> res = pointEntityOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneThreePointsDefinition::pointEntityTwo() const
{
    core::Ptr<core::Base> res = pointEntityTwo_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPlaneThreePointsDefinition::pointEntityThree() const
{
    core::Ptr<core::Base> res = pointEntityThree_raw();
    return res;
}

inline bool ConstructionPlaneThreePointsDefinition::redefine(const core::Ptr<core::Base>& pointEntityOne, const core::Ptr<core::Base>& pointEntityTwo, const core::Ptr<core::Base>& pointEntityThree)
{
    bool res = redefine_raw(pointEntityOne.get(), pointEntityTwo.get(), pointEntityThree.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPLANETHREEPOINTSDEFINITION_API