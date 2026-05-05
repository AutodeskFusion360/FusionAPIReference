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
#include "PMISegment.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMISYMBOLSEGMENT_CPP__
# define ADSK_FUSION_PMISYMBOLSEGMENT_API XI_EXPORT
# else
# define ADSK_FUSION_PMISYMBOLSEGMENT_API
# endif
#else
# define ADSK_FUSION_PMISYMBOLSEGMENT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a segment containing a symbol used to define the text of a PMI.
class PMISymbolSegment : public PMISegment {
public:

    /// Create a transient PMISymbolSegment object.
    /// pmiSymbolType : The symbol this segment represents.
    /// The newly created PMISymbolSegment.
    static core::Ptr<PMISymbolSegment> create(PMISymbolTypes pmiSymbolType);

    /// Gets and sets the symbol of this segment.
    PMISymbolTypes pmiSymbolType() const;
    bool pmiSymbolType(PMISymbolTypes value);

    ADSK_FUSION_PMISYMBOLSEGMENT_API static const char* classType();
    ADSK_FUSION_PMISYMBOLSEGMENT_API const char* objectType() const override;
    ADSK_FUSION_PMISYMBOLSEGMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMISYMBOLSEGMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMISYMBOLSEGMENT_API static PMISymbolSegment* create_raw(PMISymbolTypes pmiSymbolType);
    virtual PMISymbolTypes pmiSymbolType_raw() const = 0;
    virtual bool pmiSymbolType_raw(PMISymbolTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<PMISymbolSegment> PMISymbolSegment::create(PMISymbolTypes pmiSymbolType)
{
    core::Ptr<PMISymbolSegment> res = create_raw(pmiSymbolType);
    return res;
}

inline PMISymbolTypes PMISymbolSegment::pmiSymbolType() const
{
    PMISymbolTypes res = pmiSymbolType_raw();
    return res;
}

inline bool PMISymbolSegment::pmiSymbolType(PMISymbolTypes value)
{
    return pmiSymbolType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMISYMBOLSEGMENT_API