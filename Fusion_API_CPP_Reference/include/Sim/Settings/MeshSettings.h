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
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_MESHSETTINGS_CPP__
# define ADSK_SIM_MESHSETTINGS_API XI_EXPORT
# else
# define ADSK_SIM_MESHSETTINGS_API
# endif
#else
# define ADSK_SIM_MESHSETTINGS_API XI_IMPORT
#endif

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents simulation mesh settings.
class MeshSettings : public core::Base {
public:

    /// Default mesh elements order.
    ElementOrderTypes elementOrderType() const;
    bool elementOrderType(ElementOrderTypes value);

    /// Average element size determination policy.
    ElementSizeDeterminationTypes elementSizeDeterminationType() const;
    bool elementSizeDeterminationType(ElementSizeDeterminationTypes value);

    /// The ratio of the model size as the average element size.
    double modelBasedElementSize() const;
    bool modelBasedElementSize(double value);

    /// The absolute value for the average element size.
    double absoluteElementSize() const;
    bool absoluteElementSize(double value);

    /// TBD.
    double minElementSize() const;
    bool minElementSize(double value);

    /// Maximum aspect ratio of the elements.
    double maxAspectRatio() const;
    bool maxAspectRatio(double value);

    /// TBD.
    bool isCreatingCurvedMeshElements() const;
    bool isCreatingCurvedMeshElements(bool value);

    /// TBD.
    bool isScalingMeshSizePerPart() const;
    bool isScalingMeshSizePerPart(bool value);

    /// The maximum turn angle.
    double maxTurnAngle() const;
    bool maxTurnAngle(double value);

    /// Maximum adjacent mesh size ratio.
    double maxAdjacentMeshSizeRatio() const;
    bool maxAdjacentMeshSizeRatio(double value);

    ADSK_SIM_MESHSETTINGS_API static const char* classType();
    ADSK_SIM_MESHSETTINGS_API const char* objectType() const override;
    ADSK_SIM_MESHSETTINGS_API void* queryInterface(const char* id) const override;
    ADSK_SIM_MESHSETTINGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ElementOrderTypes elementOrderType_raw() const = 0;
    virtual bool elementOrderType_raw(ElementOrderTypes value) = 0;
    virtual ElementSizeDeterminationTypes elementSizeDeterminationType_raw() const = 0;
    virtual bool elementSizeDeterminationType_raw(ElementSizeDeterminationTypes value) = 0;
    virtual double modelBasedElementSize_raw() const = 0;
    virtual bool modelBasedElementSize_raw(double value) = 0;
    virtual double absoluteElementSize_raw() const = 0;
    virtual bool absoluteElementSize_raw(double value) = 0;
    virtual double minElementSize_raw() const = 0;
    virtual bool minElementSize_raw(double value) = 0;
    virtual double maxAspectRatio_raw() const = 0;
    virtual bool maxAspectRatio_raw(double value) = 0;
    virtual bool isCreatingCurvedMeshElements_raw() const = 0;
    virtual bool isCreatingCurvedMeshElements_raw(bool value) = 0;
    virtual bool isScalingMeshSizePerPart_raw() const = 0;
    virtual bool isScalingMeshSizePerPart_raw(bool value) = 0;
    virtual double maxTurnAngle_raw() const = 0;
    virtual bool maxTurnAngle_raw(double value) = 0;
    virtual double maxAdjacentMeshSizeRatio_raw() const = 0;
    virtual bool maxAdjacentMeshSizeRatio_raw(double value) = 0;
};

// Inline wrappers

inline ElementOrderTypes MeshSettings::elementOrderType() const
{
    ElementOrderTypes res = elementOrderType_raw();
    return res;
}

inline bool MeshSettings::elementOrderType(ElementOrderTypes value)
{
    return elementOrderType_raw(value);
}

inline ElementSizeDeterminationTypes MeshSettings::elementSizeDeterminationType() const
{
    ElementSizeDeterminationTypes res = elementSizeDeterminationType_raw();
    return res;
}

inline bool MeshSettings::elementSizeDeterminationType(ElementSizeDeterminationTypes value)
{
    return elementSizeDeterminationType_raw(value);
}

inline double MeshSettings::modelBasedElementSize() const
{
    double res = modelBasedElementSize_raw();
    return res;
}

inline bool MeshSettings::modelBasedElementSize(double value)
{
    return modelBasedElementSize_raw(value);
}

inline double MeshSettings::absoluteElementSize() const
{
    double res = absoluteElementSize_raw();
    return res;
}

inline bool MeshSettings::absoluteElementSize(double value)
{
    return absoluteElementSize_raw(value);
}

inline double MeshSettings::minElementSize() const
{
    double res = minElementSize_raw();
    return res;
}

inline bool MeshSettings::minElementSize(double value)
{
    return minElementSize_raw(value);
}

inline double MeshSettings::maxAspectRatio() const
{
    double res = maxAspectRatio_raw();
    return res;
}

inline bool MeshSettings::maxAspectRatio(double value)
{
    return maxAspectRatio_raw(value);
}

inline bool MeshSettings::isCreatingCurvedMeshElements() const
{
    bool res = isCreatingCurvedMeshElements_raw();
    return res;
}

inline bool MeshSettings::isCreatingCurvedMeshElements(bool value)
{
    return isCreatingCurvedMeshElements_raw(value);
}

inline bool MeshSettings::isScalingMeshSizePerPart() const
{
    bool res = isScalingMeshSizePerPart_raw();
    return res;
}

inline bool MeshSettings::isScalingMeshSizePerPart(bool value)
{
    return isScalingMeshSizePerPart_raw(value);
}

inline double MeshSettings::maxTurnAngle() const
{
    double res = maxTurnAngle_raw();
    return res;
}

inline bool MeshSettings::maxTurnAngle(double value)
{
    return maxTurnAngle_raw(value);
}

inline double MeshSettings::maxAdjacentMeshSizeRatio() const
{
    double res = maxAdjacentMeshSizeRatio_raw();
    return res;
}

inline bool MeshSettings::maxAdjacentMeshSizeRatio(double value)
{
    return maxAdjacentMeshSizeRatio_raw(value);
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_MESHSETTINGS_API