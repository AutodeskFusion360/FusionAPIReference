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
# ifdef __COMPILING_ADSK_FUSION_TSPLINEBODY_CPP__
# define ADSK_FUSION_TSPLINEBODY_API XI_EXPORT
# else
# define ADSK_FUSION_TSPLINEBODY_API
# endif
#else
# define ADSK_FUSION_TSPLINEBODY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class TextureMapControl;
}}
namespace adsk { namespace fusion {
    class FormFeature;
}}

namespace adsk { namespace fusion {

/// A TSpline body.
class TSplineBody : public core::Base {
public:

    /// Gets and sets the name of the body. If setting this property, there is the side-effect
    /// that the B-Rep body created from this T-Spline body is also renamed.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the T-Spline body as a string in the form of a TSM description.
    /// Returns the string formatted using the TSM format.
    std::string getTSMDescription() const;

    /// Saves the body as a TSM file.
    /// filename : The full filename of the file to save the body to. If the file already exists,
    /// it will be overwritten.
    /// Returns true if the file was successfully created.
    bool saveAsTSMFile(const std::string& filename) const;

    /// Returns the owning form feature.
    core::Ptr<FormFeature> parentFormFeature() const;

    /// Returns a token for the TSplineBody object. This can be saved and used at a later
    /// time with the Design.findEntityByToken method to get back the same T-Spline body.
    /// 
    /// When using entity tokens it's important to understand that the token string returned for a
    /// specific entity can be different over time. However, even if you have two different token
    /// strings that were obtained from the same entity, when you use findEntityByToken they
    /// will both return the same entity. Because of that you should never compare entity tokens
    /// as way to determine what the token represents. Instead, you need to use the findEntityByToken
    /// method to get the two entities identified by the tokens and then compare them.
    std::string entityToken() const;

    /// Returns the TextureMapControl object associated with this body when there is an
    /// appearance assigned to the body that has a texture associated with it. If there
    /// isn't a texture, this property will return null. If there is a texture, you can
    /// use the returned object to query and modify how the texture is applied to the body.
    core::Ptr<core::TextureMapControl> textureMapControl() const;

    ADSK_FUSION_TSPLINEBODY_API static const char* classType();
    ADSK_FUSION_TSPLINEBODY_API const char* objectType() const override;
    ADSK_FUSION_TSPLINEBODY_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_TSPLINEBODY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* getTSMDescription_raw() const = 0;
    virtual bool saveAsTSMFile_raw(const char* filename) const = 0;
    virtual FormFeature* parentFormFeature_raw() const = 0;
    virtual char* entityToken_raw() const = 0;
    virtual core::TextureMapControl* textureMapControl_raw() const = 0;
};

// Inline wrappers

inline std::string TSplineBody::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool TSplineBody::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string TSplineBody::getTSMDescription() const
{
    std::string res;

    char* p= getTSMDescription_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool TSplineBody::saveAsTSMFile(const std::string& filename) const
{
    bool res = saveAsTSMFile_raw(filename.c_str());
    return res;
}

inline core::Ptr<FormFeature> TSplineBody::parentFormFeature() const
{
    core::Ptr<FormFeature> res = parentFormFeature_raw();
    return res;
}

inline std::string TSplineBody::entityToken() const
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

inline core::Ptr<core::TextureMapControl> TSplineBody::textureMapControl() const
{
    core::Ptr<core::TextureMapControl> res = textureMapControl_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_TSPLINEBODY_API