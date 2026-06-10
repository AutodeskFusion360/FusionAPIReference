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
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PMIIMPORTEDFOLDER_CPP__
# define ADSK_FUSION_PMIIMPORTEDFOLDER_API XI_EXPORT
# else
# define ADSK_FUSION_PMIIMPORTEDFOLDER_API
# endif
#else
# define ADSK_FUSION_PMIIMPORTEDFOLDER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Defines a container of other PMI objects (including sub-folders).
/// 
/// A PMIAnnotations can contain multiple PMI of this type, and is typically used to group the PMI within a PMIAnnotations.
/// 
/// Examples of Imported PMI Folders:
/// 
/// - the default imported folder, which is a container expandable and has visible children in the browser
/// 
/// - an imported Hole Note, which is not expandable, and contains PMI such as Imported Diameter Dimensions and Imported Notes.
/// 
/// - an imported General Note
/// 
/// - an imported Feature Control Frame
class PMIImportedFolder : public PMIAnnotation {
public:

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<PMIImportedFolder> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<PMIImportedFolder> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Returns the PMI objects within this folder PMI. This excludes PMI contained within folders that are within this folder.
    /// 
    /// The type of the objects returned is the base class PMIAnnotation.
    std::vector<core::Ptr<PMIAnnotation>> containedPMI() const;

    ADSK_FUSION_PMIIMPORTEDFOLDER_API static const char* classType();
    ADSK_FUSION_PMIIMPORTEDFOLDER_API const char* objectType() const override;
    ADSK_FUSION_PMIIMPORTEDFOLDER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PMIIMPORTEDFOLDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual PMIImportedFolder* nativeObject_raw() const = 0;
    virtual PMIImportedFolder* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual PMIAnnotation** containedPMI_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<PMIImportedFolder> PMIImportedFolder::nativeObject() const
{
    core::Ptr<PMIImportedFolder> res = nativeObject_raw();
    return res;
}

inline core::Ptr<PMIImportedFolder> PMIImportedFolder::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<PMIImportedFolder> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline std::vector<core::Ptr<PMIAnnotation>> PMIImportedFolder::containedPMI() const
{
    std::vector<core::Ptr<PMIAnnotation>> res;
    size_t s;

    PMIAnnotation** p= containedPMI_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PMIIMPORTEDFOLDER_API