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
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSENTITY_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSENTITY_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSENTITY_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSENTITY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox3D;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class CustomGraphicsBillBoard;
    class CustomGraphicsColorEffect;
    class CustomGraphicsViewPlacement;
    class CustomGraphicsViewScale;
}}

namespace adsk { namespace fusion {

/// The base class for all visible and selectable custom graphics objects.
class CustomGraphicsEntity : public core::Base {
public:

    /// Deletes the entity from the custom graphics group.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Gets and sets if the graphics entity is visible in the graphics window. By
    /// default, when a new entity is created it is visible.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets and sets if the graphics entity is selectable within the graphics window. By
    /// default, when a new entity is created it is selectable.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Sets the opacity of the graphics entity. By default, when a new entity is it is
    /// completely opaque and does not override the opacity defined by the material.
    /// opacity : The opacity value where 1.0 is completely opaque and 0.0 is completely transparent.
    /// isOverride : Indicates if this entities opacity will override the opacity defined by the material.
    /// If true, it will override the material opacity and if false the opacity values will
    /// accumulate.
    /// Returns true if setting the opacity information was successful.
    bool setOpacity(double opacity, bool isOverride);

    /// Gets the opacity of the graphics entity.
    /// opacity : The opacity value where 1.0 is completely opaque and 0.0 is completely transparent.
    /// isOverride : Indicates if this entities opacity will override the opacity defined by the material.
    /// If true, it will override the material opacity and if false the opacity values will
    /// accumulate.
    /// Returns true if getting the opacity information was successful.
    bool getOpacity(double& opacity, bool& isOverride);

    /// Gets and sets the transform associated with the graphics entity. When a new graphics
    /// entity is created its default transform is an identity matrix which results in the graphics entity
    /// being displayed in model space using the original coordinate data used to define the entity.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// Gets and sets the depth priority associated with the graphics entity. The depth priority defines
    /// how one graphics entity will be drawn with respect to another entity. This is useful when there
    /// are entities that lie in the same space so it's ambiguous which should be drawn on the other. For
    /// example, if you draw a curve on a planar mesh and want the curve to be completely visible. You can
    /// set the depth priority of the curve to be greater than the mesh so it will be drawn after the mesh
    /// and will remain visible.
    /// 
    /// When a new graphics entity is created it's default depth priority is 0.
    int depthPriority() const;
    bool depthPriority(int value);

    /// Gets and sets the culling model to use when rendering the entity. Culling is used when the entity contains
    /// a mesh or B-Rep faces and defines which sides of the mesh or face are rendered. This is primarily used
    /// for a watertight mesh or solid B-Rep so that the "inside" of the faces is not rendered since it's never
    /// visible to the user.
    /// 
    /// When a new graphics entity is created its default cull mode is CustomGraphicsCullBack which will optimize
    /// the rendering of "solid" meshes so the inside is not rendered.
    CustomGraphicsCullModes cullMode() const;
    bool cullMode(CustomGraphicsCullModes value);

    /// Gets and sets the current color definition for this entity. The color of custom graphics can
    /// be defined in many ways; solid color, simple material, and appearance.
    core::Ptr<CustomGraphicsColorEffect> color() const;
    bool color(const core::Ptr<CustomGraphicsColorEffect>& value);

    /// Returns the parent Component for a top-level group or the CustomGraphicsGroup object for
    /// graphics entities and child groups.
    core::Ptr<core::Base> parent() const;

    /// An id you can specify for the entity. By default, all new graphics entities do not have an id and
    /// this property will return an empty string. But in cases where entities will be selected, assigning
    /// an id can make understanding what was selected much easier.
    std::string id() const;
    bool id(const std::string& value);

    /// Returns a box oriented parallel to the world x-y-x axes that contains the graphics entity.
    /// Depending on whether the graphics are drawn in model space or screen space this will return
    /// the bounding box in either centimeters (model) or pixels (screen). In the case where it
    /// returns the bounding box in pixel space, the Z coordinates of the box will be 0 and can be ignored.
    core::Ptr<core::BoundingBox3D> boundingBox() const;

    /// Gets and sets the billboarding behavior of this custom graphics entity. To define billboarding
    /// you can set this property using a CustomGraphicsBillBoard objects that you statically create using
    /// the create method of the CustomGraphicsBillBoard class. To remove billboarding from this entity
    /// you can set this property to null.
    /// 
    /// Billboarding is used to specify that the orientation of custom graphics is defined relative to the
    /// screen instead of model space. This is commonly used for legends and symbols that you want to
    /// always face the user, even as the camera is rotated.
    core::Ptr<CustomGraphicsBillBoard> billBoarding() const;
    bool billBoarding(const core::Ptr<CustomGraphicsBillBoard>& value);

    /// Gets and sets the graphics view placement being applied to this graphics entity. A
    /// CustomGraphicsViewPlacement object can be created using the static create method of the
    /// class. When assigned to a graphics entity the position of the graphics is defined
    /// relative to the view in 2D view space (pixels) rather than in 3D model space (centimeters).
    core::Ptr<CustomGraphicsViewPlacement> viewPlacement() const;
    bool viewPlacement(const core::Ptr<CustomGraphicsViewPlacement>& value);

    /// Gets and sets the graphics view scale being applied to this graphics entity. A
    /// CustomGraphicsViewScale object can be created using the static create method of the
    /// class. When assigned to a graphics entity the size of the graphics entity is defined
    /// in view space (pixels) instead of model space (centimeters).
    core::Ptr<CustomGraphicsViewScale> viewScale() const;
    bool viewScale(const core::Ptr<CustomGraphicsViewScale>& value);

    /// Gets and sets the name displayed when this entity is selected. If no name has been set,
    /// "Custom Graphics" will be displayed.
    std::string name() const;
    bool name(const std::string& value);

    ADSK_FUSION_CUSTOMGRAPHICSENTITY_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSENTITY_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSENTITY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSENTITY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw() = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual bool setOpacity_raw(double opacity, bool isOverride) = 0;
    virtual bool getOpacity_raw(double& opacity, bool& isOverride) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual int depthPriority_raw() const = 0;
    virtual bool depthPriority_raw(int value) = 0;
    virtual CustomGraphicsCullModes cullMode_raw() const = 0;
    virtual bool cullMode_raw(CustomGraphicsCullModes value) = 0;
    virtual CustomGraphicsColorEffect* color_raw() const = 0;
    virtual bool color_raw(CustomGraphicsColorEffect* value) = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual bool id_raw(const char* value) = 0;
    virtual core::BoundingBox3D* boundingBox_raw() const = 0;
    virtual CustomGraphicsBillBoard* billBoarding_raw() const = 0;
    virtual bool billBoarding_raw(CustomGraphicsBillBoard* value) = 0;
    virtual CustomGraphicsViewPlacement* viewPlacement_raw() const = 0;
    virtual bool viewPlacement_raw(CustomGraphicsViewPlacement* value) = 0;
    virtual CustomGraphicsViewScale* viewScale_raw() const = 0;
    virtual bool viewScale_raw(CustomGraphicsViewScale* value) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual void placeholderCustomGraphicsEntity0() {}
    virtual void placeholderCustomGraphicsEntity1() {}
    virtual void placeholderCustomGraphicsEntity2() {}
    virtual void placeholderCustomGraphicsEntity3() {}
    virtual void placeholderCustomGraphicsEntity4() {}
    virtual void placeholderCustomGraphicsEntity5() {}
    virtual void placeholderCustomGraphicsEntity6() {}
    virtual void placeholderCustomGraphicsEntity7() {}
    virtual void placeholderCustomGraphicsEntity8() {}
    virtual void placeholderCustomGraphicsEntity9() {}
    virtual void placeholderCustomGraphicsEntity10() {}
    virtual void placeholderCustomGraphicsEntity11() {}
    virtual void placeholderCustomGraphicsEntity12() {}
    virtual void placeholderCustomGraphicsEntity13() {}
    virtual void placeholderCustomGraphicsEntity14() {}
    virtual void placeholderCustomGraphicsEntity15() {}
    virtual void placeholderCustomGraphicsEntity16() {}
    virtual void placeholderCustomGraphicsEntity17() {}
    virtual void placeholderCustomGraphicsEntity18() {}
    virtual void placeholderCustomGraphicsEntity19() {}
    virtual void placeholderCustomGraphicsEntity20() {}
    virtual void placeholderCustomGraphicsEntity21() {}
    virtual void placeholderCustomGraphicsEntity22() {}
    virtual void placeholderCustomGraphicsEntity23() {}
    virtual void placeholderCustomGraphicsEntity24() {}
    virtual void placeholderCustomGraphicsEntity25() {}
    virtual void placeholderCustomGraphicsEntity26() {}
    virtual void placeholderCustomGraphicsEntity27() {}
    virtual void placeholderCustomGraphicsEntity28() {}
    virtual void placeholderCustomGraphicsEntity29() {}
    virtual void placeholderCustomGraphicsEntity30() {}
    virtual void placeholderCustomGraphicsEntity31() {}
    virtual void placeholderCustomGraphicsEntity32() {}
    virtual void placeholderCustomGraphicsEntity33() {}
    virtual void placeholderCustomGraphicsEntity34() {}
    virtual void placeholderCustomGraphicsEntity35() {}
    virtual void placeholderCustomGraphicsEntity36() {}
};

// Inline wrappers

inline bool CustomGraphicsEntity::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool CustomGraphicsEntity::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool CustomGraphicsEntity::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline bool CustomGraphicsEntity::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool CustomGraphicsEntity::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline bool CustomGraphicsEntity::setOpacity(double opacity, bool isOverride)
{
    bool res = setOpacity_raw(opacity, isOverride);
    return res;
}

inline bool CustomGraphicsEntity::getOpacity(double& opacity, bool& isOverride)
{
    bool res = getOpacity_raw(opacity, isOverride);
    return res;
}

inline core::Ptr<core::Matrix3D> CustomGraphicsEntity::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool CustomGraphicsEntity::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline int CustomGraphicsEntity::depthPriority() const
{
    int res = depthPriority_raw();
    return res;
}

inline bool CustomGraphicsEntity::depthPriority(int value)
{
    return depthPriority_raw(value);
}

inline CustomGraphicsCullModes CustomGraphicsEntity::cullMode() const
{
    CustomGraphicsCullModes res = cullMode_raw();
    return res;
}

inline bool CustomGraphicsEntity::cullMode(CustomGraphicsCullModes value)
{
    return cullMode_raw(value);
}

inline core::Ptr<CustomGraphicsColorEffect> CustomGraphicsEntity::color() const
{
    core::Ptr<CustomGraphicsColorEffect> res = color_raw();
    return res;
}

inline bool CustomGraphicsEntity::color(const core::Ptr<CustomGraphicsColorEffect>& value)
{
    return color_raw(value.get());
}

inline core::Ptr<core::Base> CustomGraphicsEntity::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline std::string CustomGraphicsEntity::id() const
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

inline bool CustomGraphicsEntity::id(const std::string& value)
{
    return id_raw(value.c_str());
}

inline core::Ptr<core::BoundingBox3D> CustomGraphicsEntity::boundingBox() const
{
    core::Ptr<core::BoundingBox3D> res = boundingBox_raw();
    return res;
}

inline core::Ptr<CustomGraphicsBillBoard> CustomGraphicsEntity::billBoarding() const
{
    core::Ptr<CustomGraphicsBillBoard> res = billBoarding_raw();
    return res;
}

inline bool CustomGraphicsEntity::billBoarding(const core::Ptr<CustomGraphicsBillBoard>& value)
{
    return billBoarding_raw(value.get());
}

inline core::Ptr<CustomGraphicsViewPlacement> CustomGraphicsEntity::viewPlacement() const
{
    core::Ptr<CustomGraphicsViewPlacement> res = viewPlacement_raw();
    return res;
}

inline bool CustomGraphicsEntity::viewPlacement(const core::Ptr<CustomGraphicsViewPlacement>& value)
{
    return viewPlacement_raw(value.get());
}

inline core::Ptr<CustomGraphicsViewScale> CustomGraphicsEntity::viewScale() const
{
    core::Ptr<CustomGraphicsViewScale> res = viewScale_raw();
    return res;
}

inline bool CustomGraphicsEntity::viewScale(const core::Ptr<CustomGraphicsViewScale>& value)
{
    return viewScale_raw(value.get());
}

inline std::string CustomGraphicsEntity::name() const
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

inline bool CustomGraphicsEntity::name(const std::string& value)
{
    return name_raw(value.c_str());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSENTITY_API