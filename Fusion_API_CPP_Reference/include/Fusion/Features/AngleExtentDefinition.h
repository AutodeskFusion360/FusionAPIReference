//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
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
# ifdef __COMPILING_ADSK_FUSION_ANGLEEXTENTDEFINITION_CPP__
# define ADSK_FUSION_ANGLEEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ANGLEEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_ANGLEEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Defines the inputs for an AngleExtentDefinition object.
/// This feature extent is defined by an angle as well as whether the extent is symmetric or only in one direction.
/// If the extent is not symmetric, a positive or negative angle can be used to control the direction.
class AngleExtentDefinition : public ExtentDefinition {
public:

    /// Gets and sets if the angle extent is in one direction or symmetric.
    /// For a hole this property will always return false and setting it is ignored.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Gets the ModelParameter that defines the angle. The value of the angle can be edited
    /// by using the properties on the ModelParameter object to edit the parameter.
    core::Ptr<ModelParameter> angle() const;

    ADSK_FUSION_ANGLEEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_ANGLEEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ANGLEEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ANGLEEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual ModelParameter* angle_raw() const = 0;
};

// Inline wrappers

inline bool AngleExtentDefinition::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool AngleExtentDefinition::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline core::Ptr<ModelParameter> AngleExtentDefinition::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ANGLEEXTENTDEFINITION_API