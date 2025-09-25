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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_CPP__
# define ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API XI_EXPORT
# else
# define ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API
# endif
#else
# define ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// The base class for all custom graphics color effects.
class CustomGraphicsColorEffect : public core::Base {
public:

    ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API static const char* classType();
    ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API const char* objectType() const override;
    ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderCustomGraphicsColorEffect0() {}
    virtual void placeholderCustomGraphicsColorEffect1() {}
    virtual void placeholderCustomGraphicsColorEffect2() {}
    virtual void placeholderCustomGraphicsColorEffect3() {}
    virtual void placeholderCustomGraphicsColorEffect4() {}
    virtual void placeholderCustomGraphicsColorEffect5() {}
    virtual void placeholderCustomGraphicsColorEffect6() {}
    virtual void placeholderCustomGraphicsColorEffect7() {}
    virtual void placeholderCustomGraphicsColorEffect8() {}
    virtual void placeholderCustomGraphicsColorEffect9() {}
    virtual void placeholderCustomGraphicsColorEffect10() {}
    virtual void placeholderCustomGraphicsColorEffect11() {}
    virtual void placeholderCustomGraphicsColorEffect12() {}
    virtual void placeholderCustomGraphicsColorEffect13() {}
    virtual void placeholderCustomGraphicsColorEffect14() {}
    virtual void placeholderCustomGraphicsColorEffect15() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CUSTOMGRAPHICSCOLOREFFECT_API