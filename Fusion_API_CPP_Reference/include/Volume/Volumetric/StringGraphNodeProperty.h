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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef VOLUMEXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_CPP__
# define ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API XI_EXPORT
# else
# define ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API
# endif
#else
# define ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace volume {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A property value that is a string.
class StringGraphNodeProperty : public GraphNodeProperty {
public:

    /// Get or set the value of the property.
    std::string value() const;
    bool value(const std::string& value);

    ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API static const char* classType();
    ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API const char* objectType() const override;
    ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string StringGraphNodeProperty::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool StringGraphNodeProperty::value(const std::string& value)
{
    return value_raw(value.c_str());
}
}// namespace volume
}// namespace adsk

#undef ADSK_VOLUME_STRINGGRAPHNODEPROPERTY_API