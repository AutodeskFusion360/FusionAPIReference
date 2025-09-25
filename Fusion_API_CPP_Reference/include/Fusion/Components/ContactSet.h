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
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CONTACTSET_CPP__
# define ADSK_FUSION_CONTACTSET_API XI_EXPORT
# else
# define ADSK_FUSION_CONTACTSET_API
# endif
#else
# define ADSK_FUSION_CONTACTSET_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Represents a contact set in a design.
class ContactSet : public core::Base {
public:

    /// Gets and sets the name of the contact set.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the group of Occurrence and/or BRepBody objects that are part of this contact set.
    std::vector<core::Ptr<core::Base>> occurencesAndBodies() const;
    bool occurencesAndBodies(const std::vector<core::Ptr<core::Base>>& value);

    /// Deletes this contact set from the design.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets and sets if this contact set is currently suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    ADSK_FUSION_CONTACTSET_API static const char* classType();
    ADSK_FUSION_CONTACTSET_API const char* objectType() const override;
    ADSK_FUSION_CONTACTSET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CONTACTSET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Base** occurencesAndBodies_raw(size_t& return_size) const = 0;
    virtual bool occurencesAndBodies_raw(core::Base** value, size_t value_size) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
};

// Inline wrappers

inline std::string ContactSet::name() const
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

inline bool ContactSet::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::vector<core::Ptr<core::Base>> ContactSet::occurencesAndBodies() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= occurencesAndBodies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ContactSet::occurencesAndBodies(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = occurencesAndBodies_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool ContactSet::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool ContactSet::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool ContactSet::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CONTACTSET_API