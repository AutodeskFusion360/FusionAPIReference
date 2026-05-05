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
# ifdef __COMPILING_ADSK_FUSION_THREADDATAQUERY_CPP__
# define ADSK_FUSION_THREADDATAQUERY_API XI_EXPORT
# else
# define ADSK_FUSION_THREADDATAQUERY_API
# endif
#else
# define ADSK_FUSION_THREADDATAQUERY_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This object provides methods to query the thread data contained in the XML files in ThreadData folder within the
/// Fusion install folder. You can use the queried values to create a ThreadInfo object that is then used to
/// create a thread feature.
class ThreadDataQuery : public core::Base {
public:

    /// This method returns an array of all the available thread types (families). The type names are always
    /// English. This English name should be used in the other methods that take the type as an input argument.
    /// If you need to display the type name to the user, you can use the threadTypeCustomName method To get
    /// the localized name.
    std::vector<std::string> allThreadTypes() const;

    /// Returns an array/list of all the available thread sizes for a given thread type. You can
    /// use the allThreadTypes property to get the available thread types.
    /// threadType : Specify the thread type.
    /// Returns the specified thread sizes or an empty array/list if an invalid thread type was specified.
    std::vector<std::string> allSizes(const std::string& threadType) const;

    /// returns an array/list of all the available thread designations for a thread type of a given size. Valid
    /// thread types and sizes and be obtained by using the allThreadTypes and allSizes functions.
    /// threadType : The thread type of the designation you want.
    /// size : The thread size of the designation you want.
    /// Returns the specified thread designations or empty array/list if an invalid thread type or size was specified.
    std::vector<std::string> allDesignations(const std::string& threadType, const std::string& size) const;

    /// Returns and array/list of all the available classes for a thread type of a given thread designation.
    /// isInternal : Indicates if the thread is an internal or external thread.
    /// threadType : The thread type of the thread class you want.
    /// designation : The thread designation of the thread class you want.
    /// Returns the specified thread classes or empty array/list if an invalid thread type or designation was specified.
    std::vector<std::string> allClasses(bool isInternal, const std::string& threadType, const std::string& designation) const;

    /// Method that returns the custom name for a given thread type. The custom name is the localized name
    /// of the thread type using the current language specified for Fusion.
    /// threadType : The thread type you want to get the custom name for.
    /// Returns the specified custom name or an empty string if an invalid thread type was specified.
    std::string threadTypeCustomName(const std::string& threadType) const;

    /// Method that returns the unit for a given thread type.
    /// threadType : The thread type you want to get the thread unit type for.
    /// Returns the specified unit or an empty string if an invalid thread type was specified.
    std::string threadTypeUnit(const std::string& threadType) const;

    /// Method that gets the recommended thread data for a given cylinder diameter. This method
    /// is only valid for straight threads and will fail for tapered threads.
    /// modelDiameter : The diameter of the cylinder the thread will be placed on. The units are centimeters.
    /// isInternal : Indicates if the thread is an internal or external thread.
    /// threadType : Specifies the thread type to query the thread data.
    /// designation : The output thread designation.
    /// threadClass : The output thread class.
    /// Returns true if successful.
    bool recommendThreadData(double modelDiameter, bool isInternal, const std::string& threadType, std::string& designation, std::string& threadClass) const;

    /// Gets the default thread type for inch threads.
    std::string defaultInchThreadType() const;

    /// Gets the default thread type for metric threads.
    std::string defaultMetricThreadType() const;

    /// Static method to create a new ThreadDataQuery object. The ThreadDataQuery object is a utility object that
    /// provides methods to query for the valid thread definitions defined in Fusion. This object provides similar
    /// functionality as the Thread and Hole command dialogs to find valid thread types, designations and classes which can
    /// be used to create thread and tapped hole features.
    /// isTapered : Specifies if you want to query for standard or tapered holes.
    /// Returns a ThreadDataQuery object.
    static core::Ptr<ThreadDataQuery> create(bool isTapered = false);

    /// Returns if this ThreadDataQuery was created to query for standard or tapered threads.
    bool isTapered() const;

    ADSK_FUSION_THREADDATAQUERY_API static const char* classType();
    ADSK_FUSION_THREADDATAQUERY_API const char* objectType() const override;
    ADSK_FUSION_THREADDATAQUERY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREADDATAQUERY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char** allThreadTypes_raw(size_t& return_size) const = 0;
    virtual char** allSizes_raw(const char* threadType, size_t& return_size) const = 0;
    virtual char** allDesignations_raw(const char* threadType, const char* size, size_t& return_size) const = 0;
    virtual char** allClasses_raw(bool isInternal, const char* threadType, const char* designation, size_t& return_size) const = 0;
    virtual char* threadTypeCustomName_raw(const char* threadType) const = 0;
    virtual char* threadTypeUnit_raw(const char* threadType) const = 0;
    virtual bool recommendThreadData_raw(double modelDiameter, bool isInternal, const char* threadType, char*& designation, char*& threadClass) const = 0;
    virtual char* defaultInchThreadType_raw() const = 0;
    virtual char* defaultMetricThreadType_raw() const = 0;
    ADSK_FUSION_THREADDATAQUERY_API static ThreadDataQuery* create_raw(bool isTapered);
    virtual bool isTapered_raw() const = 0;
};

// Inline wrappers

inline std::vector<std::string> ThreadDataQuery::allThreadTypes() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allThreadTypes_raw(s);
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

inline std::vector<std::string> ThreadDataQuery::allSizes(const std::string& threadType) const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allSizes_raw(threadType.c_str(), s);
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

inline std::vector<std::string> ThreadDataQuery::allDesignations(const std::string& threadType, const std::string& size) const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allDesignations_raw(threadType.c_str(), size.c_str(), s);
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

inline std::vector<std::string> ThreadDataQuery::allClasses(bool isInternal, const std::string& threadType, const std::string& designation) const
{
    std::vector<std::string> res;
    size_t s;

    char** p= allClasses_raw(isInternal, threadType.c_str(), designation.c_str(), s);
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

inline std::string ThreadDataQuery::threadTypeCustomName(const std::string& threadType) const
{
    std::string res;

    char* p= threadTypeCustomName_raw(threadType.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ThreadDataQuery::threadTypeUnit(const std::string& threadType) const
{
    std::string res;

    char* p= threadTypeUnit_raw(threadType.c_str());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ThreadDataQuery::recommendThreadData(double modelDiameter, bool isInternal, const std::string& threadType, std::string& designation, std::string& threadClass) const
{
    char* designation_ = nullptr;
    char* threadClass_ = nullptr;

    bool res = recommendThreadData_raw(modelDiameter, isInternal, threadType.c_str(), designation_, threadClass_);
    designation.clear();
    if (designation_)
    {
        designation = designation_;
        core::DeallocateArray(designation_);
    }
    threadClass.clear();
    if (threadClass_)
    {
        threadClass = threadClass_;
        core::DeallocateArray(threadClass_);
    }
    return res;
}

inline std::string ThreadDataQuery::defaultInchThreadType() const
{
    std::string res;

    char* p= defaultInchThreadType_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ThreadDataQuery::defaultMetricThreadType() const
{
    std::string res;

    char* p= defaultMetricThreadType_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<ThreadDataQuery> ThreadDataQuery::create(bool isTapered)
{
    core::Ptr<ThreadDataQuery> res = create_raw(isTapered);
    return res;
}

inline bool ThreadDataQuery::isTapered() const
{
    bool res = isTapered_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADDATAQUERY_API