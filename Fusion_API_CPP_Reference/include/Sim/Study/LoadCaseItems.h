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
#include "../SimTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_LOADCASEITEMS_CPP__
# define ADSK_SIM_LOADCASEITEMS_API XI_EXPORT
# else
# define ADSK_SIM_LOADCASEITEMS_API
# endif
#else
# define ADSK_SIM_LOADCASEITEMS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace sim {
    class SimAttribute;
    class StructuralConstraint;
    class StructuralConstraintInput;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Provides access to a collection of items in a load case.
class LoadCaseItems : public core::Base {
public:

    /// Function that returns the specified item using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SimAttribute> item(size_t index) const;

    /// Function that returns the specified item by name.
    /// name : The name of the item within the collection to return.
    /// Returns the specified item or null if the name is not found.
    core::Ptr<SimAttribute> itemByName(const std::string& name) const;

    /// The number of items.
    size_t count() const;

    /// Creates a StructuralConstrainInput object that defines a fixed constraint.
    /// isDisplacementConstrainedX : A boolean that indicates whether or not the displacement is constrained
    /// along the first axis.
    /// isDisplacementConstrainedY : A boolean that indicates whether or not the displacement is constrained
    /// along the second axis.
    /// isDisplacementConstrainedZ : A boolean that indicates whether or not the displacement is constrained
    /// along the third axis.
    /// Returns the newly created StructuralConstraintInput object or null if the creation failed.
    core::Ptr<StructuralConstraintInput> createFixedStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ) const;

    /// Creates a StructuralConstrainInput object that defines a pin constraint.
    /// isRadial : A boolean that indicates whether or not the displacement is constrained
    /// in the radial direction.
    /// isAxial : A boolean that indicates whether or not the displacement is constrained
    /// in the axial direction.
    /// isTangential : A boolean that indicates whether or not the displacement is constrained
    /// in the tangential direction.
    /// Returns the newly created StructuralConstraintInput object or null if the creation failed.
    core::Ptr<StructuralConstraintInput> createPinStructuralConstraintInput(bool isRadial, bool isAxial, bool isTangential) const;

    /// Creates a StructuralConstrainInput object that defines a frictionless constraint.
    /// Returns the newly created StructuralConstraintInput object or null if the creation failed.
    core::Ptr<StructuralConstraintInput> createFrictionlessStructuralConstraintInput() const;

    /// Creates a StructuralConstrainInput object that defines a prescribed displacement constraint.
    /// isDisplacementConstrainedX : A boolean that indicates whether or not the displacement is constrained
    /// along the first axis.
    /// isDisplacementConstrainedY : A boolean that indicates whether or not the displacement is constrained
    /// along the second axis.
    /// isDisplacementConstrainedZ : A boolean that indicates whether or not the displacement is constrained
    /// along the third axis.
    /// displacementX : The prescribed displacement value along the first axis.
    /// displacementY : The prescribed displacement value along the second axis.
    /// displacementZ : The prescribed displacement value along the third axis.
    /// Returns the newly created StructuralConstraintInput object or null if the creation failed.
    core::Ptr<StructuralConstraintInput> createPrescribedDisplacementStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, const core::Ptr<core::ValueInput>& displacementX, const core::Ptr<core::ValueInput>& displacementY, const core::Ptr<core::ValueInput>& displacementZ) const;

    /// Creates a StructuralConstrainInput object that defines a remote constraint.
    /// isDisplacementConstrainedX : A boolean that indicates whether or not the displacement is constrained
    /// along the first axis.
    /// isDisplacementConstrainedY : A boolean that indicates whether or not the displacement is constrained
    /// along the second axis.
    /// isDisplacementConstrainedZ : A boolean that indicates whether or not the displacement is constrained
    /// along the third axis.
    /// displacementX : The prescribed displacement value along the first axis.
    /// displacementY : The prescribed displacement value along the second axis.
    /// displacementZ : The prescribed displacement value along the third axis.
    /// Returns the newly created StructuralConstraintInput object or null if the creation failed.
    core::Ptr<StructuralConstraintInput> createRemoteStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, const core::Ptr<core::ValueInput>& displacementX, const core::Ptr<core::ValueInput>& displacementY, const core::Ptr<core::ValueInput>& displacementZ) const;

    /// Creates a new structural constraint based on the information provided by a StructuralConstraintInput object.
    /// Returns the newly created StructuralConstraint or null if the creation failed.
    core::Ptr<StructuralConstraint> add(const core::Ptr<StructuralConstraintInput>& input);

    typedef SimAttribute iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_SIM_LOADCASEITEMS_API static const char* classType();
    ADSK_SIM_LOADCASEITEMS_API const char* objectType() const override;
    ADSK_SIM_LOADCASEITEMS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_LOADCASEITEMS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SimAttribute* item_raw(size_t index) const = 0;
    virtual SimAttribute* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual StructuralConstraintInput* createFixedStructuralConstraintInput_raw(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ) const = 0;
    virtual StructuralConstraintInput* createPinStructuralConstraintInput_raw(bool isRadial, bool isAxial, bool isTangential) const = 0;
    virtual StructuralConstraintInput* createFrictionlessStructuralConstraintInput_raw() const = 0;
    virtual StructuralConstraintInput* createPrescribedDisplacementStructuralConstraintInput_raw(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, core::ValueInput* displacementX, core::ValueInput* displacementY, core::ValueInput* displacementZ) const = 0;
    virtual StructuralConstraintInput* createRemoteStructuralConstraintInput_raw(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, core::ValueInput* displacementX, core::ValueInput* displacementY, core::ValueInput* displacementZ) const = 0;
    virtual StructuralConstraint* add_raw(StructuralConstraintInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<SimAttribute> LoadCaseItems::item(size_t index) const
{
    core::Ptr<SimAttribute> res = item_raw(index);
    return res;
}

inline core::Ptr<SimAttribute> LoadCaseItems::itemByName(const std::string& name) const
{
    core::Ptr<SimAttribute> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t LoadCaseItems::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<StructuralConstraintInput> LoadCaseItems::createFixedStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ) const
{
    core::Ptr<StructuralConstraintInput> res = createFixedStructuralConstraintInput_raw(isDisplacementConstrainedX, isDisplacementConstrainedY, isDisplacementConstrainedZ);
    return res;
}

inline core::Ptr<StructuralConstraintInput> LoadCaseItems::createPinStructuralConstraintInput(bool isRadial, bool isAxial, bool isTangential) const
{
    core::Ptr<StructuralConstraintInput> res = createPinStructuralConstraintInput_raw(isRadial, isAxial, isTangential);
    return res;
}

inline core::Ptr<StructuralConstraintInput> LoadCaseItems::createFrictionlessStructuralConstraintInput() const
{
    core::Ptr<StructuralConstraintInput> res = createFrictionlessStructuralConstraintInput_raw();
    return res;
}

inline core::Ptr<StructuralConstraintInput> LoadCaseItems::createPrescribedDisplacementStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, const core::Ptr<core::ValueInput>& displacementX, const core::Ptr<core::ValueInput>& displacementY, const core::Ptr<core::ValueInput>& displacementZ) const
{
    core::Ptr<StructuralConstraintInput> res = createPrescribedDisplacementStructuralConstraintInput_raw(isDisplacementConstrainedX, isDisplacementConstrainedY, isDisplacementConstrainedZ, displacementX.get(), displacementY.get(), displacementZ.get());
    return res;
}

inline core::Ptr<StructuralConstraintInput> LoadCaseItems::createRemoteStructuralConstraintInput(bool isDisplacementConstrainedX, bool isDisplacementConstrainedY, bool isDisplacementConstrainedZ, const core::Ptr<core::ValueInput>& displacementX, const core::Ptr<core::ValueInput>& displacementY, const core::Ptr<core::ValueInput>& displacementZ) const
{
    core::Ptr<StructuralConstraintInput> res = createRemoteStructuralConstraintInput_raw(isDisplacementConstrainedX, isDisplacementConstrainedY, isDisplacementConstrainedZ, displacementX.get(), displacementY.get(), displacementZ.get());
    return res;
}

inline core::Ptr<StructuralConstraint> LoadCaseItems::add(const core::Ptr<StructuralConstraintInput>& input)
{
    core::Ptr<StructuralConstraint> res = add_raw(input.get());
    return res;
}

template <class OutputIterator> inline void LoadCaseItems::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_LOADCASEITEMS_API