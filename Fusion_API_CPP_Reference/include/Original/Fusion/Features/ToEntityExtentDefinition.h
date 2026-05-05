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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_TOENTITYEXTENTDEFINITION_CPP__
# define ADSK_FUSION_TOENTITYEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_TOENTITYEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_TOENTITYEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
    class Vector3D;
}}

namespace adsk { namespace fusion {

/// A definition object that is used to define the extents of a feature to be up to a specified
/// construction plane or face.
class ToEntityExtentDefinition : public ExtentDefinition {
public:

    /// Statically creates a new ToEntityExtentDefinition object. This is used as input when
    /// defining the extents of a feature to be up to a construction plane or face.
    /// entity : The construction plane or face that the feature extent it up to.
    /// isChained : 
    /// offset : A optional input value that defines an offset distance of the entity that will be used
    /// for the extent. Positive and negative values can be used to offset in both directions.
    /// If this argument is not provided a value of zero will be used.
    /// Returns the newly created ToEntityExtentDefinition object or null if the creation failed.
    static core::Ptr<ToEntityExtentDefinition> create(const core::Ptr<core::Base>& entity, bool isChained, const core::Ptr<core::ValueInput>& offset = NULL);

    /// Gets and sets the entity that the feature extent is defined up to. This can be a ConstructionPlane, Profile, BrepFace,
    /// BrepBody, or BRepVertex.
    core::Ptr<core::Base> entity() const;
    bool entity(const core::Ptr<core::Base>& value);

    /// Returns the current offset. If the EntityExtentDefinition object has been created statically and isn't associated with
    /// a feature this will return a ValueInput object. If the EntityExtentDefinition object is obtained from a feature this
    /// will return a ModelParameter object. You can use properties of the parameter to edit its value which will result in
    /// the feature updating.
    core::Ptr<core::Base> offset() const;

    /// Gets and sets whether connected faces to the input entity should also be used when calculating the extent or if the
    /// input entity should be extended. A value of true indicates that connected entities should be used.
    bool isChained() const;
    bool isChained(bool value);

    /// Gets and sets a direction that is used when the result is ambiguous. For example, if you have a profile in
    /// the center of a torus and are extruding to the torus, the extrusion can go in either direction. When needed,
    /// this provides the information to tell Fusion which direction to go. In most cases this is not needed and
    /// the property will be null.
    core::Ptr<core::Vector3D> directionHint() const;
    bool directionHint(const core::Ptr<core::Vector3D>& value);

    /// Gets and sets if the minimum or maximum solution is calculated. This is only used when the input entity is
    /// a body and defines if the extrusion to go to the near side (minimum solution) of the body or the far side.
    /// When a new ToEntityExtentDefinition object is created, this property defaults to True.
    bool isMinimumSolution() const;
    bool isMinimumSolution(bool value);

    ADSK_FUSION_TOENTITYEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_TOENTITYEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_TOENTITYEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TOENTITYEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_TOENTITYEXTENTDEFINITION_API static ToEntityExtentDefinition* create_raw(core::Base* entity, bool isChained, core::ValueInput* offset);
    virtual core::Base* entity_raw() const = 0;
    virtual bool entity_raw(core::Base* value) = 0;
    virtual core::Base* offset_raw() const = 0;
    virtual bool isChained_raw() const = 0;
    virtual bool isChained_raw(bool value) = 0;
    virtual core::Vector3D* directionHint_raw() const = 0;
    virtual bool directionHint_raw(core::Vector3D* value) = 0;
    virtual bool isMinimumSolution_raw() const = 0;
    virtual bool isMinimumSolution_raw(bool value) = 0;
};

// Inline wrappers

inline core::Ptr<ToEntityExtentDefinition> ToEntityExtentDefinition::create(const core::Ptr<core::Base>& entity, bool isChained, const core::Ptr<core::ValueInput>& offset)
{
    core::Ptr<ToEntityExtentDefinition> res = create_raw(entity.get(), isChained, offset.get());
    return res;
}

inline core::Ptr<core::Base> ToEntityExtentDefinition::entity() const
{
    core::Ptr<core::Base> res = entity_raw();
    return res;
}

inline bool ToEntityExtentDefinition::entity(const core::Ptr<core::Base>& value)
{
    return entity_raw(value.get());
}

inline core::Ptr<core::Base> ToEntityExtentDefinition::offset() const
{
    core::Ptr<core::Base> res = offset_raw();
    return res;
}

inline bool ToEntityExtentDefinition::isChained() const
{
    bool res = isChained_raw();
    return res;
}

inline bool ToEntityExtentDefinition::isChained(bool value)
{
    return isChained_raw(value);
}

inline core::Ptr<core::Vector3D> ToEntityExtentDefinition::directionHint() const
{
    core::Ptr<core::Vector3D> res = directionHint_raw();
    return res;
}

inline bool ToEntityExtentDefinition::directionHint(const core::Ptr<core::Vector3D>& value)
{
    return directionHint_raw(value.get());
}

inline bool ToEntityExtentDefinition::isMinimumSolution() const
{
    bool res = isMinimumSolution_raw();
    return res;
}

inline bool ToEntityExtentDefinition::isMinimumSolution(bool value)
{
    return isMinimumSolution_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TOENTITYEXTENTDEFINITION_API