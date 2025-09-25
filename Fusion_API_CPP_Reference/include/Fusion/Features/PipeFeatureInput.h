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
# ifdef __COMPILING_ADSK_FUSION_PIPEFEATUREINPUT_CPP__
# define ADSK_FUSION_PIPEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PIPEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_PIPEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepBody;
    class Occurrence;
    class Path;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a Pipe
/// feature.
class PipeFeatureInput : public core::Base {
public:

    /// Gets and sets the type of operation performed by the Pipe.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets the path to create the Pipe.
    core::Ptr<Path> path() const;
    bool path(const core::Ptr<Path>& value);

    /// Gets and sets the section type of the Pipe.
    /// The type can be: Circular, Square, Triangular.
    PipeSectionTypes sectionType() const;
    bool sectionType(PipeSectionTypes value);

    /// Gets and sets the section size of the Pipe.
    core::Ptr<core::ValueInput> sectionSize() const;
    bool sectionSize(const core::Ptr<core::ValueInput>& value);

    /// Specifies if the Pipe is hollow or not.
    /// 
    /// Setting this to true will default the sectionThickness to 0.1 cm.
    bool isHollow() const;
    bool isHollow(bool value);

    /// Gets and sets the section thickness of the Pipe.
    /// 
    /// Setting this will also set the isHollow setting to true.
    core::Ptr<core::ValueInput> sectionThickness() const;
    bool sectionThickness(const core::Ptr<core::ValueInput>& value);

    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the Pipe is created based on geometry (e.g. a path)
    /// in another component AND (the Pipe) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

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

    /// Gets and sets the distance for the pipe created while following the path given as input, in the same order.
    /// This value defaults to 1.0 if not set.
    /// 
    /// If the path is open, setting this to a value between 0.0 and 1.0 decides the length of the created Pipe.
    /// If the path is closed, setting this value should not be higher than 1.0 - distanceTwo.
    /// Ex: Path is made of curves A-B-C-A. The distanceOne returns and sets the length of the pipe going from A-B-C-A.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<core::ValueInput> distanceOne() const;
    bool distanceOne(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the distance for the pipe created while following the reversed path given as input.
    /// Before setting this value, distanceOne must be set.
    /// 
    /// If the path is open, getting this value returns null, and setting the value is ignored.
    /// If the path is closed, setting this value should not be higher than 1.0 - distanceOne.
    /// Ex: Path is made of curves A-B-C-A. The distanceTwo returns and sets the length of the pipe going from A-C-B-A.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<core::ValueInput> distanceTwo() const;
    bool distanceTwo(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// If this property has not been set, the default behavior is that all bodies that are intersected by the
    /// feature will participate.
    /// 
    /// This property can return null in the case where the feature has not been fully defined so that
    /// possible intersecting bodies can be computed.
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    ADSK_FUSION_PIPEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_PIPEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_PIPEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PIPEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual Path* path_raw() const = 0;
    virtual bool path_raw(Path* value) = 0;
    virtual PipeSectionTypes sectionType_raw() const = 0;
    virtual bool sectionType_raw(PipeSectionTypes value) = 0;
    virtual core::ValueInput* sectionSize_raw() const = 0;
    virtual bool sectionSize_raw(core::ValueInput* value) = 0;
    virtual bool isHollow_raw() const = 0;
    virtual bool isHollow_raw(bool value) = 0;
    virtual core::ValueInput* sectionThickness_raw() const = 0;
    virtual bool sectionThickness_raw(core::ValueInput* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual core::ValueInput* distanceOne_raw() const = 0;
    virtual bool distanceOne_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* distanceTwo_raw() const = 0;
    virtual bool distanceTwo_raw(core::ValueInput* value) = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
};

// Inline wrappers

inline FeatureOperations PipeFeatureInput::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool PipeFeatureInput::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<Path> PipeFeatureInput::path() const
{
    core::Ptr<Path> res = path_raw();
    return res;
}

inline bool PipeFeatureInput::path(const core::Ptr<Path>& value)
{
    return path_raw(value.get());
}

inline PipeSectionTypes PipeFeatureInput::sectionType() const
{
    PipeSectionTypes res = sectionType_raw();
    return res;
}

inline bool PipeFeatureInput::sectionType(PipeSectionTypes value)
{
    return sectionType_raw(value);
}

inline core::Ptr<core::ValueInput> PipeFeatureInput::sectionSize() const
{
    core::Ptr<core::ValueInput> res = sectionSize_raw();
    return res;
}

inline bool PipeFeatureInput::sectionSize(const core::Ptr<core::ValueInput>& value)
{
    return sectionSize_raw(value.get());
}

inline bool PipeFeatureInput::isHollow() const
{
    bool res = isHollow_raw();
    return res;
}

inline bool PipeFeatureInput::isHollow(bool value)
{
    return isHollow_raw(value);
}

inline core::Ptr<core::ValueInput> PipeFeatureInput::sectionThickness() const
{
    core::Ptr<core::ValueInput> res = sectionThickness_raw();
    return res;
}

inline bool PipeFeatureInput::sectionThickness(const core::Ptr<core::ValueInput>& value)
{
    return sectionThickness_raw(value.get());
}

inline core::Ptr<Occurrence> PipeFeatureInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool PipeFeatureInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}

inline core::Ptr<BaseFeature> PipeFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool PipeFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<core::ValueInput> PipeFeatureInput::distanceOne() const
{
    core::Ptr<core::ValueInput> res = distanceOne_raw();
    return res;
}

inline bool PipeFeatureInput::distanceOne(const core::Ptr<core::ValueInput>& value)
{
    return distanceOne_raw(value.get());
}

inline core::Ptr<core::ValueInput> PipeFeatureInput::distanceTwo() const
{
    core::Ptr<core::ValueInput> res = distanceTwo_raw();
    return res;
}

inline bool PipeFeatureInput::distanceTwo(const core::Ptr<core::ValueInput>& value)
{
    return distanceTwo_raw(value.get());
}

inline std::vector<core::Ptr<BRepBody>> PipeFeatureInput::participantBodies() const
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

inline bool PipeFeatureInput::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
{
    BRepBody** value_ = new BRepBody*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = participantBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PIPEFEATUREINPUT_API