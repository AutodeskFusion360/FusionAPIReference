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
#include "ArrangeEnvelopeDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_CPP__
# define ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConstructionPlane;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The Arrange3DEnvelope object represents an 3D arrange envelope.
class Arrange3DEnvelopeDefinition : public ArrangeEnvelopeDefinition {
public:

    /// Gets and sets the ConstructionPlane the envelope is defined on.
    core::Ptr<ConstructionPlane> plane() const;
    bool plane(const core::Ptr<ConstructionPlane>& value);

    /// Returns the parameter that controls the length of the envelope volume. This defines the
    /// You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> length() const;

    /// Returns the parameter that controls the width of the envelope volume. This defines the
    /// You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> width() const;

    /// Returns the parameter that controls the height of the envelope volume. This defines the
    /// You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> height() const;

    /// Returns the parameter that controls the X offset of the envelope volume from the origin of
    /// the construction plane. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> originXOffset() const;

    /// Returns the parameter that controls the Y offset of the envelope volume from the origin of
    /// the construction plane. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> originYOffset() const;

    /// Returns the parameter that controls the clearance of the objects from the top of the
    /// envelope volume. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> ceilingClearance() const;

    ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane* plane_raw() const = 0;
    virtual bool plane_raw(ConstructionPlane* value) = 0;
    virtual ModelParameter* length_raw() const = 0;
    virtual ModelParameter* width_raw() const = 0;
    virtual ModelParameter* height_raw() const = 0;
    virtual ModelParameter* originXOffset_raw() const = 0;
    virtual ModelParameter* originYOffset_raw() const = 0;
    virtual ModelParameter* ceilingClearance_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionPlane> Arrange3DEnvelopeDefinition::plane() const
{
    core::Ptr<ConstructionPlane> res = plane_raw();
    return res;
}

inline bool Arrange3DEnvelopeDefinition::plane(const core::Ptr<ConstructionPlane>& value)
{
    return plane_raw(value.get());
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::length() const
{
    core::Ptr<ModelParameter> res = length_raw();
    return res;
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::width() const
{
    core::Ptr<ModelParameter> res = width_raw();
    return res;
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::height() const
{
    core::Ptr<ModelParameter> res = height_raw();
    return res;
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::originXOffset() const
{
    core::Ptr<ModelParameter> res = originXOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::originYOffset() const
{
    core::Ptr<ModelParameter> res = originYOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> Arrange3DEnvelopeDefinition::ceilingClearance() const
{
    core::Ptr<ModelParameter> res = ceilingClearance_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE3DENVELOPEDEFINITION_API