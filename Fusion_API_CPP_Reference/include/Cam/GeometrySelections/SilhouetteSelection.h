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
#include "CurveSelection.h"
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_SILHOUETTESELECTION_CPP__
# define ADSK_CAM_SILHOUETTESELECTION_API XI_EXPORT
# else
# define ADSK_CAM_SILHOUETTESELECTION_API
# endif
#else
# define ADSK_CAM_SILHOUETTESELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Represents a silhouette type of curve selection. Allows BRepBody selections for the input geometry.
/// Overrides the GeometrySelection's the value property to include setup bodies if isSetupModelSelected is set to true and the selection has been applied.
/// The results may contain duplicates.
class SilhouetteSelection : public CurveSelection {
public:

    /// Desired loop type. The default is AllLoops.
    LoopTypes loopType() const;
    bool loopType(LoopTypes value);

    /// Desired side type. The default is StartOutside.
    SideTypes sideType() const;
    bool sideType(SideTypes value);

    /// Flag to include all B-Rep bodies set as the setup models.
    bool isSetupModelSelected() const;
    bool isSetupModelSelected(bool value);

    /// The distance the silhouette can differ from the model.
    /// This helps in creating a silhouette in situations where one cannot be created because of open contours.Generally, the tolerance value you use should be smaller than or equal to the machining tolerance.
    double silhouetteTolerance() const;
    bool silhouetteTolerance(double value);

    ADSK_CAM_SILHOUETTESELECTION_API static const char* classType();
    ADSK_CAM_SILHOUETTESELECTION_API const char* objectType() const override;
    ADSK_CAM_SILHOUETTESELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_SILHOUETTESELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual LoopTypes loopType_raw() const = 0;
    virtual bool loopType_raw(LoopTypes value) = 0;
    virtual SideTypes sideType_raw() const = 0;
    virtual bool sideType_raw(SideTypes value) = 0;
    virtual bool isSetupModelSelected_raw() const = 0;
    virtual bool isSetupModelSelected_raw(bool value) = 0;
    virtual double silhouetteTolerance_raw() const = 0;
    virtual bool silhouetteTolerance_raw(double value) = 0;
};

// Inline wrappers

inline LoopTypes SilhouetteSelection::loopType() const
{
    LoopTypes res = loopType_raw();
    return res;
}

inline bool SilhouetteSelection::loopType(LoopTypes value)
{
    return loopType_raw(value);
}

inline SideTypes SilhouetteSelection::sideType() const
{
    SideTypes res = sideType_raw();
    return res;
}

inline bool SilhouetteSelection::sideType(SideTypes value)
{
    return sideType_raw(value);
}

inline bool SilhouetteSelection::isSetupModelSelected() const
{
    bool res = isSetupModelSelected_raw();
    return res;
}

inline bool SilhouetteSelection::isSetupModelSelected(bool value)
{
    return isSetupModelSelected_raw(value);
}

inline double SilhouetteSelection::silhouetteTolerance() const
{
    double res = silhouetteTolerance_raw();
    return res;
}

inline bool SilhouetteSelection::silhouetteTolerance(double value)
{
    return silhouetteTolerance_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_SILHOUETTESELECTION_API