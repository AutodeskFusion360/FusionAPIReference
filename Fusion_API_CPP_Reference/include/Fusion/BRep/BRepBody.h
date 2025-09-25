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
#include "../../Core/CoreTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPBODY_CPP__
# define ADSK_FUSION_BREPBODY_API XI_EXPORT
# else
# define ADSK_FUSION_BREPBODY_API
# endif
#else
# define ADSK_FUSION_BREPBODY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
    class Attributes;
    class BoundingBox3D;
    class Material;
    class OrientedBoundingBox3D;
    class Point3D;
    class TextureMapControl;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class BRepEdges;
    class BRepFaces;
    class BRepLumps;
    class BRepShells;
    class BRepVertices;
    class BRepWires;
    class Component;
    class MeshManager;
    class Occurrence;
    class PhysicalProperties;
}}

namespace adsk { namespace fusion {

/// Represents a B-Rep (Boundary Representation) body.
class BRepBody : public core::Base {
public:

    /// Returns the component this body is owned by.
    core::Ptr<Component> parentComponent() const;

    /// Returns a collection of all of the lumps in the body.
    core::Ptr<BRepLumps> lumps() const;

    /// Returns a collection of all of the shells in the body.
    core::Ptr<BRepShells> shells() const;

    /// Returns a collection of all of the faces in the body.
    core::Ptr<BRepFaces> faces() const;

    /// Returns a collection of all of the edges in the body.
    core::Ptr<BRepEdges> edges() const;

    /// Returns a collection of all of the vertices in the body.
    core::Ptr<BRepVertices> vertices() const;

    /// Returns whether this body is closed (solid) or not.
    bool isSolid() const;

    /// Returns the bounding box of this body.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Returns all of the edges that connect concave faces.
    core::Ptr<BRepEdges> concaveEdges() const;

    /// Returns all of the edges that connect convex faces.
    core::Ptr<BRepEdges> convexEdges() const;

    /// Returns the area in cm ^ 2.
    double area() const;

    /// Returns the volume in cm ^ 3. Returns 0 in the case the body is not solid.
    double volume() const;

    /// Determines the relationship of the input point with respect to this body.
    /// point : The point to do the containment check for.
    /// Returns a value from the PointContainment enum indicating the relationship of
    /// the input point to the body.
    PointContainment pointContainment(const core::Ptr<core::Point3D>& point);

    /// Indicates if this body is represented in the model or is transient.
    bool isTransient() const;

    /// Gets and sets the name of the body.
    /// 
    /// This property is only valid if the IsTransient property is false.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets if this body is currently visible in the graphics window. Use the
    /// isLightBulbOn to change if the light bulb beside the body node in the
    /// browser is on or not. Parent nodes in the browser can have their light
    /// bulb off which affects all of their children. This property indicates
    /// the final result and whether this body is actually visible or not.
    /// 
    /// This property is only valid if the IsTransient property is false.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets and sets if this body is selectable.
    /// 
    /// This property is only valid if the IsTransient property is false.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Deletes the body.
    /// 
    /// This property is only valid if the IsTransient property is false.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Copies the body to the clipboard.
    /// 
    /// This property is only valid if the IsTransient property is false.
    /// Returns true if the copy was successful.
    bool copy();

    /// Cuts the body to the clipboard.
    /// 
    /// This property is only valid if the IsTransient property is false.
    /// Returns true if the cut was successful.
    bool cut();

    /// Read-write property that gets and sets the current appearance of the body. Setting this property will result in applying
    /// an override appearance to the body and the AppearanceSourceType property will return OverrideAppearanceSource. Setting
    /// this property to null will remove any override.
    /// 
    /// This property is only valid if the IsTransient property is false.
    core::Ptr<core::Appearance> appearance() const;
    bool appearance(const core::Ptr<core::Appearance>& value);

    /// Read-write property that gets the source of the appearance for the body. If this returns OverrideAppearanceSource, an override exists
    /// on this body. The override can be removed by setting the Appearance property to null.
    /// 
    /// This property is only valid if the IsTransient property is false.
    core::AppearanceSourceTypes appearanceSourceType() const;

    /// Gets and sets the material assigned to this body.
    /// 
    /// This property is only valid if the IsTransient property is false.
    core::Ptr<core::Material> material() const;
    bool material(const core::Ptr<core::Material>& value);

    /// Returns the mesh manager object for this body.
    core::Ptr<MeshManager> meshManager() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this
    /// object in an assembly. This is only valid in the case where this
    /// BRepBody object is acting as a proxy in an assembly. Returns null
    /// in the case where the object is not in the context of an assembly.
    /// but is already the native object. Also returns null in the case
    /// where this body is transient.
    core::Ptr<Occurrence> assemblyContext() const;

    /// The NativeObject is the object outside the context of an assembly.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<BRepBody> nativeObject() const;

    /// Returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// 
    /// This method is only valid if the IsTransient property is false.
    /// occurrence : The occurrence that defines the context for the created proxy.
    /// Returns the new BRepBoy proxy or null if this isn't the NativeObject.
    core::Ptr<BRepBody> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Creates a new component and occurrence within the component that currently owns this body.
    /// This body is moved into the new component and returned. The newly created component can be
    /// obtained by using the parentComponent property of the BRepBody object.
    /// 
    /// This method is only valid if the IsTransient property is false.
    /// Returns the BRrepBody in the new component or null in the case the creation failed.
    core::Ptr<BRepBody> createComponent();

    /// Moves this body from it's current component into the root component or the component owned by the
    /// specified occurrence.
    /// target : The target can be either the root component or an occurrence.
    /// 
    /// In the case where an occurrence is specified, the body will be moved into the parent component of the target
    /// occurrence and the target occurrence defines the transform of how the body will be copied so that the body
    /// maintains it's same position with respect to the assembly.
    /// Returns the moved BRepBody or null in the case the move failed.
    core::Ptr<BRepBody> moveToComponent(const core::Ptr<core::Base>& target);

    /// Creates a copy of this body into the specified target.
    /// target : The target can be either the root component or an occurrence.
    /// 
    /// In the case where an occurrence is specified, the body will be copied into the parent component of the target
    /// occurrence and the target occurrence defines the transform of how the body will be copied so that the body
    /// maintains it's same position with respect to the assembly.
    /// 
    /// If target is null, then a copy of the body is created in the owning component of the original body.
    /// Returns the moved BRepBody or null in the case the move failed.
    core::Ptr<BRepBody> copyToComponent(const core::Ptr<core::Base>& target);

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc
    /// of this body. Property values will be calculated using the 'LowCalculationAccuracy' setting when using this property
    /// to get the PhysicalProperties object. To specify a higher calculation tolerance, use the getPhysicalProperties method
    /// on the Design class instead.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> physicalProperties() const;

    /// Gets and set if the light bulb beside the body node in the
    /// browser is on or not. Parent nodes in the browser can have their light
    /// bulb off which affects all of their children so this property does not
    /// indicate if the body is actually visible, just that it should be visible
    /// if all of it's parent nodes are also visible. Use the isVisible property
    /// to determine if it's actually visible.
    /// 
    /// This property is only valid if the IsTransient property is false.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Returns the collection of attributes associated with this face.
    core::Ptr<core::Attributes> attributes() const;

    /// If this body is associated with a base feature, this property will return that base feature.
    /// If it's not associated with a base feature, this property will return null.
    core::Ptr<BaseFeature> baseFeature() const;

    /// Creates a new body where the faces and edges are converted to different
    /// types of geometry based on the input options. This is particularly useful
    /// when you need a body made up entirely of NURBS surfaces.
    /// 
    /// The tempId on the faces, edges, and vertices on the new body will match
    /// with the corresponding tempId on the original body. In cases where faces are
    /// split as a result of the conversion there can be more than one face or edge in
    /// the new body that matches to a single face or edge in the original body. The
    /// findByTempId method will find the entity with the matching id.
    /// options : Input options that define how the conversion should be done. These are
    /// bitwise options so they can be combined.
    /// Returns the new converted body or null in the case of failure.
    core::Ptr<BRepBody> convert(BRepConvertOptions options);

    /// Returns all of the faces, edges, or vertices that match the input ID.
    /// tempId : The ID of the B-Rep entity to find.
    /// Returns an array of entities that have the specified ID. This
    /// returns an array because it's possible that a body created by converting a
    /// body can have multiple entities with the same ID in the case where a curve
    /// or face was split. Returns an empty array in the case where no match is found.
    std::vector<core::Ptr<core::Base>> findByTempId(int tempId);

    /// Gets and sets the opacity override assigned to this body. A value of 1.0 specifies
    /// that is it completely opaque and a value of 0.0 specifies that is it completely transparent.
    /// 
    /// This value is not necessarily related to what the user sees because the opacity is inherited.
    /// For example, if you this body is in a component and that component's opacity is set to something
    /// other than 1.0, the body will also be shown as slightly transparent even though the opacity
    /// property for the body will return 1.0. Because the component that contains the body can be
    /// referenced as an occurrence in other components and they can have different opacity settings,
    /// it's possible that different instances of the same body can display using different opacity levels.
    /// To get the opacity that it is being displayed with use the BrepBody.visibleOpacity property.
    /// 
    /// This is the API equivalent of the "Opacity Control" command available for the body in the browser.
    double opacity() const;
    bool opacity(double value);

    /// The user can set an override opacity for components and bodies these opacity overrides combine if
    /// children and parent components have overrides. This property returns the actual opacity that is
    /// being used to render the body. To set the opacity use the opacity property of the BRepBody object.
    double visibleOpacity() const;

    /// Returns the current revision ID of the body. This ID changes any time the body is modified in any way. By getting
    /// and saving the ID when you create any data that is dependent on the body, you can then compare the saved
    /// ID with the current ID to determine if the body has changed to know if you should update your data.
    std::string revisionId() const;

    /// Returns any wire bodies that exist within this body.
    core::Ptr<BRepWires> wires() const;

    /// Indicates if this body is represented in the model or is temporary.
    bool isTemporary() const;

    /// Returns a token for the BRepBody object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same body.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    /// 
    /// This is only valid for bodies that exist in the design, (the isTemporary
    /// property is false).
    std::string entityToken() const;

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc
    /// of this body.
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    /// Returns a PhysicalProperties object that can be used to get the various physical property related values.
    core::Ptr<PhysicalProperties> getPhysicalProperties(CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// Returns the TextureMapControl object associated with this body when there is an
    /// appearance assigned to the body that has a texture associated with it. If there
    /// isn't a texture, this property will return null. If there is a texture, you can
    /// use the returned object to query and modify how the texture is applied to the body.
    core::Ptr<core::TextureMapControl> textureMapControl() const;

    /// Indicates if this body represents a sheet metal folded part or not and if a flat pattern can be created.
    bool isSheetMetal() const;

    /// Returns an oriented bounding box of the body that is best oriented to tightly fit the body.
    core::Ptr<core::OrientedBoundingBox3D> orientedMinimumBoundingBox() const;

    /// Returns a bounding box that tightly fits this body.
    core::Ptr<core::BoundingBox3D> preciseBoundingBox() const;

    ADSK_FUSION_BREPBODY_API static const char* classType();
    ADSK_FUSION_BREPBODY_API const char* objectType() const override;
    ADSK_FUSION_BREPBODY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPBODY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* parentComponent_raw() const = 0;
    virtual BRepLumps* lumps_raw() const = 0;
    virtual BRepShells* shells_raw() const = 0;
    virtual BRepFaces* faces_raw() const = 0;
    virtual BRepEdges* edges_raw() const = 0;
    virtual BRepVertices* vertices_raw() const = 0;
    virtual bool isSolid_raw() const = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual BRepEdges* concaveEdges_raw() const = 0;
    virtual BRepEdges* convexEdges_raw() const = 0;
    virtual double area_raw() const = 0;
    virtual double volume_raw() const = 0;
    virtual PointContainment pointContainment_raw(core::Point3D* point) = 0;
    virtual bool isTransient_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool copy_raw() = 0;
    virtual bool cut_raw() = 0;
    virtual core::Appearance* appearance_raw() const = 0;
    virtual bool appearance_raw(core::Appearance* value) = 0;
    virtual core::AppearanceSourceTypes appearanceSourceType_raw() const = 0;
    virtual core::Material* material_raw() const = 0;
    virtual bool material_raw(core::Material* value) = 0;
    virtual MeshManager* meshManager_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual BRepBody* nativeObject_raw() const = 0;
    virtual BRepBody* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual BRepBody* createComponent_raw() = 0;
    virtual BRepBody* moveToComponent_raw(core::Base* target) = 0;
    virtual BRepBody* copyToComponent_raw(core::Base* target) = 0;
    virtual PhysicalProperties* physicalProperties_raw() const = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual BaseFeature* baseFeature_raw() const = 0;
    virtual BRepBody* convert_raw(BRepConvertOptions options) = 0;
    virtual core::Base** findByTempId_raw(int tempId, size_t& return_size) = 0;
    virtual double opacity_raw() const = 0;
    virtual bool opacity_raw(double value) = 0;
    virtual double visibleOpacity_raw() const = 0;
    virtual char* revisionId_raw() const = 0;
    virtual BRepWires* wires_raw() const = 0;
    virtual bool isTemporary_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual PhysicalProperties* getPhysicalProperties_raw(CalculationAccuracy accuracy) const = 0;
    virtual core::TextureMapControl* textureMapControl_raw() const = 0;
    virtual bool isSheetMetal_raw() const = 0;
    virtual core::OrientedBoundingBox3D* orientedMinimumBoundingBox_raw() const = 0;
    virtual core::BoundingBox3D* preciseBoundingBox_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Component> BRepBody::parentComponent() const
{
    core::Ptr<Component> res = parentComponent_raw();
    return res;
}

inline core::Ptr<BRepLumps> BRepBody::lumps() const
{
    core::Ptr<BRepLumps> res = lumps_raw();
    return res;
}

inline core::Ptr<BRepShells> BRepBody::shells() const
{
    core::Ptr<BRepShells> res = shells_raw();
    return res;
}

inline core::Ptr<BRepFaces> BRepBody::faces() const
{
    core::Ptr<BRepFaces> res = faces_raw();
    return res;
}

inline core::Ptr<BRepEdges> BRepBody::edges() const
{
    core::Ptr<BRepEdges> res = edges_raw();
    return res;
}

inline core::Ptr<BRepVertices> BRepBody::vertices() const
{
    core::Ptr<BRepVertices> res = vertices_raw();
    return res;
}

inline bool BRepBody::isSolid() const
{
    bool res = isSolid_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepBody::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<BRepEdges> BRepBody::concaveEdges() const
{
    core::Ptr<BRepEdges> res = concaveEdges_raw();
    return res;
}

inline core::Ptr<BRepEdges> BRepBody::convexEdges() const
{
    core::Ptr<BRepEdges> res = convexEdges_raw();
    return res;
}

inline double BRepBody::area() const
{
    double res = area_raw();
    return res;
}

inline double BRepBody::volume() const
{
    double res = volume_raw();
    return res;
}

inline PointContainment BRepBody::pointContainment(const core::Ptr<core::Point3D>& point)
{
    PointContainment res = pointContainment_raw(point.get());
    return res;
}

inline bool BRepBody::isTransient() const
{
    bool res = isTransient_raw();
    return res;
}

inline std::string BRepBody::name() const
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

inline bool BRepBody::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool BRepBody::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool BRepBody::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline bool BRepBody::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool BRepBody::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline bool BRepBody::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool BRepBody::copy()
{
    bool res = copy_raw();
    return res;
}

inline bool BRepBody::cut()
{
    bool res = cut_raw();
    return res;
}

inline core::Ptr<core::Appearance> BRepBody::appearance() const
{
    core::Ptr<core::Appearance> res = appearance_raw();
    return res;
}

inline bool BRepBody::appearance(const core::Ptr<core::Appearance>& value)
{
    return appearance_raw(value.get());
}

inline core::AppearanceSourceTypes BRepBody::appearanceSourceType() const
{
    core::AppearanceSourceTypes res = appearanceSourceType_raw();
    return res;
}

inline core::Ptr<core::Material> BRepBody::material() const
{
    core::Ptr<core::Material> res = material_raw();
    return res;
}

inline bool BRepBody::material(const core::Ptr<core::Material>& value)
{
    return material_raw(value.get());
}

inline core::Ptr<MeshManager> BRepBody::meshManager() const
{
    core::Ptr<MeshManager> res = meshManager_raw();
    return res;
}

inline core::Ptr<Occurrence> BRepBody::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBody::nativeObject() const
{
    core::Ptr<BRepBody> res = nativeObject_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBody::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<BRepBody> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<BRepBody> BRepBody::createComponent()
{
    core::Ptr<BRepBody> res = createComponent_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBody::moveToComponent(const core::Ptr<core::Base>& target)
{
    core::Ptr<BRepBody> res = moveToComponent_raw(target.get());
    return res;
}

inline core::Ptr<BRepBody> BRepBody::copyToComponent(const core::Ptr<core::Base>& target)
{
    core::Ptr<BRepBody> res = copyToComponent_raw(target.get());
    return res;
}

inline core::Ptr<PhysicalProperties> BRepBody::physicalProperties() const
{
    core::Ptr<PhysicalProperties> res = physicalProperties_raw();
    return res;
}

inline bool BRepBody::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool BRepBody::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline core::Ptr<core::Attributes> BRepBody::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline core::Ptr<BaseFeature> BRepBody::baseFeature() const
{
    core::Ptr<BaseFeature> res = baseFeature_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepBody::convert(BRepConvertOptions options)
{
    core::Ptr<BRepBody> res = convert_raw(options);
    return res;
}

inline std::vector<core::Ptr<core::Base>> BRepBody::findByTempId(int tempId)
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= findByTempId_raw(tempId, s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline double BRepBody::opacity() const
{
    double res = opacity_raw();
    return res;
}

inline bool BRepBody::opacity(double value)
{
    return opacity_raw(value);
}

inline double BRepBody::visibleOpacity() const
{
    double res = visibleOpacity_raw();
    return res;
}

inline std::string BRepBody::revisionId() const
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

inline core::Ptr<BRepWires> BRepBody::wires() const
{
    core::Ptr<BRepWires> res = wires_raw();
    return res;
}

inline bool BRepBody::isTemporary() const
{
    bool res = isTemporary_raw();
    return res;
}

inline std::string BRepBody::entityToken() const
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

inline core::Ptr<PhysicalProperties> BRepBody::getPhysicalProperties(CalculationAccuracy accuracy) const
{
    core::Ptr<PhysicalProperties> res = getPhysicalProperties_raw(accuracy);
    return res;
}

inline core::Ptr<core::TextureMapControl> BRepBody::textureMapControl() const
{
    core::Ptr<core::TextureMapControl> res = textureMapControl_raw();
    return res;
}

inline bool BRepBody::isSheetMetal() const
{
    bool res = isSheetMetal_raw();
    return res;
}

inline core::Ptr<core::OrientedBoundingBox3D> BRepBody::orientedMinimumBoundingBox() const
{
    core::Ptr<core::OrientedBoundingBox3D> res = orientedMinimumBoundingBox_raw();
    return res;
}

inline core::Ptr<core::BoundingBox3D> BRepBody::preciseBoundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = preciseBoundingBox_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPBODY_API