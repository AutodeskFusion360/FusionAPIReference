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
#include "Arrange2DEnvelopeInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_CPP__
# define ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class ConstructionPlane;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// This object is used to specify the input needed to define a 2D rectangular envelope.
class Arrange2DPlaneEnvelopeInput : public Arrange2DEnvelopeInput {
public:

    /// Gets and sets the construction plane that will be used for this envelope.
    core::Ptr<ConstructionPlane> plane() const;
    bool plane(const core::Ptr<ConstructionPlane>& value);

    /// Gets and sets length of the envelope. This is the size of the envelope as measured along the X axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    core::Ptr<core::ValueInput> length() const;
    bool length(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the width of the envelope. This is the size of the envelope as measured along the Y axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    core::Ptr<core::ValueInput> width() const;
    bool width(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the X offset of the envelope from the origin of the construction plane. This value defaults to zero.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    core::Ptr<core::ValueInput> originXOffset() const;
    bool originXOffset(const core::Ptr<core::ValueInput>& value);

    /// Gets and sets the Y offset of the envelope from the origin of the construction plane. This value defaults to zero.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    core::Ptr<core::ValueInput> originYOffset() const;
    bool originYOffset(const core::Ptr<core::ValueInput>& value);

    /// Specifies the number of envelopes that can be used. The default value is -1 which means there is no limit.
    /// 
    /// This value will become a parameter when the arrangement is created. When created with a real value it must be a whole number.
    /// You can also use a string where it is interpreted the same as when entered in the command dialog. The expression must result
    /// in a unitless whole number. It's also possible to use an equation like "Total / 4" where "Total" is an existing parameter and be
    /// evenly divided by four.
    core::Ptr<core::ValueInput> quantity() const;
    bool quantity(const core::Ptr<core::ValueInput>& value);

    /// For a 2D plane envelope, this defines the spacing between envelopes when there is more than one.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created
    /// using a real number it is in centimeters. If you use a string, it is evaluated the same as a value
    /// would be in the command dialog and uses the current document units. For example, if the document
    /// units are inch and you specific "0.25" it will result in 1/4 inch clearance. You can also specify
    /// the units as part of the expression, such as "0.25 in + 2 mm". And you can define equations like
    /// "ToolDia + 2 mm" where "ToolDia" is an existing parameter.
    core::Ptr<core::ValueInput> envelopeSpacing() const;
    bool envelopeSpacing(const core::Ptr<core::ValueInput>& value);

    ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ConstructionPlane* plane_raw() const = 0;
    virtual bool plane_raw(ConstructionPlane* value) = 0;
    virtual core::ValueInput* length_raw() const = 0;
    virtual bool length_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* width_raw() const = 0;
    virtual bool width_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* originXOffset_raw() const = 0;
    virtual bool originXOffset_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* originYOffset_raw() const = 0;
    virtual bool originYOffset_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* quantity_raw() const = 0;
    virtual bool quantity_raw(core::ValueInput* value) = 0;
    virtual core::ValueInput* envelopeSpacing_raw() const = 0;
    virtual bool envelopeSpacing_raw(core::ValueInput* value) = 0;
};

// Inline wrappers

inline core::Ptr<ConstructionPlane> Arrange2DPlaneEnvelopeInput::plane() const
{
    core::Ptr<ConstructionPlane> res = plane_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::plane(const core::Ptr<ConstructionPlane>& value)
{
    return plane_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::length() const
{
    core::Ptr<core::ValueInput> res = length_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::length(const core::Ptr<core::ValueInput>& value)
{
    return length_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::width() const
{
    core::Ptr<core::ValueInput> res = width_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::width(const core::Ptr<core::ValueInput>& value)
{
    return width_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::originXOffset() const
{
    core::Ptr<core::ValueInput> res = originXOffset_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::originXOffset(const core::Ptr<core::ValueInput>& value)
{
    return originXOffset_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::originYOffset() const
{
    core::Ptr<core::ValueInput> res = originYOffset_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::originYOffset(const core::Ptr<core::ValueInput>& value)
{
    return originYOffset_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::quantity() const
{
    core::Ptr<core::ValueInput> res = quantity_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::quantity(const core::Ptr<core::ValueInput>& value)
{
    return quantity_raw(value.get());
}

inline core::Ptr<core::ValueInput> Arrange2DPlaneEnvelopeInput::envelopeSpacing() const
{
    core::Ptr<core::ValueInput> res = envelopeSpacing_raw();
    return res;
}

inline bool Arrange2DPlaneEnvelopeInput::envelopeSpacing(const core::Ptr<core::ValueInput>& value)
{
    return envelopeSpacing_raw(value.get());
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGE2DPLANEENVELOPEINPUT_API