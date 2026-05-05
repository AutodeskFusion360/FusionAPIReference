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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIDATUMREFERENCE_CPP__
# define ADSK_FUSION_PMIDATUMREFERENCE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIDATUMREFERENCE_API
# endif
#else
# define ADSK_FUSION_PMIDATUMREFERENCE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIAnnotation;
    class PMIDatumModifier;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a datum reference used in PMI geometric tolerances.
/// A datum reference identifies a datum feature and includes any modifiers that apply to it.
class PMIDatumReference : public core::Base {
public:

    /// Gets the PMIAnnotation that represents the referenced datum, or null if no reference exists.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    core::Ptr<PMIAnnotation> referenceDatum() const;

    /// Gets an array of datum modifiers associated with this datum reference.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    std::vector<core::Ptr<PMIDatumModifier>> modifiers() const;

    ADSK_FUSION_PMIDATUMREFERENCE_API static const char* classType();
    ADSK_FUSION_PMIDATUMREFERENCE_API const char* objectType() const override;
    ADSK_FUSION_PMIDATUMREFERENCE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIDATUMREFERENCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIAnnotation* referenceDatum_raw() const = 0;
    virtual PMIDatumModifier** modifiers_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<PMIAnnotation> PMIDatumReference::referenceDatum() const
{
    core::Ptr<PMIAnnotation> res = referenceDatum_raw();
    return res;
}

inline std::vector<core::Ptr<PMIDatumModifier>> PMIDatumReference::modifiers() const
{
    std::vector<core::Ptr<PMIDatumModifier>> res;
    size_t s;

    PMIDatumModifier** p= modifiers_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIDATUMREFERENCE_API