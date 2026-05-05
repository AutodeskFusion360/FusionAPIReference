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
# ifdef __COMPILING_ADSK_DRAWING_DRAWINGMANAGER_CPP__
# define ADSK_DRAWING_DRAWINGMANAGER_API XI_EXPORT
# else
# define ADSK_DRAWING_DRAWINGMANAGER_API
# endif
#else
# define ADSK_DRAWING_DRAWINGMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}
namespace adsk { namespace drawing {
    class CreateDrawingInput;
}}

namespace adsk { namespace drawing {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Application-level drawing functionality. Access via the static get property.
class DrawingManager : public core::Base {
public:

    /// Returns the DrawingManager singleton instance.
    /// DrawingManager object, or null on failure.
    static core::Ptr<DrawingManager> get();

    /// Creates an input object that is used to define all of the settings needed to create a new drawing.
    /// After editing the returned input object, you can use it as input to a create method to create the new drawing.
    /// Note: Currently only AutomaticDrawingCreationMode is supported.
    /// design : DataFile containing the source design.
    /// creationMode : The drawing creation mode. Only AutomaticDrawingCreationMode is currently supported.
    /// CreateDrawingInput object, or null on failure.
    core::Ptr<CreateDrawingInput> createDrawingInput(const core::Ptr<core::DataFile>& design, DrawingCreationModes creationMode);

    /// Creates an drawing document based on the settings defined in the input object.
    /// input : A CreateDrawingInput object that was created using the createDrawingInput method on the DrawingManager object.
    /// DataFile of created drawing, or null on failure.
    core::Ptr<core::DataFile> createDrawing(const core::Ptr<CreateDrawingInput>& input);

    ADSK_DRAWING_DRAWINGMANAGER_API static const char* classType();
    ADSK_DRAWING_DRAWINGMANAGER_API const char* objectType() const override;
    ADSK_DRAWING_DRAWINGMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_DRAWING_DRAWINGMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_DRAWING_DRAWINGMANAGER_API static DrawingManager* get_raw();
    virtual CreateDrawingInput* createDrawingInput_raw(core::DataFile* design, DrawingCreationModes creationMode) = 0;
    virtual core::DataFile* createDrawing_raw(CreateDrawingInput* input) = 0;
};

// Inline wrappers

inline core::Ptr<DrawingManager> DrawingManager::get()
{
    core::Ptr<DrawingManager> res = get_raw();
    return res;
}

inline core::Ptr<CreateDrawingInput> DrawingManager::createDrawingInput(const core::Ptr<core::DataFile>& design, DrawingCreationModes creationMode)
{
    core::Ptr<CreateDrawingInput> res = createDrawingInput_raw(design.get(), creationMode);
    return res;
}

inline core::Ptr<core::DataFile> DrawingManager::createDrawing(const core::Ptr<CreateDrawingInput>& input)
{
    core::Ptr<core::DataFile> res = createDrawing_raw(input.get());
    return res;
}
}// namespace drawing
}// namespace adsk

#undef ADSK_DRAWING_DRAWINGMANAGER_API