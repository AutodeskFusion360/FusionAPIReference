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
#include "ToolLibrary.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_DOCUMENTTOOLLIBRARY_CPP__
# define ADSK_CAM_DOCUMENTTOOLLIBRARY_API XI_EXPORT
# else
# define ADSK_CAM_DOCUMENTTOOLLIBRARY_API
# endif
#else
# define ADSK_CAM_DOCUMENTTOOLLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class Operation;
    class OperationBase;
    class Tool;
}}

namespace adsk { namespace cam {

/// DocumentToolLibrary provides access to tools used by the document. It supports
/// adding, updating and deleting tools in the document tool library.
class DocumentToolLibrary : public ToolLibrary {
public:

    /// Returns all operations that use the given tool. The tool must exist in the document tool library.
    /// Raises an error if the tool is not in the document.
    /// tool : The tool to search for in operations. The tool must exist in the document.
    /// Returns operations using a specific tool.
    std::vector<core::Ptr<Operation>> operationsByTool(const core::Ptr<Tool>& tool) const;

    /// Update the given tool in the document tool library. The update applies all changes to the
    /// tool in the document tool library and therefore on all operations that use the tool.
    /// Will error if the tool does not exist in the document tool library.
    /// tool : The tool that should be updated.
    /// updateFeedAndSpeed : Setting updateFeedAndSpeed to true will override the feed and speed parameters of operations within the document which use the given tool.
    /// Returns true if the update was successful.
    bool update(const core::Ptr<Tool>& tool, bool updateFeedAndSpeed);

    /// Returns all tools used in a given setup or folder. Given setup or folder must belong to the document of the DocumentToolLibrary.
    /// Raises an error if given operation is not in the document.
    /// setupOrFolder : The setup or folder to get tools from. Must belong to the document.
    /// Returns tools used by a specific setup or folder.
    std::vector<core::Ptr<Tool>> toolsBySetupOrFolder(const core::Ptr<OperationBase>& setupOrFolder) const;

    ADSK_CAM_DOCUMENTTOOLLIBRARY_API static const char* classType();
    ADSK_CAM_DOCUMENTTOOLLIBRARY_API const char* objectType() const override;
    ADSK_CAM_DOCUMENTTOOLLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CAM_DOCUMENTTOOLLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Operation** operationsByTool_raw(Tool* tool, size_t& return_size) const = 0;
    virtual bool update_raw(Tool* tool, bool updateFeedAndSpeed) = 0;
    virtual Tool** toolsBySetupOrFolder_raw(OperationBase* setupOrFolder, size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<Operation>> DocumentToolLibrary::operationsByTool(const core::Ptr<Tool>& tool) const
{
    std::vector<core::Ptr<Operation>> res;
    size_t s;

    Operation** p= operationsByTool_raw(tool.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool DocumentToolLibrary::update(const core::Ptr<Tool>& tool, bool updateFeedAndSpeed)
{
    bool res = update_raw(tool.get(), updateFeedAndSpeed);
    return res;
}

inline std::vector<core::Ptr<Tool>> DocumentToolLibrary::toolsBySetupOrFolder(const core::Ptr<OperationBase>& setupOrFolder) const
{
    std::vector<core::Ptr<Tool>> res;
    size_t s;

    Tool** p= toolsBySetupOrFolder_raw(setupOrFolder.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_DOCUMENTTOOLLIBRARY_API