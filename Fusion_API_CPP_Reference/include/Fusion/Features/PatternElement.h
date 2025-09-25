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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_PATTERNELEMENT_CPP__
# define ADSK_FUSION_PATTERNELEMENT_API XI_EXPORT
# else
# define ADSK_FUSION_PATTERNELEMENT_API
# endif
#else
# define ADSK_FUSION_PATTERNELEMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}
namespace adsk { namespace fusion {
    class BRepFace;
    class Feature;
    class Occurrence;
}}

namespace adsk { namespace fusion {

/// This class defines the properties that pertain to the pattern element.
class PatternElement : public core::Base {
public:

    /// Gets the faces generated as a result of this particular element.
    std::vector<core::Ptr<BRepFace>> faces() const;

    /// Gets the id of this element within the pattern.
    size_t id() const;

    /// Gets the feature pattern this element is a member of.
    core::Ptr<Feature> parentFeature() const;

    /// Gets and sets whether the element is suppressed or not. A value of True indicates it is suppressed
    bool isSuppressed() const;
    bool isSuppressed(bool value);

    /// Get the transform that describes this elements relative position to the parent object(s).
    /// The transform returned for the first element in a pattern will be an identity matrix.
    core::Ptr<core::Matrix3D> transform() const;

    /// Get the name of the pattern element.
    std::string name() const;

    /// If the patternEntityType property of the parent feature returns OccurrencesPatternType
    /// then this property will return the occurrences associated with this particular pattern
    /// element.
    std::vector<core::Ptr<Occurrence>> occurrences() const;

    ADSK_FUSION_PATTERNELEMENT_API static const char* classType();
    ADSK_FUSION_PATTERNELEMENT_API const char* objectType() const override;
    ADSK_FUSION_PATTERNELEMENT_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_PATTERNELEMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual BRepFace** faces_raw(size_t& return_size) const = 0;
    virtual size_t id_raw() const = 0;
    virtual Feature* parentFeature_raw() const = 0;
    virtual bool isSuppressed_raw() const = 0;
    virtual bool isSuppressed_raw(bool value) = 0;
    virtual core::Matrix3D* transform_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual Occurrence** occurrences_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<core::Ptr<BRepFace>> PatternElement::faces() const
{
    std::vector<core::Ptr<BRepFace>> res;
    size_t s;

    BRepFace** p= faces_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}

inline size_t PatternElement::id() const
{
    size_t res = id_raw();
    return res;
}

inline core::Ptr<Feature> PatternElement::parentFeature() const
{
    core::Ptr<Feature> res = parentFeature_raw();
    return res;
}

inline bool PatternElement::isSuppressed() const
{
    bool res = isSuppressed_raw();
    return res;
}

inline bool PatternElement::isSuppressed(bool value)
{
    return isSuppressed_raw(value);
}

inline core::Ptr<core::Matrix3D> PatternElement::transform() const
{
    core::Ptr<core::Matrix3D> res = transform_raw();
    return res;
}

inline std::string PatternElement::name() const
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

inline std::vector<core::Ptr<Occurrence>> PatternElement::occurrences() const
{
    std::vector<core::Ptr<Occurrence>> res;
    size_t s;

    Occurrence** p= occurrences_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        core::DeallocateArray(p);
    }
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_PATTERNELEMENT_API