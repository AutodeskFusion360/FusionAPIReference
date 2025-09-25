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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BOSSFEATUREINPUT_CPP__
# define ADSK_FUSION_BOSSFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_BOSSFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_BOSSFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BossFeatureSideInput;
    class BRepBody;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a boss feature or a boss connection
class BossFeatureInput : public core::Base {
public:

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

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the boss feature is created based on geometry (e.g. point) in another
    /// component AND (the boss) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    /// A value of null indicates that everything is in the context of a single component.
    /// The occurrence provided sets scope for detection of target participant bodies.
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    /// Defines the position and orientation of the boss feature using a sketch point(s).
    /// pointOrPoints : The sketch point or ObjectCollection of sketch points that defines the position(s) for boss mating location.
    /// The orientation of the boss feature is inferred from the normal (Z-axis) of the point's parent sketch.
    /// The natural direction (or direction of the screw) will be opposite the normal of the sketch.
    /// If multiple sketch points are provided all must belong to the same sketch.
    /// Participant bodies will be inferred from closest visible bodies unless specified explicitly.
    /// Returns true if successful.
    bool setPositionBySketchPoints(const core::Ptr<core::Base>& pointOrPoints);

    /// Gets and sets the list of bodies that will participate in the boss feature. If body provided does
    /// not intersect with direction vector at proposed position points it will be ignored. If more bodies intersect
    /// at given position point only the closest body will be accepted. Boss feature works with solid bodies only.
    /// If this property has not been set (or is empty) closest visible bodies will be detected automatically
    /// based on proposed positions and orientation.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    /// Creates a new BossFeatureSideInput object that is used to specify the input for boss feature side.
    /// This object can be set to side1 or side2. Side1 is meant to be side where screw head engages with the boss
    /// and Side2 is meant to be a side where screw thread engages with the part or metal inserts.
    /// Returns BossFeatureSideInput if successful.
    core::Ptr<BossFeatureSideInput> createSideInput();

    /// Gets or sets inputs for top side of the boss feature connection. It is the side where screw head engages with the boss.
    /// Default Side1 direction is considered direction of Z-axis of the parent sketch for selected position point.
    core::Ptr<BossFeatureSideInput> side1() const;
    bool side1(const core::Ptr<BossFeatureSideInput>& value);

    /// Gets or sets inputs for bottom side of the boss feature connection. It is the side where screw thread engages with the part or metal insert.
    /// Default Side2 direction is considered opposite to the direction Z-axis of the parent sketch for selected position point.
    core::Ptr<BossFeatureSideInput> side2() const;
    bool side2(const core::Ptr<BossFeatureSideInput>& value);

    /// Get or set if the boss feature (or boss connection) goes in the default direction or is reversed.
    bool isDefaultDirection() const;
    bool isDefaultDirection(bool value);

    /// Get or set offset of the parting face from the selected position point.
    core::Ptr<core::ValueInput> offset() const;
    bool offset(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_BOSSFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_BOSSFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_BOSSFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BOSSFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual bool setPositionBySketchPoints_raw(core::Base* pointOrPoints) = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
    virtual BossFeatureSideInput* createSideInput_raw() = 0;
    virtual BossFeatureSideInput* side1_raw() const = 0;
    virtual bool side1_raw(BossFeatureSideInput* value) = 0;
    virtual BossFeatureSideInput* side2_raw() const = 0;
    virtual bool side2_raw(BossFeatureSideInput* value) = 0;
    virtual bool isDefaultDirection_raw() const = 0;
    virtual bool isDefaultDirection_raw(bool value) = 0;
    virtual core::ValueInput* offset_raw() const = 0;
    virtual bool offset_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<BaseFeature> BossFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool BossFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> BossFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool BossFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline bool BossFeatureInput::setPositionBySketchPoints(const core::Ptr<core::Base>& pointOrPoints)
{
    bool res = setPositionBySketchPoints_raw(pointOrPoints.get());
    return res;
}

inline std::vector<core::Ptr<BRepBody>> BossFeatureInput::participantBodies() const
{
    std::vector<core::Ptr<BRepBody>> res;
    size_t s;

    BRepBody** p= participantBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool BossFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<BossFeatureSideInput> BossFeatureInput::createSideInput()
{
    core::Ptr<BossFeatureSideInput> res = createSideInput_raw();
    return res;
}

inline core::Ptr<BossFeatureSideInput> BossFeatureInput::side1() const
{
    core::Ptr<BossFeatureSideInput> res = side1_raw();
    return res;
}

inline bool BossFeatureInput::side1(const core::Ptr<BossFeatureSideInput>& value)
{
    return side1_raw(value.get());
}

inline core::Ptr<BossFeatureSideInput> BossFeatureInput::side2() const
{
    core::Ptr<BossFeatureSideInput> res = side2_raw();
    return res;
}

inline bool BossFeatureInput::side2(const core::Ptr<BossFeatureSideInput>& value)
{
    return side2_raw(value.get());
}

inline bool BossFeatureInput::isDefaultDirection() const
{
    bool res = isDefaultDirection_raw();
    return res;
}

inline bool BossFeatureInput::isDefaultDirection(bool value)
{
    return isDefaultDirection_raw(value);
}

inline core::Ptr<core::ValueInput> BossFeatureInput::offset() const
{
    core::Ptr<core::ValueInput> res = offset_raw();
    return res;
}

inline bool BossFeatureInput::offset(const core::Ptr<core::ValueInput>& value)
{
    return offset_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BOSSFEATUREINPUT_API