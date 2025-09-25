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
# ifdef __COMPILING_ADSK_CAM_INSPECTIONPATHRESULT_CPP__
# define ADSK_CAM_INSPECTIONPATHRESULT_API XI_EXPORT
# else
# define ADSK_CAM_INSPECTIONPATHRESULT_API
# endif
#else
# define ADSK_CAM_INSPECTIONPATHRESULT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class InspectionPointResults;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Class to represent measured results from an surface inspection path.
class InspectionPathResult : public core::Base {
public:

    /// return all the point results for the path.
    core::Ptr<InspectionPointResults> pointResults() const;

    ADSK_CAM_INSPECTIONPATHRESULT_API static const char* classType();
    ADSK_CAM_INSPECTIONPATHRESULT_API const char* objectType() const override;
    ADSK_CAM_INSPECTIONPATHRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_INSPECTIONPATHRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual InspectionPointResults* pointResults_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<InspectionPointResults> InspectionPathResult::pointResults() const
{
    core::Ptr<InspectionPointResults> res = pointResults_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_INSPECTIONPATHRESULT_API