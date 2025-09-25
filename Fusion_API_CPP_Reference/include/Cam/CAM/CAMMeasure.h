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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMMEASURE_CPP__
# define ADSK_CAM_CAMMEASURE_API XI_EXPORT
# else
# define ADSK_CAM_CAMMEASURE_API
# endif
#else
# define ADSK_CAM_CAMMEASURE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class InspectionPathResults;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a Measure folder.
class CAMMeasure : public core::Base {
public:

    /// Access all the surface inspection results from a measure
    /// return a collection of surface inspection results from a measure or null if none found
    core::Ptr<InspectionPathResults> inspectionPathResults() const;

    ADSK_CAM_CAMMEASURE_API static const char* classType();
    ADSK_CAM_CAMMEASURE_API const char* objectType() const override;
    ADSK_CAM_CAMMEASURE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMMEASURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual InspectionPathResults* inspectionPathResults_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<InspectionPathResults> CAMMeasure::inspectionPathResults() const
{
    core::Ptr<InspectionPathResults> res = inspectionPathResults_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMMEASURE_API