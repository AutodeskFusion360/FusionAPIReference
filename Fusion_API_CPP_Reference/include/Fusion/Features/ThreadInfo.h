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

    /// Returns the string that defines the thread size.
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

    /// Gets and sets if the thread is right or left-handed thread. A value of true indicates a right-handed thread.
    /// It defaults to true.
    bool isRightHanded() const;
    bool isRightHanded(bool value);

    /// Indicates if this ThreadInfo object defines a standard or tapered thread.
    bool isTapered() const;

    /// Returns the angle of the tapered thread in centimeters.
    /// 
    /// This is only valid when isTapered is true.
    double taperAngle() const;

    /// Returns the Diameter of the tap drill required to create this tap.
    /// 
    /// This is only valid when isTapered is true.
    double taperTapDrillDiameter() const;

    /// Returns the useful length of threads for a tapered thread in centimeters.
    /// 
    /// This is only valid when isTapered is true.
    double taperUsefulThreadLength() const;

    /// The wrench makeup internal diameter for a taper pipe thread, also known as the effective thread diameter,
    /// is the diameter at the point where the thread engagement occurs when the pipe is tightened with a wrench.
    /// 
    /// This is only valid when isTapered is true.
    double taperWrenchMakeupInternalDiameter() const;

    /// Returns the height of a tapered thread in centimeters.
    /// 
    /// This is only valid when isTapered is true.
    double taperThreadHeight() const;

    /// This method creates a new ThreadInfo object that can be used to create a thread or tapped-hole feature.
    /// The ThreadInfo object defines the type and size of the thread to create. When creating a thread, the
    /// type and size of the thread are defined by specifying the thread type, designation, and class. Fusion
    /// uses this information to look up the full details of the thread in tables delivered with Fusion.
    /// The ThreadDataQuery object can be used to determine valid input for this information.
    /// 
    /// The thread type implicitly defines if the thread is standard or tapered. Tapered threads can only be used
    /// when creating tapped holes and are not supported for thread features.
    /// isTapered : Input Boolean that indicates if the thread is straight or tapered.
    /// isInternal : Input Boolean that indicates if the thread is internal or external. A value of true indicates an internal thread.
    /// When the ThreadInfo is used to create a tapped hole, this value is ignored since it is always an internal thread.
    /// threadType : Input string that defines the thread type.
    /// threadDesignation : Input string that contains the thread designation.
    /// threadClass : Input string that defines the thread class. This argument is ignored for tapered threads, so an empty string can be used.
    /// isRightHanded : Input boolean that defines if the thread is right or left-handed.
    /// Returns the newly created ThreadInfo object or null if the creation failed.
    static core::Ptr<ThreadInfo> create(bool isTapered, bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass, bool isRightHanded);

    /// Method that redefines an existing ThreadInfo object. This is typically used to change the thread of an existing
    /// thread or tapped hole.
    /// 
    /// The ThreadInfo object defines the type and size of a thread by specifying the thread type, designation, and class.
    /// Fusion uses this information to look up the full details of the thread in tables delivered with Fusion. The
    /// ThreadDataQuery object can be used to determine valid input for this information.
    /// 
    /// Tapered threads can only be used when creating or editing tapped holes and are not supported for thread features.
    /// isTapered : Input Boolean that indicates if the thread is straight or tapered.
    /// isInternal : Input Boolean that indicates if the thread is internal or external. A value of true indicates an internal thread.
    /// This value is ignored when the ThreadInfo is used for a tapped hole since they are always internal.
    /// threadType : Input string that defines the thread type.
    /// threadDesignation : Input string that defines the thread designation.
    /// threadClass : Input string that defines the thread class. This argument is ignored for tapered threads.
    /// isRightHanded : Input Boolean that specifies if the thread is straight or tapered.
    /// Returns true if the redefinition was successful.
    bool redefine(bool isTapered, bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass, bool isRightHanded);

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
    virtual bool isRightHanded_raw() const = 0;
    virtual bool isRightHanded_raw(bool value) = 0;
    virtual bool isTapered_raw() const = 0;
    virtual double taperAngle_raw() const = 0;
    virtual double taperTapDrillDiameter_raw() const = 0;
    virtual double taperUsefulThreadLength_raw() const = 0;
    virtual double taperWrenchMakeupInternalDiameter_raw() const = 0;
    virtual double taperThreadHeight_raw() const = 0;
    ADSK_FUSION_THREADINFO_API static ThreadInfo* create_raw(bool isTapered, bool isInternal, const char* threadType, const char* threadDesignation, const char* threadClass, bool isRightHanded);
    virtual bool redefine_raw(bool isTapered, bool isInternal, const char* threadType, const char* threadDesignation, const char* threadClass, bool isRightHanded) = 0;
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

inline bool ThreadInfo::isRightHanded() const
{
    bool res = isRightHanded_raw();
    return res;
}

inline bool ThreadInfo::isRightHanded(bool value)
{
    return isRightHanded_raw(value);
}

inline bool ThreadInfo::isTapered() const
{
    bool res = isTapered_raw();
    return res;
}

inline double ThreadInfo::taperAngle() const
{
    double res = taperAngle_raw();
    return res;
}

inline double ThreadInfo::taperTapDrillDiameter() const
{
    double res = taperTapDrillDiameter_raw();
    return res;
}

inline double ThreadInfo::taperUsefulThreadLength() const
{
    double res = taperUsefulThreadLength_raw();
    return res;
}

inline double ThreadInfo::taperWrenchMakeupInternalDiameter() const
{
    double res = taperWrenchMakeupInternalDiameter_raw();
    return res;
}

inline double ThreadInfo::taperThreadHeight() const
{
    double res = taperThreadHeight_raw();
    return res;
}

inline core::Ptr<ThreadInfo> ThreadInfo::create(bool isTapered, bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass, bool isRightHanded)
{
    core::Ptr<ThreadInfo> res = create_raw(isTapered, isInternal, threadType.c_str(), threadDesignation.c_str(), threadClass.c_str(), isRightHanded);
    return res;
}

inline bool ThreadInfo::redefine(bool isTapered, bool isInternal, const std::string& threadType, const std::string& threadDesignation, const std::string& threadClass, bool isRightHanded)
{
    bool res = redefine_raw(isTapered, isInternal, threadType.c_str(), threadDesignation.c_str(), threadClass.c_str(), isRightHanded);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_THREADINFO_API