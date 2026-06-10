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
#include "../../Core/Application/Product.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef ELECTRONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_ELECTRON_ECADDOCUMENT_CPP__
# define ADSK_ELECTRON_ECADDOCUMENT_API XI_EXPORT
# else
# define ADSK_ELECTRON_ECADDOCUMENT_API
# endif
#else
# define ADSK_ELECTRON_ECADDOCUMENT_API XI_IMPORT
#endif

namespace adsk { namespace electron {

/// !!!!! Warning !!!!!
/// ! This is in preview state; please see the help for more info
/// !!!!! Warning !!!!!
/// 
/// Base class for electronics design documents that can be opened in the application (design, schematic, board, library).
class EcadDocument : public core::Product {
public:

    /// File name of this document.
    std::string name() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Begins a design change transaction. All modifications made after this call
    /// will be grouped into a single undo entry until endDesignChange is called.
    /// changeID : Optional description for this change (used in undo menu)
    void beginDesignChange(const std::string& changeID);

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Ends the current design-change transaction and commits modifications.
    void endDesignChange();

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Cancels the current design-change transaction and restores the previous state.
    void cancelDesignChange();

    ADSK_ELECTRON_ECADDOCUMENT_API static const char* classType();
    ADSK_ELECTRON_ECADDOCUMENT_API const char* objectType() const override;
    ADSK_ELECTRON_ECADDOCUMENT_API void* queryInterface(const char* id) const override;
    ADSK_ELECTRON_ECADDOCUMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual void beginDesignChange_raw(const char* changeID) = 0;
    virtual void endDesignChange_raw() = 0;
    virtual void cancelDesignChange_raw() = 0;
    virtual void placeholderEcadDocument0() {}
    virtual void placeholderEcadDocument1() {}
    virtual void placeholderEcadDocument2() {}
    virtual void placeholderEcadDocument3() {}
    virtual void placeholderEcadDocument4() {}
    virtual void placeholderEcadDocument5() {}
    virtual void placeholderEcadDocument6() {}
    virtual void placeholderEcadDocument7() {}
    virtual void placeholderEcadDocument8() {}
    virtual void placeholderEcadDocument9() {}
    virtual void placeholderEcadDocument10() {}
    virtual void placeholderEcadDocument11() {}
    virtual void placeholderEcadDocument12() {}
    virtual void placeholderEcadDocument13() {}
    virtual void placeholderEcadDocument14() {}
    virtual void placeholderEcadDocument15() {}
    virtual void placeholderEcadDocument16() {}
    virtual void placeholderEcadDocument17() {}
    virtual void placeholderEcadDocument18() {}
    virtual void placeholderEcadDocument19() {}
    virtual void placeholderEcadDocument20() {}
    virtual void placeholderEcadDocument21() {}
    virtual void placeholderEcadDocument22() {}
    virtual void placeholderEcadDocument23() {}
    virtual void placeholderEcadDocument24() {}
    virtual void placeholderEcadDocument25() {}
    virtual void placeholderEcadDocument26() {}
    virtual void placeholderEcadDocument27() {}
    virtual void placeholderEcadDocument28() {}
    virtual void placeholderEcadDocument29() {}
    virtual void placeholderEcadDocument30() {}
    virtual void placeholderEcadDocument31() {}
    virtual void placeholderEcadDocument32() {}
    virtual void placeholderEcadDocument33() {}
    virtual void placeholderEcadDocument34() {}
    virtual void placeholderEcadDocument35() {}
    virtual void placeholderEcadDocument36() {}
    virtual void placeholderEcadDocument37() {}
    virtual void placeholderEcadDocument38() {}
    virtual void placeholderEcadDocument39() {}
    virtual void placeholderEcadDocument40() {}
    virtual void placeholderEcadDocument41() {}
    virtual void placeholderEcadDocument42() {}
    virtual void placeholderEcadDocument43() {}
    virtual void placeholderEcadDocument44() {}
    virtual void placeholderEcadDocument45() {}
    virtual void placeholderEcadDocument46() {}
    virtual void placeholderEcadDocument47() {}
    virtual void placeholderEcadDocument48() {}
    virtual void placeholderEcadDocument49() {}
    virtual void placeholderEcadDocument50() {}
    virtual void placeholderEcadDocument51() {}
    virtual void placeholderEcadDocument52() {}
    virtual void placeholderEcadDocument53() {}
    virtual void placeholderEcadDocument54() {}
    virtual void placeholderEcadDocument55() {}
    virtual void placeholderEcadDocument56() {}
    virtual void placeholderEcadDocument57() {}
    virtual void placeholderEcadDocument58() {}
    virtual void placeholderEcadDocument59() {}
    virtual void placeholderEcadDocument60() {}
    virtual void placeholderEcadDocument61() {}
    virtual void placeholderEcadDocument62() {}
    virtual void placeholderEcadDocument63() {}
    virtual void placeholderEcadDocument64() {}
    virtual void placeholderEcadDocument65() {}
    virtual void placeholderEcadDocument66() {}
    virtual void placeholderEcadDocument67() {}
    virtual void placeholderEcadDocument68() {}
    virtual void placeholderEcadDocument69() {}
    virtual void placeholderEcadDocument70() {}
    virtual void placeholderEcadDocument71() {}
    virtual void placeholderEcadDocument72() {}
    virtual void placeholderEcadDocument73() {}
    virtual void placeholderEcadDocument74() {}
    virtual void placeholderEcadDocument75() {}
    virtual void placeholderEcadDocument76() {}
    virtual void placeholderEcadDocument77() {}
    virtual void placeholderEcadDocument78() {}
    virtual void placeholderEcadDocument79() {}
    virtual void placeholderEcadDocument80() {}
    virtual void placeholderEcadDocument81() {}
    virtual void placeholderEcadDocument82() {}
    virtual void placeholderEcadDocument83() {}
    virtual void placeholderEcadDocument84() {}
    virtual void placeholderEcadDocument85() {}
    virtual void placeholderEcadDocument86() {}
    virtual void placeholderEcadDocument87() {}
    virtual void placeholderEcadDocument88() {}
    virtual void placeholderEcadDocument89() {}
    virtual void placeholderEcadDocument90() {}
    virtual void placeholderEcadDocument91() {}
    virtual void placeholderEcadDocument92() {}
    virtual void placeholderEcadDocument93() {}
    virtual void placeholderEcadDocument94() {}
    virtual void placeholderEcadDocument95() {}
    virtual void placeholderEcadDocument96() {}
    virtual void placeholderEcadDocument97() {}
    virtual void placeholderEcadDocument98() {}
    virtual void placeholderEcadDocument99() {}
    virtual void placeholderEcadDocument100() {}
    virtual void placeholderEcadDocument101() {}
    virtual void placeholderEcadDocument102() {}
    virtual void placeholderEcadDocument103() {}
    virtual void placeholderEcadDocument104() {}
    virtual void placeholderEcadDocument105() {}
    virtual void placeholderEcadDocument106() {}
    virtual void placeholderEcadDocument107() {}
    virtual void placeholderEcadDocument108() {}
    virtual void placeholderEcadDocument109() {}
    virtual void placeholderEcadDocument110() {}
    virtual void placeholderEcadDocument111() {}
    virtual void placeholderEcadDocument112() {}
    virtual void placeholderEcadDocument113() {}
    virtual void placeholderEcadDocument114() {}
    virtual void placeholderEcadDocument115() {}
    virtual void placeholderEcadDocument116() {}
    virtual void placeholderEcadDocument117() {}
    virtual void placeholderEcadDocument118() {}
    virtual void placeholderEcadDocument119() {}
    virtual void placeholderEcadDocument120() {}
    virtual void placeholderEcadDocument121() {}
    virtual void placeholderEcadDocument122() {}
    virtual void placeholderEcadDocument123() {}
};

// Inline wrappers

inline std::string EcadDocument::name() const
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

inline void EcadDocument::beginDesignChange(const std::string& changeID)
{
    beginDesignChange_raw(changeID.c_str());
}

inline void EcadDocument::endDesignChange()
{
    endDesignChange_raw();
}

inline void EcadDocument::cancelDesignChange()
{
    cancelDesignChange_raw();
}
}// namespace electron
}// namespace adsk

#undef ADSK_ELECTRON_ECADDOCUMENT_API