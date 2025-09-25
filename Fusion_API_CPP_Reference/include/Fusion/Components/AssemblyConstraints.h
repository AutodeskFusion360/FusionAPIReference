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
# ifdef __COMPILING_ADSK_FUSION_ASSEMBLYCONSTRAINTS_CPP__
# define ADSK_FUSION_ASSEMBLYCONSTRAINTS_API XI_EXPORT
# else
# define ADSK_FUSION_ASSEMBLYCONSTRAINTS_API
# endif
#else
# define ADSK_FUSION_ASSEMBLYCONSTRAINTS_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class AssemblyConstraint;
    class AssemblyConstraintInput;
}}

namespace adsk { namespace fusion {

/// The collection of assembly constraints in this component. This provides access to all existing
/// assembly constraints and supports the ability to create new assembly constraints.
class AssemblyConstraints : public core::Base {
public:

    /// Function that returns the specified assembly constraint using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<AssemblyConstraint> item(size_t index) const;

    /// Function that returns the specified assembly constraint object using a name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if an invalid name was specified.
    core::Ptr<AssemblyConstraint> itemByName(const std::string& name) const;

    /// Returns the number of assembly constraint objects in the collection.
    size_t count() const;

    /// Creates an assembly constraint input to define an assembly constraint. Use functionality
    /// on the returned AssemblyConstraintInput to define the input needed to create an assembly constraint.
    /// Returns an AssemblyConstraintInput.
    core::Ptr<AssemblyConstraintInput> createInput();

    /// Creates a new assembly constraint.
    /// input : The AssemblyConstraintInput object that defines the geometry and various inputs that define an
    /// assembly constraint. An AssemblyConstraintInput object is created using
    /// the AssemblyConstraints.createInput method.
    /// Returns the newly created AssemblyConstraint or null in the case of failure.
    core::Ptr<AssemblyConstraint> add(const core::Ptr<AssemblyConstraintInput>& input);

    typedef AssemblyConstraint iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_ASSEMBLYCONSTRAINTS_API static const char* classType();
    ADSK_FUSION_ASSEMBLYCONSTRAINTS_API const char* objectType() const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ASSEMBLYCONSTRAINTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AssemblyConstraint* item_raw(size_t index) const = 0;
    virtual AssemblyConstraint* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual AssemblyConstraintInput* createInput_raw() = 0;
    virtual AssemblyConstraint* add_raw(AssemblyConstraintInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<AssemblyConstraint> AssemblyConstraints::item(size_t index) const
{
    core::Ptr<AssemblyConstraint> res = item_raw(index);
    return res;
}

inline core::Ptr<AssemblyConstraint> AssemblyConstraints::itemByName(const std::string& name) const
{
    core::Ptr<AssemblyConstraint> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t AssemblyConstraints::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<AssemblyConstraintInput> AssemblyConstraints::createInput()
{
    core::Ptr<AssemblyConstraintInput> res = createInput_raw();
    return res;
}

inline core::Ptr<AssemblyConstraint> AssemblyConstraints::add(const core::Ptr<AssemblyConstraintInput>& input)
{
    core::Ptr<AssemblyConstraint> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void AssemblyConstraints::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ASSEMBLYCONSTRAINTS_API