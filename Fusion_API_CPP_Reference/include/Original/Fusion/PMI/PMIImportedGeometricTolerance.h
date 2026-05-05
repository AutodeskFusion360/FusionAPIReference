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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_CPP__
# define ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
    class PMIDatumReference;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines an imported PMI which includes data related to geometric tolerances.
class PMIImportedGeometricTolerance : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedGeometricTolerance> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedGeometricTolerance> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets the tolerance value of the geometric tolerance in cm.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    double tolerance() const;

    /// Gets an array of datum references associated with this geometric tolerance.
    /// 
    /// This is a read-only property because imported PMI cannot be edited.
    std::vector<core::Ptr<PMIDatumReference>> datumReferences() const;

    ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedGeometricTolerance* nativeObject_raw() const = 0;
    virtual PMIImportedGeometricTolerance* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual double tolerance_raw() const = 0;
    virtual PMIDatumReference** datumReferences_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedGeometricTolerance> PMIImportedGeometricTolerance::nativeObject() const
{
    core::Ptr<PMIImportedGeometricTolerance> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedGeometricTolerance> PMIImportedGeometricTolerance::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedGeometricTolerance> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline double PMIImportedGeometricTolerance::tolerance() const
{
    double res = tolerance_raw();
    return res;
}

inline std::vector<core::Ptr<PMIDatumReference>> PMIImportedGeometricTolerance::datumReferences() const
{
    std::vector<core::Ptr<PMIDatumReference>> res;
    size_t s;

    PMIDatumReference** p= datumReferences_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDGEOMETRICTOLERANCE_API