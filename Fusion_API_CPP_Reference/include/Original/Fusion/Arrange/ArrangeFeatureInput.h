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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_ARRANGEFEATUREINPUT_CPP__
# define ADSK_FUSION_ARRANGEFEATUREINPUT_API XI_EXPORT
# else
# define ADSK_FUSION_ARRANGEFEATUREINPUT_API
# endif
#else
# define ADSK_FUSION_ARRANGEFEATUREINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}
namespace adsk { namespace fusion {
    class Arrange2DPlaneEnvelopeInput;
    class Arrange2DProfileOrFaceEnvelopeInput;
    class Arrange3DEnvelopeInput;
    class ArrangeComponents;
    class ArrangeDefinitionInput;
    class ConstructionPlane;
}}

namespace adsk { namespace fusion {

/// The ArrangeFeatureInput object is the base class for the different types of input
/// objects used to create an arrange feature.
class ArrangeFeatureInput : public core::Base {
public:

    /// Returns the arrange feature solver type defined by this input.
    ArrangeSolverTypes solverType() const;

    /// Returns a definition input object that provides access to the information to define an arrange feature.
    /// This will return different types of definition inputs depending on the solver type specified when
    /// creating the input.
    core::Ptr<ArrangeDefinitionInput> definition() const;

    /// Returns the ArrangeComponents object associated with this input. Use this to add and define
    /// the components that will be arranged.
    core::Ptr<ArrangeComponents> arrangeComponents() const;

    /// Defines an envelope input defined by a plane for the arrange feature. Only a single envelope input can exist at a time. Calling
    /// this method will cause any existing envelope object input that has been created for this input to be invalid.
    /// plane : The Construction plane the envelope will be on.
    /// length : The length of the envelope. This is the size of the envelope as measured along the X axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    /// width : The width of the envelope. This is the size of the envelope as measured along the Y axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    /// Returns the created Arrange2DPlaneEnvelopeInput object or null if the creation fails.
    core::Ptr<Arrange2DPlaneEnvelopeInput> setPlaneEnvelope(const core::Ptr<ConstructionPlane>& plane, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& width);

    /// Defines an envelope defined by one or more profiles or planar faces. Only a single envelope input can exist at time.
    /// Calling this method will cause any existing envelope input object to be invalid.
    /// profilesOrFaces : An array of Profile and planar BRepFace objects that define the shape of the available envelopes.
    /// Returns the created Arrange2DProfileOrFaceEnvelopeInput object or null if the creation fails.
    core::Ptr<Arrange2DProfileOrFaceEnvelopeInput> setProfileOrFaceEnvelope(const std::vector<core::Ptr<core::Base>>& profilesOrFaces);

    /// Defines a 3D envelope input. Only a single envelope input can exist at time. Calling this method will
    /// cause any existing envelope input object to be invalid.
    /// plane : The Construction plane the envelope will be on.
    /// length : The length of the envelope. This is the size of the envelope as measured along the X axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    /// width : The width of the envelope. This is the size of the envelope as measured along the Y axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    /// height : The height of the envelope. This is the size of the envelope as measured along the Z axis of the specified
    /// construction plane.
    /// 
    /// This value will become a parameter when the arrangement is created. If the ValueInput is created using a
    /// real number it is in centimeters. If you use a string, it is evaluated the same as a value would be in the command
    /// dialog and uses the current document units. For example, if the document units are inch and you specific "0.25" it
    /// will result in 1/4 inch clearance. Using a string, you can also specify the units as part of the expression,
    /// such as "0.25 in + 2 mm". And you can define equations like "PartSize + 2 mm" where "PartSize" is an existing parameter.
    /// Returns the created Arrange3DEnvelopeInput object or null if the creation fails.
    core::Ptr<Arrange3DEnvelopeInput> set3DEnvelope(const core::Ptr<ConstructionPlane>& plane, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& width, const core::Ptr<core::ValueInput>& height);

    ADSK_FUSION_ARRANGEFEATUREINPUT_API static const char* classType();
    ADSK_FUSION_ARRANGEFEATUREINPUT_API const char* objectType() const override;
    ADSK_FUSION_ARRANGEFEATUREINPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_ARRANGEFEATUREINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ArrangeSolverTypes solverType_raw() const = 0;
    virtual ArrangeDefinitionInput* definition_raw() const = 0;
    virtual ArrangeComponents* arrangeComponents_raw() const = 0;
    virtual Arrange2DPlaneEnvelopeInput* setPlaneEnvelope_raw(ConstructionPlane* plane, core::ValueInput* length, core::ValueInput* width) = 0;
    virtual Arrange2DProfileOrFaceEnvelopeInput* setProfileOrFaceEnvelope_raw(core::Base** profilesOrFaces, size_t profilesOrFaces_size) = 0;
    virtual Arrange3DEnvelopeInput* set3DEnvelope_raw(ConstructionPlane* plane, core::ValueInput* length, core::ValueInput* width, core::ValueInput* height) = 0;
};

// Inline wrappers

inline ArrangeSolverTypes ArrangeFeatureInput::solverType() const
{
    ArrangeSolverTypes res = solverType_raw();
    return res;
}

inline core::Ptr<ArrangeDefinitionInput> ArrangeFeatureInput::definition() const
{
    core::Ptr<ArrangeDefinitionInput> res = definition_raw();
    return res;
}

inline core::Ptr<ArrangeComponents> ArrangeFeatureInput::arrangeComponents() const
{
    core::Ptr<ArrangeComponents> res = arrangeComponents_raw();
    return res;
}

inline core::Ptr<Arrange2DPlaneEnvelopeInput> ArrangeFeatureInput::setPlaneEnvelope(const core::Ptr<ConstructionPlane>& plane, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& width)
{
    core::Ptr<Arrange2DPlaneEnvelopeInput> res = setPlaneEnvelope_raw(plane.get(), length.get(), width.get());
    return res;
}

inline core::Ptr<Arrange2DProfileOrFaceEnvelopeInput> ArrangeFeatureInput::setProfileOrFaceEnvelope(const std::vector<core::Ptr<core::Base>>& profilesOrFaces)
{
    core::Base** profilesOrFaces_ = new core::Base*[profilesOrFaces.size()];
    for(size_t i=0; i<profilesOrFaces.size(); ++i)
        profilesOrFaces_[i] = profilesOrFaces[i].get();

    core::Ptr<Arrange2DProfileOrFaceEnvelopeInput> res = setProfileOrFaceEnvelope_raw(profilesOrFaces_, profilesOrFaces.size());
    delete[] profilesOrFaces_;
    return res;
}

inline core::Ptr<Arrange3DEnvelopeInput> ArrangeFeatureInput::set3DEnvelope(const core::Ptr<ConstructionPlane>& plane, const core::Ptr<core::ValueInput>& length, const core::Ptr<core::ValueInput>& width, const core::Ptr<core::ValueInput>& height)
{
    core::Ptr<Arrange3DEnvelopeInput> res = set3DEnvelope_raw(plane.get(), length.get(), width.get(), height.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_ARRANGEFEATUREINPUT_API