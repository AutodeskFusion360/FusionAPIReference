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
#include "../Operations/OperationBase.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SETUPGROUP_CPP__
# define ADSK_CAM_SETUPGROUP_API XI_EXPORT
# else
# define ADSK_CAM_SETUPGROUP_API
# endif
#else
# define ADSK_CAM_SETUPGROUP_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Machine;
    class Setup;
    class SetupInput;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents an existing Setup Group.
/// A Setup Group is a collection of Setup objects that are intended to be machined at the same time.
class SetupGroup : public OperationBase {
public:

    /// Gets the Operation Type.
    /// It can be MillingOperation, TurningOperation, JetOperation or AdditiveOperation.
    OperationTypes operationType() const;

    /// The number of Setups in the collection.
    size_t count() const;

    /// Function that returns the specified Setup from the group using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item, or null if an invalid index was specified.
    core::Ptr<Setup> item(size_t index) const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Adds a new setup to this group.
    /// Not Implemented.
    /// setup : The Setup object to add to the group.
    /// Returns true if adding the Setup was successful.
    bool addSetup(const core::Ptr<Setup>& setup);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Removes the specified Setup from the group.
    /// Not Implemented.
    /// setup : The Setup object to remove from the group.
    /// Returns true if removing the Setup was successful.
    bool removeSetup(const core::Ptr<Setup>& setup);

    /// Creates a new setup in this group.
    /// input : The input holds all the information needed to create a valid setup in the group.
    /// Returns the newly created Setup instance.
    core::Ptr<Setup> add(const core::Ptr<SetupInput>& input);

    /// Gets and sets the Machine associated with the Setup Group. The returned Machine is a transient copy, so the Machine needs to be set to the Setup Group again to apply any changes.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    typedef Setup iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_SETUPGROUP_API static const char* classType();
    ADSK_CAM_SETUPGROUP_API const char* objectType() const override;
    ADSK_CAM_SETUPGROUP_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUPGROUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationTypes operationType_raw() const = 0;
    virtual size_t count_raw() const = 0;
    virtual Setup* item_raw(size_t index) const = 0;
    virtual bool addSetup_raw(Setup* setup) = 0;
    virtual bool removeSetup_raw(Setup* setup) = 0;
    virtual Setup* add_raw(SetupInput* input) = 0;
    virtual Machine* machine_raw() const = 0;
    virtual bool machine_raw(Machine* value) = 0;
};

// Inline wrappers

inline OperationTypes SetupGroup::operationType() const
{
    OperationTypes res = operationType_raw();
    return res;
}

inline size_t SetupGroup::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Setup> SetupGroup::item(size_t index) const
{
    core::Ptr<Setup> res = item_raw(index);
    return res;
}

inline bool SetupGroup::addSetup(const core::Ptr<Setup>& setup)
{
    bool res = addSetup_raw(setup.get());
    return res;
}

inline bool SetupGroup::removeSetup(const core::Ptr<Setup>& setup)
{
    bool res = removeSetup_raw(setup.get());
    return res;
}

inline core::Ptr<Setup> SetupGroup::add(const core::Ptr<SetupInput>& input)
{
    core::Ptr<Setup> res = add_raw(input.get());
    return res;
}

inline core::Ptr<Machine> SetupGroup::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool SetupGroup::machine(const core::Ptr<Machine>& value)
{
    return machine_raw(value.get());
}

template <class OutputIterator> inline void SetupGroup::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUPGROUP_API