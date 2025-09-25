//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../../Core/Base.h"
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_CANVASES_CPP__
# define ADSK_FUSION_CANVASES_API XI_EXPORT
# else
# define ADSK_FUSION_CANVASES_API
# endif
#else
# define ADSK_FUSION_CANVASES_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Canvas;
    class CanvasInput;
}}

namespace adsk { namespace fusion {

/// Provides access to the Canvases in a component and provides the functionality
/// to add new Canvases.
class Canvases : public core::Base {
public:

    /// Returns the specified canvas using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<Canvas> item(size_t index) const;

    /// Returns the specified canvas using the name of the canvas.
    /// name : The name of the canvas as seen in the browser and timeline.
    /// Returns the specified Canvas, if it exists. Otherwise it returns null.
    core::Ptr<Canvas> itemByName(const std::string& name) const;

    /// Returns the number of canvases in the component.
    size_t count() const;

    /// Creates a new canvas. Use the createInput method to first create an input object and
    /// set the available options. Then, pass that input object to the add method to create the canvas.
    /// input : The CanvasInput object that defines the required information needed to create a new canvas.
    /// A CanvasInput object is the logical equivalent to the command dialog when creating
    /// a canvas. It provides access to the various options when creating a canvas. Calling the add method and passing
    /// in the CanvasInput is the equivalent to clicking the OK button on the dialog to create the canvas.
    /// Returns the newly created Canvas object.
    core::Ptr<Canvas> add(const core::Ptr<CanvasInput>& input);

    /// Creates a new CanvasInput object. A CanvasInput object is the logical equivalent to the command dialog when creating
    /// a canvas. It provides access to the various options when creating a canvas. Calling the add method and passing
    /// in the CanvasInput is the equivalent to clicking the OK button on the dialog to create the canvas.
    /// imageFilename : The full filename to the image to use for the canvas. PNG, JPEG, and TIFF files are supported.
    /// planarEntity : A planar BRepFace or a Construction plane to create the canvas on. If the canvas is being created in a base
    /// feature or in a direct modeling design, this can be a Plane object.
    /// Returns a CanvasInput object or null in the case of failure.
    core::Ptr<CanvasInput> createInput(const std::string& imageFilename, const core::Ptr<core::Base>& planarEntity);

    typedef Canvas iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_CANVASES_API static const char* classType();
    ADSK_FUSION_CANVASES_API const char* objectType() const override;
    ADSK_FUSION_CANVASES_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_CANVASES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Canvas* item_raw(size_t index) const = 0;
    virtual Canvas* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Canvas* add_raw(CanvasInput* input) = 0;
    virtual CanvasInput* createInput_raw(const char* imageFilename, core::Base* planarEntity) = 0;
};

// Inline wrappers

inline core::Ptr<Canvas> Canvases::item(size_t index) const
{
    core::Ptr<Canvas> res = item_raw(index);
    return res;
}

inline core::Ptr<Canvas> Canvases::itemByName(const std::string& name) const
{
    core::Ptr<Canvas> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Canvases::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<Canvas> Canvases::add(const core::Ptr<CanvasInput>& input)
{
    core::Ptr<Canvas> res = add_raw(input.get());
    return res;
}

inline core::Ptr<CanvasInput> Canvases::createInput(const std::string& imageFilename, const core::Ptr<core::Base>& planarEntity)
{
    core::Ptr<CanvasInput> res = createInput_raw(imageFilename.c_str(), planarEntity.get());
    return res;
}

template <class OutputIterator> inline void Canvases::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_CANVASES_API