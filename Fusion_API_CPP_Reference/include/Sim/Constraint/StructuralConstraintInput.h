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
#include "../Core/SimAttributeInput.h"
#include "../SimTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_STRUCTURALCONSTRAINTINPUT_CPP__
# define ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API XI_EXPORT
# else
# define ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API
# endif
#else
# define ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// This class defines the methods and properties that pertain to the definition of a structural constraint.
class StructuralConstraintInput : public SimAttributeInput {
public:

    /// Returns the type of the structural constraint.
    ConstraintTypes type() const;

    /// Sets the targets, vertices/edges/faces of the model.
    /// entities : An array containing the entities to set the constraint on.
    /// Returns true if successful.
    bool setTargets(const std::vector<core::Ptr<core::Base>>& entities);

    ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API static const char* classType();
    ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API const char* objectType() const override;
    ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstraintTypes type_raw() const = 0;
    virtual bool setTargets_raw(core::Base** entities, size_t entities_size) = 0;
};

// Inline wrappers

inline ConstraintTypes StructuralConstraintInput::type() const
{
    ConstraintTypes res = type_raw();
    return res;
}

inline bool StructuralConstraintInput::setTargets(const std::vector<core::Ptr<core::Base>>& entities)
{
    core::Base** entities_ = new core::Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    bool res = setTargets_raw(entities_, entities.size());
    delete[] entities_;
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STRUCTURALCONSTRAINTINPUT_API