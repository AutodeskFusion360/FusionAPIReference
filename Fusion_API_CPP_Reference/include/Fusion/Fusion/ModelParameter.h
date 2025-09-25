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
#include "Parameter.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MODELPARAMETER_CPP__
# define ADSK_FUSION_MODELPARAMETER_API XI_EXPORT
# else
# define ADSK_FUSION_MODELPARAMETER_API
# endif
#else
# define ADSK_FUSION_MODELPARAMETER_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
    class ModelParameters;
}}

namespace adsk { namespace fusion {

/// Represents a Model Parameter.
class ModelParameter : public Parameter {
public:

    /// Returns the Collection containing the ModelParameter.
    core::Ptr<ModelParameters> modelParameters() const;

    /// Returns the Component containing the ModelParameter.
    core::Ptr<Component> component() const;

    /// This property identifies what the parameter is used for. For an extrude, it
    /// could be "Depth", for a work plane it could be "Offset".
    std::string role() const;

    /// Returns the object that created this parameter. For example,
    /// a feature, a sketch dimension, or a construction plane.
    core::Ptr<core::Base> createdBy() const;

    /// Deletes this ModelParameter. As a general rule, model parameters cannot be deleted
    /// because features depend on them. However, there are uncommon workflows where a
    /// parameter no longer has any dependents and is not automatically deleted. You can
    /// use the isDeletable property to see if the parameter is in this state and can
    /// successfully be deleted.
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_FUSION_MODELPARAMETER_API static const char* classType();
    ADSK_FUSION_MODELPARAMETER_API const char* objectType() const override;
    ADSK_FUSION_MODELPARAMETER_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MODELPARAMETER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameters* modelParameters_raw() const = 0;
    virtual Component* component_raw() const = 0;
    virtual char* role_raw() const = 0;
    virtual core::Base* createdBy_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual void placeholderModelParameter0() {}
    virtual void placeholderModelParameter1() {}
    virtual void placeholderModelParameter2() {}
    virtual void placeholderModelParameter3() {}
    virtual void placeholderModelParameter4() {}
    virtual void placeholderModelParameter5() {}
    virtual void placeholderModelParameter6() {}
    virtual void placeholderModelParameter7() {}
    virtual void placeholderModelParameter8() {}
    virtual void placeholderModelParameter9() {}
    virtual void placeholderModelParameter10() {}
    virtual void placeholderModelParameter11() {}
    virtual void placeholderModelParameter12() {}
    virtual void placeholderModelParameter13() {}
    virtual void placeholderModelParameter14() {}
    virtual void placeholderModelParameter15() {}
    virtual void placeholderModelParameter16() {}
    virtual void placeholderModelParameter17() {}
    virtual void placeholderModelParameter18() {}
    virtual void placeholderModelParameter19() {}
    virtual void placeholderModelParameter20() {}
    virtual void placeholderModelParameter21() {}
    virtual void placeholderModelParameter22() {}
    virtual void placeholderModelParameter23() {}
    virtual void placeholderModelParameter24() {}
    virtual void placeholderModelParameter25() {}
    virtual void placeholderModelParameter26() {}
};

// Inline wrappers

inline core::Ptr<ModelParameters> ModelParameter::modelParameters() const
{
    core::Ptr<ModelParameters> res = modelParameters_raw();
    return res;
}

inline core::Ptr<Component> ModelParameter::component() const
{
    core::Ptr<Component> res = component_raw();
    return res;
}

inline std::string ModelParameter::role() const
{
    std::string res;

    char* p= role_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline core::Ptr<core::Base> ModelParameter::createdBy() const
{
    core::Ptr<core::Base> res = createdBy_raw();
    return res;
}

inline bool ModelParameter::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MODELPARAMETER_API