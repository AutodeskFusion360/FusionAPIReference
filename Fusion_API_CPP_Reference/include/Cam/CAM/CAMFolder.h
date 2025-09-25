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
#include "../Operations/OperationBase.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMFOLDER_CPP__
# define ADSK_CAM_CAMFOLDER_API XI_EXPORT
# else
# define ADSK_CAM_CAMFOLDER_API
# endif
#else
# define ADSK_CAM_CAMFOLDER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMFolders;
    class CAMPatterns;
    class CAMTemplate;
    class ChildOperationList;
    class CreateFromCAMTemplateInput;
    class Operations;
}}
namespace adsk { namespace core {
    class ObjectCollection;
}}

namespace adsk { namespace cam {

/// Object that represents a folder in an existing Setup, Folder or Pattern.
class CAMFolder : public OperationBase {
public:

    /// Gets if this folder is active.
    bool isActive() const;

    /// Returns the Operations collection that provides access to existing individual operations
    /// in this folder.
    core::Ptr<Operations> operations() const;

    /// Returns the Folders collection that provides access to existing folders
    /// in this folder.
    core::Ptr<CAMFolders> folders() const;

    /// Returns the Patterns collection that provides access to existing patterns
    /// in this folder.
    core::Ptr<CAMPatterns> patterns() const;

    /// Returns a collection containing all of the immediate (top level) child operations, folders and patterns in this folder
    /// in the order they appear in the browser.
    core::Ptr<ChildOperationList> children() const;

    /// Returns the parent Setup, Folder or Pattern for this Folder.
    core::Ptr<core::Base> parent() const;

    /// Gets a collection containing all of the operations in this folder.
    /// This includes all operations nested in folders and patterns.
    core::Ptr<core::ObjectCollection> allOperations() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates and adds operations, folders or patterns from the specified template file to the end of this folder.
    /// templateFilePath : The full path to the template file.
    /// Returns the collection containing all of the operations, folders and patterns created from the template file.
    core::Ptr<core::ObjectCollection> createFromTemplate(const std::string& templateFilePath);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates and adds operations, folders or patterns from the specified template content XML to the end of this folder.
    /// templateXML : The full XML content of the template.
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromTemplateXML(const std::string& templateXML);

    /// Sets this object as the default container.
    /// Returns true if the activation was successful.
    bool activate();

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates and adds operations, folders or patterns from the specified CAMTemplate to the end of this folder.
    /// camTemplate : The CAMTemplate object to apply
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromCAMTemplate(const core::Ptr<CAMTemplate>& camTemplate);

    /// Create new operations, folders, or patterns from the specified CAMTemplate. They
    /// are added to the end of the parent setup.
    /// input : Input object that contains the template to create from and the generation mode.
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromCAMTemplate2(const core::Ptr<CreateFromCAMTemplateInput>& input);

    ADSK_CAM_CAMFOLDER_API static const char* classType();
    ADSK_CAM_CAMFOLDER_API const char* objectType() const override;
    ADSK_CAM_CAMFOLDER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMFOLDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isActive_raw() const = 0;
    virtual Operations* operations_raw() const = 0;
    virtual CAMFolders* folders_raw() const = 0;
    virtual CAMPatterns* patterns_raw() const = 0;
    virtual ChildOperationList* children_raw() const = 0;
    virtual core::Base* parent_raw() const = 0;
    virtual core::ObjectCollection* allOperations_raw() const = 0;
    virtual core::ObjectCollection* createFromTemplate_raw(const char* templateFilePath) = 0;
    virtual OperationBase** createFromTemplateXML_raw(const char* templateXML, size_t& return_size) = 0;
    virtual bool activate_raw() = 0;
    virtual OperationBase** createFromCAMTemplate_raw(CAMTemplate* camTemplate, size_t& return_size) = 0;
    virtual OperationBase** createFromCAMTemplate2_raw(CreateFromCAMTemplateInput* input, size_t& return_size) = 0;
    virtual void placeholderCAMFolder0() {}
    virtual void placeholderCAMFolder1() {}
    virtual void placeholderCAMFolder2() {}
    virtual void placeholderCAMFolder3() {}
    virtual void placeholderCAMFolder4() {}
    virtual void placeholderCAMFolder5() {}
    virtual void placeholderCAMFolder6() {}
    virtual void placeholderCAMFolder7() {}
    virtual void placeholderCAMFolder8() {}
    virtual void placeholderCAMFolder9() {}
    virtual void placeholderCAMFolder10() {}
    virtual void placeholderCAMFolder11() {}
    virtual void placeholderCAMFolder12() {}
    virtual void placeholderCAMFolder13() {}
    virtual void placeholderCAMFolder14() {}
    virtual void placeholderCAMFolder15() {}
    virtual void placeholderCAMFolder16() {}
    virtual void placeholderCAMFolder17() {}
    virtual void placeholderCAMFolder18() {}
    virtual void placeholderCAMFolder19() {}
};

// Inline wrappers

inline bool CAMFolder::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline core::Ptr<Operations> CAMFolder::operations() const
{
    core::Ptr<Operations> res = operations_raw();
    return res;
}

inline core::Ptr<CAMFolders> CAMFolder::folders() const
{
    core::Ptr<CAMFolders> res = folders_raw();
    return res;
}

inline core::Ptr<CAMPatterns> CAMFolder::patterns() const
{
    core::Ptr<CAMPatterns> res = patterns_raw();
    return res;
}

inline core::Ptr<ChildOperationList> CAMFolder::children() const
{
    core::Ptr<ChildOperationList> res = children_raw();
    return res;
}

inline core::Ptr<core::Base> CAMFolder::parent() const
{
    core::Ptr<core::Base> res = parent_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> CAMFolder::allOperations() const
{
    core::Ptr<core::ObjectCollection> res = allOperations_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> CAMFolder::createFromTemplate(const std::string& templateFilePath)
{
    core::Ptr<core::ObjectCollection> res = createFromTemplate_raw(templateFilePath.c_str());
    return res;
}

inline std::vector<core::Ptr<OperationBase>> CAMFolder::createFromTemplateXML(const std::string& templateXML)
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= createFromTemplateXML_raw(templateXML.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMFolder::activate()
{
    bool res = activate_raw();
    return res;
}

inline std::vector<core::Ptr<OperationBase>> CAMFolder::createFromCAMTemplate(const core::Ptr<CAMTemplate>& camTemplate)
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= createFromCAMTemplate_raw(camTemplate.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline std::vector<core::Ptr<OperationBase>> CAMFolder::createFromCAMTemplate2(const core::Ptr<CreateFromCAMTemplateInput>& input)
{
    std::vector<core::Ptr<OperationBase>> res;
    size_t s;

    OperationBase** p= createFromCAMTemplate2_raw(input.get(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMFOLDER_API