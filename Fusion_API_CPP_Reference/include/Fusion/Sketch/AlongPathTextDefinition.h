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
#include "../../Core/CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ALONGPATHTEXTDEFINITION_CPP__
# define ADSK_FUSION_ALONGPATHTEXTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ALONGPATHTEXTDEFINITION_API
# endif
#else
# define ADSK_FUSION_ALONGPATHTEXTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines the information for text that follows along a path.
class AlongPathTextDefinition : public SketchTextDefinition {
public:

    /// Get and sets the entity that defines the path for the text. This can be a SketchCurve or BRepEdge object.
    core::Ptr<core::Base> path() const;
    bool path(const core::Ptr<core::Base>& value);

    /// Gets and sets if the text should be positioned above or below the path entity.
    bool isAbovePath() const;
    bool isAbovePath(bool value);

    /// Gets and sets the horizontal alignment of the text with respect to the path curve.
    core::HorizontalAlignments horizontalAlignment() const;
    bool horizontalAlignment(core::HorizontalAlignments value);

    /// Gets and sets the spacing between the characters. This is an additional spacing to apply
    /// that is defined as a percentage of the default spacing. A spacing of 0 indicates no
    /// additional spacing. A spacing of 50 indicates to use the default plus 50% of the default.
    double characterSpacing() const;
    bool characterSpacing(double value);

    ADSK_FUSION_ALONGPATHTEXTDEFINITION_API static const char* classType();
    ADSK_FUSION_ALONGPATHTEXTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ALONGPATHTEXTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ALONGPATHTEXTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* path_raw() const = 0;
    virtual bool path_raw(core::Base* value) = 0;
    virtual bool isAbovePath_raw() const = 0;
    virtual bool isAbovePath_raw(bool value) = 0;
    virtual core::HorizontalAlignments horizontalAlignment_raw() const = 0;
    virtual bool horizontalAlignment_raw(core::HorizontalAlignments value) = 0;
    virtual double characterSpacing_raw() const = 0;
    virtual bool characterSpacing_raw(double value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> AlongPathTextDefinition::path() const
{
    core::Ptr<core::Base> res = path_raw();
    return res;
}

inline bool AlongPathTextDefinition::path(const core::Ptr<core::Base>& value)
{
    return path_raw(value.get());
}

inline bool AlongPathTextDefinition::isAbovePath() const
{
    bool res = isAbovePath_raw();
    return res;
}

inline bool AlongPathTextDefinition::isAbovePath(bool value)
{
    return isAbovePath_raw(value);
}

inline core::HorizontalAlignments AlongPathTextDefinition::horizontalAlignment() const
{
    core::HorizontalAlignments res = horizontalAlignment_raw();
    return res;
}

inline bool AlongPathTextDefinition::horizontalAlignment(core::HorizontalAlignments value)
{
    return horizontalAlignment_raw(value);
}

inline double AlongPathTextDefinition::characterSpacing() const
{
    double res = characterSpacing_raw();
    return res;
}

inline bool AlongPathTextDefinition::characterSpacing(double value)
{
    return characterSpacing_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ALONGPATHTEXTDEFINITION_API