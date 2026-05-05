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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SHEETMETALRULE_CPP__
# define ADSK_FUSION_SHEETMETALRULE_API XI_EXPORT
# else
# define ADSK_FUSION_SHEETMETALRULE_API
# endif
#else
# define ADSK_FUSION_SHEETMETALRULE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Design;
    class SheetMetalRuleValue;
}}

namespace adsk { namespace fusion {

/// A sheet metal rule.
class SheetMetalRule : public core::Base {
public:

    /// The name of the sheet metal rule. When setting the name, it should be
    /// unique with respect to other sheet metal rules in the design or library.
    std::string name() const;
    bool name(const std::string& value);

    /// The thickness of the part. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the thickness.
    core::Ptr<SheetMetalRuleValue> thickness() const;

    /// The K Factor value that is used when calculating the flat pattern. It must be
    /// a value between 0 and 1.
    double kFactor() const;
    bool kFactor(double value);

    /// The value used for miter, rip, and seam gaps. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the gap.
    core::Ptr<SheetMetalRuleValue> gap() const;

    /// The interior radius of the bends. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the radius.
    core::Ptr<SheetMetalRuleValue> bendRadius() const;

    /// The relief width used in the flat pattern. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the relief width.
    core::Ptr<SheetMetalRuleValue> reliefWidth() const;

    /// The relief depth used in the flat pattern. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the relief depth.
    core::Ptr<SheetMetalRuleValue> reliefDepth() const;

    /// The relief remnant used in the flat pattern. Use the returned SheetMetalRuleValue
    /// object to get and set the current value of the relief remnant.
    core::Ptr<SheetMetalRuleValue> reliefRemnant() const;

    /// Gets and sets the bend relief shape to use.
    BendReliefShapes reliefShape() const;
    bool reliefShape(BendReliefShapes value);

    /// Gets and sets the relief shape to use when two bends intersect.
    /// 
    /// When set to square or round relief shape, the value of the twoBendReliefPlacement
    /// property will be set to IntersectionTwoBendReliefPlacement by default. For round and square relief
    /// shapes you can change the twoBendReliefPlacement property to VertexTwoBendReliefPlacement.
    /// For round shapes, you can also use TangentTwoBendReliefPlacement.
    TwoBendReliefShapes twoBendReliefShape() const;
    bool twoBendReliefShape(TwoBendReliefShapes value);

    /// The relief size used when two bends meet in the flat pattern and the relief
    /// shape is round or square. Use the returned SheetMetalRuleValue object to
    /// get and set the current value of the relief size.
    core::Ptr<SheetMetalRuleValue> twoBendReliefSize() const;

    /// Gets and sets the relief placement for a two-bend relief shape. When the relief shape
    /// is round, both intersection and tangent are valid placements. For square shape, only
    /// intersection is valid. For all other shapes, this property will return NoTwoBendReliefPlacement
    /// because the placement option is not used.
    TwoBendReliefPlacements twoBendReliefPlacement() const;
    bool twoBendReliefPlacement(TwoBendReliefPlacements value);

    /// Gets and sets the relief shape to use when three bends intersect.
    ThreeBendReliefShapes threeBendReliefShape() const;
    bool threeBendReliefShape(ThreeBendReliefShapes value);

    /// The relief size used when three bends meet in the flat pattern and the relief shape
    /// is "round with radius". Use the returned SheetMetalRuleValue object to get and set
    /// the current value of the relief size.
    core::Ptr<SheetMetalRuleValue> threeBendReliefRadius() const;

    /// Returns the parent design for a sheet metal rule in a design or it
    /// returns null if the sheet metal rule is in the library.
    core::Ptr<Design> parentDesign() const;

    /// Gets and sets which rule in a library is the default rule. This is only
    /// valid for rules in a library and will fail for rules in a design.
    bool isDefault() const;
    bool isDefault(bool value);

    /// Indicates if this rule is currently being used by a component. This is only
    /// valid for rules in a design.
    bool isUsed() const;

    /// Deletes the rule from the design or library. If the rule is in the
    /// library and set as the default rule, you cannot delete it. If the
    /// rule is in a design and is used by a component, you cannot delete it.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets the units this rule uses to display values in the dialog.
    /// Rules currently only use mm or inch and the units are permanently
    /// associated with a rule and cannot be modified.
    std::string units() const;

    ADSK_FUSION_SHEETMETALRULE_API static const char* classType();
    ADSK_FUSION_SHEETMETALRULE_API const char* objectType() const override;
    ADSK_FUSION_SHEETMETALRULE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SHEETMETALRULE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual SheetMetalRuleValue* thickness_raw() const = 0;
    virtual double kFactor_raw() const = 0;
    virtual bool kFactor_raw(double value) = 0;
    virtual SheetMetalRuleValue* gap_raw() const = 0;
    virtual SheetMetalRuleValue* bendRadius_raw() const = 0;
    virtual SheetMetalRuleValue* reliefWidth_raw() const = 0;
    virtual SheetMetalRuleValue* reliefDepth_raw() const = 0;
    virtual SheetMetalRuleValue* reliefRemnant_raw() const = 0;
    virtual BendReliefShapes reliefShape_raw() const = 0;
    virtual bool reliefShape_raw(BendReliefShapes value) = 0;
    virtual TwoBendReliefShapes twoBendReliefShape_raw() const = 0;
    virtual bool twoBendReliefShape_raw(TwoBendReliefShapes value) = 0;
    virtual SheetMetalRuleValue* twoBendReliefSize_raw() const = 0;
    virtual TwoBendReliefPlacements twoBendReliefPlacement_raw() const = 0;
    virtual bool twoBendReliefPlacement_raw(TwoBendReliefPlacements value) = 0;
    virtual ThreeBendReliefShapes threeBendReliefShape_raw() const = 0;
    virtual bool threeBendReliefShape_raw(ThreeBendReliefShapes value) = 0;
    virtual SheetMetalRuleValue* threeBendReliefRadius_raw() const = 0;
    virtual Design* parentDesign_raw() const = 0;
    virtual bool isDefault_raw() const = 0;
    virtual bool isDefault_raw(bool value) = 0;
    virtual bool isUsed_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual char* units_raw() const = 0;
};

// Inline wrappers

inline std::string SheetMetalRule::name() const
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

inline bool SheetMetalRule::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::thickness() const
{
    core::Ptr<SheetMetalRuleValue> res = thickness_raw();
    return res;
}

inline double SheetMetalRule::kFactor() const
{
    double res = kFactor_raw();
    return res;
}

inline bool SheetMetalRule::kFactor(double value)
{
    return kFactor_raw(value);
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::gap() const
{
    core::Ptr<SheetMetalRuleValue> res = gap_raw();
    return res;
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::bendRadius() const
{
    core::Ptr<SheetMetalRuleValue> res = bendRadius_raw();
    return res;
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::reliefWidth() const
{
    core::Ptr<SheetMetalRuleValue> res = reliefWidth_raw();
    return res;
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::reliefDepth() const
{
    core::Ptr<SheetMetalRuleValue> res = reliefDepth_raw();
    return res;
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::reliefRemnant() const
{
    core::Ptr<SheetMetalRuleValue> res = reliefRemnant_raw();
    return res;
}

inline BendReliefShapes SheetMetalRule::reliefShape() const
{
    BendReliefShapes res = reliefShape_raw();
    return res;
}

inline bool SheetMetalRule::reliefShape(BendReliefShapes value)
{
    return reliefShape_raw(value);
}

inline TwoBendReliefShapes SheetMetalRule::twoBendReliefShape() const
{
    TwoBendReliefShapes res = twoBendReliefShape_raw();
    return res;
}

inline bool SheetMetalRule::twoBendReliefShape(TwoBendReliefShapes value)
{
    return twoBendReliefShape_raw(value);
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::twoBendReliefSize() const
{
    core::Ptr<SheetMetalRuleValue> res = twoBendReliefSize_raw();
    return res;
}

inline TwoBendReliefPlacements SheetMetalRule::twoBendReliefPlacement() const
{
    TwoBendReliefPlacements res = twoBendReliefPlacement_raw();
    return res;
}

inline bool SheetMetalRule::twoBendReliefPlacement(TwoBendReliefPlacements value)
{
    return twoBendReliefPlacement_raw(value);
}

inline ThreeBendReliefShapes SheetMetalRule::threeBendReliefShape() const
{
    ThreeBendReliefShapes res = threeBendReliefShape_raw();
    return res;
}

inline bool SheetMetalRule::threeBendReliefShape(ThreeBendReliefShapes value)
{
    return threeBendReliefShape_raw(value);
}

inline core::Ptr<SheetMetalRuleValue> SheetMetalRule::threeBendReliefRadius() const
{
    core::Ptr<SheetMetalRuleValue> res = threeBendReliefRadius_raw();
    return res;
}

inline core::Ptr<Design> SheetMetalRule::parentDesign() const
{
    core::Ptr<Design> res = parentDesign_raw();
    return res;
}

inline bool SheetMetalRule::isDefault() const
{
    bool res = isDefault_raw();
    return res;
}

inline bool SheetMetalRule::isDefault(bool value)
{
    return isDefault_raw(value);
}

inline bool SheetMetalRule::isUsed() const
{
    bool res = isUsed_raw();
    return res;
}

inline bool SheetMetalRule::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline std::string SheetMetalRule::units() const
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

#undef ADSK_FUSION_SHEETMETALRULE_API