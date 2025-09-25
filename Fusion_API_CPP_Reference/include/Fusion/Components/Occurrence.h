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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OCCURRENCE_CPP__
# define ADSK_FUSION_OCCURRENCE_API XI_EXPORT
# else
# define ADSK_FUSION_OCCURRENCE_API
# endif
#else
# define ADSK_FUSION_OCCURRENCE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
    class Attributes;
    class BoundingBox3D;
    class DataComponent;
    class DataFile;
    class DocumentReference;
    class Matrix3D;
    class OrientedBoundingBox3D;
}}
namespace adsk { namespace fusion {
    class AsBuiltJointList;
    class BRepBodies;
    class Component;
    class ConfigurationRow;
    class JointList;
    class OccurrenceList;
    class PhysicalProperties;
    class RigidGroupList;
    class TimelineObject;
}}

namespace adsk { namespace fusion {

/// Represents an occurrence of a component at any level within a subassembly.
class Occurrence : public core::Base {
public:

    /// This is the sourceComponent for the occurrence and is affected
    /// by the assembly context.
    /// This is the top-level component where the path begins.
    core::Ptr<Component> sourceComponent() const;

    /// Returns a read only list of child occurrences where only the occurrences
    /// in this occurrence's AssemblyContext are returned .
    core::Ptr<OccurrenceList> childOccurrences() const;

    /// The component this occurrence references.
    core::Ptr<Component> component() const;

    /// The name of the occurrence. This is the name as seen in the browser. It is a reflection
    /// of the component name with an added counter suffix (i.e. 'OccurrenceName:1').
    std::string name() const;

    /// The name of the occurrence, including the full path of occurrences as seen in the browser.
    /// The top-level component will depend on the context but will typically be the root component
    /// of the design. A name for an occurrence that is at the third level of an assembly could be
    /// "Sub1:1+Sub2:1+PartA:1".
    std::string fullPathName() const;

    /// Read-write property that gets and sets the appearance override for this occurrence.
    /// This property can return null indicating there is no override appearance and that the
    /// contents of the occurrence are displayed using there defined appearance.
    /// Setting the property to null will remove any override appearance for this occurrence.
    core::Ptr<core::Appearance> appearance() const;
    bool appearance(const core::Ptr<core::Appearance>& value);

    /// Gets and sets if the light bulb of this occurrence as displayed in the browser is on or off.
    /// An occurrence will only be visible if the light bulb is switched on. However,
    /// the light bulb can be on and the occurrence still invisible if a higher level occurrence
    /// in the assembly context is not visible because its light bulb is off.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets whether the occurrence is visible.
    /// This property is affected by the assembly context.
    bool isVisible() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the 3d matrix data that defines this occurrences orientation and
    /// position in its assembly context.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// Deletes the occurrence from the design. If this is the last occurrence
    /// referencing a specific Component, the component is also deleted.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Returns the timeline object associated with the creation of this occurrence.
    core::Ptr<TimelineObject> timelineObject() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// references the component the object is defined within.
    /// Returns null in the case where the object is not in the context of an assembly
    /// but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    /// The return type is strongly typed for each object.
    core::Ptr<Occurrence> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// Fails if this object is not the NativeObject.
    /// occurrence : The occurrence that represents the context you want to create this proxy in.
    /// Returns the proxy for the occurrence in the context of the specified occurrence.
    /// Returns null if it failed.
    core::Ptr<Occurrence> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets whether this occurrence is pinned or not.
    bool isGrounded() const;
    bool isGrounded(bool value);

    /// Gets and sets whether this occurrence is selectable or not.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Gets and sets whether this occurrence is isolated in the UI. When an occurrence
    /// is isolated it is the only one visible in the user-interface. Only one occurrence
    /// can be isolated at a time so setting this property to true will un-isolate an occurrence
    /// that is currently isolated. Setting this property to false for an occurrence that is
    /// current isolated will un-isolate it so that no occurrence will be isolated.
    bool isIsolated() const;
    bool isIsolated(bool value);

    /// Gets whether this occurrence is the active edit target in the user interface.
    /// This is the same as checking the state of the radio button next to the occurrence in the browser.
    /// To activate the occurrence use the Activate method.
    bool isActive() const;

    /// Makes the occurrence the active edit target in the user interface. This is the same
    /// as enabling the radio button next to the occurrence in the browser.
    /// Returns true if the activation was successful.
    bool activate();

    /// Moves this occurrence from it's current component into the component owned by the specified occurrence.
    /// This occurrence and the target occurrence must be in the same context.
    /// targetOccurrence : The target occurrence defines both the component and the transform to apply when moving the occurrence. The
    /// occurrence will be copied into the parent component of the target occurrence and the target occurrence also defines
    /// the transform of how the occurrence will be copied so that the occurrence maintains it's same position in model space.
    /// Returns the moved Occurrence or null in the case the move failed.
    core::Ptr<Occurrence> moveToComponent(const core::Ptr<Occurrence>& targetOccurrence);

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc
    /// of this occurrence. Property values will be calculated using the 'LowCalculationAccuracy' setting when using this property
    /// to get the PhysicalProperties object. To specify a higher calculation tolerance, use the getPhysicalProperties method instead.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> physicalProperties() const;

    /// Gets if this occurrence is referencing an external component.
    bool isReferencedComponent() const;

    /// Returns the bounding box of this occurrence.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns the joints that affect the position of this occurrence. For example, if a joint has
    /// been created between this occurrence and another occurrence, this property will return that
    /// joint. If the occurrence is a proxy, the joints returned will also be proxies in the same
    /// context as the occurrence.
    core::Ptr<JointList> joints() const;

    /// Returns the rigid groups that this occurrence is a member of. If the occurrence is a proxy,
    /// the joints returned will also be proxies in the same context as the occurrence.
    core::Ptr<RigidGroupList> rigidGroups() const;

    /// Returns the as-built joints that affect the position of this occurrence. If the occurrence is a proxy,
    /// the as-built joints returned will also be proxies in the same context as the occurrence.
    core::Ptr<AsBuiltJointList> asBuiltJoints() const;

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns the body proxies for the B-Rep bodies in the component referenced by this occurrence.
    /// For example if you get the occurrences from the root component and then use this property to
    /// get the bodies from those occurrences, the bodies returned will return information in the context of the root
    /// component, not the component they actually exist in.
    core::Ptr<BRepBodies> bRepBodies() const;

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc
    /// of this occurrence.
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> getPhysicalProperties(CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// The user can set an override opacity for components and these opacity overrides combine if
    /// children and parent components have overrides. This property returns the actual opacity that is
    /// being used to render the occurrence. To set the opacity use the opacity property of the Component object.
    double visibleOpacity() const;

    /// When the component this occurrence references is an external reference (the isReferencedComponent property returns true),
    /// this will break the link and create a local Component that this occurrence will reference. The new local Component can
    /// be accessed through the Occurrence using the component property.
    /// 
    /// This method will fail if the occurrence is not referencing an external component.
    /// Returns true if the break link was successful.
    bool breakLink();

    /// Returns a token for the Occurrence object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same occurrence.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Gets and sets the 3d matrix data that defines this occurrences orientation and
    /// position in its assembly context. This property replaces the transform property, which
    /// has been retired because there are cases where it returns the incorrect results.
    core::Ptr<core::Matrix3D> transform2() const;
    bool transform2(const core::Ptr<core::Matrix3D>& value);

    /// When the component this occurrence references is an external reference (the isReferencedComponent property returns true),
    /// this will return the object that represents that reference. Through the DocumentReference object you can modify
    /// the version and get other information associated with the reference.
    /// 
    /// This property will fail if the occurrence is not referencing an external component.
    core::Ptr<core::DocumentReference> documentReference() const;

    /// Replaces this occurrence or all occurrences that reference the same external component with a new component.
    /// 
    /// This method will fail if the occurrence is not referencing an external component.
    /// newFile : Specifies the DataFile you want to use as the replacement. The DataFile specified
    /// must exist in the same hub as the parent assembly.
    /// replaceAll : Indicates if you want to replace only this single occurrence or all occurrences that reference
    /// the same external design.
    /// Returns true if the replacement was successful.
    bool replace(const core::Ptr<core::DataFile>& newFile, bool replaceAll);

    /// Returns the bounding box of the specified entity types within the occurrence.
    /// entityTypes : Bitwise value that specifies the types of entities to include in the
    /// calculation of the bounding box.
    /// Returns a BoundingBox3D object if the calculation was successful and null in the case where there is no valid geometry and the bounding box is empty.
    core::Ptr<core::BoundingBox3D> boundingBox2(BoundingBoxEntityTypes entityTypes);

    /// Returns a bounding box that tightly fits around all B-Rep bodies in the occurrence.
    /// All other geometry types are ignored.
    core::Ptr<core::BoundingBox3D> preciseBoundingBox() const;

    /// Returns an oriented bounding box that is best oriented to tightly fit all B-Rep bodies in the occurrence.
    /// All other geometry types are ignored.
    core::Ptr<core::OrientedBoundingBox3D> orientedMinimumBoundingBox() const;

    /// Returns if this occurrence represents a configuration or not. If true, you can access
    /// the full configuration from the parent component.
    bool isConfiguration() const;

    /// Changes which configuration is used for this occurrence. Use the isConfiguration property
    /// to determine if this occurrence references a configuration.
    /// newRow : The row to switch to. This row must be from the same ConfigurationTopTable as the current row. You
    /// can access the table from the parent design.
    /// Returns true if the switch was successful.
    bool switchConfiguration(const core::Ptr<ConfigurationRow>& newRow);

    /// If this occurrence is a configuration, this property returns the row that defines it. If it isn't
    /// a configuration, null is returned.
    core::Ptr<ConfigurationRow> configurationRow() const;

    /// Returns the DataFile object that represents the specific version of the design used by this occurrence.
    /// From the DataFile you can access other version of the file, most importantly, you can access the latest
    /// version and get the top configuration table from it.
    core::Ptr<core::DataFile> configuredDataFile() const;

    /// Gets and sets whether this occurrence is grounded to parent or not.
    bool isGroundToParent() const;
    bool isGroundToParent(bool value);

    /// Gets and sets the initial position of the occurrence.
    /// Setting the initial transform is not valid for all occurrences. For instance, this operation could fail if the occurrence is created by a pattern among other cases.
    /// To determine if setting the initial transform is possible, use the isValidForEditInitialPosition property.
    /// If this property returns false, attempting to set the initial transform will result in failure.
    core::Ptr<core::Matrix3D> initialTransform() const;
    bool initialTransform(const core::Ptr<core::Matrix3D>& value);

    /// Gets whether this occurrence is valid for edit initial position.
    bool isVaildForEditInitialPosition() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the DataComponent for the target component in the source component's document.
    /// This only applies for Occurrence's with an assembly context whose source component
    /// is a top level opened design.
    core::Ptr<core::DataComponent> dataComponent() const;

    ADSK_FUSION_OCCURRENCE_API static const char* classType();
    ADSK_FUSION_OCCURRENCE_API const char* objectType() const override;
    ADSK_FUSION_OCCURRENCE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OCCURRENCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* sourceComponent_raw() const = 0;
    virtual OccurrenceList* childOccurrences_raw() const = 0;
    virtual Component* component_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* fullPathName_raw() const = 0;
    virtual core::Appearance* appearance_raw() const = 0;
    virtual bool appearance_raw(core::Appearance* value) = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual TimelineObject* timelineObject_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual Occurrence* nativeObject_raw() const = 0;
    virtual Occurrence* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual bool isGrounded_raw() const = 0;
    virtual bool isGrounded_raw(bool value) = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual bool isIsolated_raw() const = 0;
    virtual bool isIsolated_raw(bool value) = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual Occurrence* moveToComponent_raw(Occurrence* targetOccurrence) = 0;
    virtual PhysicalProperties* physicalProperties_raw() const = 0;
    virtual bool isReferencedComponent_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual JointList* joints_raw() const = 0;
    virtual RigidGroupList* rigidGroups_raw() const = 0;
    virtual AsBuiltJointList* asBuiltJoints_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual BRepBodies* bRepBodies_raw() const = 0;
    virtual PhysicalProperties* getPhysicalProperties_raw(CalculationAccuracy accuracy) const = 0;
    virtual double visibleOpacity_raw() const = 0;
    virtual bool breakLink_raw() = 0;
    virtual char* entityToken_raw() const = 0;
    virtual core::Matrix3D* transform2_raw() const = 0;
    virtual bool transform2_raw(core::Matrix3D* value) = 0;
    virtual core::DocumentReference* documentReference_raw() const = 0;
    virtual bool replace_raw(core::DataFile* newFile, bool replaceAll) = 0;
    virtual core::BoundingBox3D* boundingBox2_raw(BoundingBoxEntityTypes entityTypes) = 0;
    virtual core::BoundingBox3D* preciseBoundingBox_raw() const = 0;
    virtual core::OrientedBoundingBox3D* orientedMinimumBoundingBox_raw() const = 0;
    virtual bool isConfiguration_raw() const = 0;
    virtual bool switchConfiguration_raw(ConfigurationRow* newRow) = 0;
    virtual ConfigurationRow* configurationRow_raw() const = 0;
    virtual core::DataFile* configuredDataFile_raw() const = 0;
    virtual bool isGroundToParent_raw() const = 0;
    virtual bool isGroundToParent_raw(bool value) = 0;
    virtual core::Matrix3D* initialTransform_raw() const = 0;
    virtual bool initialTransform_raw(core::Matrix3D* value) = 0;
    virtual bool isVaildForEditInitialPosition_raw() const = 0;
    virtual core::DataComponent* dataComponent_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> Occurrence::sourceComponent() const
{
    core::Ptr<Component> res = sourceComponent_raw();
    return res;
}

inline core::Ptr<OccurrenceList> Occurrence::childOccurrences() const
{
    core::Ptr<OccurrenceList> res = childOccurrences_raw();
    return res;
}

inline core::Ptr<Component> Occurrence::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline std::string Occurrence::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Occurrence::fullPathName() const
{
    std::string res;

    char* p= fullPathName_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Appearance> Occurrence::appearance() const
{
    core::Ptr<core::Appearance> res = appearance_raw();
    return res;
}

inline bool Occurrence::appearance(const core::Ptr<core::Appearance>& value)
{
    return appearance_raw(value.get());
}

inline bool Occurrence::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool Occurrence::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool Occurrence::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> Occurrence::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool Occurrence::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline bool Occurrence::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline core::Ptr<TimelineObject> Occurrence::timelineObject() const
{
    core::Ptr<TimelineObject> res = timelineObject_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrence::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrence::nativeObject() const
{
    core::Ptr<Occurrence> res = nativeObject_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrence::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<Occurrence> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline bool Occurrence::isGrounded() const
{
    bool res = isGrounded_raw();
    return res;
}

inline bool Occurrence::isGrounded(bool value)
{
    return isGrounded_raw(value);
}

inline bool Occurrence::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool Occurrence::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline bool Occurrence::isIsolated() const
{
    bool res = isIsolated_raw();
    return res;
}

inline bool Occurrence::isIsolated(bool value)
{
    return isIsolated_raw(value);
}

inline bool Occurrence::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool Occurrence::activate()
{
    bool res = activate_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrence::moveToComponent(const core::Ptr<Occurrence>& targetOccurrence)
{
    core::Ptr<Occurrence> res = moveToComponent_raw(targetOccurrence.get());
    return res;
}

inline core::Ptr<PhysicalProperties> Occurrence::physicalProperties() const
{
    core::Ptr<PhysicalProperties> res = physicalProperties_raw();
    return res;
}

inline bool Occurrence::isReferencedComponent() const
{
    bool res = isReferencedComponent_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> Occurrence::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<JointList> Occurrence::joints() const
{
    core::Ptr<JointList> res = joints_raw();
    return res;
}

inline core::Ptr<RigidGroupList> Occurrence::rigidGroups() const
{
    core::Ptr<RigidGroupList> res = rigidGroups_raw();
    return res;
}

inline core::Ptr<AsBuiltJointList> Occurrence::asBuiltJoints() const
{
    core::Ptr<AsBuiltJointList> res = asBuiltJoints_raw();
    return res;
}

inline core::Ptr<core::Attributes> Occurrence::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline core::Ptr<BRepBodies> Occurrence::bRepBodies() const
{
    core::Ptr<BRepBodies> res = bRepBodies_raw();
    return res;
}

inline core::Ptr<PhysicalProperties> Occurrence::getPhysicalProperties(CalculationAccuracy accuracy) const
{
    core::Ptr<PhysicalProperties> res = getPhysicalProperties_raw(accuracy);
    return res;
}

inline double Occurrence::visibleOpacity() const
{
    double res = visibleOpacity_raw();
    return res;
}

inline bool Occurrence::breakLink()
{
    bool res = breakLink_raw();
    return res;
}

inline std::string Occurrence::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Matrix3D> Occurrence::transform2() const
{
    core::Ptr<core::Matrix3D> res = transform2_raw();
    return res;
}

inline bool Occurrence::transform2(const core::Ptr<core::Matrix3D>& value)
{
    return transform2_raw(value.get());
}

inline core::Ptr<core::DocumentReference> Occurrence::documentReference() const
{
    core::Ptr<core::DocumentReference> res = documentReference_raw();
    return res;
}

inline bool Occurrence::replace(const core::Ptr<core::DataFile>& newFile, bool replaceAll)
{
    bool res = replace_raw(newFile.get(), replaceAll);
    return res;
}

inline core::Ptr<core::BoundingBox3D> Occurrence::boundingBox2(BoundingBoxEntityTypes entityTypes)
{
    core::Ptr<core::BoundingBox3D> res = boundingBox2_raw(entityTypes);
    return res;
}

inline core::Ptr<core::BoundingBox3D> Occurrence::preciseBoundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = preciseBoundingBox_raw();
    return res;
}

inline core::Ptr<core::OrientedBoundingBox3D> Occurrence::orientedMinimumBoundingBox() const
{
    core::Ptr<core::OrientedBoundingBox3D> res = orientedMinimumBoundingBox_raw();
    return res;
}

inline bool Occurrence::isConfiguration() const
{
    bool res = isConfiguration_raw();
    return res;
}

inline bool Occurrence::switchConfiguration(const core::Ptr<ConfigurationRow>& newRow)
{
    bool res = switchConfiguration_raw(newRow.get());
    return res;
}

inline core::Ptr<ConfigurationRow> Occurrence::configurationRow() const
{
    core::Ptr<ConfigurationRow> res = configurationRow_raw();
    return res;
}

inline core::Ptr<core::DataFile> Occurrence::configuredDataFile() const
{
    core::Ptr<core::DataFile> res = configuredDataFile_raw();
    return res;
}

inline bool Occurrence::isGroundToParent() const
{
    bool res = isGroundToParent_raw();
    return res;
}

inline bool Occurrence::isGroundToParent(bool value)
{
    return isGroundToParent_raw(value);
}

inline core::Ptr<core::Matrix3D> Occurrence::initialTransform() const
{
    core::Ptr<core::Matrix3D> res = initialTransform_raw();
    return res;
}

inline bool Occurrence::initialTransform(const core::Ptr<core::Matrix3D>& value)
{
    return initialTransform_raw(value.get());
}

inline bool Occurrence::isVaildForEditInitialPosition() const
{
    bool res = isVaildForEditInitialPosition_raw();
    return res;
}

inline core::Ptr<core::DataComponent> Occurrence::dataComponent() const
{
    core::Ptr<core::DataComponent> res = dataComponent_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OCCURRENCE_API