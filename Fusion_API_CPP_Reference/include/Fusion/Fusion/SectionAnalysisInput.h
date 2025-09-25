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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SECTIONANALYSISINPUT_CPP__
# define ADSK_FUSION_SECTIONANALYSISINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_SECTIONANALYSISINPUT_API
# endif
#else
# define ADSK_FUSION_SECTIONANALYSISINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
    class Matrix3D;
}}

namespace adsk { namespace fusion {

/// Provides access the all of the settings available when creating a section analysis.
/// This object is the API equivalent of the command dialog that contains the inputs
/// to create a section analysis. Use this object to define the settings you need and
/// then pass this into the add method to create the section analysis.
class SectionAnalysisInput : public core::Base {
public:

    /// A property that gets and sets the planar entity used to define the cut plane and can be either
    /// a planar BRepFace or a ConstructionPlane object.
    core::Ptr<core::Base> cutPlaneEntity() const;
    bool cutPlaneEntity(const core::Ptr<core::Base>& value);

    /// Returns the matrix that describes the initial position and orientation of the
    /// specified cut plane entity. Any additional offsets or rotations are defined
    /// by a transformation matrix that is applied to this initial position matrix.
    /// That matrix is obtained and set using the transform property.
    core::Ptr<core::Matrix3D> initialPosition() const;

    /// The initial position of the section plane is defined by the specified cut plane
    /// entity. Any offsets or rotations are defined by a transformation matrix that is
    /// applied to the initial position. This property allows you to get and set the
    /// transformation matrix.
    core::Ptr<core::Matrix3D> transform() const;
    bool transform(const core::Ptr<core::Matrix3D>& value);

    /// A property that flips which side of the part is cut away by the section. This is a
    /// convenience method that results in flipping the Z axis of the transform while maintaining
    /// a valid rectangular coordinate system. You can directly manipulate the transform matrix
    /// to have the same effect.
    bool flip();

    /// A property that gets and sets the color of the section. This property defaults to null,
    /// indicating that the component color should be used. The opacity value of the color is ignored.
    core::Ptr<core::Color> sectionColor() const;
    bool sectionColor(const core::Ptr<core::Color>& value);

    /// A property that gets and sets if a hatch pattern should be shown on the section. This
    /// property defaults to true when the input is created.
    bool isHatchShown() const;
    bool isHatchShown(bool value);

    ADSK_FUSION_SECTIONANALYSISINPUT_API static const char* classType();
    ADSK_FUSION_SECTIONANALYSISINPUT_API const char* objectType() const override;
    ADSK_FUSION_SECTIONANALYSISINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SECTIONANALYSISINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* cutPlaneEntity_raw() const = 0;
    virtual bool cutPlaneEntity_raw(core::Base* value) = 0;
    virtual core::Matrix3D* initialPosition_raw() const = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(core::Matrix3D* value) = 0;
    virtual bool flip_raw() = 0;
    virtual core::Color* sectionColor_raw() const = 0;
    virtual bool sectionColor_raw(core::Color* value) = 0;
    virtual bool isHatchShown_raw() const = 0;
    virtual bool isHatchShown_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> SectionAnalysisInput::cutPlaneEntity() const
{
    core::Ptr<core::Base> res = cutPlaneEntity_raw();
    return res;
}

inline bool SectionAnalysisInput::cutPlaneEntity(const core::Ptr<core::Base>& value)
{
    return cutPlaneEntity_raw(value.get());
}

inline core::Ptr<core::Matrix3D> SectionAnalysisInput::initialPosition() const
{
    core::Ptr<core::Matrix3D> res = initialPosition_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> SectionAnalysisInput::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool SectionAnalysisInput::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline bool SectionAnalysisInput::flip()
{
    bool res = flip_raw();
    return res;
}

inline core::Ptr<core::Color> SectionAnalysisInput::sectionColor() const
{
    core::Ptr<core::Color> res = sectionColor_raw();
    return res;
}

inline bool SectionAnalysisInput::sectionColor(const core::Ptr<core::Color>& value)
{
    return sectionColor_raw(value.get());
}

inline bool SectionAnalysisInput::isHatchShown() const
{
    bool res = isHatchShown_raw();
    return res;
}

inline bool SectionAnalysisInput::isHatchShown(bool value)
{
    return isHatchShown_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SECTIONANALYSISINPUT_API