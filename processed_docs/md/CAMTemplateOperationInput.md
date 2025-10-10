Derived from:
Base
Object
Defined in namespace "adsk::cam" and the header file is <Cam/CAMTemplate/CAMTemplateOperationInput.h>
This functionality is provided as a preview
				of intended future API capabilities. You are encouraged to use it and report any problems or suggestions using theFusion API and Scriptsforum.Because this is a preview of future functionality, there is the possibility that it will change, which will possibly
		        break any existing programs that use this functionality. Because of that, you should never deliver any programs that use
		        any preview capabilities. For a distributed program, you should wait until it has moved from preview to released state.

A CAMTemplateOperationInput provides access to Operation Template parameters for editing, in much the same way as OperationInput provides access to Operation parameters for editing. Operation Template parameters are slightly different from Operation parameters, for instance in terms of how tools and geometry selections can be specified, so an OperationInput for a given strategy type has a slightly different set of parameters from a CAMTemplateOperationInput for that same strategy type.
CAMTemplateOperations.get
,
CAMTemplateOperations.makeInput
Introduced in version March 2025
