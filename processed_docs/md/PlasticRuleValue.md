Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Plastic/PlasticRuleValue.h>
Used to get and set the current value associated with a plastic rule. A value can be gotten or set using a string or a double. A string can contain equations and unit specifiers, whereas a double defines the size in centimeters. In the user interface, the user is always setting the string expression. However, when programming, it is typically more convenient to set it using an explicit value. When the value is set using a double, Fusion creates an equivalent expression.
PlasticRule.clearance
,
PlasticRule.draftAngle
,
PlasticRule.knifeEdgeThreshold
,
PlasticRule.nominalRadius
,
PlasticRule.revealHeight
,
PlasticRule.thickness
,
PlasticRule.thicknessVariation
Introduced in version January 2024
