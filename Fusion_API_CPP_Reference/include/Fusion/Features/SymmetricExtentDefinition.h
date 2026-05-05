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
#include "ExtentDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SYMMETRICEXTENTDEFINITION_CPP__
# define ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API
# endif
#else
# define ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace fusion {

/// A definition object that is used to define the extents of a feature to be symmetric.
class SymmetricExtentDefinition : public ExtentDefinition {
public:

    /// Statically creates a new SymmetricExtentDefinition object. This is used as input when
    /// create a new feature and defining the starting condition.
    /// distance : An input ValueInput objects that defines either half the extent of the extrude or the full extent, depending
    /// on the value of the isFullLength argument.
    /// isFullLength : An input boolean that specifies if the distance specified defines the full or half length of the extrusion.
    /// Returns the newly created SymmetricExtentDefinition or null in the case of a failure.
    static core::Ptr<SymmetricExtentDefinition> create(const core::Ptr<core::ValueInput>& distance, bool isFullLength);

    /// Gets and sets if the distance defines the full extent length or half the length. A value of
    /// True indicates if defines the full length.
    bool isFullLength() const;
    bool isFullLength(bool value);

    /// Returns the current extent distance. If the SymmetricExtentDefinition object has been created statically and isn't associated with
    /// a feature this will return a ValueInput object. If the SymmetricExtentDefinition object is obtained from a feature this
    /// will return a ModelParameter object. You can use properties of the parameter to edit its value which will result in
    /// the feature updating.
    core::Ptr<core::Base> distance() const;

    /// Returns the current taper angle. If the SymmetricExtentDefinition object has been created statically and isn't associated with
    /// a feature this will return a ValueInput object. If the SymmetricExtentDefinition object is obtained from a feature this
    /// will return a ModelParameter object. You can use properties of the parameter to edit its value which will result in
    /// the feature updating.
    core::Ptr<core::Base> taperAngle() const;

    ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API static const char* classType();
    ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API static SymmetricExtentDefinition* create_raw(core::ValueInput* distance, bool isFullLength);
    virtual bool isFullLength_raw() const = 0;
    virtual bool isFullLength_raw(bool value) = 0;
    virtual core::Base* distance_raw() const = 0;
    virtual core::Base* taperAngle_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<SymmetricExtentDefinition> SymmetricExtentDefinition::create(const core::Ptr<core::ValueInput>& distance, bool isFullLength)
{
    core::Ptr<SymmetricExtentDefinition> res = create_raw(distance.get(), isFullLength);
    return res;
}

inline bool SymmetricExtentDefinition::isFullLength() const
{
    bool res = isFullLength_raw();
    return res;
}

inline bool SymmetricExtentDefinition::isFullLength(bool value)
{
    return isFullLength_raw(value);
}

inline core::Ptr<core::Base> SymmetricExtentDefinition::distance() const
{
    core::Ptr<core::Base> res = distance_raw();
    return res;
}

inline core::Ptr<core::Base> SymmetricExtentDefinition::taperAngle() const
{
    core::Ptr<core::Base> res = taperAngle_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SYMMETRICEXTENTDEFINITION_API