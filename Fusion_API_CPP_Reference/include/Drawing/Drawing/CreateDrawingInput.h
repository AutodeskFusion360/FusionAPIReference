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
#include "../../Core/Base.h"
#include "../DrawingTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef DRAWINGXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_DRAWING_CREATEDRAWINGINPUT_CPP__
# define ADSK_DRAWING_CREATEDRAWINGINPUT_API XI_EXPORT
# else
# define ADSK_DRAWING_CREATEDRAWINGINPUT_API
# endif
#else
# define ADSK_DRAWING_CREATEDRAWINGINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataEventHandler;
}}
namespace adsk { namespace drawing {
    class AutomationPreferences;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Input parameters for drawing creation. Create via DrawingManager.createDrawingInput().
class CreateDrawingInput : public core::Base {
public:

    /// Gets and sets the drawing creation mode. Default: AutomaticDrawingCreationMode.
    DrawingCreationModes creationMode() const;
    bool creationMode(DrawingCreationModes value);

    /// Sets the async data event handler for monitoring progress of drawing creation.
    /// Currently not used as drawing creation is synchronous.
    bool handler(core::DataEventHandler* handler);

    /// Gets and sets the base document type option for drawing creation. Specifies whether to create from scratch or from a template.
    /// Currently only FromScratchBaseDocumentType is supported. Default: FromScratchBaseDocumentType.
    BaseDocumentTypes baseDocumentType() const;
    bool baseDocumentType(BaseDocumentTypes value);

    /// Gets and sets the drawing standard (ISO or ASME). Default: ISODrawingStandardType.
    DrawingStandardTypes standard() const;
    bool standard(DrawingStandardTypes value);

    /// Gets and sets the drawing units (mm or inch). Default: MillimeterDrawingUnitType.
    DrawingUnitTypes units() const;
    bool units(DrawingUnitTypes value);

    /// Gets and sets the sheet size (A4-A0) when the standard is set to ISO. This defaults to A3ISOSheetSize.
    ISOSheetSizes isoSheetSize() const;
    bool isoSheetSize(ISOSheetSizes value);

    /// Gets and sets the ASME sheet size (A-E). Used when standard is ASME. Default: BASMESheetSize.
    ASMESheetSizes asmeSheetSize() const;
    bool asmeSheetSize(ASMESheetSizes value);

    /// Gets and sets the sheet orientation. Default: LandscapeSheetOrientationType.
    SheetOrientationTypes orientationType() const;
    bool orientationType(SheetOrientationTypes value);

    /// Gets and sets which hierarchy levels get sheets. FirstLevelOnlySheetCreationType reduces file size. Default: AllLevelsSheetCreationType.
    SheetCreationTypes sheetCreationType() const;
    bool sheetCreationType(SheetCreationTypes value);

    /// Gets the AutomationPreferences for configuring global, assembly, component, and sheet metal
    /// sheet settings. Modifications to the returned object directly affect drawing creation.
    core::Ptr<AutomationPreferences> automationPreferences() const;

    ADSK_DRAWING_CREATEDRAWINGINPUT_API static const char* classType();
    ADSK_DRAWING_CREATEDRAWINGINPUT_API const char* objectType() const override;
    ADSK_DRAWING_CREATEDRAWINGINPUT_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_CREATEDRAWINGINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DrawingCreationModes creationMode_raw() const = 0;
    virtual bool creationMode_raw(DrawingCreationModes value) = 0;
    virtual bool handler_raw(core::DataEventHandler* handler) = 0;
    virtual BaseDocumentTypes baseDocumentType_raw() const = 0;
    virtual bool baseDocumentType_raw(BaseDocumentTypes value) = 0;
    virtual DrawingStandardTypes standard_raw() const = 0;
    virtual bool standard_raw(DrawingStandardTypes value) = 0;
    virtual DrawingUnitTypes units_raw() const = 0;
    virtual bool units_raw(DrawingUnitTypes value) = 0;
    virtual ISOSheetSizes isoSheetSize_raw() const = 0;
    virtual bool isoSheetSize_raw(ISOSheetSizes value) = 0;
    virtual ASMESheetSizes asmeSheetSize_raw() const = 0;
    virtual bool asmeSheetSize_raw(ASMESheetSizes value) = 0;
    virtual SheetOrientationTypes orientationType_raw() const = 0;
    virtual bool orientationType_raw(SheetOrientationTypes value) = 0;
    virtual SheetCreationTypes sheetCreationType_raw() const = 0;
    virtual bool sheetCreationType_raw(SheetCreationTypes value) = 0;
    virtual AutomationPreferences* automationPreferences_raw() const = 0;
};

// Inline wrappers

inline DrawingCreationModes CreateDrawingInput::creationMode() const
{
    DrawingCreationModes res = creationMode_raw();
    return res;
}

inline bool CreateDrawingInput::creationMode(DrawingCreationModes value)
{
    return creationMode_raw(value);
}

inline bool CreateDrawingInput::handler(core::DataEventHandler* handler)
{
    bool res = handler_raw(handler);
    return res;
}

inline BaseDocumentTypes CreateDrawingInput::baseDocumentType() const
{
    BaseDocumentTypes res = baseDocumentType_raw();
    return res;
}

inline bool CreateDrawingInput::baseDocumentType(BaseDocumentTypes value)
{
    return baseDocumentType_raw(value);
}

inline DrawingStandardTypes CreateDrawingInput::standard() const
{
    DrawingStandardTypes res = standard_raw();
    return res;
}

inline bool CreateDrawingInput::standard(DrawingStandardTypes value)
{
    return standard_raw(value);
}

inline DrawingUnitTypes CreateDrawingInput::units() const
{
    DrawingUnitTypes res = units_raw();
    return res;
}

inline bool CreateDrawingInput::units(DrawingUnitTypes value)
{
    return units_raw(value);
}

inline ISOSheetSizes CreateDrawingInput::isoSheetSize() const
{
    ISOSheetSizes res = isoSheetSize_raw();
    return res;
}

inline bool CreateDrawingInput::isoSheetSize(ISOSheetSizes value)
{
    return isoSheetSize_raw(value);
}

inline ASMESheetSizes CreateDrawingInput::asmeSheetSize() const
{
    ASMESheetSizes res = asmeSheetSize_raw();
    return res;
}

inline bool CreateDrawingInput::asmeSheetSize(ASMESheetSizes value)
{
    return asmeSheetSize_raw(value);
}

inline SheetOrientationTypes CreateDrawingInput::orientationType() const
{
    SheetOrientationTypes res = orientationType_raw();
    return res;
}

inline bool CreateDrawingInput::orientationType(SheetOrientationTypes value)
{
    return orientationType_raw(value);
}

inline SheetCreationTypes CreateDrawingInput::sheetCreationType() const
{
    SheetCreationTypes res = sheetCreationType_raw();
    return res;
}

inline bool CreateDrawingInput::sheetCreationType(SheetCreationTypes value)
{
    return sheetCreationType_raw(value);
}

inline core::Ptr<AutomationPreferences> CreateDrawingInput::automationPreferences() const
{
    core::Ptr<AutomationPreferences> res = automationPreferences_raw();
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_CREATEDRAWINGINPUT_API