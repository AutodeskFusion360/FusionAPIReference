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
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_OPERATIONS_CPP__
# define ADSK_CAM_OPERATIONS_API XI_EXPORT
# else
# define ADSK_CAM_OPERATIONS_API
# endif
#else
# define ADSK_CAM_OPERATIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Operation;
    class OperationBase;
    class OperationInput;
    class OperationStrategy;
}}

namespace adsk { namespace cam {

/// Collection that provides access to the individual operations within an existing setup, folder or pattern.
class Operations : public core::Base {
public:

    /// Function that returns the specified operation using an index into the collection.
    /// index : The index of the item within the collection to return.  The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Operation> item(size_t index) const;

    /// Returns the operation with the specified name (as appears in the browser).
    /// name : The name (as it appears in the browser) of the operation.
    /// Returns the specified operation or null in the case where there is no operation with the specified name.
    core::Ptr<Operation> itemByName(const std::string& name) const;

    /// The number of items in the collection.
    size_t count() const;

    /// Returns the operation with the specified operation id.
    /// id : The id of the operation.
    /// Returns the specified operation or null in the case where there is no operation with the specified operation id.
    core::Ptr<Operation> itemByOperationId(int id) const;

    /// Creates a new OperationInput object, which is used to define the operation you want to create.
    /// Use properties and methods on the returned OperationInput object to define the desired operation
    /// and then pass it into the add method to create the operation.
    /// strategy : The name of the strategy type that you want to create. Use the compatibleStrategies property of
    /// Operations object to get a list of the names of the strategies.
    /// Returns a new OperationInput object or will fail if an invalid strategy is specified.
    core::Ptr<OperationInput> createInput(const std::string& strategy) const;

    /// Create a new Operation.
    /// input : The OperationInput object defines the desired Operation. Use the createInput
    /// method to create a new OperationInput object and then use methods on it to define the Operation.
    /// The new Operation will be appended at the end of the current list of Operations.
    /// Throws an error if the strategy type is incompatible with the setup.
    /// Returns the newly created Operation.
    core::Ptr<OperationBase> add(const core::Ptr<OperationInput>& input);

    /// Gets a list of the strategies that are compatible with the parent setup.
    /// This only returns strategies that are allowed to be added based on the active Setup or CAMFolder.
    /// 
    /// Note: There may be cases where a compatible strategy might not be allowed to be created
    /// due to licensing or other issues like disabled preview features.
    /// Returns an array of compatible strategies.
    std::vector<core::Ptr<OperationStrategy>> compatibleStrategies() const;

    typedef Operation iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CAM_OPERATIONS_API static const char* classType();
    ADSK_CAM_OPERATIONS_API const char* objectType() const override;
    ADSK_CAM_OPERATIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPERATIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Operation* item_raw(size_t index) const = 0;
    virtual Operation* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Operation* itemByOperationId_raw(int id) const = 0;
    virtual OperationInput* createInput_raw(const char* strategy) const = 0;
    virtual OperationBase* add_raw(OperationInput* input) = 0;
    virtual OperationStrategy** compatibleStrategies_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline core::Ptr<Operation> Operations::item(size_t index) const
{
    core::Ptr<Operation> res = item_raw(index);
    return res;
}

inline core::Ptr<Operation> Operations::itemByName(const std::string& name) const
{
    core::Ptr<Operation> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Operations::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Operation> Operations::itemByOperationId(int id) const
{
    core::Ptr<Operation> res = itemByOperationId_raw(id);
    return res;
}

inline core::Ptr<OperationInput> Operations::createInput(const std::string& strategy) const
{
    core::Ptr<OperationInput> res = createInput_raw(strategy.c_str());
    return res;
}

inline core::Ptr<OperationBase> Operations::add(const core::Ptr<OperationInput>& input)
{
    core::Ptr<OperationBase> res = add_raw(input.get());
    return res;
}

inline std::vector<core::Ptr<OperationStrategy>> Operations::compatibleStrategies() const
{
    std::vector<core::Ptr<OperationStrategy>> res;
    size_t s;

    OperationStrategy** p= compatibleStrategies_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void Operations::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPERATIONS_API