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
#include "../../Core/Application/Document.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FUSIONDOCUMENT_CPP__
# define ADSK_FUSION_FUSIONDOCUMENT_API XI_EXPORT
# else
# define ADSK_FUSION_FUSIONDOCUMENT_API
# endif
#else
# define ADSK_FUSION_FUSIONDOCUMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
}}

namespace adsk { namespace fusion {

/// Object that represents a Fusion specific document.
class FusionDocument : public core::Document {
public:

    /// Returns the design associated with this Fusion document.
    core::Ptr<Design> design() const;

    ADSK_FUSION_FUSIONDOCUMENT_API static const char* classType();
    ADSK_FUSION_FUSIONDOCUMENT_API const char* objectType() const override;
    ADSK_FUSION_FUSIONDOCUMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FUSIONDOCUMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Design* design_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Design> FusionDocument::design() const
{
    core::Ptr<Design> res = design_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FUSIONDOCUMENT_API