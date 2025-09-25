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
# ifdef __COMPILING_ADSK_FUSION_EXTENTDEFINITION_CPP__
# define ADSK_FUSION_EXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_EXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_EXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Feature;
}}

namespace adsk { namespace fusion {

/// The base class for the various definition objects used to define the extent of a feature.
class ExtentDefinition : public core::Base {
public:

    /// Returns the parent feature that this definition is associated with. If this definition has been created
    /// statically and is not associated with a feature this property will return null.
    core::Ptr<Feature> parentFeature() const;

    ADSK_FUSION_EXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_EXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_EXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Feature* parentFeature_raw() const = 0;
    virtual void placeholderExtentDefinition0() {}
    virtual void placeholderExtentDefinition1() {}
    virtual void placeholderExtentDefinition2() {}
    virtual void placeholderExtentDefinition3() {}
    virtual void placeholderExtentDefinition4() {}
    virtual void placeholderExtentDefinition5() {}
    virtual void placeholderExtentDefinition6() {}
    virtual void placeholderExtentDefinition7() {}
    virtual void placeholderExtentDefinition8() {}
    virtual void placeholderExtentDefinition9() {}
    virtual void placeholderExtentDefinition10() {}
    virtual void placeholderExtentDefinition11() {}
    virtual void placeholderExtentDefinition12() {}
    virtual void placeholderExtentDefinition13() {}
    virtual void placeholderExtentDefinition14() {}
    virtual void placeholderExtentDefinition15() {}
    virtual void placeholderExtentDefinition16() {}
    virtual void placeholderExtentDefinition17() {}
    virtual void placeholderExtentDefinition18() {}
    virtual void placeholderExtentDefinition19() {}
    virtual void placeholderExtentDefinition20() {}
    virtual void placeholderExtentDefinition21() {}
    virtual void placeholderExtentDefinition22() {}
    virtual void placeholderExtentDefinition23() {}
    virtual void placeholderExtentDefinition24() {}
    virtual void placeholderExtentDefinition25() {}
    virtual void placeholderExtentDefinition26() {}
    virtual void placeholderExtentDefinition27() {}
    virtual void placeholderExtentDefinition28() {}
    virtual void placeholderExtentDefinition29() {}
    virtual void placeholderExtentDefinition30() {}
};

// Inline wrappers

inline core::Ptr<Feature> ExtentDefinition::parentFeature() const
{
    core::Ptr<Feature> res = parentFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EXTENTDEFINITION_API