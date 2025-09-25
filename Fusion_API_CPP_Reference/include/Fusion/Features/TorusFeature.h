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
# ifdef __COMPILING_ADSK_FUSION_TORUSFEATURE_CPP__
# define ADSK_FUSION_TORUSFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_TORUSFEATURE_API
# endif
#else
# define ADSK_FUSION_TORUSFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Object that represents an existing torus feature in a design.
class TorusFeature : public Feature {
public:

    ADSK_FUSION_TORUSFEATURE_API static const char* classType();
    ADSK_FUSION_TORUSFEATURE_API const char* objectType() const override;
    ADSK_FUSION_TORUSFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TORUSFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TORUSFEATURE_API