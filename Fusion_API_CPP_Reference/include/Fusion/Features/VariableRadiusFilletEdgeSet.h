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
#include "FilletEdgeSet.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_CPP__
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API XI_EXPORT
# else
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API
# endif
#else
# define ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class ParameterList;
}}

namespace adsk { namespace fusion {

/// Provides access to the edges and the parameters associated with a variable radius fillet.
class VariableRadiusFilletEdgeSet : public FilletEdgeSet {
public:

    /// Gets and sets an ObjectCollection containing the edges that are filleted.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    core::Ptr<core::ObjectCollection> edges() const;
    bool edges(const core::Ptr<core::ObjectCollection>& value);

    /// Returns the model parameter that controls the start radius of the fillet. You can edit
    /// the start radius by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> startRadius() const;

    /// Returns the model parameter that controls the end radius of the fillet. You can edit
    /// the end radius by using the properties on the returned ModelParameter object.
    core::Ptr<ModelParameter> endRadius() const;

    /// Returns a list of model parameters that control radius of the fillet at each position defined along the edge set.
    /// You can edit any of these radii by using the properties on its returned ModelParameter object. This list does
    /// not include the parameters for the start and end radii. Use the startRadius and endRadius properties to get those.
    core::Ptr<ParameterList> midRadii() const;

    /// Returns a list of model parameters that control the location of each mid point radius. These positions are defined
    /// from 0 to 1 where 0 is at the start of the edge and 1 is at the end. You can edit any of these positions by
    /// using the properties on its returned ModelParameter object.
    core::Ptr<ParameterList> midPositions() const;

    /// Creates a new mid position radius on the variable radius edge set.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// position : The position where the new radius is to be created. This is a value between 0 and 1 where 0 is at the start of the
    /// edge and 1 is at the end. If the ValueInput uses a real then it is interpreted as a unitless value. If it is a string
    /// then it must resolve to a unitless value.
    /// radius : A ValueInput object that defines the radius at the defined position. If the ValueInput uses a real
    /// then it is interpreted as centimeters. If it is a string then the units can be defined as part of
    /// the string (i.e. "2 in"). If no units are specified it will be interpreted using the current
    /// default units for length.
    /// Returns true if successful.
    bool addMidPosition(const core::Ptr<core::ValueInput>& position, const core::Ptr<core::ValueInput>& radius);

    /// Deletes the specified mid position from the variable radius fillet.
    /// 
    /// To use this method, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    /// positionIndex : The index of the mid position to delete. The points are in the order they appear along the edge
    /// where the first point has an index of 0. The number of mid positions and their locations can be
    /// obtained by getting the list of mid positions using the midPositions property.
    /// Returns true if successful.
    bool deleteMidPosition(size_t positionIndex);

    ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API static const char* classType();
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API const char* objectType() const override;
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* edges_raw() const = 0;
    virtual bool edges_raw(core::ObjectCollection* value) = 0;
    virtual ModelParameter* startRadius_raw() const = 0;
    virtual ModelParameter* endRadius_raw() const = 0;
    virtual ParameterList* midRadii_raw() const = 0;
    virtual ParameterList* midPositions_raw() const = 0;
    virtual bool addMidPosition_raw(core::ValueInput* position, core::ValueInput* radius) = 0;
    virtual bool deleteMidPosition_raw(size_t positionIndex) = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> VariableRadiusFilletEdgeSet::edges() const
{
    core::Ptr<core::ObjectCollection> res = edges_raw();
    return res;
}

inline bool VariableRadiusFilletEdgeSet::edges(const core::Ptr<core::ObjectCollection>& value)
{
    return edges_raw(value.get());
}

inline core::Ptr<ModelParameter> VariableRadiusFilletEdgeSet::startRadius() const
{
    core::Ptr<ModelParameter> res = startRadius_raw();
    return res;
}

inline core::Ptr<ModelParameter> VariableRadiusFilletEdgeSet::endRadius() const
{
    core::Ptr<ModelParameter> res = endRadius_raw();
    return res;
}

inline core::Ptr<ParameterList> VariableRadiusFilletEdgeSet::midRadii() const
{
    core::Ptr<ParameterList> res = midRadii_raw();
    return res;
}

inline core::Ptr<ParameterList> VariableRadiusFilletEdgeSet::midPositions() const
{
    core::Ptr<ParameterList> res = midPositions_raw();
    return res;
}

inline bool VariableRadiusFilletEdgeSet::addMidPosition(const core::Ptr<core::ValueInput>& position, const core::Ptr<core::ValueInput>& radius)
{
    bool res = addMidPosition_raw(position.get(), radius.get());
    return res;
}

inline bool VariableRadiusFilletEdgeSet::deleteMidPosition(size_t positionIndex)
{
    bool res = deleteMidPosition_raw(positionIndex);
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_VARIABLERADIUSFILLETEDGESET_API