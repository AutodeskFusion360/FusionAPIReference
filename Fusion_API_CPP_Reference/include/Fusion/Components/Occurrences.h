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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OCCURRENCES_CPP__
# define ADSK_FUSION_OCCURRENCES_API XI_EXPORT
# else
# define ADSK_FUSION_OCCURRENCES_API
# endif
#else
# define ADSK_FUSION_OCCURRENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class Component;
    class ConfigurationRow;
    class Occurrence;
    class OccurrenceList;
}}

namespace adsk { namespace fusion {

/// Provides access to occurrences within a component and provides
/// methods to create new occurrences.
class Occurrences : public core::Base {
public:

    /// Function that returns the specified occurrence using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Occurrence> item(size_t index) const;

    /// Returns the number of occurrences in the collection.
    size_t count() const;

    /// Returns the specified occurrence using the name of the occurrence.
    /// name : The name of the occurrence to return.
    /// Returns the occurrence or null if an invalid name was specified
    core::Ptr<Occurrence> itemByName(const std::string& name) const;

    /// Method that creates a new occurrence using an existing component. This is the equivalent
    /// of copying and pasting an occurrence in the user interface.
    /// component : The existing component to create a new occurrence of.
    /// transform : A transform that defines the location for the new occurrence
    /// Returns the newly created occurrence or null if the creation failed.
    core::Ptr<Occurrence> addExistingComponent(const core::Ptr<Component>& component, const core::Ptr<core::Matrix3D>& transform);

    /// Method that creates a new component and an occurrence that references it.
    /// transform : A transform that defines the location for the new occurrence.
    /// Returns the newly created occurrence or null if the creation failed.
    core::Ptr<Occurrence> addNewComponent(const core::Ptr<core::Matrix3D>& transform);

    /// Returns the contents of this collection as an OccurrencesList object. This
    /// is useful when writing a function that traverses an assembly.
    core::Ptr<OccurrenceList> asList() const;

    /// Method that inserts an existing file.
    /// dataFile : The dataFile to insert.
    /// transform : A transform that defines the location for the new occurrence.
    /// isReferencedComponent : Indicates if the insert is to be an external reference or embedded within this document.
    /// This method will fail if the dataFile being inserted is not from the same project as the document
    /// it is being inserted into while isReferencedComponent is True.
    /// Returns the newly created occurrence or null if the insert failed.
    /// Insert will fail if the dataFile being inserted is not from the same project as the document
    /// it is being inserted into while isReferencedComponent is True.
    core::Ptr<Occurrence> addByInsert(const core::Ptr<core::DataFile>& dataFile, const core::Ptr<core::Matrix3D>& transform, bool isReferencedComponent);

    /// Get the current list of all occurrences.
    /// The occurrences are returned in the same order as they appear in the browser.
    /// Returns the current list of all occurrences.
    std::vector<core::Ptr<Occurrence>> asArray() const;

    /// Method that creates a new occurrence by creating a new component that is a copy of an existing
    /// component. This is the equivalent of copying and using the "Paste New" command in the user interface. This
    /// is different from the addExistingComponent in that it's not a new instance to the existing component but a
    /// new component is created that has it's own definition (sketches, features, etc.) and a new occurrence instance
    /// is created to reference this new component.
    /// component : The existing component to create a copy of.
    /// transform : A transform that defines the location for the new occurrence
    /// Returns the newly created occurrence or null if the creation failed. The newly created component can be
    /// obtained by using the component property of the returned Occurrence.
    core::Ptr<Occurrence> addNewComponentCopy(const core::Ptr<Component>& component, const core::Ptr<core::Matrix3D>& transform);

    /// Method that inserts a configuration from a configured design.
    /// The insert will fail if the configured design being used is not from the same project as the file
    /// it is being inserted into.
    /// configurationRow : The row that specifies which configuration to use.
    /// transform : A transform that defines the location for the new occurrence.
    /// Returns the newly created occurrence or null if the add failed.
    core::Ptr<Occurrence> addFromConfiguration(const core::Ptr<ConfigurationRow>& configurationRow, const core::Ptr<core::Matrix3D>& transform);

    typedef Occurrence iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_OCCURRENCES_API static const char* classType();
    ADSK_FUSION_OCCURRENCES_API const char* objectType() const override;
    ADSK_FUSION_OCCURRENCES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OCCURRENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Occurrence* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Occurrence* itemByName_raw(const char* name) const = 0;
    virtual Occurrence* addExistingComponent_raw(Component* component, core::Matrix3D* transform) = 0;
    virtual Occurrence* addNewComponent_raw(core::Matrix3D* transform) = 0;
    virtual OccurrenceList* asList_raw() const = 0;
    virtual Occurrence* addByInsert_raw(core::DataFile* dataFile, core::Matrix3D* transform, bool isReferencedComponent) = 0;
    virtual Occurrence** asArray_raw(size_t& return_size) const = 0;
    virtual Occurrence* addNewComponentCopy_raw(Component* component, core::Matrix3D* transform) = 0;
    virtual Occurrence* addFromConfiguration_raw(ConfigurationRow* configurationRow, core::Matrix3D* transform) = 0;
};

// Inline wrappers

inline core::Ptr<Occurrence> Occurrences::item(size_t index) const
{
    core::Ptr<Occurrence> res = item_raw(index);
    return res;
}

inline size_t Occurrences::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrences::itemByName(const std::string& name) const
{
    core::Ptr<Occurrence> res = itemByName_raw(name.c_str());
    return res;
}

inline core::Ptr<Occurrence> Occurrences::addExistingComponent(const core::Ptr<Component>& component, const core::Ptr<core::Matrix3D>& transform)
{
    core::Ptr<Occurrence> res = addExistingComponent_raw(component.get(), transform.get());
    return res;
}

inline core::Ptr<Occurrence> Occurrences::addNewComponent(const core::Ptr<core::Matrix3D>& transform)
{
    core::Ptr<Occurrence> res = addNewComponent_raw(transform.get());
    return res;
}

inline core::Ptr<OccurrenceList> Occurrences::asList() const
{
    core::Ptr<OccurrenceList> res = asList_raw();
    return res;
}

inline core::Ptr<Occurrence> Occurrences::addByInsert(const core::Ptr<core::DataFile>& dataFile, const core::Ptr<core::Matrix3D>& transform, bool isReferencedComponent)
{
    core::Ptr<Occurrence> res = addByInsert_raw(dataFile.get(), transform.get(), isReferencedComponent);
    return res;
}

inline std::vector<core::Ptr<Occurrence>> Occurrences::asArray() const
{
    std::vector<core::Ptr<Occurrence>> res;
    size_t s;

    Occurrence** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<Occurrence> Occurrences::addNewComponentCopy(const core::Ptr<Component>& component, const core::Ptr<core::Matrix3D>& transform)
{
    core::Ptr<Occurrence> res = addNewComponentCopy_raw(component.get(), transform.get());
    return res;
}

inline core::Ptr<Occurrence> Occurrences::addFromConfiguration(const core::Ptr<ConfigurationRow>& configurationRow, const core::Ptr<core::Matrix3D>& transform)
{
    core::Ptr<Occurrence> res = addFromConfiguration_raw(configurationRow.get(), transform.get());
    return res;
}

template <class OutputIterator> inline void Occurrences::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OCCURRENCES_API