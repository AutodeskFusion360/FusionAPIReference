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
# ifdef __COMPILING_ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_CPP__
# define ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Defines the inputs for a TwoSidesAngleExtentDefinition object.
/// This feature extent type defines the extents of the feature using angle extents on two sides.
class TwoSidesAngleExtentDefinition : public ExtentDefinition {
public:

    /// Gets the ModelParameter that defines the angle on the first side.
    /// The value of the angle can be edited by using the properties on the ModelParameter object to edit the parameter.
    core::Ptr<ModelParameter> angleOne() const;

    /// Gets the ModelParameter that defines the angle on the second side.
    /// The value of the angle can be edited by using the properties on the ModelParameter object to edit the parameter.
    core::Ptr<ModelParameter> angleTwo() const;

    ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* angleOne_raw() const = 0;
    virtual ModelParameter* angleTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> TwoSidesAngleExtentDefinition::angleOne() const
{
    core::Ptr<ModelParameter> res = angleOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> TwoSidesAngleExtentDefinition::angleTwo() const
{
    core::Ptr<ModelParameter> res = angleTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TWOSIDESANGLEEXTENTDEFINITION_API