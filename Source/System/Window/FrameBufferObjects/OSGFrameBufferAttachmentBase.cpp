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
 **     class FrameBufferAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFRAMEBUFFERATTACHMENTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGFrameBufferAttachmentBase.h"
#include "OSGFrameBufferAttachment.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FrameBufferAttachment
    FramebufferAttachment base class.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt16          FrameBufferAttachmentBase::_sfWidth
    
*/

/*! \var UInt16          FrameBufferAttachmentBase::_sfHeight
    
*/


void FrameBufferAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(FrameBufferAttachmentBase::*GetSFWidthF)(void) const;

    GetSFWidthF GetSFWidth = &FrameBufferAttachmentBase::getSFWidth;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferAttachmentBase::editSFWidth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferAttachmentBase::getSFWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(FrameBufferAttachmentBase::*GetSFHeightF)(void) const;

    GetSFHeightF GetSFHeight = &FrameBufferAttachmentBase::getSFHeight;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferAttachmentBase::editSFHeight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferAttachmentBase::getSFHeight));
#endif

    oType.addInitialDesc(pDesc);
}


FrameBufferAttachmentBase::TypeObject FrameBufferAttachmentBase::_type(
    FrameBufferAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    FrameBufferAttachment::initMethod,
    (InitalInsertDescFunc) &FrameBufferAttachmentBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FrameBufferAttachment\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "FramebufferAttachment base class.\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "FramebufferAttachment base class.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FrameBufferAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &FrameBufferAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 FrameBufferAttachmentBase::getContainerSize(void) const
{
    return sizeof(FrameBufferAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFUInt16 *FrameBufferAttachmentBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt16 *FrameBufferAttachmentBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *FrameBufferAttachmentBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFUInt16 *FrameBufferAttachmentBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt16 *FrameBufferAttachmentBase::getSFHeight(void) const
{
    return &_sfHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *FrameBufferAttachmentBase::getSFHeight         (void)
{
    return this->editSFHeight         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 FrameBufferAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }

    return returnValue;
}

void FrameBufferAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
}

void FrameBufferAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

FrameBufferAttachmentBase::FrameBufferAttachmentBase(void) :
    Inherited(),
    _sfWidth                  (),
    _sfHeight                 ()
{
}

FrameBufferAttachmentBase::FrameBufferAttachmentBase(const FrameBufferAttachmentBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 )
{
}

/*-------------------------- destructors ----------------------------------*/

FrameBufferAttachmentBase::~FrameBufferAttachmentBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void FrameBufferAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<FrameBufferAttachmentBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void FrameBufferAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FrameBufferAttachmentBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void FrameBufferAttachmentBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void FrameBufferAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FrameBufferAttachmentPtr>::_type("FrameBufferAttachmentPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FrameBufferAttachmentPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, FrameBufferAttachmentPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, FrameBufferAttachmentPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
