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
#include "../EcadDocument/EcadDocument.h"
#include "../ElectronTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_SCHEMATIC_CPP__
# define ADSK_ELECTRON_SCHEMATIC_API XI_EXPORT
# else
# define ADSK_ELECTRON_SCHEMATIC_API
# endif
#else
# define ADSK_ELECTRON_SCHEMATIC_API XI_IMPORT
#endif

namespace adsk { namespace electron {
    class Board;
    class Classes;
    class EcadAttributes;
    class EcadDesign;
    class EcadObject;
    class ElectronicsExportManager;
    class Errors;
    class Grid;
    class Layers;
    class Libraries;
    class Modules;
    class Nets;
    class Parts;
    class Sheets;
    class VariantDefs;
}}

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Represents a schematic in an electronics design.
/// 
/// Provides access to sheets, parts, nets, and electrical-rule checks.
class Schematic : public EcadDocument {
public:

    /// Parent electronics design that contains this schematic, or null if unlinked.
    core::Ptr<EcadDesign> parentDesign() const;

    /// The board linked to the same design as this schematic, or null if unlinked or no board exists.
    core::Ptr<Board> linkedBoard() const;

    /// Layer stack available in this schematic.
    core::Ptr<Layers> layers() const;

    /// Sheets in this schematic.
    core::Ptr<Sheets> sheets() const;

    /// Parts (component definitions) in this schematic.
    core::Ptr<Parts> parts() const;

    /// Grid settings used in this schematic.
    core::Ptr<Grid> grid() const;

    /// Nets (logical connections) in this schematic.
    core::Ptr<Nets> nets() const;

    /// Modules (reusable circuit blocks) in this schematic.
    core::Ptr<Modules> modules() const;

    /// Document-level attributes in this schematic.
    core::Ptr<EcadAttributes> documentAttributes() const;

    /// Variant definitions in this schematic.
    core::Ptr<VariantDefs> variantDefs() const;

    /// Net class definitions.
    core::Ptr<Classes> classes() const;

    /// Electrical rule check (ERC) errors in this schematic.
    core::Ptr<Errors> errors() const;

    /// Libraries referenced by this schematic.
    core::Ptr<Libraries> libraries() const;

    /// Human-readable description of this schematic.
    std::string description() const;

    /// First line of the description, used as a short title.
    std::string headline() const;

    /// True if Electrical Rule Check (ERC) was run recently on this schematic.
    bool checked() const;

    /// Format string for cross-reference labels.
    std::string xrefLabel() const;

    /// Format string for part cross-references.
    std::string xrefPart() const;

    /// When non-zero, vector font is used for all text in this schematic.
    int alwaysVectorFont() const;

    /// Vertical text orientation mode (upward or downward).
    VerticalTextModes verticalText() const;

    /// Returns the ExportManager for this design. Use the ExportManager to export the current design in various formats.
    core::Ptr<ElectronicsExportManager> exportManager() const;

    /// Selects the specified objects in the editor, navigating to the correct sheet if needed.
    /// objects : Array of electronic objects instances to select.
    /// zoom : If true, zooms to fit the selected objects.
    /// True if selection succeeded.
    bool selectObjects(const std::vector<core::Ptr<EcadObject>>& objects, bool zoom);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Clears the current selection in the schematic.
    void clearSelection();

    ADSK_ELECTRON_SCHEMATIC_API static const char* classType();
    ADSK_ELECTRON_SCHEMATIC_API const char* objectType() const override;
    ADSK_ELECTRON_SCHEMATIC_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_SCHEMATIC_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual EcadDesign* parentDesign_raw() const = 0;
    virtual Board* linkedBoard_raw() const = 0;
    virtual Layers* layers_raw() const = 0;
    virtual Sheets* sheets_raw() const = 0;
    virtual Parts* parts_raw() const = 0;
    virtual Grid* grid_raw() const = 0;
    virtual Nets* nets_raw() const = 0;
    virtual Modules* modules_raw() const = 0;
    virtual EcadAttributes* documentAttributes_raw() const = 0;
    virtual VariantDefs* variantDefs_raw() const = 0;
    virtual Classes* classes_raw() const = 0;
    virtual Errors* errors_raw() const = 0;
    virtual Libraries* libraries_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual char* headline_raw() const = 0;
    virtual bool checked_raw() const = 0;
    virtual char* xrefLabel_raw() const = 0;
    virtual char* xrefPart_raw() const = 0;
    virtual int alwaysVectorFont_raw() const = 0;
    virtual VerticalTextModes verticalText_raw() const = 0;
    virtual ElectronicsExportManager* exportManager_raw() const = 0;
    virtual bool selectObjects_raw(EcadObject** objects, size_t objects_size, bool zoom) = 0;
    virtual void clearSelection_raw() = 0;
};

// Inline wrappers

inline core::Ptr<EcadDesign> Schematic::parentDesign() const
{
    core::Ptr<EcadDesign> res = parentDesign_raw();
    return res;
}

inline core::Ptr<Board> Schematic::linkedBoard() const
{
    core::Ptr<Board> res = linkedBoard_raw();
    return res;
}

inline core::Ptr<Layers> Schematic::layers() const
{
    core::Ptr<Layers> res = layers_raw();
    return res;
}

inline core::Ptr<Sheets> Schematic::sheets() const
{
    core::Ptr<Sheets> res = sheets_raw();
    return res;
}

inline core::Ptr<Parts> Schematic::parts() const
{
    core::Ptr<Parts> res = parts_raw();
    return res;
}

inline core::Ptr<Grid> Schematic::grid() const
{
    core::Ptr<Grid> res = grid_raw();
    return res;
}

inline core::Ptr<Nets> Schematic::nets() const
{
    core::Ptr<Nets> res = nets_raw();
    return res;
}

inline core::Ptr<Modules> Schematic::modules() const
{
    core::Ptr<Modules> res = modules_raw();
    return res;
}

inline core::Ptr<EcadAttributes> Schematic::documentAttributes() const
{
    core::Ptr<EcadAttributes> res = documentAttributes_raw();
    return res;
}

inline core::Ptr<VariantDefs> Schematic::variantDefs() const
{
    core::Ptr<VariantDefs> res = variantDefs_raw();
    return res;
}

inline core::Ptr<Classes> Schematic::classes() const
{
    core::Ptr<Classes> res = classes_raw();
    return res;
}

inline core::Ptr<Errors> Schematic::errors() const
{
    core::Ptr<Errors> res = errors_raw();
    return res;
}

inline core::Ptr<Libraries> Schematic::libraries() const
{
    core::Ptr<Libraries> res = libraries_raw();
    return res;
}

inline std::string Schematic::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Schematic::headline() const
{
    std::string res;

    char* p= headline_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline bool Schematic::checked() const
{
    bool res = checked_raw();
    return res;
}

inline std::string Schematic::xrefLabel() const
{
    std::string res;

    char* p= xrefLabel_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline std::string Schematic::xrefPart() const
{
    std::string res;

    char* p= xrefPart_raw();
    if (p)
    {
        res = p;
        core::DeallocateArray(p);
    }
    return res;
}

inline int Schematic::alwaysVectorFont() const
{
    int res = alwaysVectorFont_raw();
    return res;
}

inline VerticalTextModes Schematic::verticalText() const
{
    VerticalTextModes res = verticalText_raw();
    return res;
}

inline core::Ptr<ElectronicsExportManager> Schematic::exportManager() const
{
    core::Ptr<ElectronicsExportManager> res = exportManager_raw();
    return res;
}

inline bool Schematic::selectObjects(const std::vector<core::Ptr<EcadObject>>& objects, bool zoom)
{
    EcadObject** objects_ = new EcadObject*[objects.size()];
    for(size_t i=0; i<objects.size(); ++i)
        objects_[i] = objects[i].get();

    bool res = selectObjects_raw(objects_, objects.size(), zoom);
    delete[] objects_;
    return res;
}

inline void Schematic::clearSelection()
{
    clearSelection_raw();
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_SCHEMATIC_API