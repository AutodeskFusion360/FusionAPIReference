//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "GeneratedData.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_CPP__
# define ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API
# endif
#else
# define ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Result of an additive interference analysis operation.
class AdditiveInterferenceAnalysisResult : public GeneratedData {
public:

    /// Gets a list of all interfering occurrences.
    std::vector<core::Ptr<fusion::Occurrence>> interferingOccurrences() const;

    ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API static const char* classType();
    ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual fusion::Occurrence** interferingOccurrences_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<fusion::Occurrence>> AdditiveInterferenceAnalysisResult::interferingOccurrences() const
{
    std::vector<core::Ptr<fusion::Occurrence>> res;
    size_t s;

    fusion::Occurrence** p= interferingOccurrences_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEINTERFERENCEANALYSISRESULT_API