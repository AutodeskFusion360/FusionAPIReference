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
#include "../CamTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_ADDITIVEFEASTLMAP_CPP__
# define ADSK_CAM_ADDITIVEFEASTLMAP_API XI_EXPORT
# else
# define ADSK_CAM_ADDITIVEFEASTLMAP_API
# endif
#else
# define ADSK_CAM_ADDITIVEFEASTLMAP_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// The AdditiveFEASTLMap defines relationship of geometries in STL format to parts, supports, materials, PRM files, and volume fractions or solidities
class AdditiveFEASTLMap : public core::Base {
public:

    /// Append a row of *STLM data for a single geometry to the STL map
    /// configuration : Specifies the geometry as either part, support, build plate, or ghost part.  See the definition of the AdditiveFEASTLConfiguration enum
    /// prmId : Maps a set of processing parameters from a PRM file to the geometry
    /// materialId : Maps a set of material properties to the geometry
    /// volumeFraction : Set a volume fraction for the geometry in the range [0, 1]
    void append(AdditiveFEASTLConfiguration configuration, int prmId, int materialId, double volumeFraction);

    ADSK_CAM_ADDITIVEFEASTLMAP_API static const char* classType();
    ADSK_CAM_ADDITIVEFEASTLMAP_API const char* objectType() const override;
    ADSK_CAM_ADDITIVEFEASTLMAP_API void* queryInterface(const char* id) const override;
    ADSK_CAM_ADDITIVEFEASTLMAP_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual void append_raw(AdditiveFEASTLConfiguration configuration, int prmId, int materialId, double volumeFraction) = 0;
};

// Inline wrappers

inline void AdditiveFEASTLMap::append(AdditiveFEASTLConfiguration configuration, int prmId, int materialId, double volumeFraction)
{
    append_raw(configuration, prmId, materialId, volumeFraction);
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_ADDITIVEFEASTLMAP_API