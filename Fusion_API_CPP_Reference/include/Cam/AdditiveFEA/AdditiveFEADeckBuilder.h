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
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFEADECKBUILDER_CPP__
# define ADSK_CAM_ADDITIVEFEADECKBUILDER_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFEADECKBUILDER_API
# endif
#else
# define ADSK_CAM_ADDITIVEFEADECKBUILDER_API XI_IMPORT
#endif

namespace adsk { namespace cam {
    class AdditiveFEAConvection;
    class AdditiveFEADeckBuilderCard;
    class AdditiveFEASTLMap;
}}

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The AdditiveFEADeckBuilder supplies methods to generate cards to be used for generating an FEA simulation result.
class AdditiveFEADeckBuilder : public core::Base {
public:

    /// Creates a new AdditiveFEADeckBuilder object.
    /// Returns the newly created AdditiveFEADeckBuilder object or null if the creation failed.
    static core::Ptr<AdditiveFEADeckBuilder> create();

    /// Creates a new AdditiveFEASTLMap object to define *STLM data.
    /// Returns an initially empty AdditiveFEASTLMap.
    core::Ptr<AdditiveFEASTLMap> createSTLMap();

    /// Creates a new AdditiveFEAConvection object to define *CONV data.
    /// Returns an initially empty AdditiveFEAConvection table.
    core::Ptr<AdditiveFEAConvection> createConvection();

    /// Append an input card to the deck.
    void append(const core::Ptr<AdditiveFEADeckBuilderCard>& card);

    /// Creates a generic key value card.
    /// name : The name of the card keyword, e.g. "*TITLE" or "*ADAP".
    /// value : The value of the card's argument as a string.
    /// Returns the card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createGenericCard(const std::string& name, const std::string& value);

    /// Creates a generic enumerated card with no arguments.  Cards that can be created as a void card include:
    /// - BinaryOutputCard
    /// - EnsightOutputCard
    /// - NoOffCoreCard
    /// - OnCore1Card
    /// - PowderCard
    /// - AutomaticMeshingCard
    /// - PowderBedYSymmetryCard
    /// - NewPRMGenerationMethodCard
    /// - EndCard
    /// card : The type of card to create, e.g. BinaryOutputCard.
    /// Returns the card name-value pair.  For void cards, the value is an empty string.
    core::Ptr<AdditiveFEADeckBuilderCard> createVoidCard(AdditiveFEACard card);

    /// Creates a generic enumerated card with a single integer argument.  Cards that can be created as an int card include:
    /// - AnalysisTypeCard
    /// - LayersPerElementCard
    /// - CoarseningGenerationsCard
    /// - AdaptivityCard
    /// - PowderTypeCard
    /// - FineLayerCountCard
    /// - OutputFileFrequencyCard
    /// card : The type of card to create, e.g. LayersPerElementCard.
    /// value : The int value argument of the card.
    /// Returns the card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createIntCard(AdditiveFEACard card, int value);

    /// Creates a generic enumerated card with a single double argument.  Cards that can be created as a double card include:
    /// - STLToleranceCard
    /// - InitialTemperatureCard
    /// - AmbientTemperatureCard
    /// - FinalTemperatureCard
    /// - EvaporationTemperatureCard
    /// - AutomaticTimingCard
    /// card : The type of card to create, e.g. STLToleranceCard.
    /// value : The double value argument of the card.
    /// Returns the card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createDoubleCard(AdditiveFEACard card, double value);

    /// Creates a generic enumerated card with a single string argument.
    /// Card(s) that can be created as a string card include:
    /// - TitleCard
    /// card : The type of card to create, e.g. TitleCard.
    /// value : The string value argument of the card.
    /// Returns the card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createStringCard(AdditiveFEACard card, const std::string& value);

    /// Creates a generic enumerated card with an array of string arguments.  Cards that can be created as a string array card include:
    /// - STLsCard
    /// - PRMsCard
    /// card : The type of card to create, e.g. STLsCard.
    /// value : The string-array value argument of the card.
    /// Returns the card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createStringArrayCard(AdditiveFEACard card, const std::vector<std::string>& value);

    /// Creates the *DDM! card to define the build plate z position and thickness.
    /// zTop : The z coordinate of the top of the build plate in mm.  This should match the bottom z coordinate of the parts or supports.
    /// zBottom : The z coordinate of the bottom of the build plate in mm.
    /// Returns the *DDM! card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createBuildPlateZBoundsCard(double zTop, double zBottom);

    /// Creates the *IOBN card to enable or disable the disk check.
    /// i1 : Set i1 to a negative value to disable the check, or 0 or a positive value to enable the check.
    /// r1 : Unused dummy argument.
    /// Returns the *IOBN card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createDiskCheckCard(int i1, double r1);

    /// Creates the *STLM card to define the STL mapping.
    /// map : An AdditiveFEASTLMap object to define the mapping of configuration, PRM, material, and volume fraction for each body.
    /// Returns the *STLM card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createSTLMapCard(const core::Ptr<AdditiveFEASTLMap>& map);

    /// Creates the *CONV card to define a convection boundary condition.
    /// convection : A convection table defining the temperature-dependent convection coefficients.
    /// Returns the *CONV card name-value pair.
    core::Ptr<AdditiveFEADeckBuilderCard> createConvectionCard(const core::Ptr<AdditiveFEAConvection>& convection);

    /// Creates the *SBXY card.  Arguments are per the Fusion view cube, i.e. left is -x, right is +x, front is -y, and back is +y.
    /// left : Relative left extension in mm.
    /// right : Relative right extension in mm.
    /// front : Relative front extension in mm.
    /// back : Relative back extension in mm.
    core::Ptr<AdditiveFEADeckBuilderCard> createBuildPlateXYExtensionCard(double left, double right, double front, double back);

    /// Gets the list of cards that makes up the deck.
    std::vector<core::Ptr<AdditiveFEADeckBuilderCard>> cards() const;

    /// Creates the *MATE card block.
    /// material : The type of material to be simulated.
    /// materialId : The integer material identifier, typically 1 for single-material simulations.
    core::Ptr<AdditiveFEADeckBuilderCard> createMaterialCard(AdditiveFEAMaterial material, int materialId);

    /// Creates the *LSRP card.
    /// power : Heat source power in W.
    /// radius : Radius of the melt pool in mm.
    /// speed : Travel speed in mm/s.
    /// thickness : Layer thickness in mm.
    /// hatch : Hatch spacing (gap width) in mm.
    /// recoaterTime : Recoater time in s.
    /// layerCount : Number of layers.
    /// initialAngle : Initial vector angle in degrees.
    /// angleChange : Vector angle change from layer to layer, in degrees.
    /// xSize : x size of part in mm.
    /// ySize : y size of part in mm.
    core::Ptr<AdditiveFEADeckBuilderCard> createLaserPathGenerationCard(double power, double radius, double speed, double thickness, double hatch, double recoaterTime, int layerCount, double initialAngle, double angleChange, double xSize, double ySize);

    /// Creates the *TRAN card.
    /// startTime : Start time in s.
    /// endTime : End time in s.
    /// initialTimeIncrement : Initial time increment in s.
    /// maxTimeIncrement : Maximum allowable time increment in s.
    /// minTimeIncrement : Minimum allowable time increment in s.
    /// incrementTol : Incrementation tolerance.
    /// maxCutbacks : Maximum number of cutbacks.
    /// maxIncrements : Maximum number of increments.
    core::Ptr<AdditiveFEADeckBuilderCard> createTransientCard(double startTime, double endTime, double initialTimeIncrement, double maxTimeIncrement, double minTimeIncrement, double incrementTol, int maxCutbacks, int maxIncrements);

    /// Creates the *DDM1 card.
    /// conductivityScaling : Scaling factor for thermal conductivity.
    /// specificHeatScaling : Scaling factor for specific heat.
    /// elasticModulusScaling : Scaling factor for elastic modulus.
    /// emissivityScaling : Scaling factor for thermal emissivity.
    core::Ptr<AdditiveFEADeckBuilderCard> createPropertyScalingCard(double conductivityScaling, double specificHeatScaling, double elasticModulusScaling, double emissivityScaling);

    /// Creates the *GOLD card.  See the figure at the following link for an illustration of the axes:  https://help.autodesk.com/view/NETF/2026/ENU/?guid=GUID-3634FFD9-1976-4556-BE46-ED5850410853
    /// efficiency : Efficiency.
    /// bAxisMultiplier : b axis multiplier in the local y direction.
    /// c1AxisMultiplier : c1 axis multiplier in the local z direction.
    /// c2AxisMultiplier : c2 axis multiplier in the local z direction.
    /// f1Factor : f1 factor.
    /// f2Factor : f2 factor.
    core::Ptr<AdditiveFEADeckBuilderCard> createGoldakCard(double efficiency, double bAxisMultiplier, double c1AxisMultiplier, double c2AxisMultiplier, double f1Factor, double f2Factor);

    /// Creates the *RELA card.
    /// iterations : Number of relaxation iterations.
    /// scalingFactor : Relaxation scaling factor.
    core::Ptr<AdditiveFEADeckBuilderCard> createRelaxationCard(int iterations, double scalingFactor);

    /// Creates the *SOLU card.
    /// maxIterations : Maximum number of iterations.
    /// tolerance : Residual tolerance.
    /// maxResidual : Maximum residual.
    /// 
    core::Ptr<AdditiveFEADeckBuilderCard> createSolutionParametersCard(int maxIterations, double tolerance, double maxResidual);

    /// Creates the *RELM card.
    /// isUsed : 1 if mechanical numerical relaxation is used; otherwise, 0 (or other value).
    /// maxIterations : Number of relaxation iterations.
    /// scalingFactor : Relaxation scaling factor.
    /// 
    core::Ptr<AdditiveFEADeckBuilderCard> createMechanicalRelaxationCard(int isUsed, int maxIterations, double scalingFactor);

    /// Creates the *INPU card.
    /// type : The type of analysis for which the warp input is being created, e.g. Mechanical or Thermal.
    /// 
    core::Ptr<AdditiveFEADeckBuilderCard> createWarpInputCard(AdditiveFEAAnalysisType type);

    ADSK_CAM_ADDITIVEFEADECKBUILDER_API static const char* classType();
    ADSK_CAM_ADDITIVEFEADECKBUILDER_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFEADECKBUILDER_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFEADECKBUILDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CAM_ADDITIVEFEADECKBUILDER_API static AdditiveFEADeckBuilder* create_raw();
    virtual AdditiveFEASTLMap* createSTLMap_raw() = 0;
    virtual AdditiveFEAConvection* createConvection_raw() = 0;
    virtual void append_raw(AdditiveFEADeckBuilderCard* card) = 0;
    virtual AdditiveFEADeckBuilderCard* createGenericCard_raw(const char* name, const char* value) = 0;
    virtual AdditiveFEADeckBuilderCard* createVoidCard_raw(AdditiveFEACard card) = 0;
    virtual AdditiveFEADeckBuilderCard* createIntCard_raw(AdditiveFEACard card, int value) = 0;
    virtual AdditiveFEADeckBuilderCard* createDoubleCard_raw(AdditiveFEACard card, double value) = 0;
    virtual AdditiveFEADeckBuilderCard* createStringCard_raw(AdditiveFEACard card, const char* value) = 0;
    virtual AdditiveFEADeckBuilderCard* createStringArrayCard_raw(AdditiveFEACard card, const char** value, size_t value_size) = 0;
    virtual AdditiveFEADeckBuilderCard* createBuildPlateZBoundsCard_raw(double zTop, double zBottom) = 0;
    virtual AdditiveFEADeckBuilderCard* createDiskCheckCard_raw(int i1, double r1) = 0;
    virtual AdditiveFEADeckBuilderCard* createSTLMapCard_raw(AdditiveFEASTLMap* map) = 0;
    virtual AdditiveFEADeckBuilderCard* createConvectionCard_raw(AdditiveFEAConvection* convection) = 0;
    virtual AdditiveFEADeckBuilderCard* createBuildPlateXYExtensionCard_raw(double left, double right, double front, double back) = 0;
    virtual AdditiveFEADeckBuilderCard** cards_raw(size_t& return_size) const = 0;
    virtual AdditiveFEADeckBuilderCard* createMaterialCard_raw(AdditiveFEAMaterial material, int materialId) = 0;
    virtual AdditiveFEADeckBuilderCard* createLaserPathGenerationCard_raw(double power, double radius, double speed, double thickness, double hatch, double recoaterTime, int layerCount, double initialAngle, double angleChange, double xSize, double ySize) = 0;
    virtual AdditiveFEADeckBuilderCard* createTransientCard_raw(double startTime, double endTime, double initialTimeIncrement, double maxTimeIncrement, double minTimeIncrement, double incrementTol, int maxCutbacks, int maxIncrements) = 0;
    virtual AdditiveFEADeckBuilderCard* createPropertyScalingCard_raw(double conductivityScaling, double specificHeatScaling, double elasticModulusScaling, double emissivityScaling) = 0;
    virtual AdditiveFEADeckBuilderCard* createGoldakCard_raw(double efficiency, double bAxisMultiplier, double c1AxisMultiplier, double c2AxisMultiplier, double f1Factor, double f2Factor) = 0;
    virtual AdditiveFEADeckBuilderCard* createRelaxationCard_raw(int iterations, double scalingFactor) = 0;
    virtual AdditiveFEADeckBuilderCard* createSolutionParametersCard_raw(int maxIterations, double tolerance, double maxResidual) = 0;
    virtual AdditiveFEADeckBuilderCard* createMechanicalRelaxationCard_raw(int isUsed, int maxIterations, double scalingFactor) = 0;
    virtual AdditiveFEADeckBuilderCard* createWarpInputCard_raw(AdditiveFEAAnalysisType type) = 0;
};

// Inline wrappers

inline core::Ptr<AdditiveFEADeckBuilder> AdditiveFEADeckBuilder::create()
{
    core::Ptr<AdditiveFEADeckBuilder> res = create_raw();
    return res;
}

inline core::Ptr<AdditiveFEASTLMap> AdditiveFEADeckBuilder::createSTLMap()
{
    core::Ptr<AdditiveFEASTLMap> res = createSTLMap_raw();
    return res;
}

inline core::Ptr<AdditiveFEAConvection> AdditiveFEADeckBuilder::createConvection()
{
    core::Ptr<AdditiveFEAConvection> res = createConvection_raw();
    return res;
}

inline void AdditiveFEADeckBuilder::append(const core::Ptr<AdditiveFEADeckBuilderCard>& card)
{
    append_raw(card.get());
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createGenericCard(const std::string& name, const std::string& value)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createGenericCard_raw(name.c_str(), value.c_str());
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createVoidCard(AdditiveFEACard card)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createVoidCard_raw(card);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createIntCard(AdditiveFEACard card, int value)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createIntCard_raw(card, value);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createDoubleCard(AdditiveFEACard card, double value)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createDoubleCard_raw(card, value);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createStringCard(AdditiveFEACard card, const std::string& value)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createStringCard_raw(card, value.c_str());
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createStringArrayCard(AdditiveFEACard card, const std::vector<std::string>& value)
{
    const char** value_ = value.empty() ? nullptr : (new const char*[value.size()]);
    for(size_t i = 0; i < value.size(); ++i)
    {
        value_[i] = value[i].c_str();
    }

    core::Ptr<AdditiveFEADeckBuilderCard> res = createStringArrayCard_raw(card, value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createBuildPlateZBoundsCard(double zTop, double zBottom)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createBuildPlateZBoundsCard_raw(zTop, zBottom);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createDiskCheckCard(int i1, double r1)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createDiskCheckCard_raw(i1, r1);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createSTLMapCard(const core::Ptr<AdditiveFEASTLMap>& map)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createSTLMapCard_raw(map.get());
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createConvectionCard(const core::Ptr<AdditiveFEAConvection>& convection)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createConvectionCard_raw(convection.get());
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createBuildPlateXYExtensionCard(double left, double right, double front, double back)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createBuildPlateXYExtensionCard_raw(left, right, front, back);
    return res;
}

inline std::vector<core::Ptr<AdditiveFEADeckBuilderCard>> AdditiveFEADeckBuilder::cards() const
{
    std::vector<core::Ptr<AdditiveFEADeckBuilderCard>> res;
    size_t s;

    AdditiveFEADeckBuilderCard** p= cards_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createMaterialCard(AdditiveFEAMaterial material, int materialId)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createMaterialCard_raw(material, materialId);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createLaserPathGenerationCard(double power, double radius, double speed, double thickness, double hatch, double recoaterTime, int layerCount, double initialAngle, double angleChange, double xSize, double ySize)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createLaserPathGenerationCard_raw(power, radius, speed, thickness, hatch, recoaterTime, layerCount, initialAngle, angleChange, xSize, ySize);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createTransientCard(double startTime, double endTime, double initialTimeIncrement, double maxTimeIncrement, double minTimeIncrement, double incrementTol, int maxCutbacks, int maxIncrements)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createTransientCard_raw(startTime, endTime, initialTimeIncrement, maxTimeIncrement, minTimeIncrement, incrementTol, maxCutbacks, maxIncrements);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createPropertyScalingCard(double conductivityScaling, double specificHeatScaling, double elasticModulusScaling, double emissivityScaling)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createPropertyScalingCard_raw(conductivityScaling, specificHeatScaling, elasticModulusScaling, emissivityScaling);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createGoldakCard(double efficiency, double bAxisMultiplier, double c1AxisMultiplier, double c2AxisMultiplier, double f1Factor, double f2Factor)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createGoldakCard_raw(efficiency, bAxisMultiplier, c1AxisMultiplier, c2AxisMultiplier, f1Factor, f2Factor);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createRelaxationCard(int iterations, double scalingFactor)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createRelaxationCard_raw(iterations, scalingFactor);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createSolutionParametersCard(int maxIterations, double tolerance, double maxResidual)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createSolutionParametersCard_raw(maxIterations, tolerance, maxResidual);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createMechanicalRelaxationCard(int isUsed, int maxIterations, double scalingFactor)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createMechanicalRelaxationCard_raw(isUsed, maxIterations, scalingFactor);
    return res;
}

inline core::Ptr<AdditiveFEADeckBuilderCard> AdditiveFEADeckBuilder::createWarpInputCard(AdditiveFEAAnalysisType type)
{
    core::Ptr<AdditiveFEADeckBuilderCard> res = createWarpInputCard_raw(type);
    return res;
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFEADECKBUILDER_API