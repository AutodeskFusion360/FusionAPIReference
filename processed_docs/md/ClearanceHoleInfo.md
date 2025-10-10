Derived from:
Base
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Features/ClearanceHoleInfo.h>
This object defines the methods and properties that define the size of a clearance hole. This object is used to create new hole features whose size is defined as a clearance hole for a specific size fastener. A new ClearanceHoleInfo object is created by using the ClearanceHoleInfo.create method. To determine valid values when creating a ClearanceHoleInfo object, you can use the ClearanceHoleDataQuery object, which is statically created using the ClearanceHoleDataQuery.create method.
If the ClearanceHoleInfo object is obtained from an existing HoleFeature object, modifying properties on the returned ClearanceHoleInfo object will modify the feature.
ClearanceHoleInfo.create
,
HoleFeature.clearanceHoleInfo
Introduced in version September 2025
