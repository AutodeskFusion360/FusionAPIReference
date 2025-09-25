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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_DISTANCEEXTENTDEFINITION_CPP__
# define ADSK_FUSION_DISTANCEEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_DISTANCEEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_DISTANCEEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
}}

namespace adsk { namespace fusion {

/// Defines the inputs for a distance ExtentDefinition object.
/// This feature extent type defines the distance as well as whether the extent is symmetric
/// or in only one direction. If the extent is not symmetric, a positive or negative distance
/// can be used to control the direction.
/// For a hole, the IsSymmetric property value will always be false.
class DistanceExtentDefinition : public ExtentDefinition {
public:

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets if the distance extent is symmetric or not
    /// For a hole this property will always return false and setting it is ignored.
    bool isSymmetric() const;
    bool isSymmetric(bool value);

    /// Returns the parameter controlling the distance. You can edit the distance
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> distance() const;

    /// Statically creates a new DistanceExtentDefinition object. This is used as input when
    /// defining the extents of a feature to be a specified distance.
    /// distance : A ValueInput that defines the distance of the extrusion.
    /// Returns the newly created DistanceExtentDefinition or null in the case of failure.
    static core::Ptr<DistanceExtentDefinition> create(const core::Ptr<core::ValueInput>& distance);

    ADSK_FUSION_DISTANCEEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_DISTANCEEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_DISTANCEEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_DISTANCEEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSymmetric_raw() const = 0;
    virtual bool isSymmetric_raw(bool value) = 0;
    virtual ModelParameter* distance_raw() const = 0;
    ADSK_FUSION_DISTANCEEXTENTDEFINITION_API static DistanceExtentDefinition* create_raw(core::ValueInput* distance);
};

// Inline wrappers

inline bool DistanceExtentDefinition::isSymmetric() const
{
    bool res = isSymmetric_raw();
    return res;
}

inline bool DistanceExtentDefinition::isSymmetric(bool value)
{
    return isSymmetric_raw(value);
}

inline core::Ptr<ModelParameter> DistanceExtentDefinition::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline core::Ptr<DistanceExtentDefinition> DistanceExtentDefinition::create(const core::Ptr<core::ValueInput>& distance)
{
    core::Ptr<DistanceExtentDefinition> res = create_raw(distance.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_DISTANCEEXTENTDEFINITION_API