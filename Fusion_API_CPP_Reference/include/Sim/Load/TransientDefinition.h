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
# ifdef __COMPILING_ADSK_SIM_TRANSIENTDEFINITION_CPP__
# define ADSK_SIM_TRANSIENTDEFINITION_API XI_EXPORT
# else
# define ADSK_SIM_TRANSIENTDEFINITION_API
# endif
#else
# define ADSK_SIM_TRANSIENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Polyline2D;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a transient definition.
class TransientDefinition : public core::Base {
public:

    /// Gets and sets the discrete curve associated with the transient definition.
    core::Ptr<core::Polyline2D> dataPoints() const;
    bool dataPoints(const core::Ptr<core::Polyline2D>& value);

    /// Gets and sets whether or not the transient curve is based on real- (or pseudo-) time.
    bool isTimeDependent() const;
    bool isTimeDependent(bool value);

    /// Statically creates a new TransientDefinition object. This is used as input when
    /// defining transient loads.
    /// dataPoints : The discrete curve defining the transient variations.
    /// Returns the newly created TransientDefinition object or null if the creation failed.
    static core::Ptr<TransientDefinition> create(const core::Ptr<core::Polyline2D>& dataPoints, bool timeDependent = false);

    ADSK_SIM_TRANSIENTDEFINITION_API static const char* classType();
    ADSK_SIM_TRANSIENTDEFINITION_API const char* objectType() const override;
    ADSK_SIM_TRANSIENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_SIM_TRANSIENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Polyline2D* dataPoints_raw() const = 0;
    virtual bool dataPoints_raw(core::Polyline2D* value) = 0;
    virtual bool isTimeDependent_raw() const = 0;
    virtual bool isTimeDependent_raw(bool value) = 0;
    ADSK_SIM_TRANSIENTDEFINITION_API static TransientDefinition* create_raw(core::Polyline2D* dataPoints, bool timeDependent);
};

// Inline wrappers

inline core::Ptr<core::Polyline2D> TransientDefinition::dataPoints() const
{
    core::Ptr<core::Polyline2D> res = dataPoints_raw();
    return res;
}

inline bool TransientDefinition::dataPoints(const core::Ptr<core::Polyline2D>& value)
{
    return dataPoints_raw(value.get());
}

inline bool TransientDefinition::isTimeDependent() const
{
    bool res = isTimeDependent_raw();
    return res;
}

inline bool TransientDefinition::isTimeDependent(bool value)
{
    return isTimeDependent_raw(value);
}

inline core::Ptr<TransientDefinition> TransientDefinition::create(const core::Ptr<core::Polyline2D>& dataPoints, bool timeDependent)
{
    core::Ptr<TransientDefinition> res = create_raw(dataPoints.get(), timeDependent);
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_TRANSIENTDEFINITION_API