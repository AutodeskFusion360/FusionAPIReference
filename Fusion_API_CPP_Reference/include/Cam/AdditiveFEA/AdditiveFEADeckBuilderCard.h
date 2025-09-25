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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_CPP__
# define ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API
# endif
#else
# define ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// An AdditiveFEADeckBuilderCard is a single card in an additive FEA simulation input
/// file
class AdditiveFEADeckBuilderCard : public core::Base {
public:

    std::string name() const;

    std::string stringValue() const;
    bool stringValue(const std::string& value);

    ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API static const char* classType();
    ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* stringValue_raw() const = 0;
    virtual bool stringValue_raw(const char* value) = 0;
    virtual void placeholderAdditiveFEADeckBuilderCard0() {}
    virtual void placeholderAdditiveFEADeckBuilderCard1() {}
    virtual void placeholderAdditiveFEADeckBuilderCard2() {}
    virtual void placeholderAdditiveFEADeckBuilderCard3() {}
    virtual void placeholderAdditiveFEADeckBuilderCard4() {}
};

// Inline wrappers

inline std::string AdditiveFEADeckBuilderCard::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string AdditiveFEADeckBuilderCard::stringValue() const
{
    std::string res;

    char* p= stringValue_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool AdditiveFEADeckBuilderCard::stringValue(const std::string& value)
{
    return stringValue_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFEADECKBUILDERCARD_API