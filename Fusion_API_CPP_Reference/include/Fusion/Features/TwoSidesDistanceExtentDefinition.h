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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_CPP__
# define ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This has been retired; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines the inputs for a TwoSidesDistanceExtentDefinition object.
/// This defines a feature extent where the distance in each direction can be a different value.
class TwoSidesDistanceExtentDefinition : public ExtentDefinition {
public:

    /// Gets the ModelParameter that defines the first distance
    core::Ptr<ModelParameter> distanceOne() const;

    /// Gets the ModelParameter that defines the second distance
    core::Ptr<ModelParameter> distanceTwo() const;

    ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* distanceOne_raw() const = 0;
    virtual ModelParameter* distanceTwo_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> TwoSidesDistanceExtentDefinition::distanceOne() const
{
    core::Ptr<ModelParameter> res = distanceOne_raw();
    return res;
}

inline core::Ptr<ModelParameter> TwoSidesDistanceExtentDefinition::distanceTwo() const
{
    core::Ptr<ModelParameter> res = distanceTwo_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TWOSIDESDISTANCEEXTENTDEFINITION_API