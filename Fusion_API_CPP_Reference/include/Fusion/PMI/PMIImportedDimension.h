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
#include "PMIAnnotation.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDDIMENSION_CPP__
# define ADSK_FUSION_PMIIMPORTEDDIMENSION_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDDIMENSION_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDDIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class PMIGeometricValue;
    class PMIGeometricValueTolerance;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines an imported PMI which includes data related to dimensions.
class PMIImportedDimension : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedDimension> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedDimension> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets the PMIGeometricValue used to define the nominal distance of the annotated dimension in cm.
    /// When querying, if the nominal distance is not set, the value will be 0 and hasValue property will be false.
    core::Ptr<PMIGeometricValue> nominalDistance() const;

    /// Gets the PMIGeometricValueTolerance for the shaft diameter of the annotated hole if a shaft tolerance exists.
    core::Ptr<PMIGeometricValueTolerance> shaftTolerance() const;

    /// The measured angle as a type.
    PMIAngleRelatorTypes angleRelatorType() const;

    /// Indicates if the PMI is representing a hole or not.
    bool isHoleAnnotation() const;

    /// Gets the type of the hole.
    /// Requires the dimension to be associated with a hole.
    HoleTypes holeType() const;

    ADSK_FUSION_PMIIMPORTEDDIMENSION_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDDIMENSION_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDDIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDDIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedDimension* nativeObject_raw() const = 0;
    virtual PMIImportedDimension* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PMIGeometricValue* nominalDistance_raw() const = 0;
    virtual PMIGeometricValueTolerance* shaftTolerance_raw() const = 0;
    virtual PMIAngleRelatorTypes angleRelatorType_raw() const = 0;
    virtual bool isHoleAnnotation_raw() const = 0;
    virtual HoleTypes holeType_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedDimension> PMIImportedDimension::nativeObject() const
{
    core::Ptr<PMIImportedDimension> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedDimension> PMIImportedDimension::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedDimension> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline core::Ptr<PMIGeometricValue> PMIImportedDimension::nominalDistance() const
{
    core::Ptr<PMIGeometricValue> res = nominalDistance_raw();
    return res;
}

inline core::Ptr<PMIGeometricValueTolerance> PMIImportedDimension::shaftTolerance() const
{
    core::Ptr<PMIGeometricValueTolerance> res = shaftTolerance_raw();
    return res;
}

inline PMIAngleRelatorTypes PMIImportedDimension::angleRelatorType() const
{
    PMIAngleRelatorTypes res = angleRelatorType_raw();
    return res;
}

inline bool PMIImportedDimension::isHoleAnnotation() const
{
    bool res = isHoleAnnotation_raw();
    return res;
}

inline HoleTypes PMIImportedDimension::holeType() const
{
    HoleTypes res = holeType_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDDIMENSION_API