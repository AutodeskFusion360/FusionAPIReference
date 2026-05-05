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
#include <API/XInterface/Public/Core/Base.h>
#include "../FusionTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHTEXTS_CPP__
# define ADSK_FUSION_SKETCHTEXTS_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHTEXTS_API
# endif
#else
# define ADSK_FUSION_SKETCHTEXTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class SketchText;
    class SketchTextInput;
}}

namespace adsk { namespace fusion {

/// The collection of text blocks in a sketch. This provides access to the existing
/// text blocks and supports creating new text blocks.
class SketchTexts : public core::Base {
public:

    /// Function that returns the specified sketch text using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    core::Ptr<SketchText> item(size_t index) const;

    /// Returns the number of texts in the sketch.
    size_t count() const;

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Creates a SketchTextInput object that can be used to define additional settings when creating sketch text. The
    /// SketchTextInput object is equivalent to the Sketch Text dialog in that it collects all of the input required
    /// to create sketch text. Once the properties of the SketchTextInput object have been defined, use the add method
    /// to create the sketch text.
    /// formattedText : The text used for the sketch text. This is a simple string as no additional formatting is currently supported.
    /// height : The height of the text in centimeters.
    /// position : The position of the text on the x-y plane of the sketch. The text must lie on the x-y plane so the Z component
    /// of the point is ignored and always treated as zero.
    /// Returns a SketchTextInput object that can be used to set additional formatting and is used as input to the add method.
    core::Ptr<SketchTextInput> createInput(const std::string& formattedText, double height, const core::Ptr<core::Point3D>& position);

    /// Creates a sketch text.
    /// input : A SketchTextInput object created using the SketchTexts.createInput method.
    /// Returns the newly created SketchText object or null in the case of failure.
    core::Ptr<SketchText> add(const core::Ptr<SketchTextInput>& input);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// This method has been retired and replaced by createInput3. Use the new method to define text using an expression
    /// that can combine literal text with parameter values.
    /// formattedText : The text used for the sketch text. This is the equivalent of the text that would be entered into the "Text" command
    /// dialog. It can be a simple string or it can be an expression that combines text with parameter values. In the case
    /// of a simple string, no quotes are needed, but for an expression, text should be quoted using a single quote.
    /// height : The height of the text in centimeters.
    /// Returns a SketchTextInput object that can be used to set additional formatting and is used as input to the add method.
    core::Ptr<SketchTextInput> createInput2(const std::string& formattedText, double height);

    /// Creates a SketchTextInput object that is used to define the additional input to create text. The SketchTextInput
    /// object is equivalent to the Sketch Text dialog in that it collects all of the input required to create sketch text.
    /// You must call setAsFitOnPath, setAsAlongPath, or setAsMultiLine methods to define one of the three types of text.
    /// Once the properties of the SketchTextInput object have been defined, pass the SketchTextInput to the add method
    /// to create the sketch text.
    /// expression : This defines the expression of the parameter that will be created when this SketchText is created. It can be a simple string
    /// or it can be an expression that combines text with parameter values. Simple text must be enclosed within single quotes,
    /// the same as it is required in the TEXT command dialog.
    /// 
    /// An example of a valid expression is: "'Length: ' + lengthParam" and will result in "Length: 3.0 mm". The expression
    /// result can be obtained by using the text property on the created SketchTextInput object.
    /// height : A ValueInput that defines the height of the text. This value is used to create a parameter that will control
    /// the height of the text. It can be a value where it defines the height of the text in centimeters, or it can
    /// be a string where it defines the equation of the parameter and must evaluate to a valid length.
    /// Returns a SketchTextInput object that can be used to set additional formatting and is used as input to the add method.
    core::Ptr<SketchTextInput> createInput3(const std::string& expression, const core::Ptr<core::ValueInput>& height);

    typedef SketchText iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_FUSION_SKETCHTEXTS_API static const char* classType();
    ADSK_FUSION_SKETCHTEXTS_API const char* objectType() const override;
    ADSK_FUSION_SKETCHTEXTS_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHTEXTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchText* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual SketchTextInput* createInput_raw(const char* formattedText, double height, core::Point3D* position) = 0;
    virtual SketchText* add_raw(SketchTextInput* input) = 0;
    virtual SketchTextInput* createInput2_raw(const char* formattedText, double height) = 0;
    virtual SketchTextInput* createInput3_raw(const char* expression, core::ValueInput* height) = 0;
};

// Inline wrappers

inline core::Ptr<SketchText> SketchTexts::item(size_t index) const
{
    core::Ptr<SketchText> res = item_raw(index);
    return res;
}

inline size_t SketchTexts::count() const
{
    size_t res = count_raw();
    return res;
}

inline core::Ptr<SketchTextInput> SketchTexts::createInput(const std::string& formattedText, double height, const core::Ptr<core::Point3D>& position)
{
    core::Ptr<SketchTextInput> res = createInput_raw(formattedText.c_str(), height, position.get());
    return res;
}

inline core::Ptr<SketchText> SketchTexts::add(const core::Ptr<SketchTextInput>& input)
{
    core::Ptr<SketchText> res = add_raw(input.get());
    return res;
}

inline core::Ptr<SketchTextInput> SketchTexts::createInput2(const std::string& formattedText, double height)
{
    core::Ptr<SketchTextInput> res = createInput2_raw(formattedText.c_str(), height);
    return res;
}

inline core::Ptr<SketchTextInput> SketchTexts::createInput3(const std::string& expression, const core::Ptr<core::ValueInput>& height)
{
    core::Ptr<SketchTextInput> res = createInput3_raw(expression.c_str(), height.get());
    return res;
}

template <class OutputIterator> inline void SketchTexts::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHTEXTS_API