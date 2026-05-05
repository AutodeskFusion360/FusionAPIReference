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
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CLEARANCEHOLEDATAQUERY_CPP__
# define ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API XI_EXPORT
# else
# define ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API
# endif
#else
# define ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This object provides methods to query the clearance hole to find valid definitions for creating
/// a clearance hole.
class ClearanceHoleDataQuery : public core::Base {
public:

    /// Static method to create a new ClearanceHoleDataQuery object. The ClearanceHoleDataQuery object
    /// is a utility object that provides methods to query for the valid clearance hole definitions
    /// defined in Fusion. This object provides similar functionality as the hole command dialog to
    /// find valid clearance standards, fastener types, and sizes, which can be used to create clearance
    /// hole features.
    /// Returns a ClearanceHoleDataQuery object.
    static core::Ptr<ClearanceHoleDataQuery> create();

    /// This method returns an array of all the available standards. The standards' names are always
    /// English. This English name should be used in the other methods that take the standard as an
    /// input argument. If you need to display the standard name to the user, you can use the
    /// standardCustomName method To get the localized name.
    std::vector<std::string> allStandards() const;

    /// Method that returns the custom name for a given standard. The custom name is the localized name
    /// of the standard using the current language specified for Fusion.
    /// standard : The standard you want to get the custom name for.
    /// Returns the specified custom name or an empty string if an invalid standard is specified.
    std::string standardCustomName(const std::string& standard) const;

    /// This method returns an array of all the available fastener types for the given standard.
    /// To get the available standards, use the allStandards property.
    /// standard : The standard to search within.
    /// Returns the specified fastener types or an empty array if an invalid standard is specified.
    std::vector<std::string> allFastenerTypes(const std::string& standard) const;

    /// This method returns an array of all the sizes for the given standard and fastener type. Valid standards and
    /// fastener types can be obtained using the allStandards and allFastenerTypes functions.
    /// standard : The standard to search within.
    /// fastenerType : The fastener type in the specified standard to search within.
    /// Returns the specified sizes or empty array if an invalid standard or fastener type is specified.
    std::vector<std::string> allSizes(const std::string& standard, const std::string& fastenerType) const;

    ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API static const char* classType();
    ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API const char* objectType() const override;
    ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API static ClearanceHoleDataQuery* create_raw();
    virtual char** allStandards_raw(size_t& return_size) const = 0;
    virtual char* standardCustomName_raw(const char* standard) const = 0;
    virtual char** allFastenerTypes_raw(const char* standard, size_t& return_size) const = 0;
    virtual char** allSizes_raw(const char* standard, const char* fastenerType, size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<ClearanceHoleDataQuery> ClearanceHoleDataQuery::create()
{
    core::Ptr<ClearanceHoleDataQuery> res = create_raw();
    return res;
}

inline std::vector<std::string> ClearanceHoleDataQuery::allStandards() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allStandards_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ClearanceHoleDataQuery::standardCustomName(const std::string& standard) const
{
    std::string res;

    char* p= standardCustomName_raw(standard.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> ClearanceHoleDataQuery::allFastenerTypes(const std::string& standard) const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allFastenerTypes_raw(standard.c_str(), s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> ClearanceHoleDataQuery::allSizes(const std::string& standard, const std::string& fastenerType) const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allSizes_raw(standard.c_str(), fastenerType.c_str(), s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            core::DeallocateArray(pChar);
        }
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CLEARANCEHOLEDATAQUERY_API