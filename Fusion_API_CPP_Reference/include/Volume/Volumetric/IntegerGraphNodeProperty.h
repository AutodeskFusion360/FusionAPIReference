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
#include "GraphNodeProperty.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that is an integer.
class IntegerGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property.
    int value() const;
    bool value(int value);

    ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int value_raw() const = 0;
    virtual bool value_raw(int value) = 0;
};

// Inline wrappers

inline int IntegerGraphNodeProperty::value() const
{
    int res = value_raw();
    return res;
}

inline bool IntegerGraphNodeProperty::value(int value)
{
    return value_raw(value);
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_INTEGERGRAPHNODEPROPERTY_API