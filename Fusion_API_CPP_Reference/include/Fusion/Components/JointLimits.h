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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_JOINTLIMITS_CPP__
# define ADSK_FUSION_JOINTLIMITS_API XI_EXPORT
# else
# define ADSK_FUSION_JOINTLIMITS_API
# endif
#else
# define ADSK_FUSION_JOINTLIMITS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// Used to define limits for the range of motion of a joint.
class JointLimits : public core::Base {
public:

    /// The minimum value of the value. This is in either centimeters
    /// or radians depending on if the joint value this is associated with
    /// defines a distance or an angle.
    double minimumValue() const;
    bool minimumValue(double value);

    /// The maximum value of the value. This is in either centimeters
    /// or radians depending on if the joint value this is associated with
    /// defines a distance or an angle.
    double maximumValue() const;
    bool maximumValue(double value);

    /// The resting state value. This is in either centimeters
    /// or radians depending on if the joint value this is associated with
    /// defines a distance or an angle.
    double restValue() const;
    bool restValue(double value);

    /// Gets and sets whether the minimum joint limit is enabled or not.
    bool isMinimumValueEnabled() const;
    bool isMinimumValueEnabled(bool value);

    /// Gets and sets whether the maximum joint limit is enabled or not.
    bool isMaximumValueEnabled() const;
    bool isMaximumValueEnabled(bool value);

    /// Gets and sets whether the resting joint value is enabled or not.
    bool isRestValueEnabled() const;
    bool isRestValueEnabled(bool value);

    ADSK_FUSION_JOINTLIMITS_API static const char* classType();
    ADSK_FUSION_JOINTLIMITS_API const char* objectType() const override;
    ADSK_FUSION_JOINTLIMITS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_JOINTLIMITS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(double value) = 0;
    virtual double maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(double value) = 0;
    virtual double restValue_raw() const = 0;
    virtual bool restValue_raw(double value) = 0;
    virtual bool isMinimumValueEnabled_raw() const = 0;
    virtual bool isMinimumValueEnabled_raw(bool value) = 0;
    virtual bool isMaximumValueEnabled_raw() const = 0;
    virtual bool isMaximumValueEnabled_raw(bool value) = 0;
    virtual bool isRestValueEnabled_raw() const = 0;
    virtual bool isRestValueEnabled_raw(bool value) = 0;
};

// Inline wrappers

inline double JointLimits::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline bool JointLimits::minimumValue(double value)
{
    return minimumValue_raw(value);
}

inline double JointLimits::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline bool JointLimits::maximumValue(double value)
{
    return maximumValue_raw(value);
}

inline double JointLimits::restValue() const
{
    double res = restValue_raw();
    return res;
}

inline bool JointLimits::restValue(double value)
{
    return restValue_raw(value);
}

inline bool JointLimits::isMinimumValueEnabled() const
{
    bool res = isMinimumValueEnabled_raw();
    return res;
}

inline bool JointLimits::isMinimumValueEnabled(bool value)
{
    return isMinimumValueEnabled_raw(value);
}

inline bool JointLimits::isMaximumValueEnabled() const
{
    bool res = isMaximumValueEnabled_raw();
    return res;
}

inline bool JointLimits::isMaximumValueEnabled(bool value)
{
    return isMaximumValueEnabled_raw(value);
}

inline bool JointLimits::isRestValueEnabled() const
{
    bool res = isRestValueEnabled_raw();
    return res;
}

inline bool JointLimits::isRestValueEnabled(bool value)
{
    return isRestValueEnabled_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_JOINTLIMITS_API