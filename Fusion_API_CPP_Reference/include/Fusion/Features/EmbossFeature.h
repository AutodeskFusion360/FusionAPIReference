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
#include "Feature.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_EMBOSSFEATURE_CPP__
# define ADSK_FUSION_EMBOSSFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_EMBOSSFEATURE_API
# endif
#else
# define ADSK_FUSION_EMBOSSFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing emboss feature in a design.
class EmbossFeature : public Feature {
public:

    /// Gets and sets the set Profile objects that define the shape of the emboss.
    /// The profile argument can be Profile and SketchText objects.
    /// When multiple objects are used, all profiles and sketch texts must be co-planar.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<core::Base>> profiles() const;
    bool profiles(const std::vector<core::Ptr<core::Base>>& value);

    /// Gets and sets an array of BRepFace objects that define the faces the emboss will be performed on. The
    /// value of the isTangentChain property controls if faces that are tangent to any of the specified faces
    /// are also included.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// Gets and sets whether any faces that are tangentially connected to any of the input faces will
    /// also be used.
    /// 
    /// To use this property, you need to position the timeline marker to immediately before this feature.
    /// This can be accomplished using the following code: thisFeature.timelineObject.rollTo(True)
    bool isTangentChain() const;
    bool isTangentChain(bool value);

    /// Returns the parameter that controls the depth of the emboss. A positive value results in the emboss
    /// protruding out of the body and the negative value results in the emboss going into the body. To
    /// edit the depth, use properties on the returned ModelParameter.
    core::Ptr<ModelParameter> depth() const;

    /// Returns the parameter that controls the horizontal offset distance. To
    /// edit the offset, use properties on the returned ModelParameter.
    core::Ptr<ModelParameter> horizontalDistance() const;

    /// Returns the parameter that controls the vertical offset distance. To
    /// edit the offset, use properties on the returned ModelParameter.
    core::Ptr<ModelParameter> verticalDistance() const;

    /// Returns the parameter that controls the rotation angle. To
    /// edit the angle, use properties on the returned ModelParameter.
    core::Ptr<ModelParameter> rotationAngle() const;

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<EmbossFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<EmbossFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_EMBOSSFEATURE_API static const char* classType();
    ADSK_FUSION_EMBOSSFEATURE_API const char* objectType() const override;
    ADSK_FUSION_EMBOSSFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_EMBOSSFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base** profiles_raw(size_t& return_size) const = 0;
    virtual bool profiles_raw(core::Base** value, size_t value_size) = 0;
    virtual BRepFace** inputFaces_raw(size_t& return_size) const = 0;
    virtual bool inputFaces_raw(BRepFace** value, size_t value_size) = 0;
    virtual bool isTangentChain_raw() const = 0;
    virtual bool isTangentChain_raw(bool value) = 0;
    virtual ModelParameter* depth_raw() const = 0;
    virtual ModelParameter* horizontalDistance_raw() const = 0;
    virtual ModelParameter* verticalDistance_raw() const = 0;
    virtual ModelParameter* rotationAngle_raw() const = 0;
    virtual EmbossFeature* nativeObject_raw() const = 0;
    virtual EmbossFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<core::Base>> EmbossFeature::profiles() const
{
    std::vector<core::Ptr<core::Base>> res;
    size_t s;

    core::Base** p= profiles_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool EmbossFeature::profiles(const std::vector<core::Ptr<core::Base>>& value)
{
    core::Base** value_ = new core::Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = profiles_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline std::vector<core::Ptr<BRepFace>> EmbossFeature::inputFaces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= inputFaces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline bool EmbossFeature::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool EmbossFeature::isTangentChain() const
{
    bool res = isTangentChain_raw();
    return res;
}

inline bool EmbossFeature::isTangentChain(bool value)
{
    return isTangentChain_raw(value);
}

inline core::Ptr<ModelParameter> EmbossFeature::depth() const
{
    core::Ptr<ModelParameter> res = depth_raw();
    return res;
}

inline core::Ptr<ModelParameter> EmbossFeature::horizontalDistance() const
{
    core::Ptr<ModelParameter> res = horizontalDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> EmbossFeature::verticalDistance() const
{
    core::Ptr<ModelParameter> res = verticalDistance_raw();
    return res;
}

inline core::Ptr<ModelParameter> EmbossFeature::rotationAngle() const
{
    core::Ptr<ModelParameter> res = rotationAngle_raw();
    return res;
}

inline core::Ptr<EmbossFeature> EmbossFeature::nativeObject() const
{
    core::Ptr<EmbossFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<EmbossFeature> EmbossFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<EmbossFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_EMBOSSFEATURE_API