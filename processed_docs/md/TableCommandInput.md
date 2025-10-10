Derived from:
CommandInput
Object
Defined in namespace "adsk::core" and the header file is <Core/UserInterface/TableCommandInput.h>
Represents a table within a command dialog. The table consists of rows and columns where each cell can contain another command input. The selection and button row command inputs cannot be used within a table. In addition to the rows and columns, each table can optionally have a toolbar of separate command inputs that is shown at the bottom of the table.
A table command input can conceptually be compared to an Excel table where you have an infinite number of rows and columns available but use a small portion. As you add inputs to the table, the table will adjust so all used columns are visible. The visible number of rows is controlled by you and if you create more rows than can be displayed a scroll bar becomes available.
For an example of this command input, see the loft command which uses it to show the selected profiles and rails.
CommandInputs.addTableCommandInput
Introduced in version September 2016
