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
# ifdef __COMPILING_ADSK_FUSION_CANVASINPUT_CPP__
# define ADSK_FUSION_CANVASINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_CANVASINPUT_API
# endif
#else
# define ADSK_FUSION_CANVASINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix2D;
    class Plane;
}}
namespace adsk { namespace fusion {
    class BaseFeature;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// The CanvasInput object is used to define the various options when creating a new canvas. It's created
/// using the Canvases.createInput method and is used by the Canvases.add method to create a Canvas.
class CanvasInput : public core::Base {
public:

    /// Gets and sets the plane the canvas is associated with. This can be either a planar Face
    /// or a construction plane. In a direct modeling design or the canvas is being created in a
    /// base feature, this can be a Plane object.
    core::Ptr<core::Base> planarEntity() const;
    bool planarEntity(const core::Ptr<core::Base>& value);

    /// Gets and sets the opacity of the canvas where 0 is completely
    /// transparent and 100 is completely opaque. Setting this property
    /// to a value outside the range of 0-100 will result in the value
    /// being set to the closest valid value.
    /// 
    /// Defaults to 50 when the input is created.
    int opacity() const;
    bool opacity(int value);

    /// Controls if the image is visible through the model or not.
    /// 
    /// Defaults to true when the input is created.
    bool isDisplayedThrough() const;
    bool isDisplayedThrough(bool value);

    /// Controls if the canvas is selectable or not within the graphics window.
    /// 
    /// Defaults to false when the input is created.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Controls if the canvas will be rendered when ray tracing within the Render workspace.
    /// 
    /// Defaults to false when the input is created.
    bool isRenderable() const;
    bool isRenderable(bool value);

    /// Gets and sets the filename of the image used for the canvas.
    /// 
    /// When setting this property, it is the full filename to the image to use for the canvas.
    /// PNG, JPEG, and TIFF files are supported.
    std::string imageFilename() const;
    bool imageFilename(const std::string& value);

    /// Returns a Plane object that is obtained from the planar face or construction plane
    /// and defines the parameter space the canvas is positioned relative to.
    core::Ptr<core::Plane> plane() const;

    /// Gets and sets the transform of the canvas. This allows you to control the position, rotation,
    /// scaling, and flipping. The X and Y axes defined by the matrix, must be perpendicular to one another.
    /// The directions of the X and Y axes defines the orientation of the image.
    /// 
    /// This is a 3x3 matrix where the third column controls the position of the canvas and is relative to
    /// the parameter space of the plane defined by the specified planar face or construction plane.
    core::Ptr<core::Matrix2D> transform() const;
    bool transform(const core::Ptr<core::Matrix2D>& value);

    /// Flips the image along the horizontal axis. This is a convenience method that
    /// flips the direction of the X axis of the transform.
    /// Returns true if the flip was successful.
    bool flipHorizontal();

    /// Flips the image along the vertical axis. This is a convenience method that
    /// flips the direction of the Y axis of the transform.
    /// Returns true if the flip was successful.
    bool flipVertical();

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

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// In order for geometry to be transformed correctly, an Occurrence for creation needs to be
    /// specified when the canvas is created based on geometry (e.g. a profile and/or face(s))
    /// in another component AND (the canvas) is not in the root component.
    /// The CreationOccurrence is analogous to the active occurrence in the UI
    core::Ptr<Occurrence> creationOccurrence() const;
    bool creationOccurrence(const core::Ptr<Occurrence>& value);

    ADSK_FUSION_CANVASINPUT_API static const char* classType();
    ADSK_FUSION_CANVASINPUT_API const char* objectType() const override;
    ADSK_FUSION_CANVASINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CANVASINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* planarEntity_raw() const = 0;
    virtual bool planarEntity_raw(core::Base* value) = 0;
    virtual int opacity_raw() const = 0;
    virtual bool opacity_raw(int value) = 0;
    virtual bool isDisplayedThrough_raw() const = 0;
    virtual bool isDisplayedThrough_raw(bool value) = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual bool isRenderable_raw() const = 0;
    virtual bool isRenderable_raw(bool value) = 0;
    virtual char* imageFilename_raw() const = 0;
    virtual bool imageFilename_raw(const char* value) = 0;
    virtual core::Plane* plane_raw() const = 0;
    virtual core::Matrix2D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix2D* value) = 0;
    virtual bool flipHorizontal_raw() = 0;
    virtual bool flipVertical_raw() = 0;
    virtual BaseFeature* targetBaseFeature_raw() const = 0;
    virtual bool targetBaseFeature_raw(BaseFeature* value) = 0;
    virtual Occurrence* creationOccurrence_raw() const = 0;
    virtual bool creationOccurrence_raw(Occurrence* value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> CanvasInput::planarEntity() const
{
    core::Ptr<core::Base> res = planarEntity_raw();
    return res;
}

inline bool CanvasInput::planarEntity(const core::Ptr<core::Base>& value)
{
    return planarEntity_raw(value.get());
}

inline int CanvasInput::opacity() const
{
    int res = opacity_raw();
    return res;
}

inline bool CanvasInput::opacity(int value)
{
    return opacity_raw(value);
}

inline bool CanvasInput::isDisplayedThrough() const
{
    bool res = isDisplayedThrough_raw();
    return res;
}

inline bool CanvasInput::isDisplayedThrough(bool value)
{
    return isDisplayedThrough_raw(value);
}

inline bool CanvasInput::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool CanvasInput::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline bool CanvasInput::isRenderable() const
{
    bool res = isRenderable_raw();
    return res;
}

inline bool CanvasInput::isRenderable(bool value)
{
    return isRenderable_raw(value);
}

inline std::string CanvasInput::imageFilename() const
{
    std::string res;

    char* p= imageFilename_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CanvasInput::imageFilename(const std::string& value)
{
    return imageFilename_raw(value.c_str());
}

inline core::Ptr<core::Plane> CanvasInput::plane() const
{
    core::Ptr<core::Plane> res = plane_raw();
    return res;
}

inline core::Ptr<core::Matrix2D> CanvasInput::transform() const
{
    core::Ptr<core::Matrix2D> res = transform_raw();
    return res;
}

inline bool CanvasInput::transform(const core::Ptr<core::Matrix2D>& value)
{
    return transform_raw(value.get());
}

inline bool CanvasInput::flipHorizontal()
{
    bool res = flipHorizontal_raw();
    return res;
}

inline bool CanvasInput::flipVertical()
{
    bool res = flipVertical_raw();
    return res;
}

inline core::Ptr<BaseFeature> CanvasInput::targetBaseFeature() const
{
    core::Ptr<BaseFeature> res = targetBaseFeature_raw();
    return res;
}

inline bool CanvasInput::targetBaseFeature(const core::Ptr<BaseFeature>& value)
{
    return targetBaseFeature_raw(value.get());
}

inline core::Ptr<Occurrence> CanvasInput::creationOccurrence() const
{
    core::Ptr<Occurrence> res = creationOccurrence_raw();
    return res;
}

inline bool CanvasInput::creationOccurrence(const core::Ptr<Occurrence>& value)
{
    return creationOccurrence_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CANVASINPUT_API