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
# ifdef __COMPILING_ADSK_CAM_OPERATIONSTRATEGY_CPP__
# define ADSK_CAM_OPERATIONSTRATEGY_API XI_EXPORT
# else
# define ADSK_CAM_OPERATIONSTRATEGY_API
# endif
#else
# define ADSK_CAM_OPERATIONSTRATEGY_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// The OperationStrategy contains information about a strategy such as its name, title and description.
class OperationStrategy : public core::Base {
public:

    /// Create an OperationStrategy for a given name.
    /// name : The name of the strategy.
    /// Throws an error if the strategy name is unknown.
    /// Returns the OperationStrategy for given strategy name.
    static core::Ptr<OperationStrategy> createFromString(const std::string& name);

    /// Get the name of the strategy. This is equivalent to the Operation's strategy property.
    /// Use as strategy parameter when creating a OperationInput.
    std::string name() const;

    /// Get the localized title of the strategy.
    std::string title() const;

    /// Get the localized description of the strategy.
    std::string description() const;

    /// Returns true if the strategy is allowed to be generated due to licensing and enabled preview features.
    /// Some strategies also require Active machining extension to be generated.
    /// Returns false otherwise.
    bool isGenerationAllowed() const;

    ADSK_CAM_OPERATIONSTRATEGY_API static const char* classType();
    ADSK_CAM_OPERATIONSTRATEGY_API const char* objectType() const override;
    ADSK_CAM_OPERATIONSTRATEGY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPERATIONSTRATEGY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_OPERATIONSTRATEGY_API static OperationStrategy* createFromString_raw(const char* name);
    virtual char* name_raw() const = 0;
    virtual char* title_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual bool isGenerationAllowed_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<OperationStrategy> OperationStrategy::createFromString(const std::string& name)
{
    core::Ptr<OperationStrategy> res = createFromString_raw(name.c_str());
    return res;
}

inline std::string OperationStrategy::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string OperationStrategy::title() const
{
    std::string res;

    char* p= title_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string OperationStrategy::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OperationStrategy::isGenerationAllowed() const
{
    bool res = isGenerationAllowed_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPERATIONSTRATEGY_API