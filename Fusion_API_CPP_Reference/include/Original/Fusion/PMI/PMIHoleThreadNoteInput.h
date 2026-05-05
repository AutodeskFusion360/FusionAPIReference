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
#include "PMIInput.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIHOLETHREADNOTEINPUT_CPP__
# define ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API
# endif
#else
# define ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class PMIDisplaySettings;
    class PMIGeometricValue;
    class PMIGeometricValueTolerance;
    class ThreadInfo;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A class that defines the input used to create a Hole/Thread Note PMI.
class PMIHoleThreadNoteInput : public PMIInput {
public:

    /// An array of BRepFace objects the Hole/Thread Note would be associated to. These faces can be a subset of the group
    /// of faces defining a geometric hole, or faces defining bosses. The faces must represent equivalent geometry (e.g. holes defined
    /// by the faces should have the same properties such as type, diameter, thread, etc.).
    /// 
    /// In the case of bosses, the set of faces represents the cylindrical faces from a group of bosses.
    /// 
    /// These faces should not be in different components, but can be in different bodies within the same component.
    /// Native object will be used when setting the faces.
    std::vector<core::Ptr<BRepFace>> faces() const;
    bool faces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets whether the Hole/Thread Note PMI should represent all the matching holes in the design.
    bool isWantSelectAllMatchingHoles() const;
    bool isWantSelectAllMatchingHoles(bool value);

    /// Gets and sets the primary display settings for the Hole/Thread Note PMI.
    /// This will always be existent, and includes information about format and units.
    core::Ptr<PMIDisplaySettings> primaryDisplaySettings() const;
    bool primaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value);

    /// Gets and sets whether there are secondary display settings defined for the Hole/Thread Note PMI.
    bool hasSecondaryDisplaySettings() const;
    bool hasSecondaryDisplaySettings(bool value);

    /// Gets and sets the secondary display settings for the Hole/Thread Note PMI.
    /// This will not always be existent. Setting this value will also set hasSecondaryDisplaySettings to true.
    core::Ptr<PMIDisplaySettings> secondaryDisplaySettings() const;
    bool secondaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value);

    /// Gets and sets whether the quantity is visible in the graphics.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isWantQuantityNote() const;
    bool isWantQuantityNote(bool value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the annotated hole or boss in cm.
    /// It is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> diameter() const;
    bool diameter(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValueTolerance for the shaft diameter of the annotated hole if a shaft tolerance exists.
    core::Ptr<PMIGeometricValueTolerance> shaftTolerance() const;
    bool shaftTolerance(const core::Ptr<PMIGeometricValueTolerance>& value);

    /// Gets and sets whether the hole should be considered a through hole.
    /// 
    /// Setting this to true will remove the depth information related to the PMI.
    /// Setting this to false will result in the depth being passed to PMI creation.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThrough() const;
    bool isThrough(bool value);

    /// Gets and sets the PMIGeometricValue used to define the depth of the hole in cm.
    /// 
    /// In the case of bosses, it represents the height of the boss.
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> depth() const;
    bool depth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the radius of the hole in cm. Not applicable for bosses.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> radius() const;
    bool radius(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets whether the hole or the boss has a thread associated.
    /// 
    /// Setting this to false will result in all thread information being ignored.
    /// Setting this to true requires the thread information to also be set.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThreaded() const;
    bool isThreaded(bool value);

    /// Gets and sets the ThreadInfo object associated with the hole/thread note.
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<ThreadInfo> threadInfo() const;
    bool threadInfo(const core::Ptr<ThreadInfo>& value);

    /// Gets and sets whether the hole or boss is threaded all the way through.
    /// Setting this to true will remove the thread depth information.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThreadedThrough() const;
    bool isThreadedThrough(bool value);

    /// Gets and sets the PMIGeometricValue used to define the thread depth of the hole in cm. In the case of bosses, it represents the thread length of the boss.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerances property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> threadDepth() const;
    bool threadDepth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerances property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreDiameter() const;
    bool counterboreDiameter(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the depth of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerances property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreDepth() const;
    bool counterboreDepth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the radius of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerances property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreRadius() const;
    bool counterboreRadius(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the countersink segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerances property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> countersinkDiameter() const;
    bool countersinkDiameter(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the angle of the countersink segment of the hole in radians. Not applicable for bosses.
    /// 
    /// When setting, this value does not have tolerances, and will not be taken into account.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> countersinkAngle() const;
    bool countersinkAngle(const core::Ptr<PMIGeometricValue>& value);

    /// Gets whether the PMI is representing a hole or a boss.
    bool isHoleAnnotation() const;

    /// Gets and sets whether the hole normal should be treated as flipped, resulting in the hole top to be placed at the lowest found face of the hole.
    /// 
    /// This is applicable only to complex holes, in other cases the value is ignored.
    bool isFlipHoleNormal() const;
    bool isFlipHoleNormal(bool value);

    ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API static const char* classType();
    ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API const char* objectType() const override;
    ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual bool faces_raw(BRepFace** value, size_t value_size) = 0;
    virtual bool isWantSelectAllMatchingHoles_raw() const = 0;
    virtual bool isWantSelectAllMatchingHoles_raw(bool value) = 0;
    virtual PMIDisplaySettings* primaryDisplaySettings_raw() const = 0;
    virtual bool primaryDisplaySettings_raw(PMIDisplaySettings* value) = 0;
    virtual bool hasSecondaryDisplaySettings_raw() const = 0;
    virtual bool hasSecondaryDisplaySettings_raw(bool value) = 0;
    virtual PMIDisplaySettings* secondaryDisplaySettings_raw() const = 0;
    virtual bool secondaryDisplaySettings_raw(PMIDisplaySettings* value) = 0;
    virtual bool isWantQuantityNote_raw() const = 0;
    virtual bool isWantQuantityNote_raw(bool value) = 0;
    virtual PMIGeometricValue* diameter_raw() const = 0;
    virtual bool diameter_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValueTolerance* shaftTolerance_raw() const = 0;
    virtual bool shaftTolerance_raw(PMIGeometricValueTolerance* value) = 0;
    virtual bool isThrough_raw() const = 0;
    virtual bool isThrough_raw(bool value) = 0;
    virtual PMIGeometricValue* depth_raw() const = 0;
    virtual bool depth_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* radius_raw() const = 0;
    virtual bool radius_raw(PMIGeometricValue* value) = 0;
    virtual bool isThreaded_raw() const = 0;
    virtual bool isThreaded_raw(bool value) = 0;
    virtual ThreadInfo* threadInfo_raw() const = 0;
    virtual bool threadInfo_raw(ThreadInfo* value) = 0;
    virtual bool isThreadedThrough_raw() const = 0;
    virtual bool isThreadedThrough_raw(bool value) = 0;
    virtual PMIGeometricValue* threadDepth_raw() const = 0;
    virtual bool threadDepth_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* counterboreDiameter_raw() const = 0;
    virtual bool counterboreDiameter_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* counterboreDepth_raw() const = 0;
    virtual bool counterboreDepth_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* counterboreRadius_raw() const = 0;
    virtual bool counterboreRadius_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* countersinkDiameter_raw() const = 0;
    virtual bool countersinkDiameter_raw(PMIGeometricValue* value) = 0;
    virtual PMIGeometricValue* countersinkAngle_raw() const = 0;
    virtual bool countersinkAngle_raw(PMIGeometricValue* value) = 0;
    virtual bool isHoleAnnotation_raw() const = 0;
    virtual bool isFlipHoleNormal_raw() const = 0;
    virtual bool isFlipHoleNormal_raw(bool value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> PMIHoleThreadNoteInput::faces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMIHoleThreadNoteInput::faces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = faces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool PMIHoleThreadNoteInput::isWantSelectAllMatchingHoles() const
{
    bool res = isWantSelectAllMatchingHoles_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isWantSelectAllMatchingHoles(bool value)
{
    return isWantSelectAllMatchingHoles_raw(value);
}

inline core::Ptr<PMIDisplaySettings> PMIHoleThreadNoteInput::primaryDisplaySettings() const
{
    core::Ptr<PMIDisplaySettings> res = primaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::primaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value)
{
    return primaryDisplaySettings_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::hasSecondaryDisplaySettings() const
{
    bool res = hasSecondaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::hasSecondaryDisplaySettings(bool value)
{
    return hasSecondaryDisplaySettings_raw(value);
}

inline core::Ptr<PMIDisplaySettings> PMIHoleThreadNoteInput::secondaryDisplaySettings() const
{
    core::Ptr<PMIDisplaySettings> res = secondaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::secondaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value)
{
    return secondaryDisplaySettings_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::isWantQuantityNote() const
{
    bool res = isWantQuantityNote_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isWantQuantityNote(bool value)
{
    return isWantQuantityNote_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::diameter() const
{
    core::Ptr<PMIGeometricValue> res = diameter_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::diameter(const core::Ptr<PMIGeometricValue>& value)
{
    return diameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValueTolerance> PMIHoleThreadNoteInput::shaftTolerance() const
{
    core::Ptr<PMIGeometricValueTolerance> res = shaftTolerance_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::shaftTolerance(const core::Ptr<PMIGeometricValueTolerance>& value)
{
    return shaftTolerance_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::isThrough() const
{
    bool res = isThrough_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isThrough(bool value)
{
    return isThrough_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::depth() const
{
    core::Ptr<PMIGeometricValue> res = depth_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::depth(const core::Ptr<PMIGeometricValue>& value)
{
    return depth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::radius() const
{
    core::Ptr<PMIGeometricValue> res = radius_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::radius(const core::Ptr<PMIGeometricValue>& value)
{
    return radius_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::isThreaded() const
{
    bool res = isThreaded_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isThreaded(bool value)
{
    return isThreaded_raw(value);
}

inline core::Ptr<ThreadInfo> PMIHoleThreadNoteInput::threadInfo() const
{
    core::Ptr<ThreadInfo> res = threadInfo_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::threadInfo(const core::Ptr<ThreadInfo>& value)
{
    return threadInfo_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::isThreadedThrough() const
{
    bool res = isThreadedThrough_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isThreadedThrough(bool value)
{
    return isThreadedThrough_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::threadDepth() const
{
    core::Ptr<PMIGeometricValue> res = threadDepth_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::threadDepth(const core::Ptr<PMIGeometricValue>& value)
{
    return threadDepth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::counterboreDiameter() const
{
    core::Ptr<PMIGeometricValue> res = counterboreDiameter_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::counterboreDiameter(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreDiameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::counterboreDepth() const
{
    core::Ptr<PMIGeometricValue> res = counterboreDepth_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::counterboreDepth(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreDepth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::counterboreRadius() const
{
    core::Ptr<PMIGeometricValue> res = counterboreRadius_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::counterboreRadius(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreRadius_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::countersinkDiameter() const
{
    core::Ptr<PMIGeometricValue> res = countersinkDiameter_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::countersinkDiameter(const core::Ptr<PMIGeometricValue>& value)
{
    return countersinkDiameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNoteInput::countersinkAngle() const
{
    core::Ptr<PMIGeometricValue> res = countersinkAngle_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::countersinkAngle(const core::Ptr<PMIGeometricValue>& value)
{
    return countersinkAngle_raw(value.get());
}

inline bool PMIHoleThreadNoteInput::isHoleAnnotation() const
{
    bool res = isHoleAnnotation_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isFlipHoleNormal() const
{
    bool res = isFlipHoleNormal_raw();
    return res;
}

inline bool PMIHoleThreadNoteInput::isFlipHoleNormal(bool value)
{
    return isFlipHoleNormal_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIHOLETHREADNOTEINPUT_API