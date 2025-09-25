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
# ifdef __COMPILING_ADSK_CAM_CHAINSELECTION_CPP__
# define ADSK_CAM_CHAINSELECTION_API XI_EXPORT
# else
# define ADSK_CAM_CHAINSELECTION_API
# endif
#else
# define ADSK_CAM_CHAINSELECTION_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// Represents a chain type of curve selection. Allows B-Rep edges and sketch geometry for the inputGeometry property.
/// The automatic tool side detection is currently disabled when using the API, thus the side is determined
/// based on the direction of the first edge and the z-axis of the tool orientation.
/// 
/// This class overrides the value property of its GeometrySelection parent to return the result edge selection.
/// The result may contain more edges than the input if gaps between the desired start and end edge were automatically filled.
class ChainSelection : public CurveSelection {
public:

    /// Property to get or set if an open contour should be closed or not.
    /// If true and the input does not specify a closed contour, additional curve segments will be generated to close the contour.
    bool isOpen() const;
    bool isOpen(bool value);

    /// Property to specify if the underlying CadContours2DParameterValue allows open contours.
    /// Some examples of some open contours are adaptive clearing 3d and swarf. And, some examples
    /// of closed contours are face and machining boundary.
    bool isOpenAllowed() const;

    /// Property to control if the curve is reverted or not. The curve needs to be reverted,
    /// if Fusion's guess does not match the user's expectation.
    /// 
    /// The initial tool placement depends on the first input edge or sketch line and the height
    /// of the bordering faces or sketch boundaries, with the tool being placed outside of the higher face or sketch boundary.
    bool isReverted() const;
    bool isReverted(bool value);

    /// Property that gets and sets extension method to use. The default is TangentExtension.
    /// Only applicable to open contours.
    ExtensionMethods extensionMethod() const;
    bool extensionMethod(ExtensionMethods value);

    /// Property that gets and sets the desired extension type method. The default is DistanceCap.
    /// This is only applicable to open contours.
    ExtensionTypes extensionType() const;
    bool extensionType(ExtensionTypes value);

    /// Property that gets and sets the length of the extension of an open curve at the start of the chain.
    /// This is only applicable to open contours and when DistanceCap is chosen as the extension cap.
    double startExtensionLength() const;
    bool startExtensionLength(double value);

    /// Property that gets and sets the length of the extension of an open curve at the end of the chain.
    /// The value is specified in centimeters. This is only applicable to open contours and when DistanceCap
    /// is chosen as the extension cap.
    double endExtensionLength() const;
    bool endExtensionLength(double value);

    ADSK_CAM_CHAINSELECTION_API static const char* classType();
    ADSK_CAM_CHAINSELECTION_API const char* objectType() const override;
    ADSK_CAM_CHAINSELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CHAINSELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isOpen_raw() const = 0;
    virtual bool isOpen_raw(bool value) = 0;
    virtual bool isOpenAllowed_raw() const = 0;
    virtual bool isReverted_raw() const = 0;
    virtual bool isReverted_raw(bool value) = 0;
    virtual ExtensionMethods extensionMethod_raw() const = 0;
    virtual bool extensionMethod_raw(ExtensionMethods value) = 0;
    virtual ExtensionTypes extensionType_raw() const = 0;
    virtual bool extensionType_raw(ExtensionTypes value) = 0;
    virtual double startExtensionLength_raw() const = 0;
    virtual bool startExtensionLength_raw(double value) = 0;
    virtual double endExtensionLength_raw() const = 0;
    virtual bool endExtensionLength_raw(double value) = 0;
};

// Inline wrappers

inline bool ChainSelection::isOpen() const
{
    bool res = isOpen_raw();
    return res;
}

inline bool ChainSelection::isOpen(bool value)
{
    return isOpen_raw(value);
}

inline bool ChainSelection::isOpenAllowed() const
{
    bool res = isOpenAllowed_raw();
    return res;
}

inline bool ChainSelection::isReverted() const
{
    bool res = isReverted_raw();
    return res;
}

inline bool ChainSelection::isReverted(bool value)
{
    return isReverted_raw(value);
}

inline ExtensionMethods ChainSelection::extensionMethod() const
{
    ExtensionMethods res = extensionMethod_raw();
    return res;
}

inline bool ChainSelection::extensionMethod(ExtensionMethods value)
{
    return extensionMethod_raw(value);
}

inline ExtensionTypes ChainSelection::extensionType() const
{
    ExtensionTypes res = extensionType_raw();
    return res;
}

inline bool ChainSelection::extensionType(ExtensionTypes value)
{
    return extensionType_raw(value);
}

inline double ChainSelection::startExtensionLength() const
{
    double res = startExtensionLength_raw();
    return res;
}

inline bool ChainSelection::startExtensionLength(double value)
{
    return startExtensionLength_raw(value);
}

inline double ChainSelection::endExtensionLength() const
{
    double res = endExtensionLength_raw();
    return res;
}

inline bool ChainSelection::endExtensionLength(double value)
{
    return endExtensionLength_raw(value);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CHAINSELECTION_API