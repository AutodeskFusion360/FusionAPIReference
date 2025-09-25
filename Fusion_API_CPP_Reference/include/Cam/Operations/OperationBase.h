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
# ifdef __COMPILING_ADSK_CAM_OPERATIONBASE_CPP__
# define ADSK_CAM_OPERATIONBASE_API XI_EXPORT
# else
# define ADSK_CAM_OPERATIONBASE_API
# endif
#else
# define ADSK_CAM_OPERATIONBASE_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMParameters;
    class GeneratedDataCollection;
    class ModifyUtility;
    class Setup;
}}
namespace adsk { namespace core {
    class Attributes;
}}

namespace adsk { namespace cam {

/// Base class object representing all operations, folders, patterns and setups.
class OperationBase : public core::Base {
public:

    /// Gets and sets the name of the operation as seen in the browser.  This name is unique as compared
    /// to the names of all other operations in the document.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the "protected" property value of the operation.
    /// Gets/sets true if the operation is protected.
    bool isProtected() const;
    bool isProtected(bool value);

    /// Gets and sets the "Optional" property value of the operation.
    /// Gets/sets true if the operation is optional.
    bool isOptional() const;
    bool isOptional(bool value);

    /// Gets and sets the "Suppressed" property value of the operation.
    /// Gets/sets true if the operation is suppressed.
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Gets the Setup this operation belongs to.
    core::Ptr<Setup> parentSetup() const;

    /// Gets if this operation is selected in the 'Setups' browser.
    bool isSelected() const;

    /// Gets and sets the notes of the operation.
    std::string notes() const;
    bool notes(const std::string& value);

    /// Returns the id of the operation.  This id is unique as compared
    /// to the ids of all other operations in the document.
    /// This id will not change when changing the order or parent of the operation.
    /// This id will remain valid when the document is saved and reloaded.
    int operationId() const;

    /// Gets the CAMParameters collection for this operation.
    core::Ptr<CAMParameters> parameters() const;

    /// Returns the collection of attributes associated with this object.
    core::Ptr<core::Attributes> attributes() const;

    /// Gets the name of the strategy associated with this operation.
    std::string strategy() const;

    /// Gets if problems were encountered when generating the operation.
    bool hasWarning() const;

    /// Gets if errors were encountered when generating the operation.
    bool hasError() const;

    /// Returns a message corresponding to any active error associated with the value of this parameter.
    std::string error() const;

    /// Returns a message corresponding to any active warning associated with the value of this parameter.
    std::string warning() const;

    /// Deletes the operation from the document.
    /// In case of a setup or folder, all containing child operations will be deleted as well.
    /// Note: Child classes may overwrite this function and throw an exception if the object cannot be deleted.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets if this operation is currently visible in the graphics window. Use the
    /// isLightBulbOn to change if the eye icon beside the operation node in the
    /// browser is on or not. Parent nodes in the browser can have their light
    /// bulb off which affects all of their children so this property does not
    /// indicate if the operation is actually visible, just that it should be visible
    /// if all of its parent nodes are also visible. Use the isVisible property
    /// to determine if it's actually visible.
    bool isLightBulbOn() const;
    bool isLightBulbOn(bool value);

    /// Gets if this operation is currently visible in the graphics window. Use the
    /// isLightBulbOn to change if the eye icon beside the operation node in the
    /// browser is on or not. Parent nodes in the browser can have their light
    /// bulb off which affects all of their children. This property indicates
    /// the final result and whether this operation is actually visible or not.
    bool isVisible() const;

    /// Get the generated data associated with a given operation base instance. The type of data depends on the strategy type and might not be available for all strategy types.
    /// The available types can be found in GeneratedData.cs
    /// null if the given object does not have available generated data, an instance in one of the child classes otherwise.
    core::Ptr<GeneratedDataCollection> generatedDataCollection() const;

    /// Get ModifyUtility for the current operation by given utility type.
    /// utility : Defines the specific ModifyUtility.
    /// Returns ModifyUtility for specific type or null if the type is not compatible with the operation.
    core::Ptr<ModifyUtility> modifyUtility(ModifyUtilityTypes utility);

    /// Move operation in tree before the given operation.
    /// Throws an exception if a not allowed move is made for example moving a operation out of a setup.
    /// operation : Operation to move targeted operation before.
    /// Returns if move operation was successful.
    bool moveBefore(const core::Ptr<OperationBase>& operation);

    /// Move operation in tree after the given operation.
    /// Throws an exception if a not allowed move is made for example moving a operation out of a setup.
    /// operation : Operation to move targeted operation after.
    /// Returns if move operation was successful.
    bool moveAfter(const core::Ptr<OperationBase>& operation);

    /// Move operation in tree into the given container. This only works with setups, patterns and folders.
    /// Moved operation will be moved at the end of all operations already in the container.
    /// Throws an exception if a not allowed move is made for example moving a setup into a setup.
    /// container : Container to move targeted operation into.
    /// Returns if move operation was successful.
    bool moveInto(const core::Ptr<OperationBase>& container);

    /// Creates a duplicate of the operation in the tree before the given operation.
    /// Throws an exception if a not allowed copy operation is made for example copying a operation out of a setup.
    /// operation : Operation to copy targeted operation before.
    /// Returns if copy command was successful.
    bool copyBefore(const core::Ptr<OperationBase>& operation);

    /// Creates a duplicate of the operation in the tree after the given operation.
    /// Throws an exception if a not allowed copy operation is made for example copying a operation out of a setup.
    /// operation : Operation to copy targeted operation after.
    /// Returns if copy command was successful.
    bool copyAfter(const core::Ptr<OperationBase>& operation);

    /// Creates a duplicate of the operation into the given container. You can only copy into containers, such as setups or folders.
    /// Copied operation will be copied at the end of all operations already in the container.
    /// Throws an exception if a not allowed copy operation is made for example copying a setup into a setup.
    /// container : Container to copy targeted operation into.
    /// Returns if copy command was successful.
    bool copyInto(const core::Ptr<OperationBase>& container);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Checks if the OperationBase has any missing references.
    /// Returns true if OperationBase has missing references.
    bool hasMissingReferences();

    /// Creates a duplicate of the operation in the tree after the itself.
    /// Returns if duplicate command was successful.
    bool duplicate();

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Removes the entity or entity ObjectCollection from the OperationBase and all its descendants.
    /// entity : The entity to remove.
    /// removeFromChildren : Boolean flag to remove the entity from all children of the operation base.
    /// Returns if remove was successful.
    bool removeReferences(const core::Ptr<core::Base>& entity, bool removeFromChildren);

    ADSK_CAM_OPERATIONBASE_API static const char* classType();
    ADSK_CAM_OPERATIONBASE_API const char* objectType() const override;
    ADSK_CAM_OPERATIONBASE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_OPERATIONBASE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool isProtected_raw() const = 0;
    virtual bool isProtected_raw(bool value) = 0;
    virtual bool isOptional_raw() const = 0;
    virtual bool isOptional_raw(bool value) = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual Setup* parentSetup_raw() const = 0;
    virtual bool isSelected_raw() const = 0;
    virtual char* notes_raw() const = 0;
    virtual bool notes_raw(const char* value) = 0;
    virtual int operationId_raw() const = 0;
    virtual CAMParameters* parameters_raw() const = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* strategy_raw() const = 0;
    virtual bool hasWarning_raw() const = 0;
    virtual bool hasError_raw() const = 0;
    virtual char* error_raw() const = 0;
    virtual char* warning_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isLightBulbOn_raw() const = 0;
    virtual bool isLightBulbOn_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual GeneratedDataCollection* generatedDataCollection_raw() const = 0;
    virtual ModifyUtility* modifyUtility_raw(ModifyUtilityTypes utility) = 0;
    virtual bool moveBefore_raw(OperationBase* operation) = 0;
    virtual bool moveAfter_raw(OperationBase* operation) = 0;
    virtual bool moveInto_raw(OperationBase* container) = 0;
    virtual bool copyBefore_raw(OperationBase* operation) = 0;
    virtual bool copyAfter_raw(OperationBase* operation) = 0;
    virtual bool copyInto_raw(OperationBase* container) = 0;
    virtual bool hasMissingReferences_raw() = 0;
    virtual bool duplicate_raw() = 0;
    virtual bool removeReferences_raw(core::Base* entity, bool removeFromChildren) = 0;
    virtual void placeholderOperationBase0() {}
    virtual void placeholderOperationBase1() {}
    virtual void placeholderOperationBase2() {}
    virtual void placeholderOperationBase3() {}
    virtual void placeholderOperationBase4() {}
    virtual void placeholderOperationBase5() {}
    virtual void placeholderOperationBase6() {}
    virtual void placeholderOperationBase7() {}
    virtual void placeholderOperationBase8() {}
    virtual void placeholderOperationBase9() {}
    virtual void placeholderOperationBase10() {}
    virtual void placeholderOperationBase11() {}
    virtual void placeholderOperationBase12() {}
    virtual void placeholderOperationBase13() {}
    virtual void placeholderOperationBase14() {}
    virtual void placeholderOperationBase15() {}
    virtual void placeholderOperationBase16() {}
    virtual void placeholderOperationBase17() {}
    virtual void placeholderOperationBase18() {}
    virtual void placeholderOperationBase19() {}
    virtual void placeholderOperationBase20() {}
    virtual void placeholderOperationBase21() {}
    virtual void placeholderOperationBase22() {}
    virtual void placeholderOperationBase23() {}
    virtual void placeholderOperationBase24() {}
    virtual void placeholderOperationBase25() {}
    virtual void placeholderOperationBase26() {}
    virtual void placeholderOperationBase27() {}
    virtual void placeholderOperationBase28() {}
};

// Inline wrappers

inline std::string OperationBase::name() const
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

inline bool OperationBase::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool OperationBase::isProtected() const
{
    bool res = isProtected_raw();
    return res;
}

inline bool OperationBase::isProtected(bool value)
{
    return isProtected_raw(value);
}

inline bool OperationBase::isOptional() const
{
    bool res = isOptional_raw();
    return res;
}

inline bool OperationBase::isOptional(bool value)
{
    return isOptional_raw(value);
}

inline bool OperationBase::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool OperationBase::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<Setup> OperationBase::parentSetup() const
{
    core::Ptr<Setup> res = parentSetup_raw();
    return res;
}

inline bool OperationBase::isSelected() const
{
    bool res = isSelected_raw();
    return res;
}

inline std::string OperationBase::notes() const
{
    std::string res;

    char* p= notes_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OperationBase::notes(const std::string& value)
{
    return notes_raw(value.c_str());
}

inline int OperationBase::operationId() const
{
    int res = operationId_raw();
    return res;
}

inline core::Ptr<CAMParameters> OperationBase::parameters() const
{
    core::Ptr<CAMParameters> res = parameters_raw();
    return res;
}

inline core::Ptr<core::Attributes> OperationBase::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string OperationBase::strategy() const
{
    std::string res;

    char* p= strategy_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OperationBase::hasWarning() const
{
    bool res = hasWarning_raw();
    return res;
}

inline bool OperationBase::hasError() const
{
    bool res = hasError_raw();
    return res;
}

inline std::string OperationBase::error() const
{
    std::string res;

    char* p= error_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string OperationBase::warning() const
{
    std::string res;

    char* p= warning_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool OperationBase::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool OperationBase::isLightBulbOn() const
{
    bool res = isLightBulbOn_raw();
    return res;
}

inline bool OperationBase::isLightBulbOn(bool value)
{
    return isLightBulbOn_raw(value);
}

inline bool OperationBase::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline core::Ptr<GeneratedDataCollection> OperationBase::generatedDataCollection() const
{
    core::Ptr<GeneratedDataCollection> res = generatedDataCollection_raw();
    return res;
}

inline core::Ptr<ModifyUtility> OperationBase::modifyUtility(ModifyUtilityTypes utility)
{
    core::Ptr<ModifyUtility> res = modifyUtility_raw(utility);
    return res;
}

inline bool OperationBase::moveBefore(const core::Ptr<OperationBase>& operation)
{
    bool res = moveBefore_raw(operation.get());
    return res;
}

inline bool OperationBase::moveAfter(const core::Ptr<OperationBase>& operation)
{
    bool res = moveAfter_raw(operation.get());
    return res;
}

inline bool OperationBase::moveInto(const core::Ptr<OperationBase>& container)
{
    bool res = moveInto_raw(container.get());
    return res;
}

inline bool OperationBase::copyBefore(const core::Ptr<OperationBase>& operation)
{
    bool res = copyBefore_raw(operation.get());
    return res;
}

inline bool OperationBase::copyAfter(const core::Ptr<OperationBase>& operation)
{
    bool res = copyAfter_raw(operation.get());
    return res;
}

inline bool OperationBase::copyInto(const core::Ptr<OperationBase>& container)
{
    bool res = copyInto_raw(container.get());
    return res;
}

inline bool OperationBase::hasMissingReferences()
{
    bool res = hasMissingReferences_raw();
    return res;
}

inline bool OperationBase::duplicate()
{
    bool res = duplicate_raw();
    return res;
}

inline bool OperationBase::removeReferences(const core::Ptr<core::Base>& entity, bool removeFromChildren)
{
    bool res = removeReferences_raw(entity.get(), removeFromChildren);
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_OPERATIONBASE_API