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
#include "SketchTextDefinition.h"
#include "../FusionTypeDefs.h"
#include "../../Core/CoreTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MULTILINETEXTDEFINITION_CPP__
# define ADSK_FUSION_MULTILINETEXTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_MULTILINETEXTDEFINITION_API
# endif
#else
# define ADSK_FUSION_MULTILINETEXTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchLine;
}}

namespace adsk { namespace fusion {

/// Defines the information for multi-line text.
class MultiLineTextDefinition : public SketchTextDefinition {
public:

    /// Returns the four sketch lines that define the boundary of the sketch text. By adding constraints to these lines
    /// you can associatively control the size, position and angle of the sketch text. If the MultiLineTextDefinition
    /// object is obtained from a SketchTextInput object, this property will return null because the text and it's
    /// associated lines have not been created yet.
    std::vector<core::Ptr<SketchLine>> rectangleLines() const;

    /// Gets and sets the horizontal alignment of the text with respect to the text rectangle.
    core::HorizontalAlignments horizontalAlignment() const;
    bool horizontalAlignment(core::HorizontalAlignments value);

    /// Gets and sets the vertical alignment of the text with respect to the text rectangle.
    core::VerticalAlignments verticalAlignment() const;
    bool verticalAlignment(core::VerticalAlignments value);

    /// Rotates the text box.
    /// angle : The angle to rotate the text, specified in radians.
    /// keyPoint : The key point the rotation is defined around. This is optional and defaults the center of the text box.
    /// Returns true if successful.
    bool rotate(double angle, TextBoxKeyPoints keyPoint = adsk::fusion::MiddleTextBoxKeyPoint);

    /// Gets and sets the spacing between the characters. This is an additional spacing to apply
    /// that is defined as a percentage of the default spacing. A spacing of 0 indicates no
    /// additional spacing. A spacing of 50 indicates to use the default plus 50% of the default.
    double characterSpacing() const;
    bool characterSpacing(double value);

    ADSK_FUSION_MULTILINETEXTDEFINITION_API static const char* classType();
    ADSK_FUSION_MULTILINETEXTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_MULTILINETEXTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MULTILINETEXTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchLine** rectangleLines_raw(size_t& return_size) const = 0;
    virtual core::HorizontalAlignments horizontalAlignment_raw() const = 0;
    virtual bool horizontalAlignment_raw(core::HorizontalAlignments value) = 0;
    virtual core::VerticalAlignments verticalAlignment_raw() const = 0;
    virtual bool verticalAlignment_raw(core::VerticalAlignments value) = 0;
    virtual bool rotate_raw(double angle, TextBoxKeyPoints keyPoint) = 0;
    virtual double characterSpacing_raw() const = 0;
    virtual bool characterSpacing_raw(double value) = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<SketchLine>> MultiLineTextDefinition::rectangleLines() const
{
    std::vector<core::Ptr<SketchLine>> res;
    size_t s;

    SketchLine** p= rectangleLines_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::HorizontalAlignments MultiLineTextDefinition::horizontalAlignment() const
{
    core::HorizontalAlignments res = horizontalAlignment_raw();
    return res;
}

inline bool MultiLineTextDefinition::horizontalAlignment(core::HorizontalAlignments value)
{
    return horizontalAlignment_raw(value);
}

inline core::VerticalAlignments MultiLineTextDefinition::verticalAlignment() const
{
    core::VerticalAlignments res = verticalAlignment_raw();
    return res;
}

inline bool MultiLineTextDefinition::verticalAlignment(core::VerticalAlignments value)
{
    return verticalAlignment_raw(value);
}

inline bool MultiLineTextDefinition::rotate(double angle, TextBoxKeyPoints keyPoint)
{
    bool res = rotate_raw(angle, keyPoint);
    return res;
}

inline double MultiLineTextDefinition::characterSpacing() const
{
    double res = characterSpacing_raw();
    return res;
}

inline bool MultiLineTextDefinition::characterSpacing(double value)
{
    return characterSpacing_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MULTILINETEXTDEFINITION_API