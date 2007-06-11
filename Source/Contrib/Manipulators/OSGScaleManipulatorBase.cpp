/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ScaleManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCALEMANIPULATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGScaleManipulatorBase.h"
#include "OSGScaleManipulator.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScaleManipulator
    The ScaleHandle is used for scaleing objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.
 */


ScaleManipulatorBase::TypeObject ScaleManipulatorBase::_type(
    ScaleManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ScaleManipulatorBase::createEmpty,
    ScaleManipulator::initMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ScaleManipulator\"\n"
    "\tparent=\"Manipulator\"\n"
    "\tlibrary=\"ContribGUI\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "The ScaleHandle is used for scaleing objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    "</FieldContainer>\n",
    "The ScaleHandle is used for scaleing objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScaleManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScaleManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 ScaleManipulatorBase::getContainerSize(void) const
{
    return sizeof(ScaleManipulator);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 ScaleManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ScaleManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ScaleManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
ScaleManipulatorPtr ScaleManipulatorBase::createEmpty(void)
{
    ScaleManipulatorPtr returnValue;

    newPtr<ScaleManipulator>(returnValue);

    return returnValue;
}

FieldContainerPtr ScaleManipulatorBase::shallowCopy(void) const
{
    ScaleManipulatorPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ScaleManipulator *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ScaleManipulatorBase::ScaleManipulatorBase(void) :
    Inherited()
{
}

ScaleManipulatorBase::ScaleManipulatorBase(const ScaleManipulatorBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

ScaleManipulatorBase::~ScaleManipulatorBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ScaleManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ScaleManipulatorBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ScaleManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ScaleManipulatorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ScaleManipulatorBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ScaleManipulatorBase::createAspectCopy(void) const
{
    ScaleManipulatorPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScaleManipulator *>(this));

    return returnValue;
}
#endif

void ScaleManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ScaleManipulatorPtr>::_type("ScaleManipulatorPtr", "ManipulatorPtr");
#endif


OSG_END_NAMESPACE
