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
# ifdef __COMPILING_ADSK_FUSION_SKETCHTEXTDEFINITION_CPP__
# define ADSK_FUSION_SKETCHTEXTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHTEXTDEFINITION_API
# endif
#else
# define ADSK_FUSION_SKETCHTEXTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class SketchText;
}}

namespace adsk { namespace fusion {

/// The base class for the classes that define how text can be defined.
class SketchTextDefinition : public core::Base {
public:

    /// Returns the SketchText object this definition is associated with. This property will
    /// return null in the case the definition object was obtained from a SketchTextInput object
    /// because the SketchText object does not yet exist.
    core::Ptr<SketchText> parentSketchText() const;

    ADSK_FUSION_SKETCHTEXTDEFINITION_API static const char* classType();
    ADSK_FUSION_SKETCHTEXTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHTEXTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHTEXTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchText* parentSketchText_raw() const = 0;
    virtual void placeholderSketchTextDefinition0() {}
    virtual void placeholderSketchTextDefinition1() {}
    virtual void placeholderSketchTextDefinition2() {}
    virtual void placeholderSketchTextDefinition3() {}
    virtual void placeholderSketchTextDefinition4() {}
    virtual void placeholderSketchTextDefinition5() {}
    virtual void placeholderSketchTextDefinition6() {}
    virtual void placeholderSketchTextDefinition7() {}
    virtual void placeholderSketchTextDefinition8() {}
    virtual void placeholderSketchTextDefinition9() {}
    virtual void placeholderSketchTextDefinition10() {}
    virtual void placeholderSketchTextDefinition11() {}
    virtual void placeholderSketchTextDefinition12() {}
    virtual void placeholderSketchTextDefinition13() {}
    virtual void placeholderSketchTextDefinition14() {}
};

// Inline wrappers

inline core::Ptr<SketchText> SketchTextDefinition::parentSketchText() const
{
    core::Ptr<SketchText> res = parentSketchText_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHTEXTDEFINITION_API