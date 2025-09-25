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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMTEMPLATEOPERATIONS_CPP__
# define ADSK_CAM_CAMTEMPLATEOPERATIONS_API XI_EXPORT
# else
# define ADSK_CAM_CAMTEMPLATEOPERATIONS_API
# endif
#else
# define ADSK_CAM_CAMTEMPLATEOPERATIONS_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMTemplateOperationInput;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// A list of CAMTemplateOperationInput.
/// 
/// These are stored 'by value' -- get() returns a copy of the element at the given index,
/// and set() will overwrite the element at the given index with a copy of the given element.
class CAMTemplateOperations : public core::Base {
public:

    /// The number of items in the list.
    int count() const;

    /// Add an item to the list.
    /// input : This element will be copied to the end of the list. Must come from get() or makeInput().
    void add(const core::Ptr<CAMTemplateOperationInput>& input);

    /// Return a copy of an element.
    /// operationIndex : Index of the element to copy.
    /// 
    core::Ptr<CAMTemplateOperationInput> get(int operationIndex);

    /// Set the element at the given index.
    /// operationIndex : Index of the element to overwrite
    /// input : The element will be overwritten with a copy of this element. Must come from get() or makeInput().
    void set(int operationIndex, const core::Ptr<CAMTemplateOperationInput>& input);

    /// Make a CAMTemplateOperationInput of the given strategy type which is compatible with add() and set().
    /// strategyType : 
    /// 
    core::Ptr<CAMTemplateOperationInput> makeInput(const std::string& strategyType);

    ADSK_CAM_CAMTEMPLATEOPERATIONS_API static const char* classType();
    ADSK_CAM_CAMTEMPLATEOPERATIONS_API const char* objectType() const override;
    ADSK_CAM_CAMTEMPLATEOPERATIONS_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMTEMPLATEOPERATIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int count_raw() const = 0;
    virtual void add_raw(CAMTemplateOperationInput* input) = 0;
    virtual CAMTemplateOperationInput* get_raw(int operationIndex) = 0;
    virtual void set_raw(int operationIndex, CAMTemplateOperationInput* input) = 0;
    virtual CAMTemplateOperationInput* makeInput_raw(const char* strategyType) = 0;
};

// Inline wrappers

inline int CAMTemplateOperations::count() const
{
    int res = count_raw();
    return res;
}

inline void CAMTemplateOperations::add(const core::Ptr<CAMTemplateOperationInput>& input)
{
    add_raw(input.get());
}

inline core::Ptr<CAMTemplateOperationInput> CAMTemplateOperations::get(int operationIndex)
{
    core::Ptr<CAMTemplateOperationInput> res = get_raw(operationIndex);
    return res;
}

inline void CAMTemplateOperations::set(int operationIndex, const core::Ptr<CAMTemplateOperationInput>& input)
{
    set_raw(operationIndex, input.get());
}

inline core::Ptr<CAMTemplateOperationInput> CAMTemplateOperations::makeInput(const std::string& strategyType)
{
    core::Ptr<CAMTemplateOperationInput> res = makeInput_raw(strategyType.c_str());
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMTEMPLATEOPERATIONS_API