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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FITONPATHTEXTDEFINTION_CPP__
# define ADSK_FUSION_FITONPATHTEXTDEFINTION_API XI_EXPORT
# else
# define ADSK_FUSION_FITONPATHTEXTDEFINTION_API
# endif
#else
# define ADSK_FUSION_FITONPATHTEXTDEFINTION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Defines the information for text that fits along a path.
class FitOnPathTextDefintion : public SketchTextDefinition {
public:

    /// Get and sets the entity that defines the path for the text. This can be a SketchCurve or BRepEdge object.
    core::Ptr<core::Base> path() const;
    bool path(const core::Ptr<core::Base>& value);

    /// Gets and sets if the text should be positioned above or below the path entity.
    bool isAbovePath() const;
    bool isAbovePath(bool value);

    ADSK_FUSION_FITONPATHTEXTDEFINTION_API static const char* classType();
    ADSK_FUSION_FITONPATHTEXTDEFINTION_API const char* objectType() const override;
    ADSK_FUSION_FITONPATHTEXTDEFINTION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FITONPATHTEXTDEFINTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* path_raw() const = 0;
    virtual bool path_raw(core::Base* value) = 0;
    virtual bool isAbovePath_raw() const = 0;
    virtual bool isAbovePath_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> FitOnPathTextDefintion::path() const
{
    core::Ptr<core::Base> res = path_raw();
    return res;
}

inline bool FitOnPathTextDefintion::path(const core::Ptr<core::Base>& value)
{
    return path_raw(value.get());
}

inline bool FitOnPathTextDefintion::isAbovePath() const
{
    bool res = isAbovePath_raw();
    return res;
}

inline bool FitOnPathTextDefintion::isAbovePath(bool value)
{
    return isAbovePath_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FITONPATHTEXTDEFINTION_API