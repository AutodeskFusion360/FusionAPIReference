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
# ifdef __COMPILING_ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that is a boolean.
class BooleanGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property.
    bool value() const;
    bool value(bool value);

    ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool value_raw() const = 0;
    virtual bool value_raw(bool value) = 0;
};

// Inline wrappers

inline bool BooleanGraphNodeProperty::value() const
{
    bool res = value_raw();
    return res;
}

inline bool BooleanGraphNodeProperty::value(bool value)
{
    return value_raw(value);
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_BOOLEANGRAPHNODEPROPERTY_API