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
#include "MoveFeatureDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The MoveFeatureTranslateXYZDefinition object defines a move feature described by
/// offsets in the X, Y, and Z directions.
class MoveFeatureTranslateXYZDefinition : public MoveFeatureDefinition {
public:

    /// Gets the model parameter that controls the X distance of the translation. You
    /// can use properties on the returned ModelParameter object to edit the offset distance.
    core::Ptr<ModelParameter> xDistance() const;

    /// Gets the model parameter that controls the Y distance of the translation. You
    /// can use properties on the returned ModelParameter object to edit the offset distance.
    core::Ptr<ModelParameter> yDistance() const;

    /// Gets the model parameter that controls the Z distance of the translation. You
    /// can use properties on the returned ModelParameter object to edit the offset distance.
    core::Ptr<ModelParameter> zDistance() const;

    /// Gets and sets if the translation is defined with respect to the design or component space.
    /// Design space is the same as the root component space.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isDesignSpace() const;
    bool isDesignSpace(bool value);

    ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* xDistance_raw() const = 0;
    virtual ModelParameter* yDistance_raw() const = 0;
    virtual ModelParameter* zDistance_raw() const = 0;
    virtual bool isDesignSpace_raw() const = 0;
    virtual bool isDesignSpace_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> MoveFeatureTranslateXYZDefinition::xDistance() const
{
    core::Ptr<ModelParameter> res = xDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> MoveFeatureTranslateXYZDefinition::yDistance() const
{
    core::Ptr<ModelParameter> res = yDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> MoveFeatureTranslateXYZDefinition::zDistance() const
{
    core::Ptr<ModelParameter> res = zDistance_raw();
    return res;
}

inline bool MoveFeatureTranslateXYZDefinition::isDesignSpace() const
{
    bool res = isDesignSpace_raw();
    return res;
}

inline bool MoveFeatureTranslateXYZDefinition::isDesignSpace(bool value)
{
    return isDesignSpace_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATURETRANSLATEXYZDEFINITION_API