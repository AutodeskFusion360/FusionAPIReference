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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMPARAMETERS_CPP__
# define ADSK_CAM_CAMPARAMETERS_API XI_EXPORT
# else
# define ADSK_CAM_CAMPARAMETERS_API
# endif
#else
# define ADSK_CAM_CAMPARAMETERS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameter;
}}

namespace adsk { namespace cam {

/// Collection that provides access to the parameters of an existing operation.
class CAMParameters : public core::Base {
public:

    /// Function that returns the specified parameter using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<CAMParameter> item(size_t index) const;

    /// Returns the parameter of the specified id (internal name).
    /// internalName : The id (internal name) of the parameter.
    /// Returns the specified parameter or null in the case where there is no parameter with the specified id.
    core::Ptr<CAMParameter> itemByName(const std::string& internalName) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Resets each parameter to its system default.
    /// Returns true if the reset was successful.
    bool resetToSystemDefaults();

    typedef CAMParameter iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_CAMPARAMETERS_API static const char* classType();
    ADSK_CAM_CAMPARAMETERS_API const char* objectType() const override;
    ADSK_CAM_CAMPARAMETERS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMPARAMETERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CAMParameter* item_raw(size_t index) const = 0;
    virtual CAMParameter* itemByName_raw(const char* internalName) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool resetToSystemDefaults_raw() = 0;
};

// Inline wrappers

inline core::Ptr<CAMParameter> CAMParameters::item(size_t index) const
{
    core::Ptr<CAMParameter> res = item_raw(index);
    return res;
}

inline core::Ptr<CAMParameter> CAMParameters::itemByName(const std::string& internalName) const
{
    core::Ptr<CAMParameter> res = itemByName_raw(internalName.c_str());
    return res;
}

inline size_t CAMParameters::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool CAMParameters::resetToSystemDefaults()
{
    bool res = resetToSystemDefaults_raw();
    return res;
}

template <class OutputIterator> inline void CAMParameters::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMPARAMETERS_API