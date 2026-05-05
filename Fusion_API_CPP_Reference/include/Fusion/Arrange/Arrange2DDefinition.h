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
#include "ArrangeDefinition.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGE2DDEFINITION_CPP__
# define ADSK_FUSION_ARRANGE2DDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE2DDEFINITION_API
# endif
#else
# define ADSK_FUSION_ARRANGE2DDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// This object defines all of the settings associated with a 2D arrangement. This is used
/// for both rectangular and true shape arrangements, but some properties are ignored
/// in some cases.
class Arrange2DDefinition : public ArrangeDefinition {
public:

    /// Gets and sets the global rotation type.
    ArrangeRotationTypes globalRotation() const;
    bool globalRotation(ArrangeRotationTypes value);

    /// Returns the parameter that controls the global quantity. You can modify the value by
    /// using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> globalQuantity() const;

    /// Gets and sets the global direction for selected faces. When true, the components specified
    /// by selecting a face will be oriented such that the selection face will be oriented upward
    /// in the arrangement.
    bool isGlobalDirectionFaceUp() const;
    bool isGlobalDirectionFaceUp(bool value);

    /// Gets and sets if parts can be nested within void areas of other parts.
    /// 
    /// This is only used when
    /// the solver type is 2D True Shape and is ignored for 2D Rectangular solutions.
    bool isPartInPartAllowed() const;
    bool isPartInPartAllowed(bool value);

    /// Defines the angle of the grain direction of the envelope. An angle of 0 is in the X direction
    /// of the envelope. You can modify the value by using the properties on the returned ModelParameter object.
    /// 
    /// This is only valid when the solver type is True Shape and it returns null in all other cases.
    core::Ptr<ModelParameter> grainDirection() const;

    ADSK_FUSION_ARRANGE2DDEFINITION_API static const char* classType();
    ADSK_FUSION_ARRANGE2DDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE2DDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE2DDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeRotationTypes globalRotation_raw() const = 0;
    virtual bool globalRotation_raw(ArrangeRotationTypes value) = 0;
    virtual ModelParameter* globalQuantity_raw() const = 0;
    virtual bool isGlobalDirectionFaceUp_raw() const = 0;
    virtual bool isGlobalDirectionFaceUp_raw(bool value) = 0;
    virtual bool isPartInPartAllowed_raw() const = 0;
    virtual bool isPartInPartAllowed_raw(bool value) = 0;
    virtual ModelParameter* grainDirection_raw() const = 0;
};

// Inline wrappers

inline ArrangeRotationTypes Arrange2DDefinition::globalRotation() const
{
    ArrangeRotationTypes res = globalRotation_raw();
    return res;
}

inline bool Arrange2DDefinition::globalRotation(ArrangeRotationTypes value)
{
    return globalRotation_raw(value);
}

inline core::Ptr<ModelParameter> Arrange2DDefinition::globalQuantity() const
{
    core::Ptr<ModelParameter> res = globalQuantity_raw();
    return res;
}

inline bool Arrange2DDefinition::isGlobalDirectionFaceUp() const
{
    bool res = isGlobalDirectionFaceUp_raw();
    return res;
}

inline bool Arrange2DDefinition::isGlobalDirectionFaceUp(bool value)
{
    return isGlobalDirectionFaceUp_raw(value);
}

inline bool Arrange2DDefinition::isPartInPartAllowed() const
{
    bool res = isPartInPartAllowed_raw();
    return res;
}

inline bool Arrange2DDefinition::isPartInPartAllowed(bool value)
{
    return isPartInPartAllowed_raw(value);
}

inline core::Ptr<ModelParameter> Arrange2DDefinition::grainDirection() const
{
    core::Ptr<ModelParameter> res = grainDirection_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE2DDEFINITION_API