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
 **     class GrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRABFOREGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // Image Class

#include "OSGGrabForegroundBase.h"
#include "OSGGrabForeground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GrabForeground
    \ingroup GrpSystemWindowForegrounds

    The GrabForeground is used for grabbing a rendered viewport into an Image.
    See \ref PageSystemWindowForegroundGrab for a description.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        GrabForegroundBase::_sfImage
    The image to write to.
*/

/*! \var bool            GrabForegroundBase::_sfAutoResize
    Automatically resize the image when the viewport size changes.
*/


void GrabForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "image",
        "The image to write to.\n",
        ImageFieldId, ImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&GrabForegroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&GrabForegroundBase::getSFImage));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(GrabForegroundBase::*GetSFAutoResizeF)(void) const;

    GetSFAutoResizeF GetSFAutoResize = &GrabForegroundBase::getSFAutoResize;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "autoResize",
        "Automatically resize the image when the viewport size changes.\n",
        AutoResizeFieldId, AutoResizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GrabForegroundBase::editSFAutoResize),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAutoResize));
#else
        reinterpret_cast<FieldGetMethodSig >(&GrabForegroundBase::getSFAutoResize));
#endif

    oType.addInitialDesc(pDesc);
}


GrabForegroundBase::TypeObject GrabForegroundBase::_type(
    GrabForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GrabForegroundBase::createEmpty,
    GrabForeground::initMethod,
    (InitalInsertDescFunc) &GrabForegroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GrabForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The GrabForeground is used for grabbing a rendered viewport into an Image.\n"
    "See \\ref PageSystemWindowForegroundGrab for a description.\n"
    "\t<Field\n"
    "\t\tname=\"image\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image to write to.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"autoResize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tAutomatically resize the image when the viewport size changes.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The GrabForeground is used for grabbing a rendered viewport into an Image.\n"
    "See \\ref PageSystemWindowForegroundGrab for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GrabForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &GrabForegroundBase::getType(void) const
{
    return _type;
}

UInt32 GrabForegroundBase::getContainerSize(void) const
{
    return sizeof(GrabForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the GrabForeground::_sfImage field.
const SFImagePtr *GrabForegroundBase::getSFImage(void) const
{
    return &_sfImage;
}

SFBool *GrabForegroundBase::editSFAutoResize(void)
{
    editSField(AutoResizeFieldMask);

    return &_sfAutoResize;
}

const SFBool *GrabForegroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *GrabForegroundBase::getSFAutoResize     (void)
{
    return this->editSFAutoResize     ();
}
#endif


void GrabForegroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ImageFieldId)
    {
        static_cast<GrabForeground *>(this)->setImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void GrabForegroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void GrabForegroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void GrabForegroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void GrabForegroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void GrabForegroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void GrabForegroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ImageFieldId)
    {
        static_cast<GrabForeground *>(this)->setImage(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 GrabForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        returnValue += _sfAutoResize.getBinSize();
    }

    return returnValue;
}

void GrabForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyToBin(pMem);
    }
}

void GrabForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
GrabForegroundPtr GrabForegroundBase::createEmpty(void)
{
    GrabForegroundPtr returnValue;

    newPtr<GrabForeground>(returnValue);

    return returnValue;
}

FieldContainerPtr GrabForegroundBase::shallowCopy(void) const
{
    GrabForegroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const GrabForeground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GrabForegroundBase::GrabForegroundBase(void) :
    Inherited(),
    _sfImage                  (),
    _sfAutoResize             (bool(false))
{
}

GrabForegroundBase::GrabForegroundBase(const GrabForegroundBase &source) :
    Inherited(source),
    _sfImage                  (),
    _sfAutoResize             (source._sfAutoResize             )
{
}

/*-------------------------- destructors ----------------------------------*/

GrabForegroundBase::~GrabForegroundBase(void)
{
}

void GrabForegroundBase::onCreate(const GrabForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setImage(source->getImage());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void GrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<GrabForegroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void GrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GrabForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void GrabForegroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GrabForegroundBase::createAspectCopy(void) const
{
    GrabForegroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GrabForeground *>(this));

    return returnValue;
}
#endif

void GrabForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GrabForeground *>(this)->setImage(NullFC);


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GrabForegroundPtr>::_type("GrabForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GrabForegroundPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GrabForegroundPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GrabForegroundPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
