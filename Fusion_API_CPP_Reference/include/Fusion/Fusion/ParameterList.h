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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PARAMETERLIST_CPP__
# define ADSK_FUSION_PARAMETERLIST_API XI_EXPORT
# else
# define ADSK_FUSION_PARAMETERLIST_API
# endif
#else
# define ADSK_FUSION_PARAMETERLIST_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Parameter;
}}

namespace adsk { namespace fusion {

/// Transient object used to pass a set of parameters.
class ParameterList : public core::Base {
public:

    /// Function that returns the specified parameter using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Parameter> item(size_t index) const;

    /// Returns the specified parameter using the name of the parameter
    /// as it is displayed in the parameters dialog
    /// name : The name of the parameter as it is displayed in the parameters dialog
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<Parameter> itemByName(const std::string& name) const;

    /// Returns the number of parameters in the collection.
    size_t count() const;

    /// Adds a parameter to the list. This does not create a
    /// new parameter, it adds an existing parameter to the list.
    /// Note that duplicates can exist in the list.
    /// parameter : The existing parameter to add to the list
    /// Returns true if successful. This method will fail if the list is read-only
    bool add(const core::Ptr<Parameter>& parameter);

    /// Method that removes a parameter from the list using the index of the item
    /// in the list
    /// Will fail if the list is read only.
    /// index : The index of the parameter to be removed from the list
    /// Returns true if successful. This method will fail if the list is read-only
    bool removeByIndex(size_t index);

    /// Method that removes a parameter from the list by specifying the parameter (item)
    /// to remove
    /// item : The parameter item to remove from the list
    /// Returns true if successful. This method will fail if the list is read-only
    bool removeByItem(const core::Ptr<Parameter>& item);

    /// Finds the specified parameter in the list. The search can be started at a specified
    /// index rather than from the beginning of the list.
    /// If not found, -1 is returned.
    /// parameter : The parameter to find
    /// startIndex : the index in the list to start the search from
    /// Returns the index of the parameter found in the list.
    int find(const core::Ptr<Parameter>& parameter, size_t startIndex = 0) const;

    /// Indicates whether or not ParameterList collection contains a specified parameter
    /// parameter : The parameter to look for in the list
    /// Returns true if list contains the specified parameter
    bool contains(const core::Ptr<Parameter>& parameter) const;

    /// Indicates if the list is read-only
    /// Some lists returned by API calls (instead of lists created by the
    /// user) are read only. Items cannot be added or remove from such a list.
    bool isReadOnly() const;

    /// Creates a parameter list that the client can use for various purposes.
    /// Use ParameterList.Add to add parameters to the list after creating it.
    /// Returns a ParameterList
    static core::Ptr<ParameterList> create();

    typedef Parameter iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);
    template <class Container> static core::Ptr<ParameterList> create(Container container);
    template <class InputIterator> static core::Ptr<ParameterList> create(InputIterator first, InputIterator last);

    ADSK_FUSION_PARAMETERLIST_API static const char* classType();
    ADSK_FUSION_PARAMETERLIST_API const char* objectType() const override;
    ADSK_FUSION_PARAMETERLIST_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PARAMETERLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Parameter* item_raw(size_t index) const = 0;
    virtual Parameter* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool add_raw(Parameter* parameter) = 0;
    virtual bool removeByIndex_raw(size_t index) = 0;
    virtual bool removeByItem_raw(Parameter* item) = 0;
    virtual int find_raw(Parameter* parameter, size_t startIndex) const = 0;
    virtual bool contains_raw(Parameter* parameter) const = 0;
    virtual bool isReadOnly_raw() const = 0;
    ADSK_FUSION_PARAMETERLIST_API static ParameterList* create_raw();
};

// Inline wrappers

inline core::Ptr<Parameter> ParameterList::item(size_t index) const
{
    core::Ptr<Parameter> res = item_raw(index);
    return res;
}

inline core::Ptr<Parameter> ParameterList::itemByName(const std::string& name) const
{
    core::Ptr<Parameter> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t ParameterList::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool ParameterList::add(const core::Ptr<Parameter>& parameter)
{
    bool res = add_raw(parameter.get());
    return res;
}

inline bool ParameterList::removeByIndex(size_t index)
{
    bool res = removeByIndex_raw(index);
    return res;
}

inline bool ParameterList::removeByItem(const core::Ptr<Parameter>& item)
{
    bool res = removeByItem_raw(item.get());
    return res;
}

inline int ParameterList::find(const core::Ptr<Parameter>& parameter, size_t startIndex) const
{
    int res = find_raw(parameter.get(), startIndex);
    return res;
}

inline bool ParameterList::contains(const core::Ptr<Parameter>& parameter) const
{
    bool res = contains_raw(parameter.get());
    return res;
}

inline bool ParameterList::isReadOnly() const
{
    bool res = isReadOnly_raw();
    return res;
}

inline core::Ptr<ParameterList> ParameterList::create()
{
    core::Ptr<ParameterList> res = create_raw();
    return res;
}

template <class OutputIterator> inline void ParameterList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}

template <class Container> inline core::Ptr<ParameterList> ParameterList::create(Container container)
{
   return create(container.begin(), container.end());
}

template <class InputIterator> inline core::Ptr<ParameterList> ParameterList::create(InputIterator first, InputIterator last)
{
    core::Ptr<ParameterList> list = create();
    if (list)
        for (;first != last;++first)
            list->add(*first);
    return list;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PARAMETERLIST_API