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
#include "ParameterValue.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_CPP__
# define ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CurveSelections;
}}

namespace adsk { namespace cam {

/// A parameter value that is a CadContours2dParameterValue.
/// The user needs to set the parameter anew via the API after a model update or after the CurveSelections returned by getCurveSelections() has been edited.
class CadContours2dParameterValue : public ParameterValue {
public:

    /// Get the values of the parameter as a collection of CadCurves, which might consist of chains, pockets, silhouettes and face countours.
    /// Returns current CurveSelections of the value.
    core::Ptr<CurveSelections> getCurveSelections();

    /// Set the values of the parameter as a collection of CadCurves.
    /// If the input does not define continuous contours, the contour is amended and calculated, but only if used on Operations, not OperationInputs
    /// When used with OperationInputs, the contours are calculated when creating an operation out of the input.
    void applyCurveSelections(const core::Ptr<CurveSelections>& curveSelections);

    ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CurveSelections* getCurveSelections_raw() = 0;
    virtual void applyCurveSelections_raw(CurveSelections* curveSelections) = 0;
};

// Inline wrappers

inline core::Ptr<CurveSelections> CadContours2dParameterValue::getCurveSelections()
{
    core::Ptr<CurveSelections> res = getCurveSelections_raw();
    return res;
}

inline void CadContours2dParameterValue::applyCurveSelections(const core::Ptr<CurveSelections>& curveSelections)
{
    applyCurveSelections_raw(curveSelections.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CADCONTOURS2DPARAMETERVALUE_API