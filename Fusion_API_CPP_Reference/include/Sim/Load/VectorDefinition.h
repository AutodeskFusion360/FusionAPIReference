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
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_VECTORDEFINITION_CPP__
# define ADSK_SIM_VECTORDEFINITION_API XI_EXPORT
# else
# define ADSK_SIM_VECTORDEFINITION_API
# endif
#else
# define ADSK_SIM_VECTORDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Vector3D;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a vector definition.
class VectorDefinition : public core::Base {
public:

    /// Gets the vector definition type.
    VectorDefinitionTypes type() const;

    /// Gets the magnitude of the vector.
    double magnitude() const;

    /// Gets the vector as a concrete vector defined by components.
    core::Ptr<core::Vector3D> vector() const;

    /// Gets the angles used in the vector definition.
    /// This applies when the vector definition type is AnglesVectorDefinitionType.
    core::Ptr<core::Vector3D> angles() const;

    /// Gets the reference used for direction in the vector definition.
    /// This applies when the vector definition type is AnglesVectorDefinitionType
    /// or ReferenceVectorDefinitionType.
    core::Ptr<core::Base> reference() const;

    /// Statically creates a new VectorDefinition object. This is used as input when
    /// defining directional loads.
    /// magnitude : The magnitude for the vector.
    /// reference : If provided, it determines the direction of which the load is applied. Otherwise
    /// the entity on which the load is applied implies the direction.
    /// Returns the newly created VectorDefinition object or null if the creation failed.
    static core::Ptr<VectorDefinition> createByMagnitude(double magnitude, const core::Ptr<core::Base>& reference = NULL);

    /// Statically creates a new VectorDefinition object. This is used as input when
    /// defining directional loads.
    /// vector : The concrete vector with three components.
    /// Returns the newly created VectorDefinition object or null if the creation failed.
    static core::Ptr<VectorDefinition> createByVector(const core::Ptr<core::Vector3D>& vector);

    /// Statically creates a new VectorDefinition object. This is used as input when
    /// defining directional loads.
    /// magnitude : The magnitude for the vector.
    /// angles : The angles around the reference direction.
    /// reference : If provided, it determines the direction of which the load is applied. Otherwise
    /// the entity on which the load is applied implies the direction.
    /// Returns the newly created VectorDefinition object or null if the creation failed.
    static core::Ptr<VectorDefinition> createByAngles(double magnitude, const core::Ptr<core::Vector3D>& angles, const core::Ptr<core::Base>& reference = NULL);

    ADSK_SIM_VECTORDEFINITION_API static const char* classType();
    ADSK_SIM_VECTORDEFINITION_API const char* objectType() const override;
    ADSK_SIM_VECTORDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_SIM_VECTORDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual VectorDefinitionTypes type_raw() const = 0;
    virtual double magnitude_raw() const = 0;
    virtual core::Vector3D* vector_raw() const = 0;
    virtual core::Vector3D* angles_raw() const = 0;
    virtual core::Base* reference_raw() const = 0;
    ADSK_SIM_VECTORDEFINITION_API static VectorDefinition* createByMagnitude_raw(double magnitude, core::Base* reference);
    ADSK_SIM_VECTORDEFINITION_API static VectorDefinition* createByVector_raw(core::Vector3D* vector);
    ADSK_SIM_VECTORDEFINITION_API static VectorDefinition* createByAngles_raw(double magnitude, core::Vector3D* angles, core::Base* reference);
};

// Inline wrappers

inline VectorDefinitionTypes VectorDefinition::type() const
{
    VectorDefinitionTypes res = type_raw();
    return res;
}

inline double VectorDefinition::magnitude() const
{
    double res = magnitude_raw();
    return res;
}

inline core::Ptr<core::Vector3D> VectorDefinition::vector() const
{
    core::Ptr<core::Vector3D> res = vector_raw();
    return res;
}

inline core::Ptr<core::Vector3D> VectorDefinition::angles() const
{
    core::Ptr<core::Vector3D> res = angles_raw();
    return res;
}

inline core::Ptr<core::Base> VectorDefinition::reference() const
{
    core::Ptr<core::Base> res = reference_raw();
    return res;
}

inline core::Ptr<VectorDefinition> VectorDefinition::createByMagnitude(double magnitude, const core::Ptr<core::Base>& reference)
{
    core::Ptr<VectorDefinition> res = createByMagnitude_raw(magnitude, reference.get());
    return res;
}

inline core::Ptr<VectorDefinition> VectorDefinition::createByVector(const core::Ptr<core::Vector3D>& vector)
{
    core::Ptr<VectorDefinition> res = createByVector_raw(vector.get());
    return res;
}

inline core::Ptr<VectorDefinition> VectorDefinition::createByAngles(double magnitude, const core::Ptr<core::Vector3D>& angles, const core::Ptr<core::Base>& reference)
{
    core::Ptr<VectorDefinition> res = createByAngles_raw(magnitude, angles.get(), reference.get());
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_VECTORDEFINITION_API