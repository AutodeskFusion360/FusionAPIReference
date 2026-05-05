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
#include "../Core/SimAttribute.h"
#include "../SimTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef SIMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_SIM_STRUCTURALLOADDIRECTIONAL_CPP__
# define ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API XI_EXPORT
# else
# define ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API
# endif
#else
# define ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class Vector3D;
}}

namespace adsk { namespace sim {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a directional structural load.
class StructuralLoadDirectional : public SimAttribute {
public:

    /// Load value as a double value.
    double magnitude() const;
    bool magnitude(double value);

    /// The type of load direction.
    LoadDirectionTypes directionType() const;
    bool directionType(LoadDirectionTypes value);

    /// The force vector.
    core::Ptr<core::Vector3D> forceVector() const;
    bool forceVector(const core::Ptr<core::Vector3D>& value);

    /// The load rotation vector.
    core::Ptr<core::Vector3D> rotationVector() const;
    bool rotationVector(const core::Ptr<core::Vector3D>& value);

    /// The load direction reference.
    core::Ptr<core::Base> directionReference() const;
    bool directionReference(const core::Ptr<core::Base>& value);

    /// The transformation matrix.
    core::Ptr<core::Matrix3D> transformation() const;

    ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API static const char* classType();
    ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API const char* objectType() const override;
    ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API void* queryInterface(const char* id) const override;
    ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double magnitude_raw() const = 0;
    virtual bool magnitude_raw(double value) = 0;
    virtual LoadDirectionTypes directionType_raw() const = 0;
    virtual bool directionType_raw(LoadDirectionTypes value) = 0;
    virtual core::Vector3D* forceVector_raw() const = 0;
    virtual bool forceVector_raw(core::Vector3D* value) = 0;
    virtual core::Vector3D* rotationVector_raw() const = 0;
    virtual bool rotationVector_raw(core::Vector3D* value) = 0;
    virtual core::Base* directionReference_raw() const = 0;
    virtual bool directionReference_raw(core::Base* value) = 0;
    virtual core::Matrix3D* transformation_raw() const = 0;
    virtual void placeholderStructuralLoadDirectional0() {}
    virtual void placeholderStructuralLoadDirectional1() {}
    virtual void placeholderStructuralLoadDirectional2() {}
    virtual void placeholderStructuralLoadDirectional3() {}
    virtual void placeholderStructuralLoadDirectional4() {}
    virtual void placeholderStructuralLoadDirectional5() {}
    virtual void placeholderStructuralLoadDirectional6() {}
    virtual void placeholderStructuralLoadDirectional7() {}
    virtual void placeholderStructuralLoadDirectional8() {}
    virtual void placeholderStructuralLoadDirectional9() {}
    virtual void placeholderStructuralLoadDirectional10() {}
    virtual void placeholderStructuralLoadDirectional11() {}
    virtual void placeholderStructuralLoadDirectional12() {}
    virtual void placeholderStructuralLoadDirectional13() {}
    virtual void placeholderStructuralLoadDirectional14() {}
    virtual void placeholderStructuralLoadDirectional15() {}
    virtual void placeholderStructuralLoadDirectional16() {}
    virtual void placeholderStructuralLoadDirectional17() {}
    virtual void placeholderStructuralLoadDirectional18() {}
    virtual void placeholderStructuralLoadDirectional19() {}
    virtual void placeholderStructuralLoadDirectional20() {}
};

// Inline wrappers

inline double StructuralLoadDirectional::magnitude() const
{
    double res = magnitude_raw();
    return res;
}

inline bool StructuralLoadDirectional::magnitude(double value)
{
    return magnitude_raw(value);
}

inline LoadDirectionTypes StructuralLoadDirectional::directionType() const
{
    LoadDirectionTypes res = directionType_raw();
    return res;
}

inline bool StructuralLoadDirectional::directionType(LoadDirectionTypes value)
{
    return directionType_raw(value);
}

inline core::Ptr<core::Vector3D> StructuralLoadDirectional::forceVector() const
{
    core::Ptr<core::Vector3D> res = forceVector_raw();
    return res;
}

inline bool StructuralLoadDirectional::forceVector(const core::Ptr<core::Vector3D>& value)
{
    return forceVector_raw(value.get());
}

inline core::Ptr<core::Vector3D> StructuralLoadDirectional::rotationVector() const
{
    core::Ptr<core::Vector3D> res = rotationVector_raw();
    return res;
}

inline bool StructuralLoadDirectional::rotationVector(const core::Ptr<core::Vector3D>& value)
{
    return rotationVector_raw(value.get());
}

inline core::Ptr<core::Base> StructuralLoadDirectional::directionReference() const
{
    core::Ptr<core::Base> res = directionReference_raw();
    return res;
}

inline bool StructuralLoadDirectional::directionReference(const core::Ptr<core::Base>& value)
{
    return directionReference_raw(value.get());
}

inline core::Ptr<core::Matrix3D> StructuralLoadDirectional::transformation() const
{
    core::Ptr<core::Matrix3D> res = transformation_raw();
    return res;
}
}// namespace sim
}// namespace adsk

#undef ADSK_SIM_STRUCTURALLOADDIRECTIONAL_API