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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_THREADINFO_CPP__
# define ADSK_FUSION_THREADINFO_API XI_EXPORT
# else
# define ADSK_FUSION_THREADINFO_API
# endif
#else
# define ADSK_FUSION_THREADINFO_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// This class defines the methods and properties that define the type and size of a thread. This object is used
/// to create and query thread and tapped (straight and tapered) hole features. A new ThreadInfo object is
/// created by using the ThreadInfo.create method. If the ThreadInfo object is obtained from
/// an existing thread or hole feature, modifying the ThreadInfo object will modify the feature.
class ThreadInfo : public core::Base {
public:

    /// Returns and sets the string that defines the thread type.
    std::string threadType() const;
    bool threadType(const std::string& value);

    /// Returns the string that defines the thread size. This is
    std::string threadSize() const;

    /// Returns and sets the string that defines the thread designation.
    std::string threadDesignation() const;
    bool threadDesignation(const std::string& value);

    /// Returns and sets the string that defines the thread class.
    std::string threadClass() const;
    bool threadClass(const std::string& value);

    /// Returns and sets if the thread is an internal or external thread. A value of true indicates an internal thread.
    /// It defaults to true.
    bool isInternal() const;
    bool isInternal(bool value);

    /// Returns the value that defines the thread angle. The units are degrees.
    double threadAngle() const;

    /// Returns the value that defines the thread pitch. The units are centimeters.
    double threadPitch() const;

    /// Returns the value that defines the major diameter. The units are centimeters.
    double majorDiameter() const;

    /// Returns the value that defines the minor diameter. The units are centimeters.
    double minorDiameter() const;

    /// Returns the value that defines the pitch diameter. The units are centimeters.
    double pitchDiameter() const;

    ADSK_FUSION_THREADINFO_API static const char* classType();
    ADSK_FUSION_THREADINFO_API const char* objectType() const override;
    ADSK_FUSION_THREADINFO_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_THREADINFO_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* threadType_raw() const = 0;
    virtual bool threadType_raw(const char* value) = 0;
    virtual char* threadSize_raw() const = 0;
    virtual char* threadDesignation_raw() const = 0;
    virtual bool threadDesignation_raw(const char* value) = 0;
    virtual char* threadClass_raw() const = 0;
    virtual bool threadClass_raw(const char* value) = 0;
    virtual bool isInternal_raw() const = 0;
    virtual bool isInternal_raw(bool value) = 0;
    virtual double threadAngle_raw() const = 0;
    virtual double threadPitch_raw() const = 0;
    virtual double majorDiameter_raw() const = 0;
    virtual double minorDiameter_raw() const = 0;
    virtual double pitchDiameter_raw() const = 0;
};

// Inline wrappers

inline std::string ThreadInfo::threadType() const
{
    std::string res;

    char* p= threadType_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ThreadInfo::threadType(const std::string& value)
{
    return threadType_raw(value.c_str());
}

inline std::string ThreadInfo::threadSize() const
{
    std::string res;

    char* p= threadSize_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string ThreadInfo::threadDesignation() const
{
    std::string res;

    char* p= threadDesignation_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ThreadInfo::threadDesignation(const std::string& value)
{
    return threadDesignation_raw(value.c_str());
}

inline std::string ThreadInfo::threadClass() const
{
    std::string res;

    char* p= threadClass_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool ThreadInfo::threadClass(const std::string& value)
{
    return threadClass_raw(value.c_str());
}

inline bool ThreadInfo::isInternal() const
{
    bool res = isInternal_raw();
    return res;
}

inline bool ThreadInfo::isInternal(bool value)
{
    return isInternal_raw(value);
}

inline double ThreadInfo::threadAngle() const
{
    double res = threadAngle_raw();
    return res;
}

inline double ThreadInfo::threadPitch() const
{
    double res = threadPitch_raw();
    return res;
}

inline double ThreadInfo::majorDiameter() const
{
    double res = majorDiameter_raw();
    return res;
}

inline double ThreadInfo::minorDiameter() const
{
    double res = minorDiameter_raw();
    return res;
}

inline double ThreadInfo::pitchDiameter() const
{
    double res = pitchDiameter_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADINFO_API