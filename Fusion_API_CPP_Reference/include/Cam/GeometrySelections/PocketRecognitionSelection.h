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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_POCKETRECOGNITIONSELECTION_CPP__
# define ADSK_CAM_POCKETRECOGNITIONSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_POCKETRECOGNITIONSELECTION_API
# endif
#else
# define ADSK_CAM_POCKETRECOGNITIONSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Pocket type curve selection. It searches for pockets matching the criteria on the selected bodies
/// The result of the value property call may contain duplicates.
/// See also RecognizedPockets for the ability to analyze the pockets
class PocketRecognitionSelection : public CurveSelection {
public:

    /// Flag to include all B-Rep bodies set as the setup models.
    bool isSetupModelSelected() const;
    bool isSetupModelSelected(bool value);

    /// Flag to interpret holes as pockets.
    bool areHolesIncluded() const;
    bool areHolesIncluded(bool value);

    /// Lower bound for the diameter for the hole detection. It can only be set if areHoldeIncluded is set to true.
    double minimumHoleDiameter() const;
    bool minimumHoleDiameter(double value);

    /// The smallest corner radius that can appear in a pocket to machine.
    double minimumCornerRadius() const;
    bool minimumCornerRadius(double value);

    /// The largest corner radius that can appear in a pocket to machine.
    double maximumCornerRadius() const;
    bool maximumCornerRadius(double value);

    /// The shallowest pocket (measured from top to bottom) to machine.
    double minimumPocketDepth() const;
    bool minimumPocketDepth(double value);

    /// The deepest pocket (measured from top to bottom) to machine.
    double maximumPocketDepth() const;
    bool maximumPocketDepth(double value);

    ADSK_CAM_POCKETRECOGNITIONSELECTION_API static const char* classType();
    ADSK_CAM_POCKETRECOGNITIONSELECTION_API const char* objectType() const override;
    ADSK_CAM_POCKETRECOGNITIONSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_POCKETRECOGNITIONSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSetupModelSelected_raw() const = 0;
    virtual bool isSetupModelSelected_raw(bool value) = 0;
    virtual bool areHolesIncluded_raw() const = 0;
    virtual bool areHolesIncluded_raw(bool value) = 0;
    virtual double minimumHoleDiameter_raw() const = 0;
    virtual bool minimumHoleDiameter_raw(double value) = 0;
    virtual double minimumCornerRadius_raw() const = 0;
    virtual bool minimumCornerRadius_raw(double value) = 0;
    virtual double maximumCornerRadius_raw() const = 0;
    virtual bool maximumCornerRadius_raw(double value) = 0;
    virtual double minimumPocketDepth_raw() const = 0;
    virtual bool minimumPocketDepth_raw(double value) = 0;
    virtual double maximumPocketDepth_raw() const = 0;
    virtual bool maximumPocketDepth_raw(double value) = 0;
};

// Inline wrappers

inline bool PocketRecognitionSelection::isSetupModelSelected() const
{
    bool res = isSetupModelSelected_raw();
    return res;
}

inline bool PocketRecognitionSelection::isSetupModelSelected(bool value)
{
    return isSetupModelSelected_raw(value);
}

inline bool PocketRecognitionSelection::areHolesIncluded() const
{
    bool res = areHolesIncluded_raw();
    return res;
}

inline bool PocketRecognitionSelection::areHolesIncluded(bool value)
{
    return areHolesIncluded_raw(value);
}

inline double PocketRecognitionSelection::minimumHoleDiameter() const
{
    double res = minimumHoleDiameter_raw();
    return res;
}

inline bool PocketRecognitionSelection::minimumHoleDiameter(double value)
{
    return minimumHoleDiameter_raw(value);
}

inline double PocketRecognitionSelection::minimumCornerRadius() const
{
    double res = minimumCornerRadius_raw();
    return res;
}

inline bool PocketRecognitionSelection::minimumCornerRadius(double value)
{
    return minimumCornerRadius_raw(value);
}

inline double PocketRecognitionSelection::maximumCornerRadius() const
{
    double res = maximumCornerRadius_raw();
    return res;
}

inline bool PocketRecognitionSelection::maximumCornerRadius(double value)
{
    return maximumCornerRadius_raw(value);
}

inline double PocketRecognitionSelection::minimumPocketDepth() const
{
    double res = minimumPocketDepth_raw();
    return res;
}

inline bool PocketRecognitionSelection::minimumPocketDepth(double value)
{
    return minimumPocketDepth_raw(value);
}

inline double PocketRecognitionSelection::maximumPocketDepth() const
{
    double res = maximumPocketDepth_raw();
    return res;
}

inline bool PocketRecognitionSelection::maximumPocketDepth(double value)
{
    return maximumPocketDepth_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_POCKETRECOGNITIONSELECTION_API