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
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SETUP_CPP__
# define ADSK_CAM_SETUP_API XI_EXPORT
# else
# define ADSK_CAM_SETUP_API
# endif
#else
# define ADSK_CAM_SETUP_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMAdditiveContainer;
    class CAMFolders;
    class CAMPatterns;
    class CAMTemplate;
    class ChildOperationList;
    class CreateFromCAMTemplateInput;
    class Machine;
    class Operations;
    class PrintSetting;
    class SetupVisibilityManager;
    class StockMaterial;
}}
namespace adsk { namespace core {
    class Matrix3D;
    class ObjectCollection;
}}

namespace adsk { namespace cam {

/// Object that represents an existing Setup.
class Setup : public OperationBase {
public:

    /// Gets the Operation Type.
    /// It can be MillingOperation, TurningOperation, JetOperation or AdditiveOperation.
    OperationTypes operationType() const;

    /// Gets if this setup is active.
    bool isActive() const;

    /// Returns the Operations collection that provides access to existing operations
    /// in this setup.
    core::Ptr<Operations> operations() const;

    /// Returns the Folders collection that provides access to existing folders
    /// in this setup.
    core::Ptr<CAMFolders> folders() const;

    /// Returns the Patterns collection that provides access to existing patterns
    /// in this setup.
    core::Ptr<CAMPatterns> patterns() const;

    /// Returns a collection containing all of the immediate (top level) child operations, folders and patterns in this setup,
    /// in the order they appear in the browser.
    core::Ptr<ChildOperationList> children() const;

    /// Returns an ObjectCollection containing all of the operations in this setup.
    /// This includes all operations nested in folders and patterns.
    core::Ptr<core::ObjectCollection> allOperations() const;

    /// Gets and sets the input models associated with the setup. Passing in an empty ObjectCollection
    /// will remove all current inputs.  Valid collection items are Occurrence, BRepBody, or MeshBody.
    core::Ptr<core::ObjectCollection> models() const;
    bool models(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the fixtures associated with the setup, which are represented by an ObjectCollection
    /// of models, where a model can be an Occurrence, BRepBody, or MeshBody.
    /// To be able to set models as fixtures, the fixturesEnabled property has to be set first.
    core::Ptr<core::ObjectCollection> fixtures() const;
    bool fixtures(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the stock solids associated with the setup, which are represented by an ObjectCollection
    /// of models, where a model can be an Occurrence, BRepBody, or MeshBody.
    /// StockMode has to be set to `SolidStock` otherwise this will throw an error.
    core::Ptr<core::ObjectCollection> stockSolids() const;
    bool stockSolids(const core::Ptr<core::ObjectCollection>& value);

    /// Gets and sets the Machine associated with the setup. The returned Machine is a transient copy, so the Machine needs to be set to the Setup again to apply any changes.
    core::Ptr<Machine> machine() const;
    bool machine(const core::Ptr<Machine>& value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Create and add operations, folders or patterns from the specified template file to the end of this setup.
    /// templateFilePath : The full path to the template file.
    /// Returns the collection containing all of the operations, folders and patterns created from the template file.
    core::Ptr<core::ObjectCollection> createFromTemplate(const std::string& templateFilePath);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Create and add operations, folders or patterns from the specified template content XML to the end of this setup.
    /// templateXML : The full XML content of the template.
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromTemplateXML(const std::string& templateXML);

    /// Gets and sets the bodies associated with the setup.  Passing in an empty ObjectCollection
    /// will remove all current bodies.  Valid input is MeshBody and/or BRepBody objects.
    SetupStockModes stockMode() const;
    bool stockMode(SetupStockModes value);

    /// Gets the Work Coordinate System associated with the setup as 4x4 matrix. From Matrix3D,
    /// Orientation and Origin data can be fetched.
    core::Ptr<core::Matrix3D> workCoordinateSystem() const;

    /// Sets this object as the default container.
    /// Returns true if the activation was successful.
    bool activate();

    /// Set this value to enable the use of fixtures for this setup.
    /// To then set the fixture models themselves use the `fixtures` property.
    bool fixtureEnabled() const;
    bool fixtureEnabled(bool value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Create new operations, folders, or patterns from the specified CAMTemplate. They
    /// are added to the end of the parent setup.
    /// camTemplate : The CAMTemplate object to use to create the new operation, folder, or pattern.
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromCAMTemplate(const core::Ptr<CAMTemplate>& camTemplate);

    /// Gets and sets the PrintSetting associated with the setup.
    core::Ptr<PrintSetting> printSetting() const;
    bool printSetting(const core::Ptr<PrintSetting>& value);

    /// Create new operations, folders, or patterns from the specified CAMTemplate. They
    /// are added to the end of the parent setup.
    /// input : Input object that contains the template to create from and the generation mode.
    /// Returns an array containing all of the operations, folders and patterns created from the template.
    std::vector<core::Ptr<OperationBase>> createFromCAMTemplate2(const core::Ptr<CreateFromCAMTemplateInput>& input);

    /// Visibility manager for this setup.
    core::Ptr<SetupVisibilityManager> visibilityManager() const;

    /// Returns the additive container with the specified type.
    /// containerType : The type of the container
    /// Returns the specified container or null in the case where there is no container with the specified type.
    core::Ptr<CAMAdditiveContainer> additiveContainerByType(CAMAdditiveContainerTypes containerType);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets/ and sets the Stock material associated with the setup.
    core::Ptr<StockMaterial> stockMaterial() const;
    bool stockMaterial(const core::Ptr<StockMaterial>& value);

    ADSK_CAM_SETUP_API static const char* classType();
    ADSK_CAM_SETUP_API const char* objectType() const override;
    ADSK_CAM_SETUP_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SETUP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OperationTypes operationType_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual Operations* operations_raw() const = 0;
    virtual CAMFolders* folders_raw() const = 0;
    virtual CAMPatterns* patterns_raw() const = 0;
    virtual ChildOperationList* children_raw() const = 0;
    virtual core::ObjectCollection* allOperations_raw() const = 0;
    virtual core::ObjectCollection* models_raw() const = 0;
    virtual bool models_raw(core::ObjectCollection* value) = 0;
    virtual core::ObjectCollection* fixtures_raw() const = 0;
    virtual core::ObjectCollection* stockSolids_raw() const = 0;
    virtual Machine* machine_raw() const = 0;
    virtual core::ObjectCollection* createFromTemplate_raw(const char* templateFilePath) = 0;
    virtual OperationBase** createFromTemplateXML_raw(const char* templateXML, size_t& return_size) = 0;
    virtual bool stockSolids__raw(core::ObjectCollection* value) = 0;
    virtual SetupStockModes stockMode_raw() const = 0;
    virtual bool stockMode_raw(SetupStockModes value) = 0;
    virtual bool fixtures__raw(core::ObjectCollection* value) = 0;
    virtual core::Matrix3D* workCoordinateSystem_raw() const = 0;
    virtual bool machine__raw(Machine* value) = 0;
    virtual bool activate_raw() = 0;
    virtual bool fixtureEnabled_raw() const = 0;
    virtual bool fixtureEnabled_raw(bool value) = 0;
    virtual OperationBase** createFromCAMTemplate_raw(CAMTemplate* camTemplate, size_t& return_size) = 0;
    virtual PrintSetting* printSetting_raw() const = 0;
    virtual bool printSetting_raw(PrintSetting* value) = 0;
    virtual OperationBase** createFromCAMTemplate2_raw(CreateFromCAMTemplateInput* input, size_t& return_size) = 0;
    virtual SetupVisibilityManager* visibilityManager_raw() const = 0;
    virtual CAMAdditiveContainer* additiveContainerByType_raw(CAMAdditiveContainerTypes containerType) = 0;
    virtual StockMaterial* stockMaterial_raw() const = 0;
    virtual bool stockMaterial_raw(StockMaterial* value) = 0;
};

// Inline wrappers

inline OperationTypes Setup::operationType() const
{
    OperationTypes res = operationType_raw();
    return res;
}

inline bool Setup::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline core::Ptr<Operations> Setup::operations() const
{
    core::Ptr<Operations> res = operations_raw();
    return res;
}

inline core::Ptr<CAMFolders> Setup::folders() const
{
    core::Ptr<CAMFolders> res = folders_raw();
    return res;
}

inline core::Ptr<CAMPatterns> Setup::patterns() const
{
    core::Ptr<CAMPatterns> res = patterns_raw();
    return res;
}

inline core::Ptr<ChildOperationList> Setup::children() const
{
    core::Ptr<ChildOperationList> res = children_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> Setup::allOperations() const
{
    core::Ptr<core::ObjectCollection> res = allOperations_raw();
    return res;
}

inline core::Ptr<core::ObjectCollection> Setup::models() const
{
    core::Ptr<core::ObjectCollection> res = models_raw();
    return res;
}

inline bool Setup::models(const core::Ptr<core::ObjectCollection>& value)
{
    return models_raw(value.get());
}

inline core::Ptr<core::ObjectCollection> Setup::fixtures() const
{
    core::Ptr<core::ObjectCollection> res = fixtures_raw();
    return res;
}

inline bool Setup::fixtures(const core::Ptr<core::ObjectCollection>& value)
{
    return fixtures__raw(value.get());
}

inline core::Ptr<core::ObjectCollection> Setup::stockSolids() const
{
    core::Ptr<core::ObjectCollection> res = stockSolids_raw();
    return res;
}

inline bool Setup::stockSolids(const core::Ptr<core::ObjectCollection>& value)
{
    return stockSolids__raw(value.get());
}

inline core::Ptr<Machine> Setup::machine() const
{
    core::Ptr<Machine> res = machine_raw();
    return res;
}

inline bool Setup::machine(const core::Ptr<Machine>& value)
{
    return machine__raw(value.get());
}

inline core::Ptr<core::ObjectCollection> Setup::createFromTemplate(const std::string& templateFilePath)
{
    core::Ptr<core::ObjectCollection> res = createFromTemplate_raw(templateFilePath.c_str());
    return res;
}

inline std::vector<core::Ptr<OperationBase>> Setup::createFromTemplateXML(const std::string& templateXML)
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

inline SetupStockModes Setup::stockMode() const
{
    SetupStockModes res = stockMode_raw();
    return res;
}

inline bool Setup::stockMode(SetupStockModes value)
{
    return stockMode_raw(value);
}

inline core::Ptr<core::Matrix3D> Setup::workCoordinateSystem() const
{
    core::Ptr<core::Matrix3D> res = workCoordinateSystem_raw();
    return res;
}

inline bool Setup::activate()
{
    bool res = activate_raw();
    return res;
}

inline bool Setup::fixtureEnabled() const
{
    bool res = fixtureEnabled_raw();
    return res;
}

inline bool Setup::fixtureEnabled(bool value)
{
    return fixtureEnabled_raw(value);
}

inline std::vector<core::Ptr<OperationBase>> Setup::createFromCAMTemplate(const core::Ptr<CAMTemplate>& camTemplate)
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

inline core::Ptr<PrintSetting> Setup::printSetting() const
{
    core::Ptr<PrintSetting> res = printSetting_raw();
    return res;
}

inline bool Setup::printSetting(const core::Ptr<PrintSetting>& value)
{
    return printSetting_raw(value.get());
}

inline std::vector<core::Ptr<OperationBase>> Setup::createFromCAMTemplate2(const core::Ptr<CreateFromCAMTemplateInput>& input)
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

inline core::Ptr<SetupVisibilityManager> Setup::visibilityManager() const
{
    core::Ptr<SetupVisibilityManager> res = visibilityManager_raw();
    return res;
}

inline core::Ptr<CAMAdditiveContainer> Setup::additiveContainerByType(CAMAdditiveContainerTypes containerType)
{
    core::Ptr<CAMAdditiveContainer> res = additiveContainerByType_raw(containerType);
    return res;
}

inline core::Ptr<StockMaterial> Setup::stockMaterial() const
{
    core::Ptr<StockMaterial> res = stockMaterial_raw();
    return res;
}

inline bool Setup::stockMaterial(const core::Ptr<StockMaterial>& value)
{
    return stockMaterial_raw(value.get());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SETUP_API