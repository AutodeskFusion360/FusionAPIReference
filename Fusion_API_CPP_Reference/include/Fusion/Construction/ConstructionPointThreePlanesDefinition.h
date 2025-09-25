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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The definition for a parametric construction point created using the SetbyThreePlanes method
class ConstructionPointThreePlanesDefinition : public ConstructionPointDefinition {
public:

    /// The first plane or planar face
    core::Ptr<core::Base> planeOne() const;

    /// The second plane or planar face
    core::Ptr<core::Base> planeTwo() const;

    /// The third plane or planar face
    core::Ptr<core::Base> planeThree() const;

    /// Redefines the input geometry of the construction point.
    /// planeOne : The first plane or planar face to intersect
    /// planeTwo : The second plane or planar face to intersect
    /// planeThree : The third plane or planar face to intersect
    /// Returns true if the redefinition of the Construction Point is successful.
    bool redefine(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& planeThree);

    ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planeOne_raw() const = 0;
    virtual core::Base* planeTwo_raw() const = 0;
    virtual core::Base* planeThree_raw() const = 0;
    virtual bool redefine_raw(core::Base* planeOne, core::Base* planeTwo, core::Base* planeThree) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> ConstructionPointThreePlanesDefinition::planeOne() const
{
    core::Ptr<core::Base> res = planeOne_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPointThreePlanesDefinition::planeTwo() const
{
    core::Ptr<core::Base> res = planeTwo_raw();
    return res;
}

inline core::Ptr<core::Base> ConstructionPointThreePlanesDefinition::planeThree() const
{
    core::Ptr<core::Base> res = planeThree_raw();
    return res;
}

inline bool ConstructionPointThreePlanesDefinition::redefine(const core::Ptr<core::Base>& planeOne, const core::Ptr<core::Base>& planeTwo, const core::Ptr<core::Base>& planeThree)
{
    bool res = redefine_raw(planeOne.get(), planeTwo.get(), planeThree.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONPOINTTHREEPLANESDEFINITION_API