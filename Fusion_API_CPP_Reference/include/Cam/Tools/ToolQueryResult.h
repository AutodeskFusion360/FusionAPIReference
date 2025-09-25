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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_TOOLQUERYRESULT_CPP__
# define ADSK_CAM_TOOLQUERYRESULT_API XI_EXPORT
# else
# define ADSK_CAM_TOOLQUERYRESULT_API
# endif
#else
# define ADSK_CAM_TOOLQUERYRESULT_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Tool;
    class ToolLibrary;
}}
namespace adsk { namespace core {
    class URL;
}}

namespace adsk { namespace cam {

/// The ToolQueryResult represents one result item of a ToolQuery.
class ToolQueryResult : public core::Base {
public:

    /// The URL defines the location of the ToolLibrary asset in ToolLibraries.
    core::Ptr<core::URL> toolLibraryURL() const;

    /// The ToolLibrary contains a Tool that matches the query.
    core::Ptr<ToolLibrary> toolLibrary() const;

    /// The Tool that matches the query.
    core::Ptr<Tool> tool() const;

    /// The index specifies the index of the Tool inside the ToolLibrary.
    int toolItemIndex() const;

    ADSK_CAM_TOOLQUERYRESULT_API static const char* classType();
    ADSK_CAM_TOOLQUERYRESULT_API const char* objectType() const override;
    ADSK_CAM_TOOLQUERYRESULT_API void* queryInterface(const char* id) const override;
    ADSK_CAM_TOOLQUERYRESULT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::URL* toolLibraryURL_raw() const = 0;
    virtual ToolLibrary* toolLibrary_raw() const = 0;
    virtual Tool* tool_raw() const = 0;
    virtual int toolItemIndex_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::URL> ToolQueryResult::toolLibraryURL() const
{
    core::Ptr<core::URL> res = toolLibraryURL_raw();
    return res;
}

inline core::Ptr<ToolLibrary> ToolQueryResult::toolLibrary() const
{
    core::Ptr<ToolLibrary> res = toolLibrary_raw();
    return res;
}

inline core::Ptr<Tool> ToolQueryResult::tool() const
{
    core::Ptr<Tool> res = tool_raw();
    return res;
}

inline int ToolQueryResult::toolItemIndex() const
{
    int res = toolItemIndex_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_TOOLQUERYRESULT_API