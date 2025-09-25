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
# ifdef __COMPILING_ADSK_CAM_CAMARRANGEPARAMETERVALUE_CPP__
# define ADSK_CAM_CAMARRANGEPARAMETERVALUE_API XI_EXPORT
# else
# define ADSK_CAM_CAMARRANGEPARAMETERVALUE_API
# endif
#else
# define ADSK_CAM_CAMARRANGEPARAMETERVALUE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class ArrangeSelections;
}}

namespace adsk { namespace cam {

/// A parameter value that is a CAMArrangeParameterValue.
/// The user needs to set the parameter anew via the API after a model update or after the ArrangeSelections returned by getArrangeSelections() have been edited.
class CAMArrangeParameterValue : public ParameterValue {
public:

    /// Get the values of the parameter as a collection of CadObjects, which currently consist of occurrences.
    /// Returns current ArrangeSelections of the value.
    core::Ptr<ArrangeSelections> getArrangeSelections();

    /// Set the values of the parameter as a collection of CadObjects.
    void applyArrangeSelections(const core::Ptr<ArrangeSelections>& arrangeSelections);

    ADSK_CAM_CAMARRANGEPARAMETERVALUE_API static const char* classType();
    ADSK_CAM_CAMARRANGEPARAMETERVALUE_API const char* objectType() const override;
    ADSK_CAM_CAMARRANGEPARAMETERVALUE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMARRANGEPARAMETERVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeSelections* getArrangeSelections_raw() = 0;
    virtual void applyArrangeSelections_raw(ArrangeSelections* arrangeSelections) = 0;
};

// Inline wrappers

inline core::Ptr<ArrangeSelections> CAMArrangeParameterValue::getArrangeSelections()
{
    core::Ptr<ArrangeSelections> res = getArrangeSelections_raw();
    return res;
}

inline void CAMArrangeParameterValue::applyArrangeSelections(const core::Ptr<ArrangeSelections>& arrangeSelections)
{
    applyArrangeSelections_raw(arrangeSelections.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMARRANGEPARAMETERVALUE_API