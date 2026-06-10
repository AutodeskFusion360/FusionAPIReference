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
#include "../Features/Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_UNFOLDFEATURE_CPP__
# define ADSK_FUSION_UNFOLDFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_UNFOLDFEATURE_API
# endif
#else
# define ADSK_FUSION_UNFOLDFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class RefoldFeature;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing unfold feature in a design.
class UnfoldFeature : public Feature {
public:

    /// Returns the refold feature associated with this unfold feature, or null if there is no associated refold.
    /// Unfold and refold features are often created together in a group.
    core::Ptr<RefoldFeature> refoldFeature() const;

    ADSK_FUSION_UNFOLDFEATURE_API static const char* classType();
    ADSK_FUSION_UNFOLDFEATURE_API const char* objectType() const override;
    ADSK_FUSION_UNFOLDFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_UNFOLDFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RefoldFeature* refoldFeature_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<RefoldFeature> UnfoldFeature::refoldFeature() const
{
    core::Ptr<RefoldFeature> res = refoldFeature_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_UNFOLDFEATURE_API