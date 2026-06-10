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
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAMTEMPLATE_CPP__
# define ADSK_CAM_CAMTEMPLATE_API XI_EXPORT
# else
# define ADSK_CAM_CAMTEMPLATE_API
# endif
#else
# define ADSK_CAM_CAMTEMPLATE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMTemplateOperations;
    class Operation;
}}
namespace adsk { namespace core {
    class Attributes;
}}

namespace adsk { namespace cam {

/// Object that represents a template for a set of operations. These can be created from operations,
/// optionally stored to files or in a library. The template can be used to re-create those operations
/// in another document.
class CAMTemplate : public core::Base {
public:

    /// Creates a CAMTemplate from an XML string. Invalid template XML will produce errors
    /// xml : The XML representation to act as a base for creating a template.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createFromXML(const std::string& xml);

    /// Create a CAMTemplate from a list of Operations
    /// operations : An array of operations to bundle into a template.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createFromOperations(const std::vector<core::Ptr<Operation>>& operations);

    /// Create a hole CAMTemplate from a list of hole operations. Hole templates may be used in Hole Recognition
    /// operations : A list of operations to bundle into a template. Only 2D Adaptive, 2D Chamfer, 2D Contour, 2D Pocket, Bore,
    /// Circular, Drill and Thread operations are allowed in hole templates. Passing in other operation types will throw an error.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createHoleTemplateFromOperations(const std::vector<core::Ptr<Operation>>& operations);

    /// Create a CAMTemplate from a file on disk, i.e. Import the template file. Invalid files will produce errors
    /// filePath : The path to a template file.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createFromFile(const std::string& filePath);

    /// Save the CAMTemplate to a file
    /// filePath : The path to the file you wish to save
    /// Returns true if the template was saved successfully, false otherwise.
    bool save(const std::string& filePath);

    /// Gets and sets the name of the template.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the description of the template.
    std::string description() const;
    bool description(const std::string& value);

    /// Whether or not this is a hole template
    bool isHoleTemplate() const;

    /// Whether or not this template is in an appropriate state to be
    /// used. This means it has operations and, for hole templates, has
    /// an appropriate hole signature.
    bool isValidTemplate() const;

    /// Convert hole signature to XML. This will be empty if this is not
    /// a hole template, or if there is no signature.
    std::string getHoleSignatureXML();

    /// Provide an XML snippet to specify a hole signature. This will
    /// have no effect if this is not a hole template. This will fail if
    /// the provided snippet is not valid.
    /// This will return true on success, false on failure.
    bool setHoleSignatureXML(const std::string& xmlSnippet);

    ///  Expose operations.
    core::Ptr<CAMTemplateOperations> operations() const;
    bool operations(const core::Ptr<CAMTemplateOperations>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Create an empty CAMTemplate.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createEmpty();

    /// Create an empty CAMTemplate. This template will represent a hole template.
    /// Returns the newly created template.
    static core::Ptr<CAMTemplate> createEmptyHoleTemplate();

    /// Returns the collection of attributes associated with this template.
    core::Ptr<core::Attributes> attributes() const;

    ADSK_CAM_CAMTEMPLATE_API static const char* classType();
    ADSK_CAM_CAMTEMPLATE_API const char* objectType() const override;
    ADSK_CAM_CAMTEMPLATE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAMTEMPLATE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createFromXML_raw(const char* xml);
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createFromOperations_raw(Operation** operations, size_t operations_size);
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createHoleTemplateFromOperations_raw(Operation** operations, size_t operations_size);
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createFromFile_raw(const char* filePath);
    virtual bool save_raw(const char* filePath) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* description_raw() const = 0;
    virtual bool description_raw(const char* value) = 0;
    virtual bool isHoleTemplate_raw() const = 0;
    virtual bool isValidTemplate_raw() const = 0;
    virtual char* getHoleSignatureXML_raw() = 0;
    virtual bool setHoleSignatureXML_raw(const char* xmlSnippet) = 0;
    virtual CAMTemplateOperations* operations_raw() const = 0;
    virtual bool operations_raw(CAMTemplateOperations* value) = 0;
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createEmpty_raw();
    ADSK_CAM_CAMTEMPLATE_API static CAMTemplate* createEmptyHoleTemplate_raw();
    virtual core::Attributes* attributes_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<CAMTemplate> CAMTemplate::createFromXML(const std::string& xml)
{
    core::Ptr<CAMTemplate> res = createFromXML_raw(xml.c_str());
    return res;
}

inline core::Ptr<CAMTemplate> CAMTemplate::createFromOperations(const std::vector<core::Ptr<Operation>>& operations)
{
    Operation** operations_ = new Operation*[operations.size()];
    for(size_t i=0; i<operations.size(); ++i)
        operations_[i] = operations[i].get();

    core::Ptr<CAMTemplate> res = createFromOperations_raw(operations_, operations.size());
    delete[] operations_;
    return res;
}

inline core::Ptr<CAMTemplate> CAMTemplate::createHoleTemplateFromOperations(const std::vector<core::Ptr<Operation>>& operations)
{
    Operation** operations_ = new Operation*[operations.size()];
    for(size_t i=0; i<operations.size(); ++i)
        operations_[i] = operations[i].get();

    core::Ptr<CAMTemplate> res = createHoleTemplateFromOperations_raw(operations_, operations.size());
    delete[] operations_;
    return res;
}

inline core::Ptr<CAMTemplate> CAMTemplate::createFromFile(const std::string& filePath)
{
    core::Ptr<CAMTemplate> res = createFromFile_raw(filePath.c_str());
    return res;
}

inline bool CAMTemplate::save(const std::string& filePath)
{
    bool res = save_raw(filePath.c_str());
    return res;
}

inline std::string CAMTemplate::name() const
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

inline bool CAMTemplate::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string CAMTemplate::description() const
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

inline bool CAMTemplate::description(const std::string& value)
{
    return description_raw(value.c_str());
}

inline bool CAMTemplate::isHoleTemplate() const
{
    bool res = isHoleTemplate_raw();
    return res;
}

inline bool CAMTemplate::isValidTemplate() const
{
    bool res = isValidTemplate_raw();
    return res;
}

inline std::string CAMTemplate::getHoleSignatureXML()
{
    std::string res;

    char* p= getHoleSignatureXML_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAMTemplate::setHoleSignatureXML(const std::string& xmlSnippet)
{
    bool res = setHoleSignatureXML_raw(xmlSnippet.c_str());
    return res;
}

inline core::Ptr<CAMTemplateOperations> CAMTemplate::operations() const
{
    core::Ptr<CAMTemplateOperations> res = operations_raw();
    return res;
}

inline bool CAMTemplate::operations(const core::Ptr<CAMTemplateOperations>& value)
{
    return operations_raw(value.get());
}

inline core::Ptr<CAMTemplate> CAMTemplate::createEmpty()
{
    core::Ptr<CAMTemplate> res = createEmpty_raw();
    return res;
}

inline core::Ptr<CAMTemplate> CAMTemplate::createEmptyHoleTemplate()
{
    core::Ptr<CAMTemplate> res = createEmptyHoleTemplate_raw();
    return res;
}

inline core::Ptr<core::Attributes> CAMTemplate::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAMTEMPLATE_API