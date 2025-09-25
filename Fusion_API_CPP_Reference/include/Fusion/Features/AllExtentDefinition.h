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
#include "ExtentDefinition.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ALLEXTENTDEFINITION_CPP__
# define ADSK_FUSION_ALLEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_ALLEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_ALLEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the inputs for a AllExtentDefinition object.
/// This defines a feature extent where the direction can be positive, negative, or symmetric.
/// Setting the direction to Symmetric specifies that the extrusion is through-all,
/// and goes in both directions.
class AllExtentDefinition : public ExtentDefinition {
public:

    /// Gets and sets the direction of the extent.
    ExtentDirections direction() const;
    bool direction(ExtentDirections value);

    ADSK_FUSION_ALLEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_ALLEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_ALLEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ALLEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ExtentDirections direction_raw() const = 0;
    virtual bool direction_raw(ExtentDirections value) = 0;
};

// Inline wrappers

inline ExtentDirections AllExtentDefinition::direction() const
{
    ExtentDirections res = direction_raw();
    return res;
}

inline bool AllExtentDefinition::direction(ExtentDirections value)
{
    return direction_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ALLEXTENTDEFINITION_API