New Dialog
Old Dialog
1. 
1. 
1. 
1. 
1. 
1. 

- 
- 
- 
- 
- 
- 
- 
- 

```
{
	"autodeskProduct":	"Fusion360",
	"type":	"addin",
	"id":	"62a9e55a-dbe4-408d-ad8b-cb802473725e",
	"author":	"Brian Ekins",
	"description":	{
		"":	"This is a test add-in."
	},
	"version":	"V1",
	"runOnStartup":	true,
	"supportedOS":	"windows|mac"
}
```

```
Import adsk.core, adsk.fusion, traceback

def run(context):
    ui = None
    try:
        app = adsk.core.Application.get()
        ui  = app.userInterface
        ui.messageBox('Hello script')

    except:
        if ui:
            ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

```
import adsk.core, adsk.fusion, traceback

def run(context):
    ui = None
    try:
        app = adsk.core.Application.get()
        ui = app.userInterface
        ui.messageBox('Hello addin')

    except:
        if ui:
            ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))

def stop(context):
    ui = None
    try:
        app = adsk.core.Application.get()
        ui  = app.userInterface
        ui.messageBox('Stop addin')

    except:
        if ui:
            ui.messageBox('Failed:\n{}'.format(traceback.format_exc()))
```

- - Indicates a script that is not running. Clicking this icon will run the script.
- - Indicates a script that is currently running. It is rare to see this state because scripts typically run and end. However, creating a script that doesn't end automatically when the run function finishes is possible. - Indicates an add-in that is currently not running. Clicking this icon will start the add-in. - Indicates an add-in that is running. Clicking this icon will stop the add-in.

Several default folders are always searched for scripts and add-ins when Fusion starts. These folders are listed below.

1. 
1. 
1. 
1. 
1.
