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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIDATUMMODIFIER_CPP__
# define ADSK_FUSION_PMIDATUMMODIFIER_API XI_EXPORT
# else
# define ADSK_FUSION_PMIDATUMMODIFIER_API
# endif
#else
# define ADSK_FUSION_PMIDATUMMODIFIER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a datum modifier used in PMI datum references.
/// A datum modifier provides additional information about how a datum is applied.
class PMIDatumModifier : public core::Base {
public:

    /// Gets the type of the datum modifier.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    PMIDatumModifierTypes type() const;

    /// Gets whether there is a value associated with this modifier.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    bool hasValue() const;

    /// Gets the value associated with this modifier, if hasValue is true.
    /// 
    /// Returns 0 if hasValue is false.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    double value() const;

    ADSK_FUSION_PMIDATUMMODIFIER_API static const char* classType();
    ADSK_FUSION_PMIDATUMMODIFIER_API const char* objectType() const override;
    ADSK_FUSION_PMIDATUMMODIFIER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIDATUMMODIFIER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIDatumModifierTypes type_raw() const = 0;
    virtual bool hasValue_raw() const = 0;
    virtual double value_raw() const = 0;
};

// Inline wrappers

inline PMIDatumModifierTypes PMIDatumModifier::type() const
{
    PMIDatumModifierTypes res = type_raw();
    return res;
}

inline bool PMIDatumModifier::hasValue() const
{
    bool res = hasValue_raw();
    return res;
}

inline double PMIDatumModifier::value() const
{
    double res = value_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIDATUMMODIFIER_API