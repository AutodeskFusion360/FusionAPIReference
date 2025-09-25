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
#include "Feature.h"
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_RULEDSURFACEFEATURE_CPP__
# define ADSK_FUSION_RULEDSURFACEFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_RULEDSURFACEFEATURE_API
# endif
#else
# define ADSK_FUSION_RULEDSURFACEFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class ModelParameter;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing RuledSurface feature in a design.
class RuledSurfaceFeature : public Feature {
public:

    /// Gets and sets the Profile object that defines the sketch geometry or edges that define the shape of
    /// the ruled surface. The Component.createBRepEdgeProfile method is useful to create a profile defined from edges.
    /// 
    /// In many cases the RuledSurface operation results in the profile being consumed so it is no longer available
    /// after the feature is created. In this case, you need to reposition the timeline marker to just before this feature,
    /// when the profile still exists.
    core::Ptr<core::Base> profile() const;
    bool profile(const core::Ptr<core::Base>& value);

    /// Returns the parameter controlling the Ruled Surface distance. You can edit the distance
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> distance() const;

    /// Returns the parameter controlling the Ruled Surface angle. You can edit the angle
    /// by editing the value of the parameter object.
    core::Ptr<ModelParameter> angle() const;

    /// Gets and sets the type of ruled surface. To set this to DirectionRuledSurfaceType,
    /// use the direction property to set the direction entity, which will automatically set
    /// this to DirectionRuledSurfaceType.
    RuledSurfaceTypes ruledSurfaceType() const;
    bool ruledSurfaceType(RuledSurfaceTypes value);

    /// Gets and sets the entity that defines the direction when the ruled surface type is DirectionRuledSurfaceType.
    /// The direction is specified by providing a linear or planar entity. For example, a linear edge, construction axis,
    /// planar face, or construction plane can be used as input.
    /// 
    /// If this property is set when the ruledSurfaceType is not DirectionRuledSurfaceType, the type will automatically be
    /// changed to DirectionRuledSurfaceType. If you get this property when the direction is not DirectionRuledSurfaceType,
    /// it will return null.
    core::Ptr<core::Base> direction() const;
    bool direction(const core::Ptr<core::Base>& value);

    /// Gets and sets if the other face is used for creation of the Ruled Surface.
    /// When creating a ruled surface using the edges of a solid or the interior edges
    /// of a surface the angle of the ruled surface is measured with respect to the
    /// face the selected edge is bounding. For a solid, or an interior edge on a surface,
    /// the edge connects to two faces. This setting toggles which of the two faces will
    /// be used for measuring the angle.
    bool alternateFace() const;
    bool alternateFace(bool value);

    /// The NativeObject is the object outside the context of an assembly and
    /// in the context of its parent component.
    /// Returns null in the case where this object is not in the context of
    /// an assembly but is already the native object.
    core::Ptr<RuledSurfaceFeature> nativeObject() const;

    /// Creates or returns a proxy for the native object
    /// - i.e. a new object that represents this object but adds the assembly context
    /// defined by the input occurrence.
    /// occurrence : The occurrence that defines the context to create the proxy in.
    /// Returns the proxy object or null if this is not the NativeObject.
    core::Ptr<RuledSurfaceFeature> createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const;

    /// Gets and sets the corner type for the ruled surface, indicating if the corners will be rounded or mitered.
    /// The default value is rounded.
    RuledSurfaceCornerTypes cornerType() const;
    bool cornerType(RuledSurfaceCornerTypes value);

    ADSK_FUSION_RULEDSURFACEFEATURE_API static const char* classType();
    ADSK_FUSION_RULEDSURFACEFEATURE_API const char* objectType() const override;
    ADSK_FUSION_RULEDSURFACEFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_RULEDSURFACEFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::Base* profile_raw() const = 0;
    virtual bool profile_raw(core::Base* value) = 0;
    virtual ModelParameter* distance_raw() const = 0;
    virtual ModelParameter* angle_raw() const = 0;
    virtual RuledSurfaceTypes ruledSurfaceType_raw() const = 0;
    virtual bool ruledSurfaceType_raw(RuledSurfaceTypes value) = 0;
    virtual core::Base* direction_raw() const = 0;
    virtual bool direction_raw(core::Base* value) = 0;
    virtual bool alternateFace_raw() const = 0;
    virtual bool alternateFace_raw(bool value) = 0;
    virtual RuledSurfaceFeature* nativeObject_raw() const = 0;
    virtual RuledSurfaceFeature* createForAssemblyContext_raw(Occurrence* occurrence) const = 0;
    virtual RuledSurfaceCornerTypes cornerType_raw() const = 0;
    virtual bool cornerType_raw(RuledSurfaceCornerTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<core::Base> RuledSurfaceFeature::profile() const
{
    core::Ptr<core::Base> res = profile_raw();
    return res;
}

inline bool RuledSurfaceFeature::profile(const core::Ptr<core::Base>& value)
{
    return profile_raw(value.get());
}

inline core::Ptr<ModelParameter> RuledSurfaceFeature::distance() const
{
    core::Ptr<ModelParameter> res = distance_raw();
    return res;
}

inline core::Ptr<ModelParameter> RuledSurfaceFeature::angle() const
{
    core::Ptr<ModelParameter> res = angle_raw();
    return res;
}

inline RuledSurfaceTypes RuledSurfaceFeature::ruledSurfaceType() const
{
    RuledSurfaceTypes res = ruledSurfaceType_raw();
    return res;
}

inline bool RuledSurfaceFeature::ruledSurfaceType(RuledSurfaceTypes value)
{
    return ruledSurfaceType_raw(value);
}

inline core::Ptr<core::Base> RuledSurfaceFeature::direction() const
{
    core::Ptr<core::Base> res = direction_raw();
    return res;
}

inline bool RuledSurfaceFeature::direction(const core::Ptr<core::Base>& value)
{
    return direction_raw(value.get());
}

inline bool RuledSurfaceFeature::alternateFace() const
{
    bool res = alternateFace_raw();
    return res;
}

inline bool RuledSurfaceFeature::alternateFace(bool value)
{
    return alternateFace_raw(value);
}

inline core::Ptr<RuledSurfaceFeature> RuledSurfaceFeature::nativeObject() const
{
    core::Ptr<RuledSurfaceFeature> res = nativeObject_raw();
    return res;
}

inline core::Ptr<RuledSurfaceFeature> RuledSurfaceFeature::createForAssemblyContext(const core::Ptr<Occurrence>& occurrence) const
{
    core::Ptr<RuledSurfaceFeature> res = createForAssemblyContext_raw(occurrence.get());
    return res;
}

inline RuledSurfaceCornerTypes RuledSurfaceFeature::cornerType() const
{
    RuledSurfaceCornerTypes res = cornerType_raw();
    return res;
}

inline bool RuledSurfaceFeature::cornerType(RuledSurfaceCornerTypes value)
{
    return cornerType_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_RULEDSURFACEFEATURE_API