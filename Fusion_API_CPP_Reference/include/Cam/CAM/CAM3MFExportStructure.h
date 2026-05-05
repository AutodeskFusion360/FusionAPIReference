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
#include "../CamTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef CAMXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CAM_CAM3MFEXPORTSTRUCTURE_CPP__
# define ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API XI_EXPORT
# else
# define ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API
# endif
#else
# define ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API XI_IMPORT
#endif

namespace adsk { namespace cam {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Options for the 3MF structure and naming conventions.
class CAM3MFExportStructure : public core::Base {
public:

    /// Flag indicating if each BRepBody or MeshBody should be encapsulated in its own component within the 3MF file.
    /// Supports belonging to that body will be included in the same component.
    /// By default, this is set to false, meaning that all bodies are exported directly into the parent component alongside their sibling bodies.
    /// The additional component is named after the body without any contatenation of parent component names.
    bool isBodyEncapsulatedInComponent() const;
    bool isBodyEncapsulatedInComponent(bool value);

    /// Flag indicating if the Item objects in the 3MF file reference only the asset, meaning the product of the Design or Manufacturing Model,
    /// or if the hierarchy is simplified to the lowest distinct component level.
    /// In the latter case a 3MF with multiple components is produced.
    /// By default, this is set to false.
    bool isStructureStartingAtRoot() const;
    bool isStructureStartingAtRoot(bool value);

    /// Specifies the maximum number of parents listed in the name property for the mesh. If the number used is higher than the number of available parents, all parents are used.
    /// Given a body called Body1 whose assembly context's fullpath is "Manufacturing Models 1:1+ManufacturingModel 1:2+Unsaved (1)1:1+Component1:3",
    /// the following results are expected for the maximumMeshParentCount value given with "+" being used for the concatination:
    /// 
    /// <ul>
    /// <li>-1 - id="8" name="Manufacturing Models 1:1+ManufacturingModel 1:2+Unsaved (1)1:1+Component1:3+Body1"</li>
    /// <li>0 - id="8" name="Body1"</li>
    /// <li>1 - id="8" name="Component1:3+Body1"</li>
    /// <li>2 - id="8" name="Unsaved (1)1:1+Component1:3+Body1"</li>
    /// </ul>
    /// 
    /// By default, this value is set to 1.
    int maximumMeshParentCount() const;
    bool maximumMeshParentCount(int value);

    /// Specifies the maximum number of parents listed in the name property for the component. If the number used is higher than the number of available parents, all parents are used.
    /// Given a body called Body1 whose assembly context's fullpath is "Manufacturing Models 1:1+ManufacturingModel 1:2+Unsaved (1)1:1+Component1:3",
    /// the following results are expected for the maximumMeshParentCount value given with "+" being used for the concatination:
    ///  In this example, the component with id 4 contains component with id 5, which contains component with id 6, which in turn contains component with id 7
    /// <ul>
    /// <li>-1 -
    ///   <ul>
    ///     <li>id="7" name="Manufacturing Models 1:1+ManufacturingModel 1:2+Unsaved (1)1:1+Component1:3" </li>
    ///     <li>id="6" name="Manufacturing Models 1:1+ManufacturingModel 1:2+Unsaved (1)1:1" </li>
    ///     <li>id="5" name="Manufacturing Models 1:1+ManufacturingModel 1:2" </li>
    ///     <li>id="4" name="Manufacturing Models 1:1" </li>
    ///   </ul>
    /// </li>
    /// <li>0 - 4 contains 5, which contains 6, which contains 7
    ///   <ul>
    ///     <li>id="7" name="Component1:3" </li>
    ///     <li>id="6" name="Unsaved (1)1:1" </li>
    ///     <li>id="5" name="ManufacturingModel 1:2" </li>
    ///     <li>id="4" name="Manufacturing Models 1:1" </li>
    ///   </ul>
    /// </li>
    /// <li>1 -
    ///   <ul>
    ///     <li>id="7" name="Unsaved (1)1:1+Component1:3" </li>
    ///     <li>id="6" name="ManufacturingModel 1:2+Unsaved (1)1:1" </li>
    ///     <li>id="5" name="Manufacturing Models 1:1+ManufacturingModel 1:2" </li>
    ///     <li>id="4" name="Manufacturing Models 1:1" </li>
    ///   </ul>
    /// </li>
    /// </ul>
    /// 
    /// By default, this value is set to 0.
    int maximumComponentParentCount() const;
    bool maximumComponentParentCount(int value);

    /// String to be used to concatenate parent names.
    /// By default, this is set to "+".
    std::string parentNameConcatenationString() const;
    bool parentNameConcatenationString(const std::string& value);

    ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API static const char* classType();
    ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API const char* objectType() const override;
    ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API void* queryInterface(const char* id) const override;
    ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isBodyEncapsulatedInComponent_raw() const = 0;
    virtual bool isBodyEncapsulatedInComponent_raw(bool value) = 0;
    virtual bool isStructureStartingAtRoot_raw() const = 0;
    virtual bool isStructureStartingAtRoot_raw(bool value) = 0;
    virtual int maximumMeshParentCount_raw() const = 0;
    virtual bool maximumMeshParentCount_raw(int value) = 0;
    virtual int maximumComponentParentCount_raw() const = 0;
    virtual bool maximumComponentParentCount_raw(int value) = 0;
    virtual char* parentNameConcatenationString_raw() const = 0;
    virtual bool parentNameConcatenationString_raw(const char* value) = 0;
};

// Inline wrappers

inline bool CAM3MFExportStructure::isBodyEncapsulatedInComponent() const
{
    bool res = isBodyEncapsulatedInComponent_raw();
    return res;
}

inline bool CAM3MFExportStructure::isBodyEncapsulatedInComponent(bool value)
{
    return isBodyEncapsulatedInComponent_raw(value);
}

inline bool CAM3MFExportStructure::isStructureStartingAtRoot() const
{
    bool res = isStructureStartingAtRoot_raw();
    return res;
}

inline bool CAM3MFExportStructure::isStructureStartingAtRoot(bool value)
{
    return isStructureStartingAtRoot_raw(value);
}

inline int CAM3MFExportStructure::maximumMeshParentCount() const
{
    int res = maximumMeshParentCount_raw();
    return res;
}

inline bool CAM3MFExportStructure::maximumMeshParentCount(int value)
{
    return maximumMeshParentCount_raw(value);
}

inline int CAM3MFExportStructure::maximumComponentParentCount() const
{
    int res = maximumComponentParentCount_raw();
    return res;
}

inline bool CAM3MFExportStructure::maximumComponentParentCount(int value)
{
    return maximumComponentParentCount_raw(value);
}

inline std::string CAM3MFExportStructure::parentNameConcatenationString() const
{
    std::string res;

    char* p= parentNameConcatenationString_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool CAM3MFExportStructure::parentNameConcatenationString(const std::string& value)
{
    return parentNameConcatenationString_raw(value.c_str());
}
}// namespace cam
}// namespace adsk

#undef ADSK_CAM_CAM3MFEXPORTSTRUCTURE_API