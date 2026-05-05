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
#include <API/XInterface/Public/Core/Application/Product.h>
#include "../FusionTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DESIGN_CPP__
# define ADSK_FUSION_DESIGN_API XI_EXPORT
# else
# define ADSK_FUSION_DESIGN_API
# endif
#else
# define ADSK_FUSION_DESIGN_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearances;
    class DataComponent;
    class Materials;
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Analyses;
    class AreaProperties;
    class Component;
    class Components;
    class ConfigurationTopTable;
    class ContactSets;
    class DerivedParameter;
    class ExportManager;
    class FusionUnitsManager;
    class InterferenceInput;
    class InterferenceResults;
    class ObjectVisibility;
    class Occurrence;
    class Parameter;
    class ParameterList;
    class PhysicalProperties;
    class PlasticRules;
    class PMISettings;
    class RenderManager;
    class SheetMetalRules;
    class Snapshots;
    class Timeline;
    class UserParameters;
}}

namespace adsk { namespace fusion {

/// Object that represents an open Fusion design. This derives from the
/// Product base class and adds the Fusion functionality specific to a Design.
class Design : public core::Product {
public:

    /// Gets and sets the current design type (DirectDesignType or ParametricDesignType)
    /// Changing an existing design from ParametricDesignType to DirectDesignType will result in the timeline and all design
    /// history being removed and further operations will not be captured in the timeline.
    DesignTypes designType() const;
    bool designType(DesignTypes value);

    /// Returns the root Component.
    core::Ptr<Component> rootComponent() const;

    /// Returns the Components collection that provides access to existing components
    /// in a design.
    core::Ptr<Components> allComponents() const;

    /// Returns the current edit target as seen in the user interface. This edit target
    /// is defined as the container object that will be added to if something is created.
    /// For example, a component can be an edit target so that when new bodies are created they
    /// are added to that component. A sketch can also be an edit target.
    core::Ptr<core::Base> activeEditObject() const;

    /// Returns the component that is currently being edited. This can return the root component
    /// or another component within the design.
    core::Ptr<Component> activeComponent() const;

    /// Returns the Snapshots object associated with this design which provides access to the
    /// existing snapshots and the creation of new snapshots.
    core::Ptr<Snapshots> snapshots() const;

    /// Returns the timeline associated with this design.
    core::Ptr<Timeline> timeline() const;

    /// Returns the collection of User Parameters in a design.
    core::Ptr<UserParameters> userParameters() const;

    /// Returns a read only list of all parameters in the design. This includes
    /// the user parameters and model parameters from all components in this design. The parameters from Externally Referenced components
    /// are NOT included because they are in actuality, separate designs.
    core::Ptr<ParameterList> allParameters() const;

    /// Returns a specialized UnitsManager that can set the default length units and work
    /// with parameters.
    core::Ptr<FusionUnitsManager> fusionUnitsManager() const;

    /// Returns the ExportManager for this design. You use the ExportManager
    /// to export the current design in various formats.
    core::Ptr<ExportManager> exportManager() const;

    /// Gets whether the root component is the active edit target in the user interface.
    /// This is the same as checking the state of the radio button next to the root component in the browser.
    /// To activate the root component use the ActivateRootComponent method.
    bool isRootComponentActive() const;

    /// Makes the root component the active component in the user interface. This is the same
    /// as enabling the radio button next to the root component in the browser.
    /// Returns true if the activation was successful.
    bool activateRootComponent();

    /// Returns the materials contained in this document.
    core::Ptr<core::Materials> materials() const;

    /// Returns the appearances contained in this document.
    core::Ptr<core::Appearances> appearances() const;

    /// Creates an InterferenceInput object. This object collects the entities and options that are
    /// used when calculating interference. To analyze interference you first create an InterferenceInput
    /// supplying the entities and set any other settings and then provide this object as input to the
    /// analyzeInterference method.
    /// entities : An ObjectCollection containing the BRepBody and/or Occurrence entities that will be used in the
    /// interference calculation. All entities must be in the context of the root component of the top-level design.
    /// Returns an InterferenceInput object which you can use to set any other interference settings and then
    /// use as input to the analyzeInterference method to calculate the interference. Returns null if the
    /// creation failed.
    core::Ptr<InterferenceInput> createInterferenceInput(const core::Ptr<core::ObjectCollection>& entities);

    /// Calculates the interference between the input bodies and/or occurrences.
    /// input : An InterferenceInput that defines all of the necessary input needed to calculate the interference.
    /// An InterferenceInput object is created using the createInterferenceInput method.
    /// Returns an InterferenceResults object that can be used to examine the interference results.
    core::Ptr<InterferenceResults> analyzeInterference(const core::Ptr<InterferenceInput>& input);

    /// Returns the occurrence that is currently activated, if any. This can return null in the case
    /// where no occurrence is activated and the root component is active.
    core::Ptr<Occurrence> activeOccurrence() const;

    /// Returns the AreaProperties object that has properties for getting the area, perimeter, centroid, etc
    /// for a collection of 2D sketch profiles and/or planar surfaces that all lie on the same plane.
    /// inputs : A collection of one or more 2D sketch profile and/or planar surface input objects to perform the calculations on.
    /// Supported input object types are 2D closed sketch profiles and planar surfaces. Object must all lie on the same plane.
    /// Calculation results reflect the sums of the input objects (i.e. total area of multiple sketch profiles)
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    /// Returns an AreaProperties object that can be used to examine the area results.
    core::Ptr<AreaProperties> areaProperties(const core::Ptr<core::ObjectCollection>& inputs, CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// Returns the PhysicalProperties object that has properties for getting the area, density, mass, volume, moments, etc
    /// for a collection of 3D solid objects.
    /// inputs : A collection of one or more 3D solid input objects to perform the calculations on.
    /// Supported input object types are Components, Occurrences and BRepBodies.
    /// Calculation results reflect the sums of the input objects (i.e. total volume of multiple bodies)
    /// accuracy : Specifies the desired level of computational accuracy of the property calculations.
    /// The default value of 'LowCalculationAccuracy' returns results within a +/- 1% error margin.
    core::Ptr<PhysicalProperties> physicalProperties(const core::Ptr<core::ObjectCollection>& inputs, CalculationAccuracy accuracy = adsk::fusion::LowCalculationAccuracy) const;

    /// Returns the contact sets associated with this design.
    core::Ptr<ContactSets> contactSets() const;

    /// Gets and sets whether contact analysis is enabled for all components. This
    /// is the equivalent of the "Disable Contact / Enable Contact" command. If this
    /// if True then any contact analysis defined (either all or contact sets) is enabled.
    /// if False, then no contact analysis is performed.
    bool isContactAnalysisEnabled() const;
    bool isContactAnalysisEnabled(bool value);

    /// Gets and sets whether contact analysis is done using contact sets
    /// or between all bodies, independent of any contact sets. If True and
    /// the isContactAnalysisEnabled property is True then contact analysis
    /// is performed using contact sets. If False and isContactAnalysisEnabled
    /// is True, then contact analysis is performed between all bodies. If
    /// isContactAnalysisEnabled is False then no contact analysis is performed.
    bool isContactSetAnalysis() const;
    bool isContactSetAnalysis(bool value);

    /// Returns the entities associated with the provided token. The return is an
    /// array of entities. In most cases an array containing a single entity will be returned but
    /// there are cases where more than one entity can be returned. An example of this
    /// is where a token is obtained from a face and subsequent modeling operations cause
    /// the face to be split into two or more pieces. All of the faces that represent
    /// the original face will be returned with the first face being the most logical
    /// match to the original face.
    /// entityToken : The input entity token you want to find the matching entity for.
    /// Returns an array of entities associated with the provided token, or an empty array
    /// in the case where there are no matches.
    std::vector<core::Ptr<core::Base>> findEntityByToken(const std::string& entityToken);

    /// Forces a recompute of the entire design. This is the equivalent of the "Compute All"
    /// command.
    /// Returns true if the compute completed. This doesn't indicate if all the items in the
    /// timeline successfully computed or not. You need to check the health state of each item
    /// in the timeline to determine if everything successfully computed or not.
    bool computeAll();

    /// Modifies the values of many parameters all at once. Changing them all at once is more efficient
    /// than modifying them one at a time.
    /// parameters : An array of UserParameter and ModelParameter objects that you want to change the value. The parameters
    /// must all exist within the Design object you're calling this method from. They can be in any component
    /// but must be local components owned by the Design.
    /// values : An array of ValueInput objects that defines the new value for each parameter defined by the "parameters" argument.
    /// This array must be the same size as the array used for the "parameters" argument, and the items in the arrays are
    /// used in the order they exist within the arrays. For example, the parameter at index 0 will use the value at index 0.
    /// 
    /// If you use the createByString method to create the ValueInput, the expression of the parameter will be edited, and
    /// the effect is the same as interactively editing the expression. When you set the expression, you can include units,
    /// references to other parameters, and math operators and functions. For example, "(Length / 3) * cos(Angle)" is a valid
    /// expression for a distance parameter if the parameters "Length" and "Angle" already exist.
    /// 
    /// If you use the createByReal method, the value is assigned directly and is always in the internal units for the unit
    /// type associated with the parameter. For example, if the parameter is a length, the value will ALWAYS be used as
    /// centimeters. If the parameter is an angle, the value will ALWAYS be used as radians. This is because the default design
    /// unit types for length are ignored, and internal units are ALWAYS used.
    /// Returns true if setting all of the parameters was successful. Setting multiple parameters is either all or none. If it
    /// fails to set any parameters, none of them are updated, and the method will return false.
    bool modifyParameters(const std::vector<core::Ptr<Parameter>>& parameters, const std::vector<core::Ptr<core::ValueInput>>& values);

    /// Gets the collection of sheet metal rules in the design.
    core::Ptr<SheetMetalRules> designSheetMetalRules() const;

    /// Gets the collection of sheet metal rules in the sheet metal rule library.
    core::Ptr<SheetMetalRules> librarySheetMetalRules() const;

    /// Gets the collection of design analyses associated with this design.
    core::Ptr<Analyses> analyses() const;

    /// Returns the RenderManager object associated with this design. Using the RenderManager you can access the
    /// same functionality that is available in the Render workspace.
    core::Ptr<RenderManager> renderManager() const;

    /// Converts this design into a configured design. The returned ConfigurationTable
    /// has a single row and no columns. You can use it to add columns and rows to define
    /// the configuration.
    /// Returns the ConfigurationTable that defines the configurations for this design.
    core::Ptr<ConfigurationTopTable> createConfiguredDesign();

    /// Gets if this design is a configured design. A configured design contains a
    /// configuration table. Use the configurationTable property to get the associated table.
    bool isConfiguredDesign() const;

    /// If this design is a configured design or a configuration, this property returns the associated
    /// ConfigurationTopTable object. If this is not a configured design or configuration, this property
    /// returns null.
    core::Ptr<ConfigurationTopTable> configurationTopTable() const;

    /// Gets if this design is a configuration. If this returns true,
    /// the configurationRowId can be used to get the row used to define this configuration.
    /// Also, when this is true, the design is essentially read-only and edits are either
    /// blocked from taking place or cannot be saved.
    bool isConfiguration() const;

    /// Returns the ID of the row that defines this configuration. Use the
    /// isConfiguration property to determine if this Design is a configuration
    /// or not. If this is not a configuration, this property returns an
    /// empty string.
    std::string configurationRowId() const;

    /// Gets the collection of plastic rules in the design.
    core::Ptr<PlasticRules> designPlasticRules() const;

    /// Gets the collection of plastic rules in the plastic rule library.
    core::Ptr<PlasticRules> libraryPlasticRules() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Get the root DataComponent in this design. This is only available for top level designs.
    core::Ptr<core::DataComponent> rootDataComponent() const;

    /// Returns the ObjectVisibility object associated with this design which controls
    /// which objects are displayed in the graphics window. This is the equivalent of
    /// the "Object Visibility" settings in the Display Settings drop-down in the navigation
    /// toolbar at the bottom of the Fusion graphics window.
    core::Ptr<ObjectVisibility> objectVisibility() const;

    /// Gets and sets if the position of the ground plane for this design is adaptive.
    /// If true, the ground plane will automatically move to be just below the model.
    /// The orientation of the ground plane is always normal to the "up" direction
    /// as defined by the view cube.
    bool isAdaptiveGroundPlane() const;
    bool isAdaptiveGroundPlane(bool value);

    /// Sets the offset of the ground plane. If the isAdpativeGroundPlane property is true,
    /// setting the offset will change isAdaptiveGroundPlane to false. The offset value is
    /// an offset relative to the current position of the ground plane.
    /// 
    /// One example of how this method can be used is to set the isAdaptiveGroundPlane
    /// property to true, which will position the ground plane at the bottom of the part.
    /// By doing this, you know the current position of the ground plane. Then calling
    /// this method with a value of -2.0 will reposition the ground plane 2 cm below the part.
    /// If you called this method again with a value of -1.0 the ground plane will be moved
    /// an additional 1 cm away from the geometry, since this is defining an offset relative
    /// to the current position.
    /// offset : Defines the relative offset based on the current position of the ground plane. The
    /// offset is in centimeters, and a positive value will move it towards the design geometry
    /// and a negative value away from the geometry.
    /// Returns true if setting the offset was successful.
    bool setGroundPlaneOffset(double offset);

    /// Returns a read only list of all parameters that are derived into the design. This includes
    /// the user parameters and model parameters from all derives in this design.
    std::vector<core::Ptr<DerivedParameter>> derivedParameters() const;

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// If this design is an assembly, this property gets and sets if the modeling functionality
    /// is enabled. If this design is a part or hybrid design, the value of this property should be ignored.
    bool isModelingInAssemblyEnabled() const;
    bool isModelingInAssemblyEnabled(bool value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// <p>Gets and sets the use intent of this design. Changing the design intent from one
    /// type to another is not supported in all cases. Below is a list of cases where it
    /// is expected to fail:
    /// <ul><li>Assembly to Part where the assembly design has child components.</li>
    /// <li>Hybrid to Part where the hybrid design has child components</li>
    /// </ol></p>
    /// <p>The following are cases that are supported:
    /// <ul><li>Assembly to Part where the assembly does not contain any child components.</li>
    /// <ul>Part to Assembly when the part does not contain any bodies.</li>
    /// <ul>Part to Assembly(with bodies) - should succeed but will have modeling enabled (Hybrid)</li>
    /// <ul>Part to Hybrid</li>
    /// <ul>Hybrid to Assembly</li>
    /// <ul>Hybrid-to Part when the hybrid design contains no child components.</li>
    /// </p>
    /// <p>Setting the type will do nothing and is a no-op.</p>
    DesignIntentTypes designIntent() const;
    bool designIntent(DesignIntentTypes value);

    /// !!!!! Warning !!!!!
    /// ! This is in preview state; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Returns a manager for settings associated with Product Manufacturing Information (PMI) in this design.
    /// Returns the PMISettings if they exist for the current document, or null. PMI settings only exist if the
    /// document contains Fusion-authored PMI.
    core::Ptr<PMISettings> pmiSettings() const;

    ADSK_FUSION_DESIGN_API static const char* classType();
    ADSK_FUSION_DESIGN_API const char* objectType() const override;
    ADSK_FUSION_DESIGN_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DESIGN_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DesignTypes designType_raw() const = 0;
    virtual bool designType_raw(DesignTypes value) = 0;
    virtual Component* rootComponent_raw() const = 0;
    virtual Components* allComponents_raw() const = 0;
    virtual core::Base* activeEditObject_raw() const = 0;
    virtual Component* activeComponent_raw() const = 0;
    virtual Snapshots* snapshots_raw() const = 0;
    virtual Timeline* timeline_raw() const = 0;
    virtual UserParameters* userParameters_raw() const = 0;
    virtual ParameterList* allParameters_raw() const = 0;
    virtual FusionUnitsManager* fusionUnitsManager_raw() const = 0;
    virtual ExportManager* exportManager_raw() const = 0;
    virtual bool isRootComponentActive_raw() const = 0;
    virtual bool activateRootComponent_raw() = 0;
    virtual core::Materials* materials_raw() const = 0;
    virtual core::Appearances* appearances_raw() const = 0;
    virtual InterferenceInput* createInterferenceInput_raw(core::ObjectCollection* entities) = 0;
    virtual InterferenceResults* analyzeInterference_raw(InterferenceInput* input) = 0;
    virtual Occurrence* activeOccurrence_raw() const = 0;
    virtual AreaProperties* areaProperties_raw(core::ObjectCollection* inputs, CalculationAccuracy accuracy) const = 0;
    virtual PhysicalProperties* physicalProperties_raw(core::ObjectCollection* inputs, CalculationAccuracy accuracy) const = 0;
    virtual ContactSets* contactSets_raw() const = 0;
    virtual bool isContactAnalysisEnabled_raw() const = 0;
    virtual bool isContactAnalysisEnabled_raw(bool value) = 0;
    virtual bool isContactSetAnalysis_raw() const = 0;
    virtual bool isContactSetAnalysis_raw(bool value) = 0;
    virtual core::Base** findEntityByToken_raw(const char* entityToken, size_t& return_size) = 0;
    virtual bool computeAll_raw() = 0;
    virtual bool modifyParameters_raw(Parameter** parameters, size_t parameters_size, core::ValueInput** values, size_t values_size) = 0;
    virtual SheetMetalRules* designSheetMetalRules_raw() const = 0;
    virtual SheetMetalRules* librarySheetMetalRules_raw() const = 0;
    virtual Analyses* analyses_raw() const = 0;
    virtual RenderManager* renderManager_raw() const = 0;
    virtual ConfigurationTopTable* createConfiguredDesign_raw() = 0;
    virtual bool isConfiguredDesign_raw() const = 0;
    virtual ConfigurationTopTable* configurationTopTable_raw() const = 0;
    virtual bool isConfiguration_raw() const = 0;
    virtual char* configurationRowId_raw() const = 0;
    virtual PlasticRules* designPlasticRules_raw() const = 0;
    virtual PlasticRules* libraryPlasticRules_raw() const = 0;
    virtual core::DataComponent* rootDataComponent_raw() const = 0;
    virtual ObjectVisibility* objectVisibility_raw() const = 0;
    virtual bool isAdaptiveGroundPlane_raw() const = 0;
    virtual bool isAdaptiveGroundPlane_raw(bool value) = 0;
    virtual bool setGroundPlaneOffset_raw(double offset) = 0;
    virtual DerivedParameter** derivedParameters_raw(size_t& return_size) const = 0;
    virtual bool isModelingInAssemblyEnabled_raw() const = 0;
    virtual bool isModelingInAssemblyEnabled_raw(bool value) = 0;
    virtual DesignIntentTypes designIntent_raw() const = 0;
    virtual bool designIntent_raw(DesignIntentTypes value) = 0;
    virtual PMISettings* pmiSettings_raw() const = 0;
    virtual void placeholderDesign0() {}
    virtual void placeholderDesign1() {}
    virtual void placeholderDesign2() {}
    virtual void placeholderDesign3() {}
    virtual void placeholderDesign4() {}
    virtual void placeholderDesign5() {}
    virtual void placeholderDesign6() {}
    virtual void placeholderDesign7() {}
    virtual void placeholderDesign8() {}
    virtual void placeholderDesign9() {}
    virtual void placeholderDesign10() {}
    virtual void placeholderDesign11() {}
    virtual void placeholderDesign12() {}
    virtual void placeholderDesign13() {}
    virtual void placeholderDesign14() {}
    virtual void placeholderDesign15() {}
    virtual void placeholderDesign16() {}
    virtual void placeholderDesign17() {}
    virtual void placeholderDesign18() {}
    virtual void placeholderDesign19() {}
    virtual void placeholderDesign20() {}
    virtual void placeholderDesign21() {}
    virtual void placeholderDesign22() {}
    virtual void placeholderDesign23() {}
    virtual void placeholderDesign24() {}
    virtual void placeholderDesign25() {}
    virtual void placeholderDesign26() {}
    virtual void placeholderDesign27() {}
    virtual void placeholderDesign28() {}
    virtual void placeholderDesign29() {}
    virtual void placeholderDesign30() {}
    virtual void placeholderDesign31() {}
    virtual void placeholderDesign32() {}
    virtual void placeholderDesign33() {}
    virtual void placeholderDesign34() {}
    virtual void placeholderDesign35() {}
    virtual void placeholderDesign36() {}
    virtual void placeholderDesign37() {}
    virtual void placeholderDesign38() {}
    virtual void placeholderDesign39() {}
    virtual void placeholderDesign40() {}
    virtual void placeholderDesign41() {}
    virtual void placeholderDesign42() {}
    virtual void placeholderDesign43() {}
    virtual void placeholderDesign44() {}
    virtual void placeholderDesign45() {}
    virtual void placeholderDesign46() {}
    virtual void placeholderDesign47() {}
    virtual void placeholderDesign48() {}
    virtual void placeholderDesign49() {}
    virtual void placeholderDesign50() {}
    virtual void placeholderDesign51() {}
    virtual void placeholderDesign52() {}
    virtual void placeholderDesign53() {}
    virtual void placeholderDesign54() {}
    virtual void placeholderDesign55() {}
    virtual void placeholderDesign56() {}
    virtual void placeholderDesign57() {}
    virtual void placeholderDesign58() {}
    virtual void placeholderDesign59() {}
    virtual void placeholderDesign60() {}
    virtual void placeholderDesign61() {}
    virtual void placeholderDesign62() {}
    virtual void placeholderDesign63() {}
    virtual void placeholderDesign64() {}
    virtual void placeholderDesign65() {}
    virtual void placeholderDesign66() {}
    virtual void placeholderDesign67() {}
    virtual void placeholderDesign68() {}
    virtual void placeholderDesign69() {}
    virtual void placeholderDesign70() {}
    virtual void placeholderDesign71() {}
    virtual void placeholderDesign72() {}
    virtual void placeholderDesign73() {}
    virtual void placeholderDesign74() {}
    virtual void placeholderDesign75() {}
    virtual void placeholderDesign76() {}
};

// Inline wrappers

inline DesignTypes Design::designType() const
{
    DesignTypes res = designType_raw();
    return res;
}

inline bool Design::designType(DesignTypes value)
{
    return designType_raw(value);
}

inline core::Ptr<Component> Design::rootComponent() const
{
    core::Ptr<Component> res = rootComponent_raw();
    return res;
}

inline core::Ptr<Components> Design::allComponents() const
{
    core::Ptr<Components> res = allComponents_raw();
    return res;
}

inline core::Ptr<core::Base> Design::activeEditObject() const
{
    core::Ptr<core::Base> res = activeEditObject_raw();
    return res;
}

inline core::Ptr<Component> Design::activeComponent() const
{
    core::Ptr<Component> res = activeComponent_raw();
    return res;
}

inline core::Ptr<Snapshots> Design::snapshots() const
{
    core::Ptr<Snapshots> res = snapshots_raw();
    return res;
}

inline core::Ptr<Timeline> Design::timeline() const
{
    core::Ptr<Timeline> res = timeline_raw();
    return res;
}

inline core::Ptr<UserParameters> Design::userParameters() const
{
    core::Ptr<UserParameters> res = userParameters_raw();
    return res;
}

inline core::Ptr<ParameterList> Design::allParameters() const
{
    core::Ptr<ParameterList> res = allParameters_raw();
    return res;
}

inline core::Ptr<FusionUnitsManager> Design::fusionUnitsManager() const
{
    core::Ptr<FusionUnitsManager> res = fusionUnitsManager_raw();
    return res;
}

inline core::Ptr<ExportManager> Design::exportManager() const
{
    core::Ptr<ExportManager> res = exportManager_raw();
    return res;
}

inline bool Design::isRootComponentActive() const
{
    bool res = isRootComponentActive_raw();
    return res;
}

inline bool Design::activateRootComponent()
{
    bool res = activateRootComponent_raw();
    return res;
}

inline core::Ptr<core::Materials> Design::materials() const
{
    core::Ptr<core::Materials> res = materials_raw();
    return res;
}

inline core::Ptr<core::Appearances> Design::appearances() const
{
    core::Ptr<core::Appearances> res = appearances_raw();
    return res;
}

inline core::Ptr<InterferenceInput> Design::createInterferenceInput(const core::Ptr<core::ObjectCollection>& entities)
{
    core::Ptr<InterferenceInput> res = createInterferenceInput_raw(entities.get());
    return res;
}

inline core::Ptr<InterferenceResults> Design::analyzeInterference(const core::Ptr<InterferenceInput>& input)
{
    core::Ptr<InterferenceResults> res = analyzeInterference_raw(input.get());
    return res;
}

inline core::Ptr<Occurrence> Design::activeOccurrence() const
{
    core::Ptr<Occurrence> res = activeOccurrence_raw();
    return res;
}

inline core::Ptr<AreaProperties> Design::areaProperties(const core::Ptr<core::ObjectCollection>& inputs, CalculationAccuracy accuracy) const
{
    core::Ptr<AreaProperties> res = areaProperties_raw(inputs.get(), accuracy);
    return res;
}

inline core::Ptr<PhysicalProperties> Design::physicalProperties(const core::Ptr<core::ObjectCollection>& inputs, CalculationAccuracy accuracy) const
{
    core::Ptr<PhysicalProperties> res = physicalProperties_raw(inputs.get(), accuracy);
    return res;
}

inline core::Ptr<ContactSets> Design::contactSets() const
{
    core::Ptr<ContactSets> res = contactSets_raw();
    return res;
}

inline bool Design::isContactAnalysisEnabled() const
{
    bool res = isContactAnalysisEnabled_raw();
    return res;
}

inline bool Design::isContactAnalysisEnabled(bool value)
{
    return isContactAnalysisEnabled_raw(value);
}

inline bool Design::isContactSetAnalysis() const
{
    bool res = isContactSetAnalysis_raw();
    return res;
}

inline bool Design::isContactSetAnalysis(bool value)
{
    return isContactSetAnalysis_raw(value);
}

inline std::vector<core::Ptr<core::Base>> Design::findEntityByToken(const std::string& entityToken)
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= findEntityByToken_raw(entityToken.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Design::computeAll()
{
    bool res = computeAll_raw();
    return res;
}

inline bool Design::modifyParameters(const std::vector<core::Ptr<Parameter>>& parameters, const std::vector<core::Ptr<core::ValueInput>>& values)
{
    Parameter** parameters_ = new Parameter*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    core::ValueInput** values_ = new core::ValueInput*[values.size()];
    for(size_t i=0; i<values.size(); ++i)
        values_[i] = values[i].get();

    bool res = modifyParameters_raw(parameters_, parameters.size(), values_, values.size());
    delete[] parameters_;
    delete[] values_;
    return res;
}

inline core::Ptr<SheetMetalRules> Design::designSheetMetalRules() const
{
    core::Ptr<SheetMetalRules> res = designSheetMetalRules_raw();
    return res;
}

inline core::Ptr<SheetMetalRules> Design::librarySheetMetalRules() const
{
    core::Ptr<SheetMetalRules> res = librarySheetMetalRules_raw();
    return res;
}

inline core::Ptr<Analyses> Design::analyses() const
{
    core::Ptr<Analyses> res = analyses_raw();
    return res;
}

inline core::Ptr<RenderManager> Design::renderManager() const
{
    core::Ptr<RenderManager> res = renderManager_raw();
    return res;
}

inline core::Ptr<ConfigurationTopTable> Design::createConfiguredDesign()
{
    core::Ptr<ConfigurationTopTable> res = createConfiguredDesign_raw();
    return res;
}

inline bool Design::isConfiguredDesign() const
{
    bool res = isConfiguredDesign_raw();
    return res;
}

inline core::Ptr<ConfigurationTopTable> Design::configurationTopTable() const
{
    core::Ptr<ConfigurationTopTable> res = configurationTopTable_raw();
    return res;
}

inline bool Design::isConfiguration() const
{
    bool res = isConfiguration_raw();
    return res;
}

inline std::string Design::configurationRowId() const
{
    std::string res;

    char* p= configurationRowId_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<PlasticRules> Design::designPlasticRules() const
{
    core::Ptr<PlasticRules> res = designPlasticRules_raw();
    return res;
}

inline core::Ptr<PlasticRules> Design::libraryPlasticRules() const
{
    core::Ptr<PlasticRules> res = libraryPlasticRules_raw();
    return res;
}

inline core::Ptr<core::DataComponent> Design::rootDataComponent() const
{
    core::Ptr<core::DataComponent> res = rootDataComponent_raw();
    return res;
}

inline core::Ptr<ObjectVisibility> Design::objectVisibility() const
{
    core::Ptr<ObjectVisibility> res = objectVisibility_raw();
    return res;
}

inline bool Design::isAdaptiveGroundPlane() const
{
    bool res = isAdaptiveGroundPlane_raw();
    return res;
}

inline bool Design::isAdaptiveGroundPlane(bool value)
{
    return isAdaptiveGroundPlane_raw(value);
}

inline bool Design::setGroundPlaneOffset(double offset)
{
    bool res = setGroundPlaneOffset_raw(offset);
    return res;
}

inline std::vector<core::Ptr<DerivedParameter>> Design::derivedParameters() const
{
    std::vector<core::Ptr<DerivedParameter>> res;
    size_t s;

    DerivedParameter** p= derivedParameters_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Design::isModelingInAssemblyEnabled() const
{
    bool res = isModelingInAssemblyEnabled_raw();
    return res;
}

inline bool Design::isModelingInAssemblyEnabled(bool value)
{
    return isModelingInAssemblyEnabled_raw(value);
}

inline DesignIntentTypes Design::designIntent() const
{
    DesignIntentTypes res = designIntent_raw();
    return res;
}

inline bool Design::designIntent(DesignIntentTypes value)
{
    return designIntent_raw(value);
}

inline core::Ptr<PMISettings> Design::pmiSettings() const
{
    core::Ptr<PMISettings> res = pmiSettings_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DESIGN_API