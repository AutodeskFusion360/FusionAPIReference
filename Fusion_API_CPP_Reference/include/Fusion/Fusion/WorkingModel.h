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
#include "Design.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_WORKINGMODEL_CPP__
# define ADSK_FUSION_WORKINGMODEL_API XI_EXPORT
# else
# define ADSK_FUSION_WORKINGMODEL_API
# endif
#else
# define ADSK_FUSION_WORKINGMODEL_API XI_IMPORT
#endif

namespace adsk { namespace fusion {
    class Component;
}}

namespace adsk { namespace fusion {

/// A type of product that utilizes the internal "Working Model" functionality within Fusion.
/// This is used where a model is referenced into another product. For example, when you create a
/// Manufacturing Model, you see a copy of the original design, but you can make isolated edits to
/// it within the Manufacturing Model. This is using the internal Working Model functionality to
/// create an associative reference to a specific component.
class WorkingModel : public Design {
public:

    /// Returns the component being referenced by this working model.
    core::Ptr<Component> sourceComponent() const;

    ADSK_FUSION_WORKINGMODEL_API static const char* classType();
    ADSK_FUSION_WORKINGMODEL_API const char* objectType() const override;
    ADSK_FUSION_WORKINGMODEL_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_WORKINGMODEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Component* sourceComponent_raw() const = 0;
    virtual void placeholderWorkingModel0() {}
    virtual void placeholderWorkingModel1() {}
    virtual void placeholderWorkingModel2() {}
    virtual void placeholderWorkingModel3() {}
    virtual void placeholderWorkingModel4() {}
    virtual void placeholderWorkingModel5() {}
    virtual void placeholderWorkingModel6() {}
    virtual void placeholderWorkingModel7() {}
    virtual void placeholderWorkingModel8() {}
    virtual void placeholderWorkingModel9() {}
    virtual void placeholderWorkingModel10() {}
    virtual void placeholderWorkingModel11() {}
    virtual void placeholderWorkingModel12() {}
    virtual void placeholderWorkingModel13() {}
    virtual void placeholderWorkingModel14() {}
    virtual void placeholderWorkingModel15() {}
    virtual void placeholderWorkingModel16() {}
    virtual void placeholderWorkingModel17() {}
    virtual void placeholderWorkingModel18() {}
    virtual void placeholderWorkingModel19() {}
    virtual void placeholderWorkingModel20() {}
    virtual void placeholderWorkingModel21() {}
    virtual void placeholderWorkingModel22() {}
    virtual void placeholderWorkingModel23() {}
    virtual void placeholderWorkingModel24() {}
    virtual void placeholderWorkingModel25() {}
    virtual void placeholderWorkingModel26() {}
    virtual void placeholderWorkingModel27() {}
    virtual void placeholderWorkingModel28() {}
    virtual void placeholderWorkingModel29() {}
    virtual void placeholderWorkingModel30() {}
    virtual void placeholderWorkingModel31() {}
    virtual void placeholderWorkingModel32() {}
    virtual void placeholderWorkingModel33() {}
    virtual void placeholderWorkingModel34() {}
    virtual void placeholderWorkingModel35() {}
    virtual void placeholderWorkingModel36() {}
    virtual void placeholderWorkingModel37() {}
    virtual void placeholderWorkingModel38() {}
    virtual void placeholderWorkingModel39() {}
    virtual void placeholderWorkingModel40() {}
    virtual void placeholderWorkingModel41() {}
    virtual void placeholderWorkingModel42() {}
    virtual void placeholderWorkingModel43() {}
    virtual void placeholderWorkingModel44() {}
    virtual void placeholderWorkingModel45() {}
    virtual void placeholderWorkingModel46() {}
    virtual void placeholderWorkingModel47() {}
    virtual void placeholderWorkingModel48() {}
    virtual void placeholderWorkingModel49() {}
    virtual void placeholderWorkingModel50() {}
    virtual void placeholderWorkingModel51() {}
    virtual void placeholderWorkingModel52() {}
    virtual void placeholderWorkingModel53() {}
    virtual void placeholderWorkingModel54() {}
    virtual void placeholderWorkingModel55() {}
    virtual void placeholderWorkingModel56() {}
    virtual void placeholderWorkingModel57() {}
    virtual void placeholderWorkingModel58() {}
    virtual void placeholderWorkingModel59() {}
    virtual void placeholderWorkingModel60() {}
    virtual void placeholderWorkingModel61() {}
    virtual void placeholderWorkingModel62() {}
};

// Inline wrappers

inline core::Ptr<Component> WorkingModel::sourceComponent() const
{
    core::Ptr<Component> res = sourceComponent_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_WORKINGMODEL_API