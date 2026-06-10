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
# ifdef __COMPILING_ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_CPP__
# define ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API
# endif
#else
# define ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a tolerance value that can be associated with a PMIGeometricValue.
class PMIGeometricValueTolerance : public core::Base {
public:

    /// Create a transient PMIGeometricValueTolerance object.
    /// The default value set is to not have tolerances (hasTolerances = false).
    static core::Ptr<PMIGeometricValueTolerance> create();

    /// Gets and sets whether the tolerances are set or not on the object.
    bool hasTolerances() const;
    bool hasTolerances(bool value);

    /// Gets whether there is a lower tolerance value set.
    bool hasLowerTolerance() const;

    /// Gets the lower tolerance value in cm.
    /// Returns 0 if there is no lower tolerance value set.
    double lowerTolerance() const;

    /// Gets whether there is an upper tolerance value set.
    bool hasUpperTolerance() const;

    /// Gets the upper tolerance value in cm.
    /// Returns 0 if there is no upper tolerance value set.
    double upperTolerance() const;

    /// Gets whether there is a hole tolerance class set.
    bool hasToleranceClass() const;

    /// Gets the hole tolerance class deviation value.
    /// Returns empty string if there is no tolerance class deviation value set.
    std::string toleranceClassDeviation() const;

    /// Gets the hole tolerance class grade value.
    /// Returns empty string if there is no tolerance class grade value set.
    std::string toleranceClassGrade() const;

    /// Gets whether there is tolerance type set.
    bool hasToleranceType() const;

    /// The tolerance type.
    PMIToleranceTypes toleranceType() const;

    /// Sets this object to have symmetric tolerance with the specified value.
    /// tolerance : The value of the tolerance in cm.
    /// Returns true if the operation is successful, false otherwise.
    bool setSymmetric(double tolerance);

    /// Sets this object to have deviation tolerance with the specified upper and lower values.
    /// upperTolerance : The value of the upper tolerance in cm.
    /// lowerTolerance : The value of the lower tolerance in cm.
    /// Returns true if the operation is successful, false otherwise.
    bool setDeviation(double upperTolerance, double lowerTolerance);

    /// Sets this object to have limits stacked tolerance with the specified minimum and maximum values.
    /// Displayed as stacked lines.
    /// minValue : The value of the minimum limit in cm.
    /// maxValue : The value of the maximum limit in cm.
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsStacked(double minValue, double maxValue);

    /// Sets this object to have limits linear tolerance with the specified minimum and maximum values.
    /// Displayed as values on one line.
    /// minValue : The value of the minimum limit in cm.
    /// maxValue : The value of the maximum limit in cm.
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsLinear(double minValue, double maxValue);

    /// Sets this object to have MAX tolerance type.
    /// The tolerance is defined and displayed as MAX.
    /// Returns true if the operation is successful, false otherwise.
    bool setMAX();

    /// Sets this object to have MIN tolerance type.
    /// The tolerance is defined and displayed as MIN.
    /// Returns true if the operation is successful, false otherwise.
    bool setMIN();

    /// Sets this object to have hole/shaft fit tolerance displayed as stacked lines.
    /// The object will also have updated upper and lower tolerance values (used for information only).
    /// size : The nominal distance (size) of the hole. Used to check validity of fits.
    /// holeFit : The hole fit value (e.g., "H7").
    /// shaftFit : The shaft fit value (e.g., "h7").
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsFitsStacked(double size, const std::string& holeFit, const std::string& shaftFit);

    /// Sets this object to have hole/shaft fit tolerance displayed on one line.
    /// The object will also have updated upper and lower tolerance values (used for information only).
    /// size : The nominal distance (size) of the hole. Used to check validity of fits.
    /// holeFit : The hole fit value (e.g., "H7").
    /// shaftFit : The shaft fit value (e.g., "h7").
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsFitsLinear(double size, const std::string& holeFit, const std::string& shaftFit);

    /// Sets this object to have hole/shaft fit tolerance displayed as size limits.
    /// The object will also have updated upper and lower tolerance values (used for information only).
    /// Displays the minimum and maximum values in parenthesis.
    /// size : The nominal distance (size) of the hole. Used to check validity of fits.
    /// holeFit : The hole fit value (e.g., "H7")
    /// shaftFit : The shaft fit value (e.g., "h7")
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsFitsSizeLimits(double size, const std::string& holeFit, const std::string& shaftFit);

    /// Sets this object to have hole/shaft fit tolerance displayed as tolerance values.
    /// The object will also have updated upper and lower tolerance values (used for information only).
    /// Displays the upper and lower tolerance values in parenthesis.
    /// size : The nominal distance (size) of the hole. Used to check validity of fits.
    /// holeFit : The hole fit value (e.g., "H7").
    /// shaftFit : The shaft fit value (e.g., "h7").
    /// Returns true if the operation is successful, false otherwise.
    bool setLimitsFitsTolerance(double size, const std::string& holeFit, const std::string& shaftFit);

    /// Gets whether there is a shaft tolerance class set.
    bool hasShaftToleranceClass() const;

    /// Gets the shaft tolerance class deviation value.
    /// Returns empty string if there is no tolerance class deviation value set.
    std::string shaftToleranceClassDeviation() const;

    /// Gets the shaft tolerance class grade value.
    /// Returns empty string if there is no tolerance class grade value set.
    std::string shaftToleranceClassGrade() const;

    ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API static const char* classType();
    ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API const char* objectType() const override;
    ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API static PMIGeometricValueTolerance* create_raw();
    virtual bool hasTolerances_raw() const = 0;
    virtual bool hasTolerances_raw(bool value) = 0;
    virtual bool hasLowerTolerance_raw() const = 0;
    virtual double lowerTolerance_raw() const = 0;
    virtual bool hasUpperTolerance_raw() const = 0;
    virtual double upperTolerance_raw() const = 0;
    virtual bool hasToleranceClass_raw() const = 0;
    virtual char* toleranceClassDeviation_raw() const = 0;
    virtual char* toleranceClassGrade_raw() const = 0;
    virtual bool hasToleranceType_raw() const = 0;
    virtual PMIToleranceTypes toleranceType_raw() const = 0;
    virtual bool setSymmetric_raw(double tolerance) = 0;
    virtual bool setDeviation_raw(double upperTolerance, double lowerTolerance) = 0;
    virtual bool setLimitsStacked_raw(double minValue, double maxValue) = 0;
    virtual bool setLimitsLinear_raw(double minValue, double maxValue) = 0;
    virtual bool setMAX_raw() = 0;
    virtual bool setMIN_raw() = 0;
    virtual bool setLimitsFitsStacked_raw(double size, const char* holeFit, const char* shaftFit) = 0;
    virtual bool setLimitsFitsLinear_raw(double size, const char* holeFit, const char* shaftFit) = 0;
    virtual bool setLimitsFitsSizeLimits_raw(double size, const char* holeFit, const char* shaftFit) = 0;
    virtual bool setLimitsFitsTolerance_raw(double size, const char* holeFit, const char* shaftFit) = 0;
    virtual bool hasShaftToleranceClass_raw() const = 0;
    virtual char* shaftToleranceClassDeviation_raw() const = 0;
    virtual char* shaftToleranceClassGrade_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<PMIGeometricValueTolerance> PMIGeometricValueTolerance::create()
{
    core::Ptr<PMIGeometricValueTolerance> res = create_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::hasTolerances() const
{
    bool res = hasTolerances_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::hasTolerances(bool value)
{
    return hasTolerances_raw(value);
}

inline bool PMIGeometricValueTolerance::hasLowerTolerance() const
{
    bool res = hasLowerTolerance_raw();
    return res;
}

inline double PMIGeometricValueTolerance::lowerTolerance() const
{
    double res = lowerTolerance_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::hasUpperTolerance() const
{
    bool res = hasUpperTolerance_raw();
    return res;
}

inline double PMIGeometricValueTolerance::upperTolerance() const
{
    double res = upperTolerance_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::hasToleranceClass() const
{
    bool res = hasToleranceClass_raw();
    return res;
}

inline std::string PMIGeometricValueTolerance::toleranceClassDeviation() const
{
    std::string res;

    char* p= toleranceClassDeviation_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string PMIGeometricValueTolerance::toleranceClassGrade() const
{
    std::string res;

    char* p= toleranceClassGrade_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PMIGeometricValueTolerance::hasToleranceType() const
{
    bool res = hasToleranceType_raw();
    return res;
}

inline PMIToleranceTypes PMIGeometricValueTolerance::toleranceType() const
{
    PMIToleranceTypes res = toleranceType_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::setSymmetric(double tolerance)
{
    bool res = setSymmetric_raw(tolerance);
    return res;
}

inline bool PMIGeometricValueTolerance::setDeviation(double upperTolerance, double lowerTolerance)
{
    bool res = setDeviation_raw(upperTolerance, lowerTolerance);
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsStacked(double minValue, double maxValue)
{
    bool res = setLimitsStacked_raw(minValue, maxValue);
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsLinear(double minValue, double maxValue)
{
    bool res = setLimitsLinear_raw(minValue, maxValue);
    return res;
}

inline bool PMIGeometricValueTolerance::setMAX()
{
    bool res = setMAX_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::setMIN()
{
    bool res = setMIN_raw();
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsFitsStacked(double size, const std::string& holeFit, const std::string& shaftFit)
{
    bool res = setLimitsFitsStacked_raw(size, holeFit.c_str(), shaftFit.c_str());
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsFitsLinear(double size, const std::string& holeFit, const std::string& shaftFit)
{
    bool res = setLimitsFitsLinear_raw(size, holeFit.c_str(), shaftFit.c_str());
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsFitsSizeLimits(double size, const std::string& holeFit, const std::string& shaftFit)
{
    bool res = setLimitsFitsSizeLimits_raw(size, holeFit.c_str(), shaftFit.c_str());
    return res;
}

inline bool PMIGeometricValueTolerance::setLimitsFitsTolerance(double size, const std::string& holeFit, const std::string& shaftFit)
{
    bool res = setLimitsFitsTolerance_raw(size, holeFit.c_str(), shaftFit.c_str());
    return res;
}

inline bool PMIGeometricValueTolerance::hasShaftToleranceClass() const
{
    bool res = hasShaftToleranceClass_raw();
    return res;
}

inline std::string PMIGeometricValueTolerance::shaftToleranceClassDeviation() const
{
    std::string res;

    char* p= shaftToleranceClassDeviation_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string PMIGeometricValueTolerance::shaftToleranceClassGrade() const
{
    std::string res;

    char* p= shaftToleranceClassGrade_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIGEOMETRICVALUETOLERANCE_API