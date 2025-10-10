Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/SheetMetal/SheetMetalRuleValue.h>
Used to get and set the current value of a value associated with a sheet metal rule. A value can be gotten or set using a string or a double. A string can contain equations and unit specifiers whereas a double defines the size in centimeters. In the user-interface, the user is always setting the string expression. However, when programming it is typically more convenient to set it using an explicit value. When the value is set using a double, Fusion creates an equivalent expression.
SheetMetalRule.bendRadius
,
SheetMetalRule.gap
,
SheetMetalRule.reliefDepth
,
SheetMetalRule.reliefRemnant
,
SheetMetalRule.reliefWidth
,
SheetMetalRule.thickness
,
SheetMetalRule.threeBendReliefRadius
,
SheetMetalRule.twoBendReliefSize
Introduced in version November 2022
