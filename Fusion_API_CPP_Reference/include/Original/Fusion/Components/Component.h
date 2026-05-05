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
#include "BaseComponent.h"
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_COMPONENT_CPP__
# define ADSK_FUSION_COMPONENT_API XI_EXPORT
# else
# define ADSK_FUSION_COMPONENT_API
# endif
#else
# define ADSK_FUSION_COMPONENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class BoundingBox3D;
    class Color;
    class DataFileFuture;
    class DataFolder;
    class DataObject;
    class Material;
    class Matrix3D;
    class OrientedBoundingBox3D;
}}
namespace adsk { namespace fusion {
    class AsBuiltJoint;
    class AsBuiltJoints;
    class AssemblyConstraint;
    class AssemblyConstraints;
    class BRepFace;
    class ConstructionAxis;
    class ConstructionPlane;
    class ConstructionPoint;
    class CustomGraphicsGroups;
    class Features;
    class FlatPattern;
    class Joint;
    class JointOrigin;
    class JointOrigins;
    class Joints;
    class MeshBodies;
    class ModelParameters;
    class MotionLinks;
    class Occurrence;
    class PhysicalProperties;
    class Profile;
    class RigidGroup;
    class RigidGroups;
    class SheetMetalRule;
    class Sketches;
    class TangentRelationship;
    class TangentRelationships;
}}

namespace adsk { namespace fusion {

/// Represents a component in the data model.
/// A component represents a set of geometry, features, and parameters that make up an item in the design.
/// A component can be referenced multiple times into a design with an Occurrence object.
class Component : public BaseComponent {
public:

    /// Returns the sketches collection associated with this component.
    /// This provides access to the existing sketches and supports
    /// the creation of new sketches.
    core::Ptr<Sketches> sketches() const;

    /// Returns the collection that provides access to all of the features
    /// associated with this component.
    core::Ptr<Features> features() const;

    /// Returns the mesh bodies collection associated with this component.
    core::Ptr<MeshBodies> meshBodies() const;

    /// Returns the collection of model parameters in the Component.
    core::Ptr<ModelParameters> modelParameters() const;

    /// Gets and sets if the light bulb of the origin folder as seen in the browser is on or off.
    /// This controls the visibility of the origin construction geometry.
    bool isOriginFolderLightBulbOn() const;
    bool isOriginFolderLightBulbOn(bool value);

    /// Gets and sets if the light bulb of the construction folder as seen in the browser is on or off.
    /// This controls the visibility of the (non-origin) construction geometry
    /// (i.e. planes, points, axes).
    bool isConstructionFolderLightBulbOn() const;
    bool isConstructionFolderLightBulbOn(bool value);

    /// Gets and sets if the light bulb of the sketch folder as seen in the browser is on or off.
    /// This controls the visibility of the sketches in this component.
    bool isSketchFolderLightBulbOn() const;
    bool isSketchFolderLightBulbOn(bool value);

    /// Returns the XY origin construction plane.
    core::Ptr<ConstructionPlane> xYConstructionPlane() const;

    /// Returns the XZ origin construction plane.
    core::Ptr<ConstructionPlane> xZConstructionPlane() const;

    /// Returns the YZ origin construction plane.
    core::Ptr<ConstructionPlane> yZConstructionPlane() const;

    /// Returns the X origin construction axis.
    core::Ptr<ConstructionAxis> xConstructionAxis() const;

    /// Returns the Y origin construction axis.
    core::Ptr<ConstructionAxis> yConstructionAxis() const;

    /// Returns the Z origin construction axis.
    core::Ptr<ConstructionAxis> zConstructionAxis() const;

    /// Returns the origin construction point.
    core::Ptr<ConstructionPoint> originConstructionPoint() const;

    /// Gets and sets the part number associated with this component. Setting this
    /// to an empty string will reset it to be the same as the component name.
    std::string partNumber() const;
    bool partNumber(const std::string& value);

    /// Gets and sets the description associated with this component.
    std::string description() const;
    bool description(const std::string& value);

    /// Creates an open profile based on the input curve(s).
    /// curves : A SketchCurve or an ObjectCollection containing multiple sketch entities. If a single sketch curve
    /// is input the chainCurves argument is checked to determine if connected curves (they do not need to be tangent)
    /// should be automatically found. If multiple curves are provided the chainCurves argument is always
    /// treated as false so you must provide all of the curves in the object collection that you want included in the profile.
    /// The provided curves must all connect together in a single path.
    /// 
    /// The input curves do not need to be in the same sketch, but they do need to geometrically connect for
    /// a valid profile to be created.
    /// chainCurves : If true, this finds any curves within the same sketch that connect to the single input curve and automatically includes them in the profile. If
    /// false, only the curves provided will be used to define the profile. This argument is ignored and treated as false if multiple curves are input.
    /// Returns the new Profile object or null in the case of a failure.
    core::Ptr<Profile> createOpenProfile(const core::Ptr<core::Base>& curves, bool chainCurves = true);

    /// Creates a profile based on the outside open edges of a BRepFace.
    /// edges : A single BRepEdge object or an ObjectCollection containing multiple BRepEdge objects, or a BRepLoop object. If a single edge
    /// is input, the chainEdges argument is checked to determine if connected edges (they do not need to be tangent)
    /// should be automatically found. If multiple edges are provided the chainEdges argument is always
    /// treated as false so you must provide all of the edges in the object collection that you want included in the profile.
    /// and the edges must all connect together in a single path. if a BRepLoop object is provided, all of the edges in the loop
    /// are included in the profile and the chainEdges argument is ignored.
    /// chainEdges : If true, this finds any edges that connect to the single input edge and automatically includes them in the profile. If
    /// false, only the edges provided will be used to define the profile. This argument is ignored and treated as false if multiple edges
    /// or a BRepLoop is input.
    /// Returns the new Profile object or null in the case of a failure.
    core::Ptr<Profile> createBRepEdgeProfile(const core::Ptr<core::Base>& edges, bool chainEdges = true);

    /// Returns the collection of joints associated with this component.
    core::Ptr<Joints> joints() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// This property was incorrectly spelled and has been replaced with the JointOrigins property.
    /// However, this needs to remain in the implementation to continue to support programs that
    /// already used it, but it will be hidden in the documentation.
    core::Ptr<JointOrigins> jointOrgins() const;

    /// Returns the collection of as-built joints associated with this component.
    core::Ptr<AsBuiltJoints> asBuiltJoints() const;

    /// Returns the collection of rigid groups associated with this component.
    core::Ptr<RigidGroups> rigidGroups() const;

    /// Gets and sets the physical material assigned to this component.
    core::Ptr<core::Material> material() const;
    bool material(const core::Ptr<core::Material>& value);

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc.
    /// of this component. Property values will be calculated using the 'LowCalculationAccuracy' setting when using this property
    /// to get the PhysicalProperties object. To specify a higher calculation tolerance, use the getPhysicalProperties method instead.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> physicalProperties() const;

    /// Performs a Save Copy As on this component. This saves the specified component as a new document
    /// in the specified location.
    /// name : The name to use for the new document. If this is an empty string, Fusion will use the
    /// name of the component being saved.
    /// dataFolder : The data folder to save the new document to.
    /// description : The description string of the document. This can be an empty string.
    /// tag : The tag string of the document. This can be an empty string.
    /// Returns a DataFileFuture object that can be used to track the progress of the upload and get the
    /// resulting DataFile once it's available on A360.
    core::Ptr<core::DataFileFuture> saveCopyAs(const std::string& name, const core::Ptr<core::DataFolder>& dataFolder, const std::string& description, const std::string& tag) const;

    /// Returns the bounding box of this component. This is always in world space of the component.
    /// The boundingBox2 method provides greater control over which types of entities you want
    /// included in the bounding box calculation.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Gets and sets if the light bulb of the joints folder as seen in the browser is on or off.
    /// This controls the visibility of the joints in this occurrence. The light bulb for the
    /// folder is component specific and will turn off the joints for all occurrences referencing
    /// the component.
    bool isJointsFolderLightBulbOn() const;
    bool isJointsFolderLightBulbOn(bool value);

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// Gets and sets if the light bulb of the bodies folder as seen in the browser is on or off.
    /// This controls the visibility of the solid/surface bodies and the mesh bodies in this component.
    bool isBodiesFolderLightBulbOn() const;
    bool isBodiesFolderLightBulbOn(bool value);

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc.
    /// of this component.
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> getPhysicalProperties(CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// Transforms a set of occurrences in one step. This provides better performance than transforming them one at a time.
    /// This method is only valid when called on the root component because Fusion flattens the entire assembly structure
    /// when manipulating the assembly so all transforms are relative to the root component.
    /// occurrences : An array of Occurrence objects that you want to transform. These must all be in the context of the root component which
    /// means proxies must be used for occurrences that are in sub-components.
    /// transforms : An array of Matrix3D objects that defines the transform to apply to each occurrence. This array must be the same size
    /// as the array provided for the occurrences argument and the transform will be applied to the occurrence at the same index
    /// in the occurrences array.
    /// ignoreJoints : Specifies if the joints are to be ignored and the occurrences are to be positioned based on then specified transform or if
    /// the joints should be used and the occurrence is transformed the best it can while still honoring the joints.
    /// Returns true if the transform was successful.
    bool transformOccurrences(const std::vector<core::Ptr<Occurrence>>& occurrences, const std::vector<core::Ptr<core::Matrix3D>>& transforms, bool ignoreJoints);

    /// Returns all joints in this component and any sub components. The joints returned are all in the context
    /// of this component so any joints in sub components will be proxies. This is primarily useful when used
    /// from the root component because Fusion flattens the assembly structure, including joints, when manipulating
    /// an assembly.
    std::vector<core::Ptr<Joint>> allJoints() const;

    /// Returns all joint origins in this component and any sub components. The joint origins returned are all in the context
    /// of this component so any joint origins in sub components will be proxies. This is primarily useful when used
    /// from the root component because Fusion flattens the assembly structure, including joint origins, when manipulating
    /// an assembly.
    std::vector<core::Ptr<AsBuiltJoint>> allAsBuiltJoints() const;

    /// Returns all as-built joints in this component and any sub components. The as-built joints returned are all in the context
    /// of this component so any as-built joints in sub components will be proxies. This is primarily useful when used
    /// from the root component because Fusion flattens the assembly structure, including as-built joints, when manipulating
    /// an assembly.
    std::vector<core::Ptr<JointOrigin>> allJointOrigins() const;

    /// Returns all rigid groups in this component and any sub components. The rigid groups returned are all in the context
    /// of this component so any rigid groups in sub components will be proxies. This is primarily useful when used
    /// from the root component because Fusion flattens the assembly structure, including rigid groups, when manipulating
    /// an assembly.
    std::vector<core::Ptr<RigidGroup>> allRigidGroups() const;

    /// Gets and sets the opacity override assigned to this component. A value of 1.0 specifies
    /// that is it completely opaque and a value of 0.0 specifies that is it completely transparent.
    /// 
    /// This is only applicable for a non-root local component.
    /// 
    /// This value is not necessarily related to what the user sees because the opacity is inherited.
    /// For example, if you have TopComponent and it has a component in it called SubComponent and you
    /// set the opacity of TopComponent to be 0.5, SubComponent will also be shown as slightly transparent
    /// even though the opacity property for it will return 1.0. Because a component can be referenced as
    /// an occurrence in other components and they can have different opacity settings, it's possible that
    /// different instances of the same component can display using different opacity levels. To get the
    /// opacity that it is being displayed with use the Occurrence.visibleOpacity property.
    double opacity() const;
    bool opacity(double value);

    /// Returns the collection of joint origins associated with this component.
    core::Ptr<JointOrigins> jointOrigins() const;

    /// Returns the customGraphicsGroups object in this component.
    core::Ptr<CustomGraphicsGroups> customGraphicsGroups() const;

    /// Returns the current revision ID of the component. This ID changes any time the component is modified in any way. By getting
    /// and saving the ID when you create any data that is dependent on the component, you can then compare the saved
    /// ID with the current ID to determine if the component has changed to know if you should update your data.
    std::string revisionId() const;

    /// Returns a token for the Component object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same component.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns the persistent ID of the component. This ID is created with the component and does not change.
    /// Because this ID does not change, different revisions of the same design or copies of the design asset/file
    /// will retain this ID. If components from different designs have the same ID, it indicates they are either
    /// different revisions or a copy of the design was made. Therefore, this ID will always be unique within a
    /// single design, but may not be unique in an assembly where externally referenced designs include different
    /// revisions or copies of a design.
    /// 
    /// The ID is also the same ID used by PIM (Product Information Model).
    std::string id() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns all tangent relationships in this component and any sub components. The tangent relationships returned are all
    /// in the context of this component so any tangent relationships in sub components will be proxies. This is primarily useful when used
    /// from the root component because Fusion flattens the assembly structure, including tangent relationships, when manipulating
    /// an assembly.
    std::vector<core::Ptr<TangentRelationship>> allTangentRelationships() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the collection of tangent relationships associated with this component.
    core::Ptr<TangentRelationships> tangentRelationships() const;

    /// Gets the existing flat pattern or returns null in the case where a flat pattern doesn't exist in this component.
    core::Ptr<FlatPattern> flatPattern() const;

    /// Creates a flat pattern of the sheet metal folded body. The isSheetMetal property of the BRepBody object can be
    /// used to determine if a particular body can be flattened. Creating a flat pattern will fail if a flat pattern already exists in the
    /// component. You can determine if a flat pattern already exists by checking if the flatPattern property returns a FlatPattern object
    /// or null.
    /// stationaryFace : A planar face in the sheet metal body that is on the top or bottom of the part and not an edge face. This face will
    /// be positioned on the X-Y plane of the flat pattern and the rest of the model will be flattened relative to this face.
    /// The face must exist on a body that is owned by this component.
    /// Returns the newly created flat pattern.
    core::Ptr<FlatPattern> createFlatPattern(const core::Ptr<BRepFace>& stationaryFace);

    /// Gets and sets the active sheet metal rule. This can return null in the case where
    /// the component has never contained any sheet metal related data.
    core::Ptr<SheetMetalRule> activeSheetMetalRule() const;
    bool activeSheetMetalRule(const core::Ptr<SheetMetalRule>& value);

    /// Gets and sets if the light bulb of the canvas folder as seen in the browser is on or off.
    /// This controls the visibility of all the canvases in the component.
    bool isCanvasFolderLightBulbOn() const;
    bool isCanvasFolderLightBulbOn(bool value);

    /// Gets whether the component was created from a fasteners library item."
    bool isLibraryItem() const;

    /// Returns the bounding box of the specified entity types within the component.
    /// entityTypes : Bitwise value that specifies the types of entities to include in the
    /// calculation of the bounding box.
    /// Returns a BoundingBox3D object if the calculation was successful and null in the case where there is no valid geometry and the bounding box is empty.
    core::Ptr<core::BoundingBox3D> boundingBox2(BoundingBoxEntityTypes entityTypes);

    /// Returns a bounding box that tightly fits around all B-Rep bodies in the component.
    /// All other geometry types are ignored.
    core::Ptr<core::BoundingBox3D> preciseBoundingBox() const;

    /// Returns an oriented bounding box that is best oriented to tightly fit all B-Rep bodies in the component.
    /// All other geometry types are ignored.
    core::Ptr<core::OrientedBoundingBox3D> orientedMinimumBoundingBox() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Runs an internal command with a set of arguments, returning a string result.
    /// The format of the output string is defined by the command that is called.
    std::string internalCommand(const std::string& commandName, const std::vector<std::string>& commandArgs);

    /// Gets and sets the color associated with a component. This color is only used when the
    /// "Display Component Colors" command is enabled. Enabling the display of component colors
    /// is done through the command or API using the Application.isComponentColorsDisplayed property.
    /// When this is on, all bodies in a component will display using the color assigned to the component.
    /// Fusion randomly assigns a color to a component when it is created. This property allows you to
    /// get and change the assigned default color. Setting this property to null results in a new
    /// color being randomly assigned by Fusion. This is the equivalent of the "Cycle Component Color"
    /// command available in the context menu of a component.
    core::Ptr<core::Color> componentColor() const;
    bool componentColor(const core::Ptr<core::Color>& value);

    /// Gets and sets whether the light bulb of the decal folder, as seen in the browser, is on or off.
    /// This controls the visibility of all the decals in the component.
    bool isDecalFolderLightBulbOn() const;
    bool isDecalFolderLightBulbOn(bool value);

    /// Creates a thumbnail for this component. This can be a root component to get a thumbnail that
    /// represents the associated file, or it can be any sub component to get a thumbnail of a subset of the
    /// complete assembly or individual parts.
    /// width : Optional argument to define the width of the thumbnail in pixels. A default width of 256 pixels is used if no width is specified.
    /// height : Optional argument to define the height of the thumbnail in pixels. A default height of 256 pixels is used if no height is specified.
    /// imageType : Optional argument to define the type of image data to create. The default of PNG is used if no type is specified. Valid types
    /// include "PNG", "JPG", "TIF", and "BMP".
    /// Returns a DataObject that you can use to save the thumbnail to a file or to access the binary data
    /// of the bitmap directly.
    core::Ptr<core::DataObject> createThumbnail(int width = 256, int height = 256, const std::string& imageType = "PNG");

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the MFGDM model ID for this component.
    std::string mfgdmModelId() const;

    /// Returns the collection of assembly constraints associated with this component.
    core::Ptr<AssemblyConstraints> assemblyConstraints() const;

    /// Returns all assembly constraints in this component and any sub components. The assembly constraints
    /// returned are all in the context of this component so any joints in sub components will be proxies.
    /// This is primarily useful when used from the root component because Fusion flattens the assembly
    /// structure, including joints, when manipulating an assembly.
    std::vector<core::Ptr<AssemblyConstraint>> allAssemblyConstraints() const;

    /// Gets and sets if the light bulb of the joint origins folder as seen in the browser is on or off.
    /// This controls the visibility of the joint origins in this occurrence. The light bulb for the
    /// folder is component specific and will turn off the joints for all occurrences referencing
    /// the component.
    bool isJointOriginsFolderLightBulbOn() const;
    bool isJointOriginsFolderLightBulbOn(bool value);

    /// Returns the collection of MotionLinks associated with this component.
    core::Ptr<MotionLinks> motionLinks() const;

    ADSK_FUSION_COMPONENT_API static const char* classType();
    ADSK_FUSION_COMPONENT_API const char* objectType() const override;
    ADSK_FUSION_COMPONENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_COMPONENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Sketches* sketches_raw() const = 0;
    virtual Features* features_raw() const = 0;
    virtual MeshBodies* meshBodies_raw() const = 0;
    virtual ModelParameters* modelParameters_raw() const = 0;
    virtual bool isOriginFolderLightBulbOn_raw() const = 0;
    virtual bool isOriginFolderLightBulbOn_raw(bool value) = 0;
    virtual bool isConstructionFolderLightBulbOn_raw() const = 0;
    virtual bool isConstructionFolderLightBulbOn_raw(bool value) = 0;
    virtual bool isSketchFolderLightBulbOn_raw() const = 0;
    virtual bool isSketchFolderLightBulbOn_raw(bool value) = 0;
    virtual ConstructionPlane* xYConstructionPlane_raw() const = 0;
    virtual ConstructionPlane* xZConstructionPlane_raw() const = 0;
    virtual ConstructionPlane* yZConstructionPlane_raw() const = 0;
    virtual ConstructionAxis* xConstructionAxis_raw() const = 0;
    virtual ConstructionAxis* yConstructionAxis_raw() const = 0;
    virtual ConstructionAxis* zConstructionAxis_raw() const = 0;
    virtual ConstructionPoint* originConstructionPoint_raw() const = 0;
    virtual char* partNumber_raw() const = 0;
    virtual bool partNumber_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual Profile* createOpenProfile_raw(core::Base* curves, bool chainCurves) = 0;
    virtual Profile* createBRepEdgeProfile_raw(core::Base* edges, bool chainEdges) = 0;
    virtual Joints* joints_raw() const = 0;
    virtual JointOrigins* jointOrgins_raw() const = 0;
    virtual AsBuiltJoints* asBuiltJoints_raw() const = 0;
    virtual RigidGroups* rigidGroups_raw() const = 0;
    virtual core::Material* material_raw() const = 0;
    virtual bool material_raw(core::Material* value) = 0;
    virtual PhysicalProperties* physicalProperties_raw() const = 0;
    virtual core::DataFileFuture* saveCopyAs_raw(const char* name, core::DataFolder* dataFolder, const char* description, const char* tag) const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual bool isJointsFolderLightBulbOn_raw() const = 0;
    virtual bool isJointsFolderLightBulbOn_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual bool isBodiesFolderLightBulbOn_raw() const = 0;
    virtual bool isBodiesFolderLightBulbOn_raw(bool value) = 0;
    virtual PhysicalProperties* getPhysicalProperties_raw(CalculationAccuracy accuracy) const = 0;
    virtual bool transformOccurrences_raw(Occurrence** occurrences, size_t occurrences_size, core::Matrix3D** transforms, size_t transforms_size, bool ignoreJoints) = 0;
    virtual Joint** allJoints_raw(size_t& return_size) const = 0;
    virtual AsBuiltJoint** allAsBuiltJoints_raw(size_t& return_size) const = 0;
    virtual JointOrigin** allJointOrigins_raw(size_t& return_size) const = 0;
    virtual RigidGroup** allRigidGroups_raw(size_t& return_size) const = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
    virtual JointOrigins* jointOrigins_raw() const = 0;
    virtual CustomGraphicsGroups* customGraphicsGroups_raw() const = 0;
    virtual char* revisionId_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual TangentRelationship** allTangentRelationships_raw(size_t& return_size) const = 0;
    virtual TangentRelationships* tangentRelationships_raw() const = 0;
    virtual FlatPattern* flatPattern_raw() const = 0;
    virtual FlatPattern* createFlatPattern_raw(BRepFace* stationaryFace) = 0;
    virtual SheetMetalRule* activeSheetMetalRule_raw() const = 0;
    virtual bool activeSheetMetalRule_raw(SheetMetalRule* value) = 0;
    virtual bool isCanvasFolderLightBulbOn_raw() const = 0;
    virtual bool isCanvasFolderLightBulbOn_raw(bool value) = 0;
    virtual bool isLibraryItem_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox2_raw(BoundingBoxEntityTypes entityTypes) = 0;
    virtual core::BoundingBox3D* preciseBoundingBox_raw() const = 0;
    virtual core::OrientedBoundingBox3D* orientedMinimumBoundingBox_raw() const = 0;
    virtual char* internalCommand_raw(const char* commandName, const char** commandArgs, size_t commandArgs_size) = 0;
    virtual core::Color* componentColor_raw() const = 0;
    virtual bool componentColor_raw(core::Color* value) = 0;
    virtual bool isDecalFolderLightBulbOn_raw() const = 0;
    virtual bool isDecalFolderLightBulbOn_raw(bool value) = 0;
    virtual core::DataObject* createThumbnail_raw(int width, int height, const char* imageType) = 0;
    virtual char* mfgdmModelId_raw() const = 0;
    virtual AssemblyConstraints* assemblyConstraints_raw() const = 0;
    virtual AssemblyConstraint** allAssemblyConstraints_raw(size_t& return_size) const = 0;
    virtual bool isJointOriginsFolderLightBulbOn_raw() const = 0;
    virtual bool isJointOriginsFolderLightBulbOn_raw(bool value) = 0;
    virtual MotionLinks* motionLinks_raw() const = 0;
    virtual void placeholderComponent0() {}
    virtual void placeholderComponent1() {}
    virtual void placeholderComponent2() {}
    virtual void placeholderComponent3() {}
    virtual void placeholderComponent4() {}
    virtual void placeholderComponent5() {}
    virtual void placeholderComponent6() {}
    virtual void placeholderComponent7() {}
    virtual void placeholderComponent8() {}
    virtual void placeholderComponent9() {}
    virtual void placeholderComponent10() {}
    virtual void placeholderComponent11() {}
    virtual void placeholderComponent12() {}
    virtual void placeholderComponent13() {}
    virtual void placeholderComponent14() {}
    virtual void placeholderComponent15() {}
    virtual void placeholderComponent16() {}
    virtual void placeholderComponent17() {}
    virtual void placeholderComponent18() {}
    virtual void placeholderComponent19() {}
    virtual void placeholderComponent20() {}
    virtual void placeholderComponent21() {}
    virtual void placeholderComponent22() {}
    virtual void placeholderComponent23() {}
    virtual void placeholderComponent24() {}
    virtual void placeholderComponent25() {}
    virtual void placeholderComponent26() {}
    virtual void placeholderComponent27() {}
    virtual void placeholderComponent28() {}
    virtual void placeholderComponent29() {}
    virtual void placeholderComponent30() {}
    virtual void placeholderComponent31() {}
    virtual void placeholderComponent32() {}
    virtual void placeholderComponent33() {}
    virtual void placeholderComponent34() {}
    virtual void placeholderComponent35() {}
    virtual void placeholderComponent36() {}
    virtual void placeholderComponent37() {}
    virtual void placeholderComponent38() {}
    virtual void placeholderComponent39() {}
    virtual void placeholderComponent40() {}
    virtual void placeholderComponent41() {}
    virtual void placeholderComponent42() {}
    virtual void placeholderComponent43() {}
    virtual void placeholderComponent44() {}
    virtual void placeholderComponent45() {}
    virtual void placeholderComponent46() {}
    virtual void placeholderComponent47() {}
    virtual void placeholderComponent48() {}
    virtual void placeholderComponent49() {}
    virtual void placeholderComponent50() {}
    virtual void placeholderComponent51() {}
    virtual void placeholderComponent52() {}
    virtual void placeholderComponent53() {}
    virtual void placeholderComponent54() {}
    virtual void placeholderComponent55() {}
    virtual void placeholderComponent56() {}
    virtual void placeholderComponent57() {}
    virtual void placeholderComponent58() {}
    virtual void placeholderComponent59() {}
    virtual void placeholderComponent60() {}
    virtual void placeholderComponent61() {}
    virtual void placeholderComponent62() {}
    virtual void placeholderComponent63() {}
    virtual void placeholderComponent64() {}
    virtual void placeholderComponent65() {}
    virtual void placeholderComponent66() {}
    virtual void placeholderComponent67() {}
    virtual void placeholderComponent68() {}
    virtual void placeholderComponent69() {}
    virtual void placeholderComponent70() {}
    virtual void placeholderComponent71() {}
    virtual void placeholderComponent72() {}
    virtual void placeholderComponent73() {}
    virtual void placeholderComponent74() {}
    virtual void placeholderComponent75() {}
    virtual void placeholderComponent76() {}
    virtual void placeholderComponent77() {}
    virtual void placeholderComponent78() {}
    virtual void placeholderComponent79() {}
    virtual void placeholderComponent80() {}
    virtual void placeholderComponent81() {}
    virtual void placeholderComponent82() {}
    virtual void placeholderComponent83() {}
    virtual void placeholderComponent84() {}
    virtual void placeholderComponent85() {}
    virtual void placeholderComponent86() {}
    virtual void placeholderComponent87() {}
    virtual void placeholderComponent88() {}
    virtual void placeholderComponent89() {}
    virtual void placeholderComponent90() {}
    virtual void placeholderComponent91() {}
    virtual void placeholderComponent92() {}
    virtual void placeholderComponent93() {}
    virtual void placeholderComponent94() {}
    virtual void placeholderComponent95() {}
    virtual void placeholderComponent96() {}
    virtual void placeholderComponent97() {}
    virtual void placeholderComponent98() {}
    virtual void placeholderComponent99() {}
    virtual void placeholderComponent100() {}
    virtual void placeholderComponent101() {}
    virtual void placeholderComponent102() {}
    virtual void placeholderComponent103() {}
    virtual void placeholderComponent104() {}
    virtual void placeholderComponent105() {}
    virtual void placeholderComponent106() {}
    virtual void placeholderComponent107() {}
    virtual void placeholderComponent108() {}
    virtual void placeholderComponent109() {}
    virtual void placeholderComponent110() {}
    virtual void placeholderComponent111() {}
    virtual void placeholderComponent112() {}
    virtual void placeholderComponent113() {}
    virtual void placeholderComponent114() {}
    virtual void placeholderComponent115() {}
    virtual void placeholderComponent116() {}
    virtual void placeholderComponent117() {}
    virtual void placeholderComponent118() {}
    virtual void placeholderComponent119() {}
    virtual void placeholderComponent120() {}
    virtual void placeholderComponent121() {}
    virtual void placeholderComponent122() {}
    virtual void placeholderComponent123() {}
    virtual void placeholderComponent124() {}
    virtual void placeholderComponent125() {}
    virtual void placeholderComponent126() {}
    virtual void placeholderComponent127() {}
    virtual void placeholderComponent128() {}
    virtual void placeholderComponent129() {}
    virtual void placeholderComponent130() {}
    virtual void placeholderComponent131() {}
    virtual void placeholderComponent132() {}
    virtual void placeholderComponent133() {}
    virtual void placeholderComponent134() {}
    virtual void placeholderComponent135() {}
    virtual void placeholderComponent136() {}
    virtual void placeholderComponent137() {}
    virtual void placeholderComponent138() {}
    virtual void placeholderComponent139() {}
    virtual void placeholderComponent140() {}
    virtual void placeholderComponent141() {}
    virtual void placeholderComponent142() {}
    virtual void placeholderComponent143() {}
    virtual void placeholderComponent144() {}
    virtual void placeholderComponent145() {}
    virtual void placeholderComponent146() {}
    virtual void placeholderComponent147() {}
    virtual void placeholderComponent148() {}
    virtual void placeholderComponent149() {}
    virtual void placeholderComponent150() {}
    virtual void placeholderComponent151() {}
    virtual void placeholderComponent152() {}
    virtual void placeholderComponent153() {}
    virtual void placeholderComponent154() {}
    virtual void placeholderComponent155() {}
    virtual void placeholderComponent156() {}
    virtual void placeholderComponent157() {}
    virtual void placeholderComponent158() {}
    virtual void placeholderComponent159() {}
    virtual void placeholderComponent160() {}
    virtual void placeholderComponent161() {}
    virtual void placeholderComponent162() {}
    virtual void placeholderComponent163() {}
    virtual void placeholderComponent164() {}
    virtual void placeholderComponent165() {}
    virtual void placeholderComponent166() {}
    virtual void placeholderComponent167() {}
    virtual void placeholderComponent168() {}
    virtual void placeholderComponent169() {}
    virtual void placeholderComponent170() {}
    virtual void placeholderComponent171() {}
    virtual void placeholderComponent172() {}
    virtual void placeholderComponent173() {}
    virtual void placeholderComponent174() {}
    virtual void placeholderComponent175() {}
    virtual void placeholderComponent176() {}
    virtual void placeholderComponent177() {}
    virtual void placeholderComponent178() {}
    virtual void placeholderComponent179() {}
    virtual void placeholderComponent180() {}
    virtual void placeholderComponent181() {}
};

// Inline wrappers

inline core::Ptr<Sketches> Component::sketches() const
{
    core::Ptr<Sketches> res = sketches_raw();
    return res;
}

inline core::Ptr<Features> Component::features() const
{
    core::Ptr<Features> res = features_raw();
    return res;
}

inline core::Ptr<MeshBodies> Component::meshBodies() const
{
    core::Ptr<MeshBodies> res = meshBodies_raw();
    return res;
}

inline core::Ptr<ModelParameters> Component::modelParameters() const
{
    core::Ptr<ModelParameters> res = modelParameters_raw();
    return res;
}

inline bool Component::isOriginFolderLightBulbOn() const
{
    bool res = isOriginFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isOriginFolderLightBulbOn(bool value)
{
    return isOriginFolderLightBulbOn_raw(value);
}

inline bool Component::isConstructionFolderLightBulbOn() const
{
    bool res = isConstructionFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isConstructionFolderLightBulbOn(bool value)
{
    return isConstructionFolderLightBulbOn_raw(value);
}

inline bool Component::isSketchFolderLightBulbOn() const
{
    bool res = isSketchFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isSketchFolderLightBulbOn(bool value)
{
    return isSketchFolderLightBulbOn_raw(value);
}

inline core::Ptr<ConstructionPlane> Component::xYConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = xYConstructionPlane_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> Component::xZConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = xZConstructionPlane_raw();
    return res;
}

inline core::Ptr<ConstructionPlane> Component::yZConstructionPlane() const
{
    core::Ptr<ConstructionPlane> res = yZConstructionPlane_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> Component::xConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = xConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> Component::yConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = yConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionAxis> Component::zConstructionAxis() const
{
    core::Ptr<ConstructionAxis> res = zConstructionAxis_raw();
    return res;
}

inline core::Ptr<ConstructionPoint> Component::originConstructionPoint() const
{
    core::Ptr<ConstructionPoint> res = originConstructionPoint_raw();
    return res;
}

inline std::string Component::partNumber() const
{
    std::string res;

    char* p= partNumber_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Component::partNumber(const std::string& value)
{
    return partNumber_raw(value.c_str());
}

inline std::string Component::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Component::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline core::Ptr<Profile> Component::createOpenProfile(const core::Ptr<core::Base>& curves, bool chainCurves)
{
    core::Ptr<Profile> res = createOpenProfile_raw(curves.get(), chainCurves);
    return res;
}

inline core::Ptr<Profile> Component::createBRepEdgeProfile(const core::Ptr<core::Base>& edges, bool chainEdges)
{
    core::Ptr<Profile> res = createBRepEdgeProfile_raw(edges.get(), chainEdges);
    return res;
}

inline core::Ptr<Joints> Component::joints() const
{
    core::Ptr<Joints> res = joints_raw();
    return res;
}

inline core::Ptr<JointOrigins> Component::jointOrgins() const
{
    core::Ptr<JointOrigins> res = jointOrgins_raw();
    return res;
}

inline core::Ptr<AsBuiltJoints> Component::asBuiltJoints() const
{
    core::Ptr<AsBuiltJoints> res = asBuiltJoints_raw();
    return res;
}

inline core::Ptr<RigidGroups> Component::rigidGroups() const
{
    core::Ptr<RigidGroups> res = rigidGroups_raw();
    return res;
}

inline core::Ptr<core::Material> Component::material() const
{
    core::Ptr<core::Material> res = material_raw();
    return res;
}

inline bool Component::material(const core::Ptr<core::Material>& value)
{
    return material_raw(value.get());
}

inline core::Ptr<PhysicalProperties> Component::physicalProperties() const
{
    core::Ptr<PhysicalProperties> res = physicalProperties_raw();
    return res;
}

inline core::Ptr<core::DataFileFuture> Component::saveCopyAs(const std::string& name, const core::Ptr<core::DataFolder>& dataFolder, const std::string& description, const std::string& tag) const
{
    core::Ptr<core::DataFileFuture> res = saveCopyAs_raw(name.c_str(), dataFolder.get(), description.c_str(), tag.c_str());
    return res;
}

inline core::Ptr<core::BoundingBox3D> Component::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline bool Component::isJointsFolderLightBulbOn() const
{
    bool res = isJointsFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isJointsFolderLightBulbOn(bool value)
{
    return isJointsFolderLightBulbOn_raw(value);
}

inline core::Ptr<core::Attributes> Component::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline bool Component::isBodiesFolderLightBulbOn() const
{
    bool res = isBodiesFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isBodiesFolderLightBulbOn(bool value)
{
    return isBodiesFolderLightBulbOn_raw(value);
}

inline core::Ptr<PhysicalProperties> Component::getPhysicalProperties(CalculationAccuracy accuracy) const
{
    core::Ptr<PhysicalProperties> res = getPhysicalProperties_raw(accuracy);
    return res;
}

inline bool Component::transformOccurrences(const std::vector<core::Ptr<Occurrence>>& occurrences, const std::vector<core::Ptr<core::Matrix3D>>& transforms, bool ignoreJoints)
{
    Occurrence** occurrences_ = new Occurrence*[occurrences.size()];
    for(size_t i=0; i<occurrences.size(); ++i)
        occurrences_[i] = occurrences[i].get();
    core::Matrix3D** transforms_ = new core::Matrix3D*[transforms.size()];
    for(size_t i=0; i<transforms.size(); ++i)
        transforms_[i] = transforms[i].get();

    bool res = transformOccurrences_raw(occurrences_, occurrences.size(), transforms_, transforms.size(), ignoreJoints);
    delete[] occurrences_;
    delete[] transforms_;
    return res;
}

inline std::vector<core::Ptr<Joint>> Component::allJoints() const
{
    std::vector<core::Ptr<Joint>> res;
    size_t s;

    Joint** p= allJoints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<AsBuiltJoint>> Component::allAsBuiltJoints() const
{
    std::vector<core::Ptr<AsBuiltJoint>> res;
    size_t s;

    AsBuiltJoint** p= allAsBuiltJoints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<JointOrigin>> Component::allJointOrigins() const
{
    std::vector<core::Ptr<JointOrigin>> res;
    size_t s;

    JointOrigin** p= allJointOrigins_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<RigidGroup>> Component::allRigidGroups() const
{
    std::vector<core::Ptr<RigidGroup>> res;
    size_t s;

    RigidGroup** p= allRigidGroups_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double Component::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool Component::opacity(double value)
{
    return opacity_raw(value);
}

inline core::Ptr<JointOrigins> Component::jointOrigins() const
{
    core::Ptr<JointOrigins> res = jointOrigins_raw();
    return res;
}

inline core::Ptr<CustomGraphicsGroups> Component::customGraphicsGroups() const
{
    core::Ptr<CustomGraphicsGroups> res = customGraphicsGroups_raw();
    return res;
}

inline std::string Component::revisionId() const
{
    std::string res;

    char* p= revisionId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Component::entityToken() const
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

inline std::string Component::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<TangentRelationship>> Component::allTangentRelationships() const
{
    std::vector<core::Ptr<TangentRelationship>> res;
    size_t s;

    TangentRelationship** p= allTangentRelationships_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<TangentRelationships> Component::tangentRelationships() const
{
    core::Ptr<TangentRelationships> res = tangentRelationships_raw();
    return res;
}

inline core::Ptr<FlatPattern> Component::flatPattern() const
{
    core::Ptr<FlatPattern> res = flatPattern_raw();
    return res;
}

inline core::Ptr<FlatPattern> Component::createFlatPattern(const core::Ptr<BRepFace>& stationaryFace)
{
    core::Ptr<FlatPattern> res = createFlatPattern_raw(stationaryFace.get());
    return res;
}

inline core::Ptr<SheetMetalRule> Component::activeSheetMetalRule() const
{
    core::Ptr<SheetMetalRule> res = activeSheetMetalRule_raw();
    return res;
}

inline bool Component::activeSheetMetalRule(const core::Ptr<SheetMetalRule>& value)
{
    return activeSheetMetalRule_raw(value.get());
}

inline bool Component::isCanvasFolderLightBulbOn() const
{
    bool res = isCanvasFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isCanvasFolderLightBulbOn(bool value)
{
    return isCanvasFolderLightBulbOn_raw(value);
}

inline bool Component::isLibraryItem() const
{
    bool res = isLibraryItem_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> Component::boundingBox2(BoundingBoxEntityTypes entityTypes)
{
    core::Ptr<core::BoundingBox3D> res = boundingBox2_raw(entityTypes);
    return res;
}

inline core::Ptr<core::BoundingBox3D> Component::preciseBoundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = preciseBoundingBox_raw();
    return res;
}

inline core::Ptr<core::OrientedBoundingBox3D> Component::orientedMinimumBoundingBox() const
{
    core::Ptr<core::OrientedBoundingBox3D> res = orientedMinimumBoundingBox_raw();
    return res;
}

inline std::string Component::internalCommand(const std::string& commandName, const std::vector<std::string>& commandArgs)
{
    std::string res;
    const char** commandArgs_ = commandArgs.empty() ? nullptr : (new const char*[commandArgs.size()]);
    for(size_t i = 0; i < commandArgs.size(); ++i)
    {
        commandArgs_[i] = commandArgs[i].c_str();
    }

    char* p= internalCommand_raw(commandName.c_str(), commandArgs_, commandArgs.size());
    delete[] commandArgs_;
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Color> Component::componentColor() const
{
    core::Ptr<core::Color> res = componentColor_raw();
    return res;
}

inline bool Component::componentColor(const core::Ptr<core::Color>& value)
{
    return componentColor_raw(value.get());
}

inline bool Component::isDecalFolderLightBulbOn() const
{
    bool res = isDecalFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isDecalFolderLightBulbOn(bool value)
{
    return isDecalFolderLightBulbOn_raw(value);
}

inline core::Ptr<core::DataObject> Component::createThumbnail(int width, int height, const std::string& imageType)
{
    core::Ptr<core::DataObject> res = createThumbnail_raw(width, height, imageType.c_str());
    return res;
}

inline std::string Component::mfgdmModelId() const
{
    std::string res;

    char* p= mfgdmModelId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<AssemblyConstraints> Component::assemblyConstraints() const
{
    core::Ptr<AssemblyConstraints> res = assemblyConstraints_raw();
    return res;
}

inline std::vector<core::Ptr<AssemblyConstraint>> Component::allAssemblyConstraints() const
{
    std::vector<core::Ptr<AssemblyConstraint>> res;
    size_t s;

    AssemblyConstraint** p= allAssemblyConstraints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Component::isJointOriginsFolderLightBulbOn() const
{
    bool res = isJointOriginsFolderLightBulbOn_raw();
    return res;
}

inline bool Component::isJointOriginsFolderLightBulbOn(bool value)
{
    return isJointOriginsFolderLightBulbOn_raw(value);
}

inline core::Ptr<MotionLinks> Component::motionLinks() const
{
    core::Ptr<MotionLinks> res = motionLinks_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_COMPONENT_API