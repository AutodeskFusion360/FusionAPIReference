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
# ifdef __COMPILING_ADSK_FUSION_SKETCHDIMENSION_CPP__
# define ADSK_FUSION_SKETCHDIMENSION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHDIMENSION_API
# endif
#else
# define ADSK_FUSION_SKETCHDIMENSION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attributes;
    class Point3D;
}}
namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
    class Sketch;
}}

namespace adsk { namespace fusion {

/// The base class for the all sketch dimensions.
class SketchDimension : public core::Base {
public:

    /// Deletes this dimension. The IsDeletable property indicates if this dimension can be deleted.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Indicates if this dimension is deletable.
    bool isDeletable() const;

    /// Gets and sets position of the dimension text.
    core::Ptr<core::Point3D> textPosition() const;
    bool textPosition(const core::Ptr<core::Point3D>& value);

    /// Returns the parent sketch object.
    core::Ptr<Sketch> parentSketch() const;

    /// Returns the associated parameter or null if there is no associated parameter.
    core::Ptr<ModelParameter> parameter() const;

    /// Returns the assembly occurrence (i.e. the occurrence) of this object
    /// in an assembly. This is only valid in the case where this is acting
    /// as a proxy in an assembly. Returns null in the case where the object
    /// is not in the context of an assembly but is already the native object.
    core::Ptr<Occurrence> assemblyContext() const;

    /// Gets and sets if the dimension is Driving or is Driven. Setting this property to true for a given dimension
    /// may fail if the result would over constrain the sketch. Fusion does not allow over-constrained sketches.
    bool isDriving() const;
    bool isDriving(bool value);

    /// Returns the collection of attributes associated with this sketch dimension.
    core::Ptr<core::Attributes> attributes() const;

    /// Returns a token for the SketchDimension object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same sketch dimension.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Gets and sets the current value of the sketch dimension.
    /// 
    /// In a parametric modeling design and the isDriving property is True, this is exactly equivalent
    /// to getting the parameter associated with the dimension and editing its value. Editing this
    /// property will result in the parameter value being changed. If isDriving is False, this acts
    /// as a read-only property and attempting to set it will fail.
    /// 
    /// In a direct modeling design the parameter property will return null and this property can be
    /// used to get and set the value of the dimension because in this case, there isn't an associated
    /// parameter.
    /// 
    /// The value is always in internal units which means that for dimensions that represent a distance, the value is in
    /// Centimeters and for dimensions representing an angle the value is in Radians.
    double value() const;
    bool value(double value);

    ADSK_FUSION_SKETCHDIMENSION_API static const char* classType();
    ADSK_FUSION_SKETCHDIMENSION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHDIMENSION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHDIMENSION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool deleteMe_raw() = 0;
    virtual bool isDeletable_raw() const = 0;
    virtual core::Point3D* textPosition_raw() const = 0;
    virtual bool textPosition_raw(core::Point3D* value) = 0;
    virtual Sketch* parentSketch_raw() const = 0;
    virtual ModelParameter* parameter_raw() const = 0;
    virtual Occurrence* assemblyContext_raw() const = 0;
    virtual bool isDriving_raw() const = 0;
    virtual bool isDriving_raw(bool value) = 0;
    virtual core::Attributes* attributes_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual void placeholderSketchDimension0() {}
    virtual void placeholderSketchDimension1() {}
    virtual void placeholderSketchDimension2() {}
    virtual void placeholderSketchDimension3() {}
    virtual void placeholderSketchDimension4() {}
    virtual void placeholderSketchDimension5() {}
    virtual void placeholderSketchDimension6() {}
    virtual void placeholderSketchDimension7() {}
    virtual void placeholderSketchDimension8() {}
    virtual void placeholderSketchDimension9() {}
    virtual void placeholderSketchDimension10() {}
    virtual void placeholderSketchDimension11() {}
    virtual void placeholderSketchDimension12() {}
    virtual void placeholderSketchDimension13() {}
    virtual void placeholderSketchDimension14() {}
    virtual void placeholderSketchDimension15() {}
    virtual void placeholderSketchDimension16() {}
    virtual void placeholderSketchDimension17() {}
    virtual void placeholderSketchDimension18() {}
};

// Inline wrappers

inline bool SketchDimension::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool SketchDimension::isDeletable() const
{
    bool res = isDeletable_raw();
    return res;
}

inline core::Ptr<core::Point3D> SketchDimension::textPosition() const
{
    core::Ptr<core::Point3D> res = textPosition_raw();
    return res;
}

inline bool SketchDimension::textPosition(const core::Ptr<core::Point3D>& value)
{
    return textPosition_raw(value.get());
}

inline core::Ptr<Sketch> SketchDimension::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline core::Ptr<ModelParameter> SketchDimension::parameter() const
{
    core::Ptr<ModelParameter> res = parameter_raw();
    return res;
}

inline core::Ptr<Occurrence> SketchDimension::assemblyContext() const
{
    core::Ptr<Occurrence> res = assemblyContext_raw();
    return res;
}

inline bool SketchDimension::isDriving() const
{
    bool res = isDriving_raw();
    return res;
}

inline bool SketchDimension::isDriving(bool value)
{
    return isDriving_raw(value);
}

inline core::Ptr<core::Attributes> SketchDimension::attributes() const
{
    core::Ptr<core::Attributes> res = attributes_raw();
    return res;
}

inline std::string SketchDimension::entityToken() const
{
    std::string res;

    char* p= entityToken_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline double SketchDimension::value() const
{
    double res = value_raw();
    return res;
}

inline bool SketchDimension::value(double value)
{
    return value_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHDIMENSION_API