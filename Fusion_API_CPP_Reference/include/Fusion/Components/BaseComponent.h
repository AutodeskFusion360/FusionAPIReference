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
# ifdef __COMPILING_ADSK_FUSION_BASECOMPONENT_CPP__
# define ADSK_FUSION_BASECOMPONENT_API XI_EXPORT
# else
# define ADSK_FUSION_BASECOMPONENT_API
# endif
#else
# define ADSK_FUSION_BASECOMPONENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataComponent;
    class ObjectCollection;
    class Point3D;
    class PropertyGroups;
    class Vector3D;
}}
namespace adsk { namespace fusion {
    class BRepBodies;
    class Canvases;
    class Component;
    class ConstructionAxes;
    class ConstructionPlanes;
    class ConstructionPoints;
    class Decals;
    class Design;
    class OccurrenceList;
    class Occurrences;
}}

namespace adsk { namespace fusion {

/// The BaseComponent object that defines all of the common design data
/// and is the base class for the product specific components.
class BaseComponent : public core::Base {
public:

    /// Property that gets and sets the name of this component. This is the name
    /// shown in the browser for each occurrence referencing this component.
    std::string name() const;
    bool name(const std::string& value);

    /// Property that returns the Occurrences collection associated with this component.
    /// This provides access to the occurrences at the top-level of this component and provides
    /// the functionality to add new occurrences.
    core::Ptr<Occurrences> occurrences() const;

    /// Returns all occurrences at the top-level of this component that reference the specified component.
    /// The returned list is read-only.
    /// component : The component that is being referenced by the occurrences that will be returned.
    /// The occurrences referenced by the specified component.
    core::Ptr<OccurrenceList> occurrencesByComponent(const core::Ptr<Component>& component) const;

    /// Returns all of the occurrences in the assembly regardless of their level within the assembly structure.
    /// The returned list is read-only.
    core::Ptr<OccurrenceList> allOccurrences() const;

    /// Returns all occurrences, at any level of the assembly, that reference the specified component.
    /// The returned list is read-only.
    /// component : The component that is being referenced by the occurrences that will be returned.
    /// The occurrences referenced by the specified component.
    core::Ptr<OccurrenceList> allOccurrencesByComponent(const core::Ptr<Component>& component) const;

    /// Returns the construction planes collection associated with this component.
    /// This provides access to the existing construction planes and supports
    /// the creation of new construction planes.
    core::Ptr<ConstructionPlanes> constructionPlanes() const;

    /// Returns the construction axes collection associated with this component.
    /// This provides access to the existing construction axes and supports
    /// the creation of new construction axes.
    core::Ptr<ConstructionAxes> constructionAxes() const;

    /// Returns the construction points collection associated with this component.
    /// This provides access to the existing construction points and supports
    /// the creation of new construction points.
    core::Ptr<ConstructionPoints> constructionPoints() const;

    /// Returns the B-Rep bodies collection associated with this component.
    core::Ptr<BRepBodies> bRepBodies() const;

    /// Returns the parent product this component is owned by.
    core::Ptr<Design> parentDesign() const;

    /// Finds all the B-Rep entities that are intersected by the specified ray. This can return BRepFace, BrepEdge,
    /// and BRepVertex objects.
    /// originPoint : Input point that defines the origin of the ray. The search for entities begins at this point.
    /// rayDirection : Input vector that defines the direction of the ray. The ray is infinite so the length of the vector is ignored.
    /// entityType : The type of B-Rep entity wanted. You can also take advantage of B-Rep topology to infer other intersections. For example,
    /// If you get a BRepEdge it implies that the faces the edge connects were also intersected. If a BRepVertex is returned it
    /// implies the edges that the vertex connects were intersected and the faces that the edges connect were intersected.
    /// proximityTolerance : Optional argument that specifies the tolerance for the search. All entities within this distance from the ray and of the specified type will be returned. If not specified a default small tolerance is used.
    /// visibleEntitiesOnly : Optional argument that indicates whether or not invisible entities should be included in the search. Defaults to True indicating that invisible entities will be ignored.
    /// hitPoints : An ObjectCollection of Point3D objects that represent the coordinates where the ray hit the found entity. There will be the same number of hit points as returned entities
    /// and they will be in the collections in the same order. In other words, hit point 1 corresponds with found entity 1, hit point 2 corresponds with found entity 2, and so on.
    /// Because of the proximity tolerance the hitPoint may not actually lie on the entity but will be within the proximity tolerance to it.
    /// It's an optional out argument, returns the hit points if an existing ObjectCollection is input. You can create a new ObjectCollection by using
    /// the static create method on the ObjectCollection class.
    /// Returns an ObjectCollection containing the entities found. The returned collection can be empty indicating nothing was found. The points are returned
    /// in an order where they are arranged based on their distance from the origin point where the closest point is first. If an entity is hit more than
    /// once, the entity is returned once for the first intersection.
    core::Ptr<core::ObjectCollection> findBRepUsingRay(const core::Ptr<core::Point3D>& originPoint, const core::Ptr<core::Vector3D>& rayDirection, BRepEntityTypes entityType, double proximityTolerance = -1, bool visibleEntitiesOnly = true, const core::Ptr<core::ObjectCollection>& hitPoints = NULL);

    /// Finds all the entities of the specified type at the specified location.
    /// point : Input coordinate that specifies the component space point at which to find the entities.
    /// entityType : The type of B-Rep entity wanted. You can also take advantage of B-Rep topology to infer other that other entities were found. For example,
    /// If you get a BRepEdge it implies that the faces the edge connects were also found. If a BRepVertex is returned it
    /// implies the edges that the vertex connects were found and the faces that the edges connect were found.
    /// proximityTolerance : Specifies the tolerance for the search. All entities within this distance from the search point that match the filter will be returned. If not specified a default tolerance is used.
    /// visibleEntitiesOnly : indicates whether or not invisible objects should be included in the search. Defaults to True indicating that invisible objects will be ignored.
    /// Returns an ObjectCollection containing the entities found. The returned collection can be empty indicating nothing was found.
    core::Ptr<core::ObjectCollection> findBRepUsingPoint(const core::Ptr<core::Point3D>& point, BRepEntityTypes entityType, double proximityTolerance = -1, bool visibleEntitiesOnly = true);

    /// Returns the canvases collection associated with this component. This provides access to the
    /// existing canvases and supports the creation of new canvases.
    core::Ptr<Canvases> canvases() const;

    /// Returns the PropertyGroups object associated with this component.
    core::Ptr<core::PropertyGroups> propertyGroups() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the DataComponent associated with this component. The DataComponent
    /// provides ID information that can be used to access this component using the
    /// MFG DM API. These ID's don't exist until a component has been saved. The ID's
    /// are generated by MFG DM API on the cloud, so there will be a slight delay
    /// after saving before the ID's are available. This property returns null in
    /// the case the MFG DM API information doesn't exist yet.
    /// 
    /// When opening a design, the MFG DM API information is obtained from the cloud
    /// and as a result may not be available immediately after opening a document. Again,
    /// this property will return null in this case too. Essentially, null is returned
    /// in all cases where good ID information is not yet available.
    core::Ptr<core::DataComponent> dataComponent() const;

    /// Returns the decals collection associated with this component. This provides access to the
    /// existing decals and supports the creation of new decals.
    core::Ptr<Decals> decals() const;

    ADSK_FUSION_BASECOMPONENT_API static const char* classType();
    ADSK_FUSION_BASECOMPONENT_API const char* objectType() const override;
    ADSK_FUSION_BASECOMPONENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BASECOMPONENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Occurrences* occurrences_raw() const = 0;
    virtual OccurrenceList* occurrencesByComponent_raw(Component* component) const = 0;
    virtual OccurrenceList* allOccurrences_raw() const = 0;
    virtual OccurrenceList* allOccurrencesByComponent_raw(Component* component) const = 0;
    virtual ConstructionPlanes* constructionPlanes_raw() const = 0;
    virtual ConstructionAxes* constructionAxes_raw() const = 0;
    virtual ConstructionPoints* constructionPoints_raw() const = 0;
    virtual BRepBodies* bRepBodies_raw() const = 0;
    virtual Design* parentDesign_raw() const = 0;
    virtual core::ObjectCollection* findBRepUsingRay_raw(core::Point3D* originPoint, core::Vector3D* rayDirection, BRepEntityTypes entityType, double proximityTolerance, bool visibleEntitiesOnly, core::ObjectCollection* hitPoints) = 0;
    virtual core::ObjectCollection* findBRepUsingPoint_raw(core::Point3D* point, BRepEntityTypes entityType, double proximityTolerance, bool visibleEntitiesOnly) = 0;
    virtual Canvases* canvases_raw() const = 0;
    virtual core::PropertyGroups* propertyGroups_raw() const = 0;
    virtual core::DataComponent* dataComponent_raw() const = 0;
    virtual Decals* decals_raw() const = 0;
    virtual void placeholderBaseComponent0() {}
    virtual void placeholderBaseComponent1() {}
    virtual void placeholderBaseComponent2() {}
    virtual void placeholderBaseComponent3() {}
    virtual void placeholderBaseComponent4() {}
    virtual void placeholderBaseComponent5() {}
    virtual void placeholderBaseComponent6() {}
    virtual void placeholderBaseComponent7() {}
    virtual void placeholderBaseComponent8() {}
    virtual void placeholderBaseComponent9() {}
    virtual void placeholderBaseComponent10() {}
    virtual void placeholderBaseComponent11() {}
    virtual void placeholderBaseComponent12() {}
    virtual void placeholderBaseComponent13() {}
    virtual void placeholderBaseComponent14() {}
    virtual void placeholderBaseComponent15() {}
    virtual void placeholderBaseComponent16() {}
    virtual void placeholderBaseComponent17() {}
    virtual void placeholderBaseComponent18() {}
    virtual void placeholderBaseComponent19() {}
    virtual void placeholderBaseComponent20() {}
    virtual void placeholderBaseComponent21() {}
    virtual void placeholderBaseComponent22() {}
    virtual void placeholderBaseComponent23() {}
    virtual void placeholderBaseComponent24() {}
    virtual void placeholderBaseComponent25() {}
    virtual void placeholderBaseComponent26() {}
    virtual void placeholderBaseComponent27() {}
    virtual void placeholderBaseComponent28() {}
    virtual void placeholderBaseComponent29() {}
    virtual void placeholderBaseComponent30() {}
    virtual void placeholderBaseComponent31() {}
    virtual void placeholderBaseComponent32() {}
    virtual void placeholderBaseComponent33() {}
    virtual void placeholderBaseComponent34() {}
    virtual void placeholderBaseComponent35() {}
    virtual void placeholderBaseComponent36() {}
    virtual void placeholderBaseComponent37() {}
    virtual void placeholderBaseComponent38() {}
    virtual void placeholderBaseComponent39() {}
    virtual void placeholderBaseComponent40() {}
    virtual void placeholderBaseComponent41() {}
    virtual void placeholderBaseComponent42() {}
    virtual void placeholderBaseComponent43() {}
    virtual void placeholderBaseComponent44() {}
    virtual void placeholderBaseComponent45() {}
    virtual void placeholderBaseComponent46() {}
};

// Inline wrappers

inline std::string BaseComponent::name() const
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

inline bool BaseComponent::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<Occurrences> BaseComponent::occurrences() const
{
    core::Ptr<Occurrences> res = occurrences_raw();
    return res;
}

inline core::Ptr<OccurrenceList> BaseComponent::occurrencesByComponent(const core::Ptr<Component>& component) const
{
    core::Ptr<OccurrenceList> res = occurrencesByComponent_raw(component.get());
    return res;
}

inline core::Ptr<OccurrenceList> BaseComponent::allOccurrences() const
{
    core::Ptr<OccurrenceList> res = allOccurrences_raw();
    return res;
}

inline core::Ptr<OccurrenceList> BaseComponent::allOccurrencesByComponent(const core::Ptr<Component>& component) const
{
    core::Ptr<OccurrenceList> res = allOccurrencesByComponent_raw(component.get());
    return res;
}

inline core::Ptr<ConstructionPlanes> BaseComponent::constructionPlanes() const
{
    core::Ptr<ConstructionPlanes> res = constructionPlanes_raw();
    return res;
}

inline core::Ptr<ConstructionAxes> BaseComponent::constructionAxes() const
{
    core::Ptr<ConstructionAxes> res = constructionAxes_raw();
    return res;
}

inline core::Ptr<ConstructionPoints> BaseComponent::constructionPoints() const
{
    core::Ptr<ConstructionPoints> res = constructionPoints_raw();
    return res;
}

inline core::Ptr<BRepBodies> BaseComponent::bRepBodies() const
{
    core::Ptr<BRepBodies> res = bRepBodies_raw();
    return res;
}

inline core::Ptr<Design> BaseComponent::parentDesign() const
{
    core::Ptr<Design> res = parentDesign_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> BaseComponent::findBRepUsingRay(const core::Ptr<core::Point3D>& originPoint, const core::Ptr<core::Vector3D>& rayDirection, BRepEntityTypes entityType, double proximityTolerance, bool visibleEntitiesOnly, const core::Ptr<core::ObjectCollection>& hitPoints)
{
    core::Ptr<core::ObjectCollection> res = findBRepUsingRay_raw(originPoint.get(), rayDirection.get(), entityType, proximityTolerance, visibleEntitiesOnly, hitPoints.get());
    return res;
}

inline core::Ptr<core::ObjectCollection> BaseComponent::findBRepUsingPoint(const core::Ptr<core::Point3D>& point, BRepEntityTypes entityType, double proximityTolerance, bool visibleEntitiesOnly)
{
    core::Ptr<core::ObjectCollection> res = findBRepUsingPoint_raw(point.get(), entityType, proximityTolerance, visibleEntitiesOnly);
    return res;
}

inline core::Ptr<Canvases> BaseComponent::canvases() const
{
    core::Ptr<Canvases> res = canvases_raw();
    return res;
}

inline core::Ptr<core::PropertyGroups> BaseComponent::propertyGroups() const
{
    core::Ptr<core::PropertyGroups> res = propertyGroups_raw();
    return res;
}

inline core::Ptr<core::DataComponent> BaseComponent::dataComponent() const
{
    core::Ptr<core::DataComponent> res = dataComponent_raw();
    return res;
}

inline core::Ptr<Decals> BaseComponent::decals() const
{
    core::Ptr<Decals> res = decals_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BASECOMPONENT_API