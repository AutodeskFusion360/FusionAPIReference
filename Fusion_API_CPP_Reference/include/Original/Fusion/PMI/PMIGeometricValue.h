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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIGEOMETRICVALUE_CPP__
# define ADSK_FUSION_PMIGEOMETRICVALUE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIGEOMETRICVALUE_API
# endif
#else
# define ADSK_FUSION_PMIGEOMETRICVALUE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class PMIGeometricValueTolerance;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a value that can be associated with a PMIAnnotation, such as a diameter value.
/// 
/// Includes information about the value, whether it is overriden and any associated tolerance.
/// 
/// This class has two main uses:
/// 
/// - to retrieve the values from a PMIAnnotation (e.g. PMIImportedDimension)
/// 
/// - to define input values in PMI creation input objects (e.g. PMIHoleThreadNoteInput)
class PMIGeometricValue : public core::Base {
public:

    /// Create a transient PMIGeometricValue object.
    /// 
    /// The default properties are hasValue = false, value = 0, and tolerance with hasTolerances = false.
    static core::Ptr<PMIGeometricValue> create();

    /// Gets and sets whether there is a value associated with the geometric value.
    /// 
    /// If set to true, the value will be displayed in the graphics, while also stored as data in the PMI.
    /// Setting this to true will also require setting a value, as the default is 0.
    bool hasValue() const;
    bool hasValue(bool value);

    /// Gets whether the value has been overridden.
    bool isOverriddenValue() const;

    /// Gets and sets the value associated with this object in cm or radians.
    /// 
    /// Setting this will also set hasValue and isOverriddenValue to true.
    double value() const;
    bool value(double value);

    /// Gets and sets the tolerance associated with this geometric value.
    core::Ptr<PMIGeometricValueTolerance> tolerance() const;
    bool tolerance(const core::Ptr<PMIGeometricValueTolerance>& value);

    ADSK_FUSION_PMIGEOMETRICVALUE_API static const char* classType();
    ADSK_FUSION_PMIGEOMETRICVALUE_API const char* objectType() const override;
    ADSK_FUSION_PMIGEOMETRICVALUE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIGEOMETRICVALUE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_PMIGEOMETRICVALUE_API static PMIGeometricValue* create_raw();
    virtual bool hasValue_raw() const = 0;
    virtual bool hasValue_raw(bool value) = 0;
    virtual bool isOverriddenValue_raw() const = 0;
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual PMIGeometricValueTolerance* tolerance_raw() const = 0;
    virtual bool tolerance_raw(PMIGeometricValueTolerance* value) = 0;
};

// Inline wrappers

inline core::Ptr<PMIGeometricValue> PMIGeometricValue::create()
{
    core::Ptr<PMIGeometricValue> res = create_raw();
    return res;
}

inline bool PMIGeometricValue::hasValue() const
{
    bool res = hasValue_raw();
    return res;
}

inline bool PMIGeometricValue::hasValue(bool value)
{
    return hasValue_raw(value);
}

inline bool PMIGeometricValue::isOverriddenValue() const
{
    bool res = isOverriddenValue_raw();
    return res;
}

inline double PMIGeometricValue::value() const
{
    double res = value_raw();
    return res;
}

inline bool PMIGeometricValue::value(double value)
{
    return value_raw(value);
}

inline core::Ptr<PMIGeometricValueTolerance> PMIGeometricValue::tolerance() const
{
    core::Ptr<PMIGeometricValueTolerance> res = tolerance_raw();
    return res;
}

inline bool PMIGeometricValue::tolerance(const core::Ptr<PMIGeometricValueTolerance>& value)
{
    return tolerance_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIGEOMETRICVALUE_API