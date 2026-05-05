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
#include "../../Core/Application/Product.h"
#include "../CamTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAM_CPP__
# define ADSK_CAM_CAM_API XI_EXPORT
# else
# define ADSK_CAM_CAM_API
# endif
#else
# define ADSK_CAM_CAM_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class CAMExportManager;
    class CAMImportManager;
    class CAMInspectionResults;
    class DocumentStockMaterialLibrary;
    class DocumentToolLibrary;
    class GenerateToolpathFuture;
    class Machine;
    class MachiningTime;
    class ManufacturingModels;
    class NCPrograms;
    class PostProcessInput;
    class SetupChangeEvent;
    class SetupEvent;
    class SetupGroups;
    class Setups;
}}
namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class CustomGraphicsGroups;
    class Occurrence;
    class OccurrenceList;
}}

namespace adsk { namespace cam {

/// Object that represents the CAM environment of a Fusion document.
class CAM : public core::Product {
public:

    /// Returns the Setups collection that provides access to existing setups.
    core::Ptr<Setups> setups() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// This method is only valid for an additive setup and exports the default additive setup's models as a 3MF file. The 3MF also contains machine and support information.
    /// True on success, false on errors or wrong setup type
    bool export3MFForDefaultAdditiveSetup(const std::string& filepath, bool addSimulationInfo = false, bool simPostProcess = false, bool simSplitSurrogates = false, bool simKeepThickeningStructure = false);

    /// Generates or regenerates all the specified objects, including those nested in sub-folders or patterns.
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use an ObjectCollection
    /// to specify multiple objects of any of the supported types.
    /// Return GenerateToolpathFuture that includes the status of the operation generation.
    core::Ptr<GenerateToolpathFuture> generateToolpath(const core::Ptr<core::Base>& operations);

    /// Generates or regenerates all the operations in the document, including those nested in sub-folders or patterns.
    /// skipValid : Option to skip valid operations and only regenerate invalid operations.
    /// Return GenerateToolpathFuture that includes the status of operation generation.
    core::Ptr<GenerateToolpathFuture> generateAllToolpaths(bool skipValid);

    /// Clears all the toolpaths for the specified objects, including those nested in sub-folders or patterns.
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use and ObjectCollection
    /// to specify multiple objects of any combination of types.
    /// Return true if successful.
    bool clearToolpath(const core::Ptr<core::Base>& operations);

    /// Clears all the toolpaths in the document, including those nested in sub-folders or patterns.
    /// Return true if successful.
    bool clearAllToolpaths();

    /// Checks if the operations (including those nested in sub-folders or patterns) are valid and up to date.
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use an ObjectCollection
    /// to specify multiple objects of any of the supported types.
    /// Returns true if the operations are valid
    bool checkToolpath(const core::Ptr<core::Base>& operations);

    /// Checks if all the operations (includes those nested in sub-folders or patterns) in the document are valid and up to date.
    /// Returns true if the all operations are valid
    bool checkAllToolpaths();

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Post all of the toolpaths (including those nested in sub-folders or patterns) for the specified objects.
    /// If post processing fails, an error message can be retrieved from the error log explaining the reason for the failure.
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use an ObjectCollection
    /// to specify multiple objects of any of the supported types.
    /// input : The PostProcessInput object that defines the post options and parameters.
    /// Returns true if successful
    bool postProcess(const core::Ptr<core::Base>& operations, const core::Ptr<PostProcessInput>& input);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Post all of the toolpaths (includes those nested in sub-folders or patterns) in the document.
    /// If post processing fails, an error message can be retrieved from the error log explaining the reason for the failure.
    /// input : The PostProcessInput object that defines the post options and parameters.
    /// Returns true if successful.
    bool postProcessAll(const core::Ptr<PostProcessInput>& input);

    /// Generate the setup sheets for the specified objects
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use an ObjectCollection
    /// to specify multiple objects of any of the supported types.
    /// format : The document format for the setup sheet.  Valid options are HTMLFormat and ExcelFormat.
    /// Limitation: "ExcelFormat" can be used in windows OS only.
    /// folder : The destination folder to locate the setup sheet documents in.
    /// openDocument : An option to allow to open the document instantly after the generation. By default, the document is opened.
    /// Returns true if successful
    bool generateSetupSheet(const core::Ptr<core::Base>& operations, SetupSheetFormats format, const std::string& folder, bool openDocument = true);

    /// Generates all of the setup sheets for all of the operations in the document
    /// format : The document format for the setup sheet.  Valid options are HTMLFormat and ExcelFormat.
    /// Limitation: "ExcelFormat" can be used in windows OS only.
    /// folder : The destination folder to locate the setup sheet documents in.
    /// openDocument : An option to allow to open the document instantly after the generation. By default, the document is opened.
    /// Returns true if successful
    bool generateAllSetupSheets(SetupSheetFormats format, const std::string& folder, bool openDocument = true);

    /// Gets a collection containing all of the operations in the document.
    /// This includes all operations nested in folders and patterns.
    core::Ptr<core::ObjectCollection> allOperations() const;

    /// Gets the installed post folder.
    std::string genericPostFolder() const;

    /// Gets the personal post folder.
    std::string personalPostFolder() const;

    /// Gets the folder for temporary files.
    std::string temporaryFolder() const;

    /// Get the machining time for the specified objects.
    /// operations : An Operation, Setup, Folder, or Pattern object. You can also use an ObjectCollection
    /// to specify multiple objects of any of the supported types.
    /// feedScale : The feed scale value (%) to use.
    /// rapidFeed : The rapid feed rate in centimeters per second.
    /// toolChangeTime : The tool change time in seconds.
    /// Returns a MachiningTime object that has properties holding the calculation results.
    core::Ptr<MachiningTime> getMachiningTime(const core::Ptr<core::Base>& operations, double feedScale, double rapidFeed, double toolChangeTime);

    /// Returns the customGraphicsGroups object associated with the CAM product.
    core::Ptr<fusion::CustomGraphicsGroups> customGraphicsGroups() const;

    /// The CAM product has its own root component which has a single occurrence that
    /// references the Design root occurrence. This property returns this occurrence.
    core::Ptr<fusion::Occurrence> designRootOccurrence() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns a read only list of flat pattern occurrences in CAM product.
    core::Ptr<fusion::OccurrenceList> flatPatternOccurrences() const;

    /// Gets an array containing all the machines in the document.
    std::vector<core::Ptr<Machine>> allMachines() const;

    /// The SetupCreated event fires when a new setup is created.
    core::Ptr<SetupEvent> setupCreated() const;

    /// The setupDestroying event fires before a setup is destroyed.
    core::Ptr<SetupEvent> setupDestroying() const;

    /// The SetupChanged event fires when a setup is modified.
    core::Ptr<SetupChangeEvent> setupChanged() const;

    /// The SetupActivating event fires before a setup is activated.
    core::Ptr<SetupEvent> setupActivating() const;

    /// The SetupActivated event fires when a setup is activated.
    core::Ptr<SetupEvent> setupActivated() const;

    /// The SetupDeactivating event fires before a setup is deactivated.
    core::Ptr<SetupEvent> setupDeactivating() const;

    /// The SetupDeactivated event fires when a setup is deactivated.
    core::Ptr<SetupEvent> setupDeactivated() const;

    /// Returns the Export Manager which provides access to the functionality
    /// to export in various formats.
    core::Ptr<CAMExportManager> exportManager() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the results collection that provides access to existing measures then pathMeasures and manualMeasures
    core::Ptr<CAMInspectionResults> inspectionResults() const;

    /// Returns the collection of manufacturing models in the document.
    core::Ptr<ManufacturingModels> manufacturingModels() const;

    /// Generates a template for the specified Operations, Setups, or Folders and returns
    /// the template as an XML string.
    /// operations : An Operation, Setup or Folder object from which to generate the template. You can also
    /// specify a collection of any combination of these object types.
    /// Returns the template XML as a string.
    std::string generateTemplateXML(const core::Ptr<core::Base>& operations);

    /// Gets the document ToolLibrary. The ToolLibrary contains all tools used by any operation inside the document.
    /// Changes to the original ToolLibrary will not affect any operation because the document ToolLibrary is an
    /// independent copy.
    core::Ptr<DocumentToolLibrary> documentToolLibrary() const;

    /// Returns the collection of NC programs in the document.
    core::Ptr<NCPrograms> ncPrograms() const;

    /// Checks whether the models used by the operations have changed in the mean time
    /// and invalidates the affected operations if needed.
    /// Should be used for cases where the automatic detection does not work yet,
    /// for instance when design changes are expected before a Manufacture API call.
    /// Also recommended at the beginning of a script or the beginning of an event handler.
    void checkValidity();

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Clears all missing references from the document, from all available operations.
    void clearMissingReferences();

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Gets the document StockMaterialLibrary. The StockMaterialLibrary contains all stock materials used by any setup inside the document.
    /// Changes to the original StockMaterialLibrary will not affect any setup because the document StockMaterialLibrary is an
    /// independent copy.
    /// You can only get a valid DocumentStockMaterialLibrary when you have access to Stock Materials private preview feature and enable the feature flag.
    core::Ptr<DocumentStockMaterialLibrary> documentStockMaterialLibrary() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the Import Manager which provides access to the functionality
    /// to import in various formats.
    core::Ptr<CAMImportManager> importManager() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the SetupGroups collection that provides access to existing Setup Groups.
    /// A Setup Group is a collection of Setup objects that are intended to be machined at the same time.
    core::Ptr<SetupGroups> setupGroups() const;

    ADSK_CAM_CAM_API static const char* classType();
    ADSK_CAM_CAM_API const char* objectType() const override;
    ADSK_CAM_CAM_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Setups* setups_raw() const = 0;
    virtual bool export3MFForDefaultAdditiveSetup_raw(const char* filepath, bool addSimulationInfo, bool simPostProcess, bool simSplitSurrogates, bool simKeepThickeningStructure) = 0;
    virtual GenerateToolpathFuture* generateToolpath_raw(core::Base* operations) = 0;
    virtual GenerateToolpathFuture* generateAllToolpaths_raw(bool skipValid) = 0;
    virtual bool clearToolpath_raw(core::Base* operations) = 0;
    virtual bool clearAllToolpaths_raw() = 0;
    virtual bool checkToolpath_raw(core::Base* operations) = 0;
    virtual bool checkAllToolpaths_raw() = 0;
    virtual bool postProcess_raw(core::Base* operations, PostProcessInput* input) = 0;
    virtual bool postProcessAll_raw(PostProcessInput* input) = 0;
    virtual bool generateSetupSheet_raw(core::Base* operations, SetupSheetFormats format, const char* folder, bool openDocument) = 0;
    virtual bool generateAllSetupSheets_raw(SetupSheetFormats format, const char* folder, bool openDocument) = 0;
    virtual core::ObjectCollection* allOperations_raw() const = 0;
    virtual char* genericPostFolder_raw() const = 0;
    virtual char* personalPostFolder_raw() const = 0;
    virtual char* temporaryFolder_raw() const = 0;
    virtual MachiningTime* getMachiningTime_raw(core::Base* operations, double feedScale, double rapidFeed, double toolChangeTime) = 0;
    virtual fusion::CustomGraphicsGroups* customGraphicsGroups_raw() const = 0;
    virtual fusion::Occurrence* designRootOccurrence_raw() const = 0;
    virtual fusion::OccurrenceList* flatPatternOccurrences_raw() const = 0;
    virtual Machine** allMachines_raw(size_t& return_size) const = 0;
    virtual SetupEvent* setupCreated_raw() const = 0;
    virtual SetupEvent* setupDestroying_raw() const = 0;
    virtual SetupChangeEvent* setupChanged_raw() const = 0;
    virtual SetupEvent* setupActivating_raw() const = 0;
    virtual SetupEvent* setupActivated_raw() const = 0;
    virtual SetupEvent* setupDeactivating_raw() const = 0;
    virtual SetupEvent* setupDeactivated_raw() const = 0;
    virtual CAMExportManager* exportManager_raw() const = 0;
    virtual CAMInspectionResults* inspectionResults_raw() const = 0;
    virtual ManufacturingModels* manufacturingModels_raw() const = 0;
    virtual char* generateTemplateXML_raw(core::Base* operations) = 0;
    virtual DocumentToolLibrary* documentToolLibrary_raw() const = 0;
    virtual NCPrograms* ncPrograms_raw() const = 0;
    virtual void checkValidity_raw() = 0;
    virtual void clearMissingReferences_raw() = 0;
    virtual DocumentStockMaterialLibrary* documentStockMaterialLibrary_raw() const = 0;
    virtual CAMImportManager* importManager_raw() const = 0;
    virtual SetupGroups* setupGroups_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<Setups> CAM::setups() const
{
    core::Ptr<Setups> res = setups_raw();
    return res;
}

inline bool CAM::export3MFForDefaultAdditiveSetup(const std::string& filepath, bool addSimulationInfo, bool simPostProcess, bool simSplitSurrogates, bool simKeepThickeningStructure)
{
    bool res = export3MFForDefaultAdditiveSetup_raw(filepath.c_str(), addSimulationInfo, simPostProcess, simSplitSurrogates, simKeepThickeningStructure);
    return res;
}

inline core::Ptr<GenerateToolpathFuture> CAM::generateToolpath(const core::Ptr<core::Base>& operations)
{
    core::Ptr<GenerateToolpathFuture> res = generateToolpath_raw(operations.get());
    return res;
}

inline core::Ptr<GenerateToolpathFuture> CAM::generateAllToolpaths(bool skipValid)
{
    core::Ptr<GenerateToolpathFuture> res = generateAllToolpaths_raw(skipValid);
    return res;
}

inline bool CAM::clearToolpath(const core::Ptr<core::Base>& operations)
{
    bool res = clearToolpath_raw(operations.get());
    return res;
}

inline bool CAM::clearAllToolpaths()
{
    bool res = clearAllToolpaths_raw();
    return res;
}

inline bool CAM::checkToolpath(const core::Ptr<core::Base>& operations)
{
    bool res = checkToolpath_raw(operations.get());
    return res;
}

inline bool CAM::checkAllToolpaths()
{
    bool res = checkAllToolpaths_raw();
    return res;
}

inline bool CAM::postProcess(const core::Ptr<core::Base>& operations, const core::Ptr<PostProcessInput>& input)
{
    bool res = postProcess_raw(operations.get(), input.get());
    return res;
}

inline bool CAM::postProcessAll(const core::Ptr<PostProcessInput>& input)
{
    bool res = postProcessAll_raw(input.get());
    return res;
}

inline bool CAM::generateSetupSheet(const core::Ptr<core::Base>& operations, SetupSheetFormats format, const std::string& folder, bool openDocument)
{
    bool res = generateSetupSheet_raw(operations.get(), format, folder.c_str(), openDocument);
    return res;
}

inline bool CAM::generateAllSetupSheets(SetupSheetFormats format, const std::string& folder, bool openDocument)
{
    bool res = generateAllSetupSheets_raw(format, folder.c_str(), openDocument);
    return res;
}

inline core::Ptr<core::ObjectCollection> CAM::allOperations() const
{
    core::Ptr<core::ObjectCollection> res = allOperations_raw();
    return res;
}

inline std::string CAM::genericPostFolder() const
{
    std::string res;

    char* p= genericPostFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAM::personalPostFolder() const
{
    std::string res;

    char* p= personalPostFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string CAM::temporaryFolder() const
{
    std::string res;

    char* p= temporaryFolder_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<MachiningTime> CAM::getMachiningTime(const core::Ptr<core::Base>& operations, double feedScale, double rapidFeed, double toolChangeTime)
{
    core::Ptr<MachiningTime> res = getMachiningTime_raw(operations.get(), feedScale, rapidFeed, toolChangeTime);
    return res;
}

inline core::Ptr<fusion::CustomGraphicsGroups> CAM::customGraphicsGroups() const
{
    core::Ptr<fusion::CustomGraphicsGroups> res = customGraphicsGroups_raw();
    return res;
}

inline core::Ptr<fusion::Occurrence> CAM::designRootOccurrence() const
{
    core::Ptr<fusion::Occurrence> res = designRootOccurrence_raw();
    return res;
}

inline core::Ptr<fusion::OccurrenceList> CAM::flatPatternOccurrences() const
{
    core::Ptr<fusion::OccurrenceList> res = flatPatternOccurrences_raw();
    return res;
}

inline std::vector<core::Ptr<Machine>> CAM::allMachines() const
{
    std::vector<core::Ptr<Machine>> res;
    size_t s;

    Machine** p= allMachines_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupCreated() const
{
    core::Ptr<SetupEvent> res = setupCreated_raw();
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupDestroying() const
{
    core::Ptr<SetupEvent> res = setupDestroying_raw();
    return res;
}

inline core::Ptr<SetupChangeEvent> CAM::setupChanged() const
{
    core::Ptr<SetupChangeEvent> res = setupChanged_raw();
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupActivating() const
{
    core::Ptr<SetupEvent> res = setupActivating_raw();
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupActivated() const
{
    core::Ptr<SetupEvent> res = setupActivated_raw();
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupDeactivating() const
{
    core::Ptr<SetupEvent> res = setupDeactivating_raw();
    return res;
}

inline core::Ptr<SetupEvent> CAM::setupDeactivated() const
{
    core::Ptr<SetupEvent> res = setupDeactivated_raw();
    return res;
}

inline core::Ptr<CAMExportManager> CAM::exportManager() const
{
    core::Ptr<CAMExportManager> res = exportManager_raw();
    return res;
}

inline core::Ptr<CAMInspectionResults> CAM::inspectionResults() const
{
    core::Ptr<CAMInspectionResults> res = inspectionResults_raw();
    return res;
}

inline core::Ptr<ManufacturingModels> CAM::manufacturingModels() const
{
    core::Ptr<ManufacturingModels> res = manufacturingModels_raw();
    return res;
}

inline std::string CAM::generateTemplateXML(const core::Ptr<core::Base>& operations)
{
    std::string res;

    char* p= generateTemplateXML_raw(operations.get());
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<DocumentToolLibrary> CAM::documentToolLibrary() const
{
    core::Ptr<DocumentToolLibrary> res = documentToolLibrary_raw();
    return res;
}

inline core::Ptr<NCPrograms> CAM::ncPrograms() const
{
    core::Ptr<NCPrograms> res = ncPrograms_raw();
    return res;
}

inline void CAM::checkValidity()
{
    checkValidity_raw();
}

inline void CAM::clearMissingReferences()
{
    clearMissingReferences_raw();
}

inline core::Ptr<DocumentStockMaterialLibrary> CAM::documentStockMaterialLibrary() const
{
    core::Ptr<DocumentStockMaterialLibrary> res = documentStockMaterialLibrary_raw();
    return res;
}

inline core::Ptr<CAMImportManager> CAM::importManager() const
{
    core::Ptr<CAMImportManager> res = importManager_raw();
    return res;
}

inline core::Ptr<SetupGroups> CAM::setupGroups() const
{
    core::Ptr<SetupGroups> res = setupGroups_raw();
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAM_API