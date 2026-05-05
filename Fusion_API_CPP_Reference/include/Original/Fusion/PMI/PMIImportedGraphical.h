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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDGRAPHICAL_CPP__
# define ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines an imported PMI which only includes graphical data.
class PMIImportedGraphical : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedGraphical> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedGraphical> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedGraphical* nativeObject_raw() const = 0;
    virtual PMIImportedGraphical* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedGraphical> PMIImportedGraphical::nativeObject() const
{
    core::Ptr<PMIImportedGraphical> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedGraphical> PMIImportedGraphical::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedGraphical> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDGRAPHICAL_API