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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_BREPCELL_CPP__
# define ADSK_FUSION_BREPCELL_API XI_EXPORT
# else
# define ADSK_FUSION_BREPCELL_API
# endif
#else
# define ADSK_FUSION_BREPCELL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}
namespace adsk { namespace fusion {
    class BRepBody;
}}

namespace adsk { namespace fusion {

/// Object that represents an existing BRepCell.
class BRepCell : public core::Base {
public:

    /// Gets and sets whether the cell is selected. For a Trim feature a selected cell is removed,
    /// whereas for a boundary fill feature, a selected cell is kept and used in the feature operation.
    bool isSelected() const;
    bool isSelected(bool value);

    /// Returns the tools that we're using in the definition of this cell.
    core::Ptr<core::ObjectCollection> sourceTools() const;

    /// Returns a BRepBody that represents this cell. This is a transient B-Rep body.
    core::Ptr<BRepBody> cellBody() const;

    ADSK_FUSION_BREPCELL_API static const char* classType();
    ADSK_FUSION_BREPCELL_API const char* objectType() const override;
    ADSK_FUSION_BREPCELL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_BREPCELL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isSelected_raw() const = 0;
    virtual bool isSelected_raw(bool value) = 0;
    virtual core::ObjectCollection* sourceTools_raw() const = 0;
    virtual BRepBody* cellBody_raw() const = 0;
};

// Inline wrappers

inline bool BRepCell::isSelected() const
{
    bool res = isSelected_raw();
    return res;
}

inline bool BRepCell::isSelected(bool value)
{
    return isSelected_raw(value);
}

inline core::Ptr<core::ObjectCollection> BRepCell::sourceTools() const
{
    core::Ptr<core::ObjectCollection> res = sourceTools_raw();
    return res;
}

inline core::Ptr<BRepBody> BRepCell::cellBody() const
{
    core::Ptr<BRepBody> res = cellBody_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_BREPCELL_API