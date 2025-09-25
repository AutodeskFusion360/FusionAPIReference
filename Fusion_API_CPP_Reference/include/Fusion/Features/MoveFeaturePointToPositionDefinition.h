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
# ifdef __COMPILING_ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// The MoveFeaturePointToPositionDefinition object defines a move feature described
/// by a point and an offset. The distances define offsets in the X, Y, and Z directions
/// in either design or component space. To not move the input entities at all the offset
/// distances should be set to the current location of the point in either design or component
/// space. Adding or subtracting to those values will then move the entities that distance.
/// It's best to experiment with the command interactively to understand the behavior.
class MoveFeaturePointToPositionDefinition : public MoveFeatureDefinition {
public:

    /// Gets and sets the entity that defines a point in space. This can be a sketch point,
    /// a construction point, or a BRepVertex.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::Base> point() const;
    bool point(const core::Ptr<core::Base>& value);

    /// Gets the model parameter that controls the offset in the X direction. You can use properties
    core::Ptr<ModelParameter> xDistance() const;

    /// Gets the model parameter that controls the offset in the Y direction. You can use properties
    core::Ptr<ModelParameter> yDistance() const;

    /// Gets the model parameter that controls the offset in the Z direction. You can use properties
    core::Ptr<ModelParameter> zDistance() const;

    /// Gets and sets if the translation is defined with respect to the design or component space.
    /// Design space is the same as the root component space.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isDesignSpace() const;
    bool isDesignSpace(bool value);

    ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* point_raw() const = 0;
    virtual bool point_raw(core::Base* value) = 0;
    virtual ModelParameter* xDistance_raw() const = 0;
    virtual ModelParameter* yDistance_raw() const = 0;
    virtual ModelParameter* zDistance_raw() const = 0;
    virtual bool isDesignSpace_raw() const = 0;
    virtual bool isDesignSpace_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> MoveFeaturePointToPositionDefinition::point() const
{
    core::Ptr<core::Base> res = point_raw();
    return res;
}

inline bool MoveFeaturePointToPositionDefinition::point(const core::Ptr<core::Base>& value)
{
    return point_raw(value.get());
}

inline core::Ptr<ModelParameter> MoveFeaturePointToPositionDefinition::xDistance() const
{
    core::Ptr<ModelParameter> res = xDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> MoveFeaturePointToPositionDefinition::yDistance() const
{
    core::Ptr<ModelParameter> res = yDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> MoveFeaturePointToPositionDefinition::zDistance() const
{
    core::Ptr<ModelParameter> res = zDistance_raw();
    return res;
}

inline bool MoveFeaturePointToPositionDefinition::isDesignSpace() const
{
    bool res = isDesignSpace_raw();
    return res;
}

inline bool MoveFeaturePointToPositionDefinition::isDesignSpace(bool value)
{
    return isDesignSpace_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MOVEFEATUREPOINTTOPOSITIONDEFINITION_API