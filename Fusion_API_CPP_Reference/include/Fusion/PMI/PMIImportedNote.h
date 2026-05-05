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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDNOTE_CPP__
# define ADSK_FUSION_PMIIMPORTEDNOTE_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDNOTE_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDNOTE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines an imported PMI note.
class PMIImportedNote : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedNote> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedNote> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets the text content of the note.
    std::string note() const;

    /// Gets the PMI referenced by this note.
    /// Returns the referenced PMI, or null if no reference is specified.
    core::Ptr<PMIAnnotation> reference() const;

    ADSK_FUSION_PMIIMPORTEDNOTE_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDNOTE_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDNOTE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDNOTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedNote* nativeObject_raw() const = 0;
    virtual PMIImportedNote* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual char* note_raw() const = 0;
    virtual PMIAnnotation* reference_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedNote> PMIImportedNote::nativeObject() const
{
    core::Ptr<PMIImportedNote> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedNote> PMIImportedNote::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedNote> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::string PMIImportedNote::note() const
{
    std::string res;

    char* p= note_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PMIAnnotation> PMIImportedNote::reference() const
{
    core::Ptr<PMIAnnotation> res = reference_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDNOTE_API