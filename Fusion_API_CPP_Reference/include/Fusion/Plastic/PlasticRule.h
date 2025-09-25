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
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PLASTICRULE_CPP__
# define ADSK_FUSION_PLASTICRULE_API XI_EXPORT
# else
# define ADSK_FUSION_PLASTICRULE_API
# endif
#else
# define ADSK_FUSION_PLASTICRULE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Material;
}}
namespace adsk { namespace fusion {
    class Design;
    class PlasticRuleValue;
}}

namespace adsk { namespace fusion {

/// A plastic rule.
class PlasticRule : public core::Base {
public:

    /// The name of the plastic rule. When setting the name, it must be
    /// unique with respect to other plastic rules in the design or library.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the material assigned to this plastic rule
    core::Ptr<core::Material> material() const;
    bool material(const core::Ptr<core::Material>& value);

    /// The minimum thickness of the part in centimeters.  This is used by
    /// the Design Advice command when analyzing the part for manufacturability.
    double minimumThickness() const;
    bool minimumThickness(double value);

    /// The maximum thickness of the part in centimeters.  This is used by
    /// the Design Advice command when analyzing the part for manufacturability.
    double maximumThickness() const;
    bool maximumThickness(double value);

    /// The thickness used for plastic features. This value must be within the range specified
    /// by the minimumThickness and maximumThickness properties. This is used by the plastic
    /// commands when a wall thickness is needed.
    /// 
    /// When using a float to set the value, it is defined in centimeters. When using a string to
    /// set the expression, the units can be defined as part of the expression or it defaults to
    /// the units associated with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> thickness() const;

    /// The maximum thickness of the part. This is used by the Design Advice command
    /// when analyzing the part for manufacturability.
    /// 
    /// When using a float to set the value, it is defined in centimeters. When using a string to
    /// set the expression, the units can be defined as part of the expression or it defaults to
    /// the units associated with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> thicknessVariation() const;

    /// The draft angle used for plastic features. When using a float to set the value, it
    /// is defined in radians. When using a string to set the expression it uses degrees.
    core::Ptr<PlasticRuleValue> draftAngle() const;

    /// The minimum draft angle allowed in radians. This is used by the Design Advice command
    /// when analyzing the part for manufacturability.
    double minimumDraftAngle() const;
    bool minimumDraftAngle(double value);

    /// The nominal radius used for plastic features. When using a float to set the value, it
    /// is defined in centimeters. When using a string to set the expression, the
    /// units can be defined as part of the expression or it defaults to the units associated
    /// with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> nominalRadius() const;

    /// The minimal thickness where an edge is considered a knife edge. This is used by the Design Advice
    /// command when analyzing the part for manufacturability.
    /// 
    /// When using a float to set the value, it is defined in centimeters. When using a string to
    /// set the expression, the units can be defined as part of the expression or it defaults to
    /// the units associated with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> knifeEdgeThreshold() const;

    /// The reveal height used for plastic features. When using a float to set the value, it
    /// is defined in centimeters. When using a string to set the expression, the
    /// units can be defined as part of the expression or it defaults to
    /// the units associated with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> revealHeight() const;

    /// The clearance used for plastic features. When using a float to set the value, it
    /// is defined in centimeters. When using a string to set the expression, the
    /// units can be defined as part of the expression or it defaults to
    /// the units associated with the rule if no units are specified.
    core::Ptr<PlasticRuleValue> clearance() const;

    /// Returns the parent design for a plastic rule in a design or it
    /// returns null if the plastic rule is in the library.
    core::Ptr<Design> parentDesign() const;

    /// This gets and sets which rule in a library is the default rule. This is only
    /// valid for rules in a library and will fail for rules in a design.
    bool isDefault() const;
    bool isDefault(bool value);

    /// Indicates if this rule is currently being used by a component. This is only
    /// valid for rules in a design.
    bool isUsed() const;

    /// Deletes the rule from the design or library. If the rule is in the
    /// library and set as the default rule, you cannot delete it. If the
    /// rule is in a design and is used by a component you cannot delete it.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets the units this rule uses to display values in the dialog.
    /// Rules currently only use mm or inch and the units are permanently
    /// associated with a rule and cannot be modified.
    std::string units() const;

    ADSK_FUSION_PLASTICRULE_API static const char* classType();
    ADSK_FUSION_PLASTICRULE_API const char* objectType() const override;
    ADSK_FUSION_PLASTICRULE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PLASTICRULE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual core::Material* material_raw() const = 0;
    virtual bool material_raw(core::Material* value) = 0;
    virtual double minimumThickness_raw() const = 0;
    virtual bool minimumThickness_raw(double value) = 0;
    virtual double maximumThickness_raw() const = 0;
    virtual bool maximumThickness_raw(double value) = 0;
    virtual PlasticRuleValue* thickness_raw() const = 0;
    virtual PlasticRuleValue* thicknessVariation_raw() const = 0;
    virtual PlasticRuleValue* draftAngle_raw() const = 0;
    virtual double minimumDraftAngle_raw() const = 0;
    virtual bool minimumDraftAngle_raw(double value) = 0;
    virtual PlasticRuleValue* nominalRadius_raw() const = 0;
    virtual PlasticRuleValue* knifeEdgeThreshold_raw() const = 0;
    virtual PlasticRuleValue* revealHeight_raw() const = 0;
    virtual PlasticRuleValue* clearance_raw() const = 0;
    virtual Design* parentDesign_raw() const = 0;
    virtual bool isDefault_raw() const = 0;
    virtual bool isDefault_raw(bool value) = 0;
    virtual bool isUsed_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual char* units_raw() const = 0;
};

// Inline wrappers

inline std::string PlasticRule::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool PlasticRule::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<core::Material> PlasticRule::material() const
{
    core::Ptr<core::Material> res = material_raw();
    return res;
}

inline bool PlasticRule::material(const core::Ptr<core::Material>& value)
{
    return material_raw(value.get());
}

inline double PlasticRule::minimumThickness() const
{
    double res = minimumThickness_raw();
    return res;
}

inline bool PlasticRule::minimumThickness(double value)
{
    return minimumThickness_raw(value);
}

inline double PlasticRule::maximumThickness() const
{
    double res = maximumThickness_raw();
    return res;
}

inline bool PlasticRule::maximumThickness(double value)
{
    return maximumThickness_raw(value);
}

inline core::Ptr<PlasticRuleValue> PlasticRule::thickness() const
{
    core::Ptr<PlasticRuleValue> res = thickness_raw();
    return res;
}

inline core::Ptr<PlasticRuleValue> PlasticRule::thicknessVariation() const
{
    core::Ptr<PlasticRuleValue> res = thicknessVariation_raw();
    return res;
}

inline core::Ptr<PlasticRuleValue> PlasticRule::draftAngle() const
{
    core::Ptr<PlasticRuleValue> res = draftAngle_raw();
    return res;
}

inline double PlasticRule::minimumDraftAngle() const
{
    double res = minimumDraftAngle_raw();
    return res;
}

inline bool PlasticRule::minimumDraftAngle(double value)
{
    return minimumDraftAngle_raw(value);
}

inline core::Ptr<PlasticRuleValue> PlasticRule::nominalRadius() const
{
    core::Ptr<PlasticRuleValue> res = nominalRadius_raw();
    return res;
}

inline core::Ptr<PlasticRuleValue> PlasticRule::knifeEdgeThreshold() const
{
    core::Ptr<PlasticRuleValue> res = knifeEdgeThreshold_raw();
    return res;
}

inline core::Ptr<PlasticRuleValue> PlasticRule::revealHeight() const
{
    core::Ptr<PlasticRuleValue> res = revealHeight_raw();
    return res;
}

inline core::Ptr<PlasticRuleValue> PlasticRule::clearance() const
{
    core::Ptr<PlasticRuleValue> res = clearance_raw();
    return res;
}

inline core::Ptr<Design> PlasticRule::parentDesign() const
{
    core::Ptr<Design> res = parentDesign_raw();
    return res;
}

inline bool PlasticRule::isDefault() const
{
    bool res = isDefault_raw();
    return res;
}

inline bool PlasticRule::isDefault(bool value)
{
    return isDefault_raw(value);
}

inline bool PlasticRule::isUsed() const
{
    bool res = isUsed_raw();
    return res;
}

inline bool PlasticRule::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline std::string PlasticRule::units() const
{
    std::string res;

    char* p= units_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PLASTICRULE_API