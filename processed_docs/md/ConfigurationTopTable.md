Derived from:
ConfigurationTable
Object
Defined in namespace "adsk::fusion" and the header file is <Fusion/Configurations/ConfigurationTopTable.h>
API object representing the top configuration table associated with a configured design.
When obtained from the DataFile object of a configured design, the functionality is limited because it's not loaded in Fusion, and there is no access to the Fusion objects represented in the table. For example, any properties that return a Component or Parameter will return null because those objects aren't available.
Design.configurationTopTable
,
Design.createConfiguredDesign
,
FlatPatternProduct.configurationTopTable
,
FlatPatternProduct.createConfiguredDesign
,
WorkingModel.configurationTopTable
,
WorkingModel.createConfiguredDesign
Introduced in version January 2024
