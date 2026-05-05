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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THREADFEATURE_CPP__
# define ADSK_FUSION_THREADFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_THREADFEATURE_API
# endif
#else
# define ADSK_FUSION_THREADFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class HoleFeature;
    class ModelParameter;
    class Occurrence;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing thread feature in a design. The creation of a tapped
/// hole also results in the creation of a thread feature. There are some limitation when the
/// thread feature is associated with a hole, which are described in the documentation for the
/// property or method where the limitation exists.
class ThreadFeature : public Feature {
public:

    /// Gets and sets the threaded face. In the case where there are multiple faces, only the first one is returned.
    /// Setting this results in a thread being applied to only a single face.
    /// It is recommended that you use the inputCylindricalfaces property in order to have full access to the collection of faces
    /// to be threaded.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// If the thread feature is associated with a hole (the hole property is not null), this property will
    /// always return null and will fail if set.
    core::Ptr<BRepFace> inputCylindricalFace() const;
    bool inputCylindricalFace(const core::Ptr<BRepFace>& value);

    /// Gets and sets if the thread is physical or cosmetic thread. A value of true indicates a physical thread.
    /// It defaults to false.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isModeled() const;
    bool isModeled(bool value);

    /// Gets and sets if this thread is the full length of the cylinder.
    /// It only can be set to true.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isFullLength() const;
    bool isFullLength(bool value);

    /// Sets the thread offset, length and location.
    /// Calling this method will cause the isFullLength property to be set to false.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// threadOffset : A ValueInput object that defines the thread offset.
    /// threadLength : A ValueInput object that defines the thread length.
    /// threadLocation : Indicates where the thread length is measured from.
    /// Returns true if successful.
    bool setThreadOffsetLength(const core::Ptr<core::ValueInput>& threadOffset, const core::Ptr<core::ValueInput>& threadLength, ThreadLocations threadLocation);

    /// Gets the parameter that controls the depth of the thread.
    /// Even though the parameter for the thread depth is always created and accessible through this property,
    /// it is only used in the case where the isFullLength property is false.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> threadLength() const;

    /// Gets the parameter that controls the offset value of the thread.
    /// The offset is the distance along the axis of the cylinder from the edge to the start of the thread,
    /// it is only used in the case where the isFullLength property is false.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<ModelParameter> threadOffset() const;

    /// Gets and sets where the thread length is measured from.
    /// This property is only used in the case where the isFullLength property is false.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// If the thread feature is associated with a hole (the hole property is not null), this property will
    /// always return null and will always return LowEndThreadLocation and will fail if set.
    ThreadLocations threadLocation() const;
    bool threadLocation(ThreadLocations value);

    /// Gets and sets the thread data.
    /// Also can edit the thread through the properties and methods on the ThreadInfo object.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<ThreadInfo> threadInfo() const;
    bool threadInfo(const core::Ptr<ThreadInfo>& value);

    /// Gets and sets if the thread is right or left-handed thread. A value of true indicates a right-handed thread.
    /// It defaults to true.
    /// 
    /// To set this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isRightHanded() const;
    bool isRightHanded(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<ThreadFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<ThreadFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the cylindrical input faces.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// 
    /// If the thread feature is associated with a hole (the hole property is not null), this property will
    /// always return null and will fail if set.
    core::Ptr<core::ObjectCollection> inputCylindricalFaces() const;
    bool inputCylindricalFaces(const core::Ptr<core::ObjectCollection>& value);

    /// If this thread feature is was created as the result of creating a tapped hole, this
    /// property will return the associated hole feature. If this is a standard thread feature,
    /// this property will return null.
    core::Ptr<HoleFeature> hole() const;

    ADSK_FUSION_THREADFEATURE_API static const char* classType();
    ADSK_FUSION_THREADFEATURE_API const char* objectType() const override;
    ADSK_FUSION_THREADFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREADFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* inputCylindricalFace_raw() const = 0;
    virtual bool inputCylindricalFace_raw(BRepFace* value) = 0;
    virtual bool isModeled_raw() const = 0;
    virtual bool isModeled_raw(bool value) = 0;
    virtual bool isFullLength_raw() const = 0;
    virtual bool isFullLength_raw(bool value) = 0;
    virtual bool setThreadOffsetLength_raw(core::ValueInput* threadOffset, core::ValueInput* threadLength, ThreadLocations threadLocation) = 0;
    virtual ModelParameter* threadLength_raw() const = 0;
    virtual ModelParameter* threadOffset_raw() const = 0;
    virtual ThreadLocations threadLocation_raw() const = 0;
    virtual bool threadLocation_raw(ThreadLocations value) = 0;
    virtual ThreadInfo* threadInfo_raw() const = 0;
    virtual bool threadInfo_raw(ThreadInfo* value) = 0;
    virtual bool isRightHanded_raw() const = 0;
    virtual bool isRightHanded_raw(bool value) = 0;
    virtual ThreadFeature* nativeObject_raw() const = 0;
    virtual ThreadFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual core::ObjectCollection* inputCylindricalFaces_raw() const = 0;
    virtual bool inputCylindricalFaces_raw(core::ObjectCollection* value) = 0;
    virtual HoleFeature* hole_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> ThreadFeature::inputCylindricalFace() const
{
    core::Ptr<BRepFace> res = inputCylindricalFace_raw();
    return res;
}

inline bool ThreadFeature::inputCylindricalFace(const core::Ptr<BRepFace>& value)
{
    return inputCylindricalFace_raw(value.get());
}

inline bool ThreadFeature::isModeled() const
{
    bool res = isModeled_raw();
    return res;
}

inline bool ThreadFeature::isModeled(bool value)
{
    return isModeled_raw(value);
}

inline bool ThreadFeature::isFullLength() const
{
    bool res = isFullLength_raw();
    return res;
}

inline bool ThreadFeature::isFullLength(bool value)
{
    return isFullLength_raw(value);
}

inline bool ThreadFeature::setThreadOffsetLength(const core::Ptr<core::ValueInput>& threadOffset, const core::Ptr<core::ValueInput>& threadLength, ThreadLocations threadLocation)
{
    bool res = setThreadOffsetLength_raw(threadOffset.get(), threadLength.get(), threadLocation);
    return res;
}

inline core::Ptr<ModelParameter> ThreadFeature::threadLength() const
{
    core::Ptr<ModelParameter> res = threadLength_raw();
    return res;
}

inline core::Ptr<ModelParameter> ThreadFeature::threadOffset() const
{
    core::Ptr<ModelParameter> res = threadOffset_raw();
    return res;
}

inline ThreadLocations ThreadFeature::threadLocation() const
{
    ThreadLocations res = threadLocation_raw();
    return res;
}

inline bool ThreadFeature::threadLocation(ThreadLocations value)
{
    return threadLocation_raw(value);
}

inline core::Ptr<ThreadInfo> ThreadFeature::threadInfo() const
{
    core::Ptr<ThreadInfo> res = threadInfo_raw();
    return res;
}

inline bool ThreadFeature::threadInfo(const core::Ptr<ThreadInfo>& value)
{
    return threadInfo_raw(value.get());
}

inline bool ThreadFeature::isRightHanded() const
{
    bool res = isRightHanded_raw();
    return res;
}

inline bool ThreadFeature::isRightHanded(bool value)
{
    return isRightHanded_raw(value);
}

inline core::Ptr<ThreadFeature> ThreadFeature::nativeObject() const
{
    core::Ptr<ThreadFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<ThreadFeature> ThreadFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<ThreadFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<core::ObjectCollection> ThreadFeature::inputCylindricalFaces() const
{
    core::Ptr<core::ObjectCollection> res = inputCylindricalFaces_raw();
    return res;
}

inline bool ThreadFeature::inputCylindricalFaces(const core::Ptr<core::ObjectCollection>& value)
{
    return inputCylindricalFaces_raw(value.get());
}

inline core::Ptr<HoleFeature> ThreadFeature::hole() const
{
    core::Ptr<HoleFeature> res = hole_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADFEATURE_API