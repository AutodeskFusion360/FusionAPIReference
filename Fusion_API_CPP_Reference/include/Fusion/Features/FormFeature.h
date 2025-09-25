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
#include "Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FORMFEATURE_CPP__
# define ADSK_FUSION_FORMFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_FORMFEATURE_API
# endif
#else
# define ADSK_FUSION_FORMFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class TSplineBodies;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Form feature in a design.
class FormFeature : public Feature {
public:

    /// Returns a TSplineBodies collection where you can access any existing
    /// T-Spline bodies and through it create new T-Spline bodies.
    core::Ptr<TSplineBodies> tSplineBodies() const;

    /// Set the user-interface so that the form body is in edit mode.
    /// Returns true if successful.
    bool startEdit();

    /// Exits from edit mode in the user-interface. If this form feature in not
    /// in edit mode, then nothing happens.
    /// Returns true if successful.
    bool finishEdit();

    ADSK_FUSION_FORMFEATURE_API static const char* classType();
    ADSK_FUSION_FORMFEATURE_API const char* objectType() const override;
    ADSK_FUSION_FORMFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FORMFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual TSplineBodies* tSplineBodies_raw() const = 0;
    virtual bool startEdit_raw() = 0;
    virtual bool finishEdit_raw() = 0;
};

// Inline wrappers

inline core::Ptr<TSplineBodies> FormFeature::tSplineBodies() const
{
    core::Ptr<TSplineBodies> res = tSplineBodies_raw();
    return res;
}

inline bool FormFeature::startEdit()
{
    bool res = startEdit_raw();
    return res;
}

inline bool FormFeature::finishEdit()
{
    bool res = finishEdit_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FORMFEATURE_API