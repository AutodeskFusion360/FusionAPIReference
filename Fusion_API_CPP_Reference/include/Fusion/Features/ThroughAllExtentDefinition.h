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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THROUGHALLEXTENTDEFINITION_CPP__
# define ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// A definition object that is used to define the extents of a feature to be through all.
class ThroughAllExtentDefinition : public ExtentDefinition {
public:

    /// Statically creates a new ThroughAllExtentDefinition object. This is used as input when
    /// defining the extents of a feature to be through all.
    /// Returns the newly created ThroughAllExtentDefinition or null in the case of a failure.
    static core::Ptr<ThroughAllExtentDefinition> create();

    /// Gets and sets if the direction is positive or negative. A value of true indicates it is
    /// in the same direction as the z direction of the profile's sketch plane.
    /// 
    /// This is only used when the extrusion is only defined in a single direction from the
    /// profile plane. If it's a two sided extrusion, this value is ignored.
    bool isPositiveDirection() const;
    bool isPositiveDirection(bool value);

    ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API static ThroughAllExtentDefinition* create_raw();
    virtual bool isPositiveDirection_raw() const = 0;
    virtual bool isPositiveDirection_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ThroughAllExtentDefinition> ThroughAllExtentDefinition::create()
{
    core::Ptr<ThroughAllExtentDefinition> res = create_raw();
    return res;
}

inline bool ThroughAllExtentDefinition::isPositiveDirection() const
{
    bool res = isPositiveDirection_raw();
    return res;
}

inline bool ThroughAllExtentDefinition::isPositiveDirection(bool value)
{
    return isPositiveDirection_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THROUGHALLEXTENTDEFINITION_API