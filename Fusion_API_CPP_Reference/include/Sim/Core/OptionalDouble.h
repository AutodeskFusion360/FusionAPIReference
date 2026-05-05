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
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_OPTIONALDOUBLE_CPP__
# define ADSK_SIM_OPTIONALDOUBLE_API XI_EXPORT
# else
# define ADSK_SIM_OPTIONALDOUBLE_API
# endif
#else
# define ADSK_SIM_OPTIONALDOUBLE_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Represents an optional double value.
class OptionalDouble : public core::Base {
public:

    /// Returns true if the value is set, false otherwise.
    bool hasValue() const;

    /// The double value. This property is only valid if hasValue returns true.
    double value() const;

    ADSK_SIM_OPTIONALDOUBLE_API static const char* classType();
    ADSK_SIM_OPTIONALDOUBLE_API const char* objectType() const override;
    ADSK_SIM_OPTIONALDOUBLE_API void* queryInterface(const char* id) const override;
    ADSK_SIM_OPTIONALDOUBLE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool hasValue_raw() const = 0;
    virtual double value_raw() const = 0;
};

// Inline wrappers

inline bool OptionalDouble::hasValue() const
{
    bool res = hasValue_raw();
    return res;
}

inline double OptionalDouble::value() const
{
    double res = value_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_OPTIONALDOUBLE_API