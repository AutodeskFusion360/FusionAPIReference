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
#include "../FusionTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_AUTOCONSTRAININPUT_CPP__
# define ADSK_FUSION_AUTOCONSTRAININPUT_API XI_EXPORT
# else
# define ADSK_FUSION_AUTOCONSTRAININPUT_API
# endif
#else
# define ADSK_FUSION_AUTOCONSTRAININPUT_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Sketch;
    class SketchPoint;
}}

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// The AutoConstrainInput object is used to define the various options when adding dimension
/// and geometric constraints to help constrain a sketch.
class AutoConstrainInput : public core::Base {
public:

    /// Gets and sets an optional datum point that the dimensions will be based on. This defaults to null,
    /// which indicates there is no datum point specified. When no datum point is provided, AutoConstrain
    /// will automatically select an appropriate datum based on the sketch content and geometry.
    core::Ptr<SketchPoint> datumPoint() const;
    bool datumPoint(const core::Ptr<SketchPoint>& value);

    /// Returns the Sketch this object is associated with and where the dimension and geometric constraints
    /// will be added when the autoConstrain method is called. This property is read-only and is set when
    /// the input object is created by the sketch's createAutoConstrainInput method.
    core::Ptr<Sketch> parentSketch() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the preferred dimension strategy for the auto constrain operation.
    /// When set to DefaultDimensionStrategyType (the default), the system will automatically
    /// select the most appropriate strategy based on the sketch geometry.
    /// 
    /// Note: This preference may be ignored if not applicable to the geometry.
    DimensionStrategyTypes dimensionStrategy() const;
    bool dimensionStrategy(DimensionStrategyTypes value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the preferred inter-loop dimension strategy for sketches with multiple loops.
    /// When set to DefaultInterLoopDimensionStrategyType (the default), the system will automatically
    /// select the most appropriate strategy based on the sketch geometry.
    /// This setting only applies to sketches with multiple loops.
    /// 
    /// Note: This preference may be ignored if not applicable to the geometry.
    InterLoopDimensionStrategyTypes interLoopDimensionStrategy() const;
    bool interLoopDimensionStrategy(InterLoopDimensionStrategyTypes value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the preferred symmetric dimension strategy for symmetric geometry.
    /// When set to DefaultSymmetricDimensionStrategyType (the default), the system will automatically
    /// select the most appropriate strategy based on the sketch geometry.
    /// This setting only applies when symmetric dimensioning strategies are used.
    /// 
    /// Note: This preference may be ignored if not applicable to the geometry.
    SymmetricDimensionStrategyTypes symmetricDimensionStrategy() const;
    bool symmetricDimensionStrategy(SymmetricDimensionStrategyTypes value);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the preference for linear diameter dimensions on circular geometry.
    /// When set to DefaultLinearDiameterDimensionPreferenceType (the default), the system will
    /// automatically decide whether to use linear diameter dimensions based on the geometry and context.
    /// 
    /// Note: This preference may be ignored if not applicable to the geometry.
    LinearDiameterDimensionPreferenceTypes linearDiameterDimensionPreference() const;
    bool linearDiameterDimensionPreference(LinearDiameterDimensionPreferenceTypes value);

    ADSK_FUSION_AUTOCONSTRAININPUT_API static const char* classType();
    ADSK_FUSION_AUTOCONSTRAININPUT_API const char* objectType() const override;
    ADSK_FUSION_AUTOCONSTRAININPUT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_AUTOCONSTRAININPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SketchPoint* datumPoint_raw() const = 0;
    virtual bool datumPoint_raw(SketchPoint* value) = 0;
    virtual Sketch* parentSketch_raw() const = 0;
    virtual DimensionStrategyTypes dimensionStrategy_raw() const = 0;
    virtual bool dimensionStrategy_raw(DimensionStrategyTypes value) = 0;
    virtual InterLoopDimensionStrategyTypes interLoopDimensionStrategy_raw() const = 0;
    virtual bool interLoopDimensionStrategy_raw(InterLoopDimensionStrategyTypes value) = 0;
    virtual SymmetricDimensionStrategyTypes symmetricDimensionStrategy_raw() const = 0;
    virtual bool symmetricDimensionStrategy_raw(SymmetricDimensionStrategyTypes value) = 0;
    virtual LinearDiameterDimensionPreferenceTypes linearDiameterDimensionPreference_raw() const = 0;
    virtual bool linearDiameterDimensionPreference_raw(LinearDiameterDimensionPreferenceTypes value) = 0;
};

// Inline wrappers

inline core::Ptr<SketchPoint> AutoConstrainInput::datumPoint() const
{
    core::Ptr<SketchPoint> res = datumPoint_raw();
    return res;
}

inline bool AutoConstrainInput::datumPoint(const core::Ptr<SketchPoint>& value)
{
    return datumPoint_raw(value.get());
}

inline core::Ptr<Sketch> AutoConstrainInput::parentSketch() const
{
    core::Ptr<Sketch> res = parentSketch_raw();
    return res;
}

inline DimensionStrategyTypes AutoConstrainInput::dimensionStrategy() const
{
    DimensionStrategyTypes res = dimensionStrategy_raw();
    return res;
}

inline bool AutoConstrainInput::dimensionStrategy(DimensionStrategyTypes value)
{
    return dimensionStrategy_raw(value);
}

inline InterLoopDimensionStrategyTypes AutoConstrainInput::interLoopDimensionStrategy() const
{
    InterLoopDimensionStrategyTypes res = interLoopDimensionStrategy_raw();
    return res;
}

inline bool AutoConstrainInput::interLoopDimensionStrategy(InterLoopDimensionStrategyTypes value)
{
    return interLoopDimensionStrategy_raw(value);
}

inline SymmetricDimensionStrategyTypes AutoConstrainInput::symmetricDimensionStrategy() const
{
    SymmetricDimensionStrategyTypes res = symmetricDimensionStrategy_raw();
    return res;
}

inline bool AutoConstrainInput::symmetricDimensionStrategy(SymmetricDimensionStrategyTypes value)
{
    return symmetricDimensionStrategy_raw(value);
}

inline LinearDiameterDimensionPreferenceTypes AutoConstrainInput::linearDiameterDimensionPreference() const
{
    LinearDiameterDimensionPreferenceTypes res = linearDiameterDimensionPreference_raw();
    return res;
}

inline bool AutoConstrainInput::linearDiameterDimensionPreference(LinearDiameterDimensionPreferenceTypes value)
{
    return linearDiameterDimensionPreference_raw(value);
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_AUTOCONSTRAININPUT_API