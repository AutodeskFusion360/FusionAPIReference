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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RULEDSURFACEFEATUREINPUT_CPP__
# define ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a Ruled Surface feature.
class RuledSurfaceFeatureInput : public core::Base {
public:

    /// Gets and sets the Profile object that defines the sketch geometry or edges that define the shape of
    /// the ruled surface. The Component.createBRepEdgeProfile method is useful to create a profile defined from edges.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Ruled Surface is created based on geometry (e.g. a profile)
    /// in another component AND (the Ruled Surface) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Gets and sets the ValueInput object that defines the Ruled Surface distance. If the value input is
    /// a real value it will define the distance in centimeters.
    core::Ptr<core::ValueInput> distance() const;
    bool distance(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the ValueInput object that defines the Ruled Surface angle.
    /// If the input is a real value, the units are radians.
    core::Ptr<core::ValueInput> angle() const;
    bool angle(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the type of ruled surface to create. To set this to DirectionRuledSurfaceType,
    /// use the direction property to set the direction entity, which will automatically set
    /// this to DirectionRuledSurfaceType.
    RuledSurfaceTypes ruledSurfaceType() const;
    bool ruledSurfaceType(RuledSurfaceTypes value);

    /// Gets and sets the entity that defines the direction when the ruled surface type is DirectionRuledSurfaceType.
    /// The direction is specified by providing a linear or planar entity. For example, a linear edge, construction axis,
    /// planar face, or construction plane can be used as input.
    /// 
    /// If this property is set when the ruledSurfaceType is not DirectionRuledSurfaceType, the type will automatically be
    /// changed to DirectionRuledSurfaceType. If you get this property when the direction is not DirectionRuledSurfaceType,
    /// it will return null.
    core::Ptr<core::Base> direction() const;
    bool direction(const core::Ptr<core::Base>& value);

    /// Gets and sets if the other face is used for creation of the Ruled Surface.
    /// When creating a ruled surface using the edges of a solid or the interior edges
    /// of a surface the angle of the ruled surface is measured with respect to the
    /// face the selected edge is bounding. For a solid, or an interior edge on a surface,
    /// the edge connects to two faces. This setting toggles which of the two faces will
    /// be used for measuring the angle.
    bool alternateFace() const;
    bool alternateFace(bool value);

    /// When creating a feature that is owned by a base feature, set this property to the
    /// base feature you want to associate the new feature with. By default, this is null,
    /// meaning it will not be associated with a base feature.
    /// 
    /// Because of a current limitation, if you want to create a feature associated with a base
    /// feature, you must set this property AND call the startEdit method of the base feature,
    /// create the feature, and then call the finishEdit method of the base feature. The base
    /// feature must be in an "edit" state to be able to add any additional items to it.
    core::Ptr<BaseFeature> targetBaseFeature() const;
    bool targetBaseFeature(const core::Ptr<BaseFeature>& value);

    /// Gets and sets the type of operation performed by the ruled surface.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets the corner type for the ruled surface, indicating if the corners will be rounded or mitered.
    /// The default value is rounded.
    RuledSurfaceCornerTypes cornerType() const;
    bool cornerType(RuledSurfaceCornerTypes value);

    ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual core::ValueInput* distance_raw() const = 0;
    virtual bool distance_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* angle_raw() const = 0;
    virtual bool angle_raw(core::ValueInput* value) = 0;
    virtual RuledSurfaceTypes ruledSurfaceType_raw() const = 0;
    virtual bool ruledSurfaceType_raw(RuledSurfaceTypes value) = 0;
    virtual core::Base* direction_raw() const = 0;
    virtual bool direction_raw(core::Base* value) = 0;
    virtual bool alternateFace_raw() const = 0;
    virtual bool alternateFace_raw(bool value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual RuledSurfaceCornerTypes cornerType_raw() const = 0;
    virtual bool cornerType_raw(RuledSurfaceCornerTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> RuledSurfaceFeatureInput::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline core::Ptr<Occurrence> RuledSurfaceFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<core::ValueInput> RuledSurfaceFeatureInput::distance() const
{
    core::Ptr<core::ValueInput> res = distance_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::distance(const core::Ptr<core::ValueInput>& value)
{
    return distance_raw(value.get());
}

inline core::Ptr<core::ValueInput> RuledSurfaceFeatureInput::angle() const
{
    core::Ptr<core::ValueInput> res = angle_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::angle(const core::Ptr<core::ValueInput>& value)
{
    return angle_raw(value.get());
}

inline RuledSurfaceTypes RuledSurfaceFeatureInput::ruledSurfaceType() const
{
    RuledSurfaceTypes res = ruledSurfaceType_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::ruledSurfaceType(RuledSurfaceTypes value)
{
    return ruledSurfaceType_raw(value);
}

inline core::Ptr<core::Base> RuledSurfaceFeatureInput::direction() const
{
    core::Ptr<core::Base> res = direction_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::direction(const core::Ptr<core::Base>& value)
{
    return direction_raw(value.get());
}

inline bool RuledSurfaceFeatureInput::alternateFace() const
{
    bool res = alternateFace_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::alternateFace(bool value)
{
    return alternateFace_raw(value);
}

inline core::Ptr<BaseFeature> RuledSurfaceFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline FeatureOperations RuledSurfaceFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline RuledSurfaceCornerTypes RuledSurfaceFeatureInput::cornerType() const
{
    RuledSurfaceCornerTypes res = cornerType_raw();
    return res;
}

inline bool RuledSurfaceFeatureInput::cornerType(RuledSurfaceCornerTypes value)
{
    return cornerType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RULEDSURFACEFEATUREINPUT_API