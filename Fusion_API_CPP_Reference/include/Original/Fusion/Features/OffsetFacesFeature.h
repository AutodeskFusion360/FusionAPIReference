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
#include <API/XInterface/Public/Core/OSMacros.h>

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_OFFSETFACESFEATURE_CPP__
# define ADSK_FUSION_OFFSETFACESFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_OFFSETFACESFEATURE_API
# endif
#else
# define ADSK_FUSION_OFFSETFACESFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class BRepFace;
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing Offset Faces feature in a design.
/// Offset Faces features are created in the UI using the "Offset Face" or "Press Pull" command.
class OffsetFacesFeature : public Feature {
public:

    /// Returns the parameter that controls the offset distance. You can modify
    /// the distance by using the properties of the returned ModelParameter object.
    core::Ptr<ModelParameter> distance() const;

    /// Returns an array of BRepFace objects that were offset. The timeline must be rolled
    /// back to immediately before this feature when getting or setting this property
    /// so the faces are available.
    std::vector<core::Ptr<BRepFace>> inputFaces() const;
    bool inputFaces(const std::vector<core::Ptr<BRepFace>>& value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<OffsetFacesFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this isn't the NativeObject.
    core::Ptr<OffsetFacesFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    ADSK_FUSION_OFFSETFACESFEATURE_API static const char* classType();
    ADSK_FUSION_OFFSETFACESFEATURE_API const char* objectType() const override;
    ADSK_FUSION_OFFSETFACESFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_OFFSETFACESFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ModelParameter* distance_raw() const = 0;
    virtual BRepFace** inputFaces_raw(size_t& return_size) const = 0;
    virtual bool inputFaces_raw(BRepFace** value, size_t value_size) = 0;
    virtual OffsetFacesFeature* nativeObject_raw() const = 0;
    virtual OffsetFacesFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
};

// Inline wrappers

inline core::Ptr<ModelParameter> OffsetFacesFeature::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline std::vector<core::Ptr<BRepFace>> OffsetFacesFeature::inputFaces() const
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

inline bool OffsetFacesFeature::inputFaces(const std::vector<core::Ptr<BRepFace>>& value)
{
    BRepFace** value_ = new BRepFace*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = inputFaces_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline core::Ptr<OffsetFacesFeature> OffsetFacesFeature::nativeObject() const
{
    core::Ptr<OffsetFacesFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<OffsetFacesFeature> OffsetFacesFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<OffsetFacesFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_OFFSETFACESFEATURE_API