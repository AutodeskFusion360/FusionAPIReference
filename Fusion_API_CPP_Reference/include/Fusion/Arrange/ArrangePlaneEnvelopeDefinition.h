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
#include "ArrangeEnvelopeDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_CPP__
# define ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ConstructionPlane;
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The ArrangePlaneEnvelope object represents an arrange envelope defined
/// by a construction plane. This defines the settings of the envelope and the
/// EnvelopeResult provides access to the resulting envelope and its contents.
class ArrangePlaneEnvelopeDefinition : public ArrangeEnvelopeDefinition {
public:

    /// Gets and sets the ConstructionPlane the envelope is defined on.
    core::Ptr<ConstructionPlane> plane() const;
    bool plane(const core::Ptr<ConstructionPlane>& value);

    /// Returns the parameter that controls the length of the envelope frame. This defines the
    /// size of the envelope frame. You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> length() const;

    /// Returns the parameter that controls the width of the envelope frame. This defines the
    /// size of the envelope frame. You can modify the value by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> width() const;

    /// Returns the parameter that controls the X offset of the frame from the origin of the
    /// construction plane. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> originXOffset() const;

    /// Returns the parameter that controls the Y offset of the frame from the origin of the
    /// construction plane. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> originYOffset() const;

    /// Returns the parameter that controls the offset distance between envelopes when there is
    /// more than one. You can modify the value by using the properties on the returned
    /// ModelParameter object.
    core::Ptr<ModelParameter> envelopeSpacing() const;

    /// Returns the parameter that defines the number of envelopes that can be created.
    /// A value of -1 indicates that there is no limit.
    core::Ptr<ModelParameter> quantity() const;

    ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane* plane_raw() const = 0;
    virtual bool plane_raw(ConstructionPlane* value) = 0;
    virtual ModelParameter* length_raw() const = 0;
    virtual ModelParameter* width_raw() const = 0;
    virtual ModelParameter* originXOffset_raw() const = 0;
    virtual ModelParameter* originYOffset_raw() const = 0;
    virtual ModelParameter* envelopeSpacing_raw() const = 0;
    virtual ModelParameter* quantity_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionPlane> ArrangePlaneEnvelopeDefinition::plane() const
{
    core::Ptr<ConstructionPlane> res = plane_raw();
    return res;
}

inline bool ArrangePlaneEnvelopeDefinition::plane(const core::Ptr<ConstructionPlane>& value)
{
    return plane_raw(value.get());
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::length() const
{
    core::Ptr<ModelParameter> res = length_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::width() const
{
    core::Ptr<ModelParameter> res = width_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::originXOffset() const
{
    core::Ptr<ModelParameter> res = originXOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::originYOffset() const
{
    core::Ptr<ModelParameter> res = originYOffset_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::envelopeSpacing() const
{
    core::Ptr<ModelParameter> res = envelopeSpacing_raw();
    return res;
}

inline core::Ptr<ModelParameter> ArrangePlaneEnvelopeDefinition::quantity() const
{
    core::Ptr<ModelParameter> res = quantity_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEPLANEENVELOPEDEFINITION_API