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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THREADFEATUREINPUT_CPP__
# define ADSK_FUSION_THREADFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_THREADFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_THREADFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepFace;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// This class defines the methods and properties that pertain to the definition of a thread
/// feature.
class ThreadFeatureInput : public core::Base {
public:

    /// Gets and sets the threaded face. In the case where there are multiple faces, only the first one is returned.
    /// Setting this results in a thread being applied to only a single face.
    /// It is recommended that you use the inputCylindricalfaces property in order to have full access to the collection of faces
    /// to be threaded.
    core::Ptr<BRepFace> inputCylindricalFace() const;
    bool inputCylindricalFace(const core::Ptr<BRepFace>& value);

    /// Gets and sets if the thread is physical or cosmetic thread. A value of true indicates a physical thread.
    /// It defaults to false.
    bool isModeled() const;
    bool isModeled(bool value);

    /// Gets and sets if this thread is the full length of the cylinder.
    /// It defaults to true.
    bool isFullLength() const;
    bool isFullLength(bool value);

    /// Gets and sets the thread length.
    /// It is only used in the case where the isFullLength property is false.
    core::Ptr<core::ValueInput> threadLength() const;
    bool threadLength(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the thread offset.
    /// The offset is the distance along the axis of the cylinder from the edge to the start of the thread.
    /// It is only used in the case where the isFullLength property is false.
    /// Returns nothing in the case where the feature is non-parametric.
    core::Ptr<core::ValueInput> threadOffset() const;
    bool threadOffset(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets which end of the cylinder the thread is measured from when it's not full
    /// length. The thread position and length can be measured from either the "low" or "high" end.
    /// You can determine the low and high end by using the Cylinder associated with the cylindrical
    /// BRepFace the thread is being added to. The BRepFace.geometry which will return a Cylinder object.
    /// The axis property of the Cylinder is a vector and the high end of the cylinder is at the far end
    /// of the cylinder with respect to the axis vector.
    /// 
    /// This property is only used in the case where the isFullLength property is false and is otherwise ignored.
    /// It defaults to creating a thread at the high end.
    ThreadLocations threadLocation() const;
    bool threadLocation(ThreadLocations value);

    /// Gets and sets the information that defines the thread.
    core::Ptr<ThreadInfo> threadInfo() const;
    bool threadInfo(const core::Ptr<ThreadInfo>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets if the thread is right or left-handed thread. A value of true indicates a right-handed thread.
    /// It defaults to true.
    bool isRightHanded() const;
    bool isRightHanded(bool value);

    /// Gets and sets the cylindrical input faces.
    core::Ptr<core::ObjectCollection> inputCylindricalFaces() const;
    bool inputCylindricalFaces(const core::Ptr<core::ObjectCollection>& value);

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

    ADSK_FUSION_THREADFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_THREADFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_THREADFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREADFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace* inputCylindricalFace_raw() const = 0;
    virtual bool inputCylindricalFace_raw(BRepFace* value) = 0;
    virtual bool isModeled_raw() const = 0;
    virtual bool isModeled_raw(bool value) = 0;
    virtual bool isFullLength_raw() const = 0;
    virtual bool isFullLength_raw(bool value) = 0;
    virtual core::ValueInput* threadLength_raw() const = 0;
    virtual bool threadLength_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* threadOffset_raw() const = 0;
    virtual bool threadOffset_raw(core::ValueInput* value) = 0;
    virtual ThreadLocations threadLocation_raw() const = 0;
    virtual bool threadLocation_raw(ThreadLocations value) = 0;
    virtual ThreadInfo* threadInfo_raw() const = 0;
    virtual bool threadInfo_raw(ThreadInfo* value) = 0;
    virtual bool isRightHanded_raw() const = 0;
    virtual bool isRightHanded_raw(bool value) = 0;
    virtual core::ObjectCollection* inputCylindricalFaces_raw() const = 0;
    virtual bool inputCylindricalFaces_raw(core::ObjectCollection* value) = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
};

// Inline wrappers

inline core::Ptr<BRepFace> ThreadFeatureInput::inputCylindricalFace() const
{
    core::Ptr<BRepFace> res = inputCylindricalFace_raw();
    return res;
}

inline bool ThreadFeatureInput::inputCylindricalFace(const core::Ptr<BRepFace>& value)
{
    return inputCylindricalFace_raw(value.get());
}

inline bool ThreadFeatureInput::isModeled() const
{
    bool res = isModeled_raw();
    return res;
}

inline bool ThreadFeatureInput::isModeled(bool value)
{
    return isModeled_raw(value);
}

inline bool ThreadFeatureInput::isFullLength() const
{
    bool res = isFullLength_raw();
    return res;
}

inline bool ThreadFeatureInput::isFullLength(bool value)
{
    return isFullLength_raw(value);
}

inline core::Ptr<core::ValueInput> ThreadFeatureInput::threadLength() const
{
    core::Ptr<core::ValueInput> res = threadLength_raw();
    return res;
}

inline bool ThreadFeatureInput::threadLength(const core::Ptr<core::ValueInput>& value)
{
    return threadLength_raw(value.get());
}

inline core::Ptr<core::ValueInput> ThreadFeatureInput::threadOffset() const
{
    core::Ptr<core::ValueInput> res = threadOffset_raw();
    return res;
}

inline bool ThreadFeatureInput::threadOffset(const core::Ptr<core::ValueInput>& value)
{
    return threadOffset_raw(value.get());
}

inline ThreadLocations ThreadFeatureInput::threadLocation() const
{
    ThreadLocations res = threadLocation_raw();
    return res;
}

inline bool ThreadFeatureInput::threadLocation(ThreadLocations value)
{
    return threadLocation_raw(value);
}

inline core::Ptr<ThreadInfo> ThreadFeatureInput::threadInfo() const
{
    core::Ptr<ThreadInfo> res = threadInfo_raw();
    return res;
}

inline bool ThreadFeatureInput::threadInfo(const core::Ptr<ThreadInfo>& value)
{
    return threadInfo_raw(value.get());
}

inline bool ThreadFeatureInput::isRightHanded() const
{
    bool res = isRightHanded_raw();
    return res;
}

inline bool ThreadFeatureInput::isRightHanded(bool value)
{
    return isRightHanded_raw(value);
}

inline core::Ptr<core::ObjectCollection> ThreadFeatureInput::inputCylindricalFaces() const
{
    core::Ptr<core::ObjectCollection> res = inputCylindricalFaces_raw();
    return res;
}

inline bool ThreadFeatureInput::inputCylindricalFaces(const core::Ptr<core::ObjectCollection>& value)
{
    return inputCylindricalFaces_raw(value.get());
}

inline core::Ptr<BaseFeature> ThreadFeatureInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool ThreadFeatureInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADFEATUREINPUT_API