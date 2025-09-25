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
#include "../Fusion/Design.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_FLATPATTERNPRODUCT_CPP__
# define ADSK_FUSION_FLATPATTERNPRODUCT_API XI_EXPORT
# else
# define ADSK_FUSION_FLATPATTERNPRODUCT_API
# endif
#else
# define ADSK_FUSION_FLATPATTERNPRODUCT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class FlatPattern;
}}

namespace adsk { namespace fusion {

/// Product that contains all of the information associated with a flat pattern.
/// 
/// A FlatPatternProduct object exists for each flat pattern created.
class FlatPatternProduct : public Design {
public:

    /// Gets the flat pattern associated with this FlatPatternProduct.
    core::Ptr<FlatPattern> flatPattern() const;

    /// Deletes this FlatPatternProduct and the flat pattern it contains.
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_FUSION_FLATPATTERNPRODUCT_API static const char* classType();
    ADSK_FUSION_FLATPATTERNPRODUCT_API const char* objectType() const override;
    ADSK_FUSION_FLATPATTERNPRODUCT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_FLATPATTERNPRODUCT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual FlatPattern* flatPattern_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline core::Ptr<FlatPattern> FlatPatternProduct::flatPattern() const
{
    core::Ptr<FlatPattern> res = flatPattern_raw();
    return res;
}

inline bool FlatPatternProduct::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_FLATPATTERNPRODUCT_API