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
# ifdef __COMPILING_ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_CPP__
# define ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API
# endif
#else
# define ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
}}

namespace adsk { namespace fusion {

/// The definition for a parametric construction axis created using the SetbyCircularFace method
class ConstructionAxisCircularFaceDefinition : public ConstructionAxisDefinition {
public:

    /// Gets and sets the cylinder, cone, or torus this work axis
    /// is parametrically dependent on.
    core::Ptr<BRepFace> circularFace() const;
    bool circularFace(const core::Ptr<BRepFace>& value);

    ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API static const char* classType();
    ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* circularFace_raw() const = 0;
    virtual bool circularFace_raw(BRepFace* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> ConstructionAxisCircularFaceDefinition::circularFace() const
{
    core::Ptr<BRepFace> res = circularFace_raw();
    return res;
}

inline bool ConstructionAxisCircularFaceDefinition::circularFace(const core::Ptr<BRepFace>& value)
{
    return circularFace_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONSTRUCTIONAXISCIRCULARFACEDEFINITION_API