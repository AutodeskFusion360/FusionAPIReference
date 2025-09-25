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
#include "Analysis.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SECTIONANALYSIS_CPP__
# define ADSK_FUSION_SECTIONANALYSIS_API XI_EXPORT
# else
# define ADSK_FUSION_SECTIONANALYSIS_API
# endif
#else
# define ADSK_FUSION_SECTIONANALYSIS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Color;
    class Matrix3D;
}}

namespace adsk { namespace fusion {

/// Represents any existing Section Analysis that exist in the design.
class SectionAnalysis : public Analysis {
public:

    /// A property that gets and sets the planar entity used to define the cut plane and can be either
    /// a planar BRepFace or a ConstructionPlane object.
    core::Ptr<core::Base> cutPlane() const;
    bool cutPlane(const core::Ptr<core::Base>& value);

    /// Returns the matrix that describes the initial position and orientation of the
    /// specified cut plane entity. Any additional offsets or rotations are defined
    /// by a transformation matrix that is applied to this initial position. That
    /// matrix can be obtained and set using the transform property.
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

    /// A property that gets and sets the color of the section. A value of null indicates
    /// the component color should be used. The opacity value of the color is ignored.
    core::Ptr<core::Color> sectionColor() const;
    bool sectionColor(const core::Ptr<core::Color>& value);

    /// A property that gets and sets if a hatch pattern should be shown on the section.
    bool isHatchShown() const;
    bool isHatchShown(bool value);

    ADSK_FUSION_SECTIONANALYSIS_API static const char* classType();
    ADSK_FUSION_SECTIONANALYSIS_API const char* objectType() const override;
    ADSK_FUSION_SECTIONANALYSIS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SECTIONANALYSIS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* cutPlane_raw() const = 0;
    virtual bool cutPlane_raw(core::Base* value) = 0;
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

inline core::Ptr<core::Base> SectionAnalysis::cutPlane() const
{
    core::Ptr<core::Base> res = cutPlane_raw();
    return res;
}

inline bool SectionAnalysis::cutPlane(const core::Ptr<core::Base>& value)
{
    return cutPlane_raw(value.get());
}

inline core::Ptr<core::Matrix3D> SectionAnalysis::initialPosition() const
{
    core::Ptr<core::Matrix3D> res = initialPosition_raw();
    return res;
}

inline core::Ptr<core::Matrix3D> SectionAnalysis::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline bool SectionAnalysis::transform(const core::Ptr<core::Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline bool SectionAnalysis::flip()
{
    bool res = flip_raw();
    return res;
}

inline core::Ptr<core::Color> SectionAnalysis::sectionColor() const
{
    core::Ptr<core::Color> res = sectionColor_raw();
    return res;
}

inline bool SectionAnalysis::sectionColor(const core::Ptr<core::Color>& value)
{
    return sectionColor_raw(value.get());
}

inline bool SectionAnalysis::isHatchShown() const
{
    bool res = isHatchShown_raw();
    return res;
}

inline bool SectionAnalysis::isHatchShown(bool value)
{
    return isHatchShown_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SECTIONANALYSIS_API