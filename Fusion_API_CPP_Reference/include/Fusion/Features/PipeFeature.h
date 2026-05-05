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
#include "Feature.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PIPEFEATURE_CPP__
# define ADSK_FUSION_PIPEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_PIPEFEATURE_API
# endif
#else
# define ADSK_FUSION_PIPEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepBody;
    class BRepFaces;
    class ModelParameter;
    class Occurrence;
    class Path;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing pipe feature in a design.
class PipeFeature : public Feature {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PipeFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PipeFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the type of operation performed by the Pipe.
    FeatureOperations operation() const;
    bool operation(FeatureOperations value);

    /// Gets and sets the path to create the Pipe.
    /// This property returns null in the case where the feature is non-parametric.
    /// The path can be either closed (you can reach again the starting point by following the curves) or open (the starting point and end point are different in the path).
    /// 
    /// The starting point of the Pipe will be the starting point of the first curve in the Path, regardless of it being open or closed.
    /// When the desired Pipe has a section that includes the starting point and the path is closed, the curves should be shifted in a circular pattern.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<Path> path() const;
    bool path(const core::Ptr<Path>& value);

    /// Gets the distance for the pipe created while following the path given as input, in the same order.
    /// 
    /// If the path is open, this value returns the length of Pipe relative to the length of the path.
    /// If the path is closed, this value returns the length of the Pipe from the start point going along the curves.
    /// Ex: Path is made of curves A-B-C-A. The distanceOne returns the length of the pipe going from A-B-C-A.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> distanceOne() const;

    /// Gets the distance for the pipe created while following the reversed path given as input.
    /// 
    /// If the path is open, getting this value returns null, and setting the value is ignored.
    /// If the path is closed, this value returns the length of the Pipe from the start point going in the reverse order of the path.
    /// Ex: Path is made of curves A-B-C-A. The distanceTwo returns the length of the pipe going from A-C-B-A.
    /// 
    /// This property returns null in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> distanceTwo() const;

    /// Gets and sets the section type of the Pipe.
    /// The type can be: Circular, Square, Triangular.
    PipeSectionTypes sectionType() const;
    bool sectionType(PipeSectionTypes value);

    /// Gets and sets the section size of the Pipe.
    core::Ptr<ModelParameter> sectionSize() const;

    /// Specifies if the Pipe is hollow or not.
    /// 
    /// Setting this to true will default the sectionThickness to 0.1 cm.
    bool isHollow() const;
    bool isHollow(bool value);

    /// Gets the section thickness of the Pipe.
    /// 
    /// If the pipe is not hollow, this will return null.
    core::Ptr<ModelParameter> sectionThickness() const;

    /// Defines the section thickness of the Pipe.
    /// 
    /// In case the pipe is not already hollow, this also sets the isHollow to true.
    bool setThickness(const core::Ptr<core::ValueInput>& value);

    /// Property that returns the set of faces that cap one end of the Pipe that are coincident with the sketch plane.
    /// In the cases where there aren't any start faces this property will return null.
    core::Ptr<BRepFaces> startFaces() const;

    /// Property that returns the set of faces that cap one end of the Pipe that are coincident with the sketch plane.
    /// The end faces are those not coincident to the sketch plane of the feature's profile.
    /// In the case of a symmetric Pipe these faces are the ones on the negative normal side of the sketch plane.
    /// In the cases where there aren't any end faces this property will return null.
    core::Ptr<BRepFaces> endFaces() const;

    /// Property that returns an object that provides access to all of the faces created around the perimeter of the feature.
    core::Ptr<BRepFaces> sideFaces() const;

    /// Gets and sets the list of bodies that will participate in the feature when the operation is a cut or intersection.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepBody>> participantBodies() const;
    bool participantBodies(const std::vector<core::Ptr<BRepBody>>& value);

    ADSK_FUSION_PIPEFEATURE_API static const char* classType();
    ADSK_FUSION_PIPEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_PIPEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PIPEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PipeFeature* nativeObject_raw() const = 0;
    virtual PipeFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual FeatureOperations operation_raw() const = 0;
    virtual bool operation_raw(FeatureOperations value) = 0;
    virtual Path* path_raw() const = 0;
    virtual bool path_raw(Path* value) = 0;
    virtual ModelParameter* distanceOne_raw() const = 0;
    virtual ModelParameter* distanceTwo_raw() const = 0;
    virtual PipeSectionTypes sectionType_raw() const = 0;
    virtual bool sectionType_raw(PipeSectionTypes value) = 0;
    virtual ModelParameter* sectionSize_raw() const = 0;
    virtual bool isHollow_raw() const = 0;
    virtual bool isHollow_raw(bool value) = 0;
    virtual ModelParameter* sectionThickness_raw() const = 0;
    virtual bool setThickness_raw(core::ValueInput* value) = 0;
    virtual BRepFaces* startFaces_raw() const = 0;
    virtual BRepFaces* endFaces_raw() const = 0;
    virtual BRepFaces* sideFaces_raw() const = 0;
    virtual BRepBody** participantBodies_raw(size_t& return_size) const = 0;
    virtual bool participantBodies_raw(BRepBody** value, size_t value_size) = 0;
};

// Inline wrappers

inline core::Ptr<PipeFeature> PipeFeature::nativeObject() const
{
    core::Ptr<PipeFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PipeFeature> PipeFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PipeFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline FeatureOperations PipeFeature::operation() const
{
    FeatureOperations res = operation_raw();
    return res;
}

inline bool PipeFeature::operation(FeatureOperations value)
{
    return operation_raw(value);
}

inline core::Ptr<Path> PipeFeature::path() const
{
    core::Ptr<Path> res = path_raw();
    return res;
}

inline bool PipeFeature::path(const core::Ptr<Path>& value)
{
    return path_raw(value.get());
}

inline core::Ptr<ModelParameter> PipeFeature::distanceOne() const
{
    core::Ptr<ModelParameter> res = distanceOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> PipeFeature::distanceTwo() const
{
    core::Ptr<ModelParameter> res = distanceTwo_raw();
    return res;
}

inline PipeSectionTypes PipeFeature::sectionType() const
{
    PipeSectionTypes res = sectionType_raw();
    return res;
}

inline bool PipeFeature::sectionType(PipeSectionTypes value)
{
    return sectionType_raw(value);
}

inline core::Ptr<ModelParameter> PipeFeature::sectionSize() const
{
    core::Ptr<ModelParameter> res = sectionSize_raw();
    return res;
}

inline bool PipeFeature::isHollow() const
{
    bool res = isHollow_raw();
    return res;
}

inline bool PipeFeature::isHollow(bool value)
{
    return isHollow_raw(value);
}

inline core::Ptr<ModelParameter> PipeFeature::sectionThickness() const
{
    core::Ptr<ModelParameter> res = sectionThickness_raw();
    return res;
}

inline bool PipeFeature::setThickness(const core::Ptr<core::ValueInput>& value)
{
    bool res = setThickness_raw(value.get());
    return res;
}

inline core::Ptr<BRepFaces> PipeFeature::startFaces() const
{
    core::Ptr<BRepFaces> res = startFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> PipeFeature::endFaces() const
{
    core::Ptr<BRepFaces> res = endFaces_raw();
    return res;
}

inline core::Ptr<BRepFaces> PipeFeature::sideFaces() const
{
    core::Ptr<BRepFaces> res = sideFaces_raw();
    return res;
}

inline std::vector<core::Ptr<BRepBody>> PipeFeature::participantBodies() const
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

inline bool PipeFeature::participantBodies(const std::vector<core::Ptr<BRepBody>>& value)
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

#undef ADSK_FUSION_PIPEFEATURE_API