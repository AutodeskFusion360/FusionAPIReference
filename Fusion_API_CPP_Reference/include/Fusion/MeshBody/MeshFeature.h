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
#include "../Features/Feature.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_MESHFEATURE_CPP__
# define ADSK_FUSION_MESHFEATURE_API XI_EXPORT
# else
# define ADSK_FUSION_MESHFEATURE_API
# endif
#else
# define ADSK_FUSION_MESHFEATURE_API XI_IMPORT
#endif

namespace adsk { namespace fusion {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Base class object representing all mesh features. Mesh features works on MeshBody objects and provide all functionality of the base
/// feature except the functions bodies and faces, which will always return null.
class MeshFeature : public Feature {
public:

    ADSK_FUSION_MESHFEATURE_API static const char* classType();
    ADSK_FUSION_MESHFEATURE_API const char* objectType() const override;
    ADSK_FUSION_MESHFEATURE_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_MESHFEATURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

    virtual void placeholderMeshFeature0() {}
    virtual void placeholderMeshFeature1() {}
    virtual void placeholderMeshFeature2() {}
    virtual void placeholderMeshFeature3() {}
    virtual void placeholderMeshFeature4() {}
    virtual void placeholderMeshFeature5() {}
    virtual void placeholderMeshFeature6() {}
    virtual void placeholderMeshFeature7() {}
    virtual void placeholderMeshFeature8() {}
    virtual void placeholderMeshFeature9() {}
    virtual void placeholderMeshFeature10() {}
    virtual void placeholderMeshFeature11() {}
    virtual void placeholderMeshFeature12() {}
    virtual void placeholderMeshFeature13() {}
    virtual void placeholderMeshFeature14() {}
    virtual void placeholderMeshFeature15() {}
    virtual void placeholderMeshFeature16() {}
    virtual void placeholderMeshFeature17() {}
    virtual void placeholderMeshFeature18() {}
    virtual void placeholderMeshFeature19() {}
    virtual void placeholderMeshFeature20() {}
    virtual void placeholderMeshFeature21() {}
    virtual void placeholderMeshFeature22() {}
    virtual void placeholderMeshFeature23() {}
    virtual void placeholderMeshFeature24() {}
    virtual void placeholderMeshFeature25() {}
    virtual void placeholderMeshFeature26() {}
    virtual void placeholderMeshFeature27() {}
    virtual void placeholderMeshFeature28() {}
    virtual void placeholderMeshFeature29() {}
    virtual void placeholderMeshFeature30() {}
    virtual void placeholderMeshFeature31() {}
};

// Inline wrappers


}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_MESHFEATURE_API