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
 **     class ShaderParameterMatrix!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMATRIXINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMatrixBase.h"
#include "OSGShaderParameterMatrix.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMatrix
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrix          ShaderParameterMatrixBase::_sfValue
    parameter value
*/


void ShaderParameterMatrixBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFMatrix *(ShaderParameterMatrixBase::*GetSFValueF)(void) const;

    GetSFValueF GetSFValue = &ShaderParameterMatrixBase::getSFValue;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterMatrixBase::editSFValue),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFValue));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterMatrixBase::getSFValue));
#endif

    oType.addInitialDesc(pDesc);
}


ShaderParameterMatrixBase::TypeObject ShaderParameterMatrixBase::_type(
    ShaderParameterMatrixBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMatrixBase::createEmpty,
    ShaderParameterMatrix::initMethod,
    (InitalInsertDescFunc) &ShaderParameterMatrixBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMatrix\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMatrixBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMatrixBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMatrixBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMatrix);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *ShaderParameterMatrixBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFMatrix *ShaderParameterMatrixBase::getSFValue(void) const
{
    return &_sfValue;
}

#ifdef OSG_1_GET_COMPAT
SFMatrix            *ShaderParameterMatrixBase::getSFValue          (void)
{
    return this->editSFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMatrixBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMatrixBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterMatrixBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMatrixPtr ShaderParameterMatrixBase::createEmpty(void)
{
    ShaderParameterMatrixPtr returnValue;

    newPtr<ShaderParameterMatrix>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterMatrixBase::shallowCopy(void) const
{
    ShaderParameterMatrixPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterMatrix *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMatrixBase::ShaderParameterMatrixBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterMatrixBase::ShaderParameterMatrixBase(const ShaderParameterMatrixBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterMatrixBase::~ShaderParameterMatrixBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ShaderParameterMatrixBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShaderParameterMatrixBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMatrixBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMatrixBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShaderParameterMatrixBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMatrixBase::createAspectCopy(void) const
{
    ShaderParameterMatrixPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMatrix *>(this));

    return returnValue;
}
#endif

void ShaderParameterMatrixBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterMatrixPtr>::_type("ShaderParameterMatrixPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMatrixPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterMatrixPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterMatrixPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
