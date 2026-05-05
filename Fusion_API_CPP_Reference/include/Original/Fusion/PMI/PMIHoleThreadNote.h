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
#include "PMICreatedAnnotation.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIHOLETHREADNOTE_CPP__
# define ADSK_FUSION_PMIHOLETHREADNOTE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIHOLETHREADNOTE_API
# endif
#else
# define ADSK_FUSION_PMIHOLETHREADNOTE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
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
/// Defines a created PMI which includes data corresponding to Hole/Thread Note PMI.
/// Provides access to information such as tolerances, thread information, and units.
class PMIHoleThreadNote : public PMICreatedAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIHoleThreadNote> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIHoleThreadNote> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets whether the Hole/Thread Note PMI should represent all the matching holes in the design.
    /// 
    /// While this can be set to true on existing PMI, it does not always ensures that all matching holes are included.
    /// 
    /// Updating this value will result in the referenced entities being updated to include all matching holes.
    bool isWantSelectAllMatchingHoles() const;
    bool isWantSelectAllMatchingHoles(bool value);

    /// Gets and sets the primary display settings for the Hole/Thread Note PMI.
    /// 
    /// This will always be existent, and includes information about format and units.
    core::Ptr<PMIDisplaySettings> primaryDisplaySettings() const;
    bool primaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value);

    /// Gets and sets whether there are secondary display settings defined for the Hole/Thread Note PMI.
    bool hasSecondaryDisplaySettings() const;
    bool hasSecondaryDisplaySettings(bool value);

    /// Gets and sets the secondary display settings for the Hole/Thread Note PMI.
    /// 
    /// This will not always be existent, based on the hasSecondaryDisplaySettings value.
    /// 
    /// Setting this value will also set hasSecondaryDisplaySettings to true.
    core::Ptr<PMIDisplaySettings> secondaryDisplaySettings() const;
    bool secondaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value);

    /// Indicates if the quantity is visible in the graphics.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isWantQuantityNote() const;
    bool isWantQuantityNote(bool value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the annotated hole or boss in cm.
    /// 
    /// When querying, if the diameter is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
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
    /// 
    /// Setting this to false will result in a default depth set without tolerance.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThrough() const;
    bool isThrough(bool value);

    /// Gets and sets the PMIGeometricValue used to define the depth of the hole in cm. In the case of bosses, it represents the height of the boss.
    /// 
    /// When querying, if the depth is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> depth() const;
    bool depth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the radius of the hole in cm. Not applicable for bosses.
    /// 
    /// When querying, if the radius is not set, the value will be 0 and hasValue property will be false.
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
    /// Setting this to false will result in all thread information being removed.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThreaded() const;
    bool isThreaded(bool value);

    /// Gets and sets the ThreadInfo object associated with the hole/thread note.
    /// 
    /// Returns null if the hole is not threaded.
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<ThreadInfo> threadInfo() const;
    bool threadInfo(const core::Ptr<ThreadInfo>& value);

    /// Gets and sets whether the hole or boss is threaded all the way through.
    /// 
    /// Setting this to true will remove the thread depth information.
    /// 
    /// Updating this value will reset the segments in the PMI.
    bool isThreadedThrough() const;
    bool isThreadedThrough(bool value);

    /// Gets and sets the PMIGeometricValue used to define the thread depth of the hole in cm. In the case of bosses, it represents the thread length of the boss.
    /// 
    /// When querying, if the thread depth is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> threadDepth() const;
    bool threadDepth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When querying, if the counterbore diameter is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreDiameter() const;
    bool counterboreDiameter(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the depth of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When querying, if the counterbore depth is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreDepth() const;
    bool counterboreDepth(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the radius of the counterbore segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When querying, if the counterbore radius is not set, the value will be 0 and hasValue property will be false.
    /// 
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> counterboreRadius() const;
    bool counterboreRadius(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the diameter of the countersink segment of the hole in cm. Not applicable for bosses.
    /// 
    /// When querying, if the countersink diameter is not set, the value will be 0 and hasValue property will be false.
    /// When setting, it is possible to also add tolerances to the object set by setting the tolerance property of the PMIGeometricValue object.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> countersinkDiameter() const;
    bool countersinkDiameter(const core::Ptr<PMIGeometricValue>& value);

    /// Gets and sets the PMIGeometricValue used to define the angle of the countersink segment of the hole in radians. Not applicable for bosses.
    /// 
    /// When querying, if the countersink angle is not set, the value will be 0 and hasValue property will be false.
    /// When setting, this value does not have tolerances, and will not be taken into account.
    /// 
    /// Setting this to an object with "hasValue" set to true and "value" set to 0 will result in the modeled value being set (if such value exists in the model).
    /// 
    /// Updating this value will reset the segments in the PMI.
    core::Ptr<PMIGeometricValue> countersinkAngle() const;
    bool countersinkAngle(const core::Ptr<PMIGeometricValue>& value);

    /// Indicates whether the PMI is representing a hole or a boss.
    bool isHoleAnnotation() const;

    /// Gets the type of the hole.
    HoleTypes holeType() const;

    /// Gets the number of holes/bosses the Hole/Thread Note PMI is associated with.
    int quantity() const;

    /// Gets and sets whether the hole normal should be treated as flipped, resulting in the hole top to be placed at the lowest found face of the hole.
    /// 
    /// This is applicable only to complex holes, in other cases the value is ignored.
    bool isFlipHoleNormal() const;
    bool isFlipHoleNormal(bool value);

    ADSK_FUSION_PMIHOLETHREADNOTE_API static const char* classType();
    ADSK_FUSION_PMIHOLETHREADNOTE_API const char* objectType() const override;
    ADSK_FUSION_PMIHOLETHREADNOTE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIHOLETHREADNOTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIHoleThreadNote* nativeObject_raw() const = 0;
    virtual PMIHoleThreadNote* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
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
    virtual HoleTypes holeType_raw() const = 0;
    virtual int quantity_raw() const = 0;
    virtual bool isFlipHoleNormal_raw() const = 0;
    virtual bool isFlipHoleNormal_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<PMIHoleThreadNote> PMIHoleThreadNote::nativeObject() const
{
    core::Ptr<PMIHoleThreadNote> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIHoleThreadNote> PMIHoleThreadNote::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIHoleThreadNote> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool PMIHoleThreadNote::isWantSelectAllMatchingHoles() const
{
    bool res = isWantSelectAllMatchingHoles_raw();
    return res;
}

inline bool PMIHoleThreadNote::isWantSelectAllMatchingHoles(bool value)
{
    return isWantSelectAllMatchingHoles_raw(value);
}

inline core::Ptr<PMIDisplaySettings> PMIHoleThreadNote::primaryDisplaySettings() const
{
    core::Ptr<PMIDisplaySettings> res = primaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNote::primaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value)
{
    return primaryDisplaySettings_raw(value.get());
}

inline bool PMIHoleThreadNote::hasSecondaryDisplaySettings() const
{
    bool res = hasSecondaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNote::hasSecondaryDisplaySettings(bool value)
{
    return hasSecondaryDisplaySettings_raw(value);
}

inline core::Ptr<PMIDisplaySettings> PMIHoleThreadNote::secondaryDisplaySettings() const
{
    core::Ptr<PMIDisplaySettings> res = secondaryDisplaySettings_raw();
    return res;
}

inline bool PMIHoleThreadNote::secondaryDisplaySettings(const core::Ptr<PMIDisplaySettings>& value)
{
    return secondaryDisplaySettings_raw(value.get());
}

inline bool PMIHoleThreadNote::isWantQuantityNote() const
{
    bool res = isWantQuantityNote_raw();
    return res;
}

inline bool PMIHoleThreadNote::isWantQuantityNote(bool value)
{
    return isWantQuantityNote_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::diameter() const
{
    core::Ptr<PMIGeometricValue> res = diameter_raw();
    return res;
}

inline bool PMIHoleThreadNote::diameter(const core::Ptr<PMIGeometricValue>& value)
{
    return diameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValueTolerance> PMIHoleThreadNote::shaftTolerance() const
{
    core::Ptr<PMIGeometricValueTolerance> res = shaftTolerance_raw();
    return res;
}

inline bool PMIHoleThreadNote::shaftTolerance(const core::Ptr<PMIGeometricValueTolerance>& value)
{
    return shaftTolerance_raw(value.get());
}

inline bool PMIHoleThreadNote::isThrough() const
{
    bool res = isThrough_raw();
    return res;
}

inline bool PMIHoleThreadNote::isThrough(bool value)
{
    return isThrough_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::depth() const
{
    core::Ptr<PMIGeometricValue> res = depth_raw();
    return res;
}

inline bool PMIHoleThreadNote::depth(const core::Ptr<PMIGeometricValue>& value)
{
    return depth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::radius() const
{
    core::Ptr<PMIGeometricValue> res = radius_raw();
    return res;
}

inline bool PMIHoleThreadNote::radius(const core::Ptr<PMIGeometricValue>& value)
{
    return radius_raw(value.get());
}

inline bool PMIHoleThreadNote::isThreaded() const
{
    bool res = isThreaded_raw();
    return res;
}

inline bool PMIHoleThreadNote::isThreaded(bool value)
{
    return isThreaded_raw(value);
}

inline core::Ptr<ThreadInfo> PMIHoleThreadNote::threadInfo() const
{
    core::Ptr<ThreadInfo> res = threadInfo_raw();
    return res;
}

inline bool PMIHoleThreadNote::threadInfo(const core::Ptr<ThreadInfo>& value)
{
    return threadInfo_raw(value.get());
}

inline bool PMIHoleThreadNote::isThreadedThrough() const
{
    bool res = isThreadedThrough_raw();
    return res;
}

inline bool PMIHoleThreadNote::isThreadedThrough(bool value)
{
    return isThreadedThrough_raw(value);
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::threadDepth() const
{
    core::Ptr<PMIGeometricValue> res = threadDepth_raw();
    return res;
}

inline bool PMIHoleThreadNote::threadDepth(const core::Ptr<PMIGeometricValue>& value)
{
    return threadDepth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::counterboreDiameter() const
{
    core::Ptr<PMIGeometricValue> res = counterboreDiameter_raw();
    return res;
}

inline bool PMIHoleThreadNote::counterboreDiameter(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreDiameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::counterboreDepth() const
{
    core::Ptr<PMIGeometricValue> res = counterboreDepth_raw();
    return res;
}

inline bool PMIHoleThreadNote::counterboreDepth(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreDepth_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::counterboreRadius() const
{
    core::Ptr<PMIGeometricValue> res = counterboreRadius_raw();
    return res;
}

inline bool PMIHoleThreadNote::counterboreRadius(const core::Ptr<PMIGeometricValue>& value)
{
    return counterboreRadius_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::countersinkDiameter() const
{
    core::Ptr<PMIGeometricValue> res = countersinkDiameter_raw();
    return res;
}

inline bool PMIHoleThreadNote::countersinkDiameter(const core::Ptr<PMIGeometricValue>& value)
{
    return countersinkDiameter_raw(value.get());
}

inline core::Ptr<PMIGeometricValue> PMIHoleThreadNote::countersinkAngle() const
{
    core::Ptr<PMIGeometricValue> res = countersinkAngle_raw();
    return res;
}

inline bool PMIHoleThreadNote::countersinkAngle(const core::Ptr<PMIGeometricValue>& value)
{
    return countersinkAngle_raw(value.get());
}

inline bool PMIHoleThreadNote::isHoleAnnotation() const
{
    bool res = isHoleAnnotation_raw();
    return res;
}

inline HoleTypes PMIHoleThreadNote::holeType() const
{
    HoleTypes res = holeType_raw();
    return res;
}

inline int PMIHoleThreadNote::quantity() const
{
    int res = quantity_raw();
    return res;
}

inline bool PMIHoleThreadNote::isFlipHoleNormal() const
{
    bool res = isFlipHoleNormal_raw();
    return res;
}

inline bool PMIHoleThreadNote::isFlipHoleNormal(bool value)
{
    return isFlipHoleNormal_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIHOLETHREADNOTE_API